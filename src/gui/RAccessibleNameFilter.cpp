/**
 * Copyright (c) 2011-2026 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#include "RAccessibleNameFilter.h"
#include "RAccessibleFlatTree.h"

#include <QAbstractItemView>
#include <QAbstractSpinBox>
#include <QCheckBox>
#include <QComboBox>
#include <QEvent>
#include <QLabel>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QRadioButton>
#include <QScrollBar>
#include <QSlider>
#include <QTextEdit>
#include <QTimer>
#include <QWidget>

namespace {

/**
 * "&Length:" -> "Length", "AT&&T" -> "AT&T".
 */
QString labelToName(const QString& text) {
    QString ret;
    ret.reserve(text.length());
    for (int i = 0; i < text.length(); i++) {
        if (text.at(i) == QLatin1Char('&')) {
            if (i + 1 < text.length() && text.at(i + 1) == QLatin1Char('&')) {
                ret += QLatin1Char('&');
                i++;
            }
            continue;
        }
        ret += text.at(i);
    }
    ret = ret.simplified();
    while (ret.endsWith(QLatin1Char(':')) || ret.endsWith(QChar(0xff1a))) {
        ret.chop(1);
        ret = ret.trimmed();
    }
    return ret;
}

/**
 * \return Text of the given widget if it can serve as label of an input
 * widget: a QLabel with text (and no other buddy), a check box or a radio
 * button. Empty string otherwise.
 */
QString labelText(const QWidget* candidate, const QWidget* input) {
    if (candidate == NULL || candidate == input || candidate->isHidden()) {
        return QString();
    }
    const QLabel* label = qobject_cast<const QLabel*>(candidate);
    if (label != NULL) {
        if (label->buddy() != NULL && label->buddy() != input) {
            return QString();
        }
        if (!label->pixmap().isNull()) {
            return QString();
        }
        return label->text();
    }
    const QCheckBox* cb = qobject_cast<const QCheckBox*>(candidate);
    if (cb != NULL) {
        return cb->text();
    }
    const QRadioButton* rb = qobject_cast<const QRadioButton*>(candidate);
    if (rb != NULL) {
        return rb->text();
    }
    return QString();
}

/**
 * \return Text of the label nearest to the given input widget among the
 * given candidates: to the left on the same row, or above it.
 */
QWidget* nearestLabel(const QWidget* input, const QList<QWidget*>& candidates, const QWidget* ancestor) {
    QRect ir(input->mapTo(ancestor, QPoint(0, 0)), input->size());
    if (ir.width() <= 0 || ir.height() <= 0) {
        return NULL;
    }

    QWidget* bestLeft = NULL;
    QWidget* bestAbove = NULL;
    int distLeft = INT_MAX, distAbove = INT_MAX;

    for (int i = 0; i < candidates.length(); i++) {
        QWidget* c = candidates[i];
        QString text = labelText(c, input);
        if (text.isEmpty()) {
            continue;
        }
        QRect lr(c->mapTo(ancestor, QPoint(0, 0)), c->size());
        if (lr.width() <= 0 || lr.height() <= 0) {
            continue;
        }

        // same row, left of the input widget:
        int vOverlap = qMin(ir.bottom(), lr.bottom()) - qMax(ir.top(), lr.top());
        if (lr.right() <= ir.left() + 8 && vOverlap >= qMin(ir.height(), lr.height()) / 2) {
            int d = ir.left() - lr.right();
            if (d < distLeft) {
                distLeft = d;
                bestLeft = c;
            }
            continue;
        }

        // above the input widget (label on its own line):
        int hOverlap = qMin(ir.right(), lr.right()) - qMax(ir.left(), lr.left());
        if (lr.bottom() <= ir.top() + 4 && hOverlap > 0) {
            int d = ir.top() - lr.bottom();
            if (d < distAbove) {
                distAbove = d;
                bestAbove = c;
            }
        }
    }

    if (bestLeft != NULL) {
        return bestLeft;
    }
    return bestAbove;
}

} // namespace

RAccessibleNameFilter::RAccessibleNameFilter(QObject* parent)
    : QObject(parent), scheduled(false) {
}

