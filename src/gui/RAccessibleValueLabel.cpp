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

#include "RAccessibleValueLabel.h"

#include <QAccessible>
#include <QAccessibleWidget>
#include <QLabel>
#include <QTextDocumentFragment>

namespace {

/**
 * "&Layer:" -> "Layer:", "AT&&T" -> "AT&T" (accelerator markers).
 */
QString stripAmp(const QString& text) {
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
    return ret;
}

/**
 * \return Text of the label as plain text: rich text labels (notes with
 * <font> / <br/> markup) would otherwise be read with their markup.
 */
QString plainText(const QLabel* label) {
    QString text = label->text();
    if (label->textFormat() == Qt::RichText ||
        (label->textFormat() == Qt::AutoText && Qt::mightBeRichText(text))) {
        return QTextDocumentFragment::fromHtml(text).toPlainText().simplified();
    }
    return stripAmp(text);
}

class RAccessibleValueLabelInterface : public QAccessibleWidget {
public:
    explicit RAccessibleValueLabelInterface(QLabel* label)
        : QAccessibleWidget(label, QAccessible::StaticText) {
    }

    QLabel* getLabel() const {
        return qobject_cast<QLabel*>(object());
    }

    QAccessible::Role role() const override {
        QLabel* label = getLabel();
        if (label != NULL && !label->pixmap().isNull()) {
            return QAccessible::Graphic;
        }
        return QAccessible::StaticText;
    }

    /**
     * \return True if this label shows a value described by its accessible
     * description (decided on demand: the description is typically set
     * after the widget was shown and its interface created).
     */
    bool isValueLabel() const {
        QLabel* label = getLabel();
        return label != NULL &&
               !label->accessibleDescription().isEmpty() &&
               label->accessibleName().isEmpty() &&
               label->buddy() == NULL &&
               label->pixmap().isNull();
    }

    QString text(QAccessible::Text t) const override {
        QLabel* label = getLabel();
        if (label == NULL) {
            return QAccessibleWidget::text(t);
        }
        switch (t) {
        case QAccessible::Name: {
            if (!label->accessibleName().isEmpty()) {
                return label->accessibleName();
            }
            if (!label->pixmap().isNull()) {
                return QAccessibleWidget::text(t);
            }
            QString value = plainText(label);
            if (isValueLabel()) {
                QString desc = label->accessibleDescription();
                if (value.isEmpty()) {
                    return desc;
                }
                return desc + ": " + value;
            }
            return value;
        }
        case QAccessible::Value:
            return plainText(label);
        default:
            break;
        }
        return QAccessibleWidget::text(t);
    }
};

QAccessibleInterface* raccessibleValueLabelFactory(const QString& classname, QObject* object) {
    Q_UNUSED(classname)

    QLabel* label = qobject_cast<QLabel*>(object);
    if (label == NULL) {
        return NULL;
    }
    // every label: Qt creates and caches the interface when the label is
    // shown, before scripts set the accessible description, so the
    // decision is made when the name is read (isValueLabel):
    return new RAccessibleValueLabelInterface(label);
}

} // namespace

bool RAccessibleValueLabel::installed = false;

void RAccessibleValueLabel::install() {
    if (installed) {
        return;
    }
    installed = true;
    QAccessible::installFactory(raccessibleValueLabelFactory);
}