bool RAccessibleNameFilter::isInputWidget(const QWidget* w) {
    if (w == NULL) {
        return false;
    }
    if (qobject_cast<const QScrollBar*>(w) != NULL) {
        return false;
    }
    return qobject_cast<const QLineEdit*>(w) != NULL ||
           qobject_cast<const QComboBox*>(w) != NULL ||
           qobject_cast<const QAbstractSpinBox*>(w) != NULL ||
           qobject_cast<const QSlider*>(w) != NULL ||
           qobject_cast<const QTextEdit*>(w) != NULL ||
           qobject_cast<const QPlainTextEdit*>(w) != NULL ||
           qobject_cast<const QAbstractItemView*>(w) != NULL;
}

QString RAccessibleNameFilter::findLabelText(const QWidget* w) {
    QWidget* label = findLabel(w);
    if (label == NULL) {
        return QString();
    }
    return labelToName(labelText(label, w));
}

QWidget* RAccessibleNameFilter::findLabel(const QWidget* w) {
    if (w == NULL) {
        return NULL;
    }

    // siblings first, then the siblings of the parent (labels of widgets
    // in nested container widgets), never beyond the window:
    const QWidget* container = w->parentWidget();
    for (int level = 0; level < 2 && container != NULL; level++) {
        QList<QWidget*> candidates;
        const QObjectList& children = container->children();
        for (int i = 0; i < children.length(); i++) {
            QWidget* c = qobject_cast<QWidget*>(children[i]);
            if (c != NULL) {
                candidates.append(c);
            }
        }
        QWidget* label = nearestLabel(w, candidates, container);
        if (label != NULL) {
            return label;
        }
        if (container->isWindow()) {
            break;
        }
        container = container->parentWidget();
    }
    return NULL;
}

void RAccessibleNameFilter::updateAccessibleName(QWidget* w) {
    if (w == NULL) {
        return;
    }
    static const char* propName = "RAccessibleNameFromLabel";
    if (!w->accessibleName().isEmpty() && !w->property(propName).toBool()) {
        // explicitly set (UI file, script):
        return;
    }
    QWidget* label = findLabel(w);
    if (label == NULL) {
        return;
    }
    QString name = labelToName(labelText(label, w));
    if (name.isEmpty()) {
        return;
    }
    if (name != w->accessibleName()) {
        w->setAccessibleName(name);
    }
    w->setProperty(propName, true);

    // combo boxes: on macOS, QAccessibleComboBox reports the current text
    // as accessible name, so the name set above is never heard and
    // VoiceOver reads "Black, Attributes" (title element = parent group
    // box). A QLabel that becomes the buddy of the combo box is reported
    // as its title element instead: "Black, Color, Attributes". Other
    // widgets keep their name only (a buddy would make VoiceOver read the
    // label twice). Labels with accelerator markers are left alone: they
    // are buddies by design or would gain a shortcut:
    QLabel* l = qobject_cast<QLabel*>(label);
    if (l != NULL && qobject_cast<QComboBox*>(w) != NULL &&
        l->buddy() == NULL && !l->text().contains(QLatin1Char('&'))) {
        l->setBuddy(w);
    }
}

bool RAccessibleNameFilter::eventFilter(QObject* obj, QEvent* event) {
    if (event->type() == QEvent::DynamicPropertyChange) {
        // tree widget opting in to the flat list implementation after its
        // accessible interface was created (see RAccessibleFlatTree):
        QDynamicPropertyChangeEvent* pe = static_cast<QDynamicPropertyChangeEvent*>(event);
        if (pe->propertyName() == RAccessibleFlatTree::propertyName() ||
            pe->propertyName() == RAccessibleFlatTree::columnPropertyName()) {
            RAccessibleFlatTree::invalidate(obj);
        }
        return false;
    }

    if (event->type() != QEvent::Show) {
        return false;
    }

    QWidget* w = qobject_cast<QWidget*>(obj);
    if (!isInputWidget(w)) {
        return false;
    }

    // the layout of the container is not necessarily up to date when a
    // widget is shown (tool options are added to a visible tool bar):
    // look for the label once the event loop has processed the layout
    // request:
    pending.append(QPointer<QWidget>(w));
    if (!scheduled) {
        scheduled = true;
        QTimer::singleShot(0, this, SLOT(processPending()));
    }
    return false;
}

void RAccessibleNameFilter::processPending() {
    scheduled = false;
    QList<QPointer<QWidget> > list = pending;
    pending.clear();
    for (int i = 0; i < list.length(); i++) {
        QWidget* w = list[i].data();
        if (w == NULL || !w->isVisible()) {
            continue;
        }
        updateAccessibleName(w);
    }
}
