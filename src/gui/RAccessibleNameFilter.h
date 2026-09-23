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

#ifndef RACCESSIBLENAMEFILTER_H
#define RACCESSIBLENAMEFILTER_H

#include "gui_global.h"

#include <QObject>
#include <QPointer>
#include <QList>

class QWidget;

/**
 * Application wide event filter that gives input widgets without an
 * accessible name the text of the label next to them.
 *
 * Screen readers read the accessible name of an input widget (line edit,
 * combo box, spin box, ...) to tell the user what the widget is for. Qt
 * derives that name from a QLabel that has the widget as its buddy. Most
 * input widgets of QCAD are labeled differently: in tool options, the
 * label is often a check box ("Length:" enables a fixed length), in
 * dialogs and preference pages the labels are plain QLabels without buddy.
 * Those widgets are read as anonymous "edit text" with a value.
 *
 * This filter watches for input widgets being shown and, once the layout
 * has settled, names every input widget without accessible name after the
 * nearest label (QLabel, QCheckBox or QRadioButton with text) to its left
 * on the same row or, failing that, above it. Accelerator markers and a
 * trailing colon are removed ("&Length:" -> "Length"). Names set this way
 * are marked with the widget property "RAccessibleNameFromLabel" and are
 * recomputed when the widget is shown again, explicitly set names are
 * never touched. For combo boxes, a QLabel found this way is also made
 * their buddy: on macOS the accessible name of a combo box is its current
 * text, the label is only heard as title element.
 *
 * The filter also watches the opt in properties of RAccessibleFlatTree
 * and drops the cached accessible interface of a tree widget when they
 * are set (see RAccessibleFlatTree::invalidate).
 *
 * Installed on the application by RMainWindowQt.
 */
class QCADGUI_EXPORT RAccessibleNameFilter : public QObject {
    Q_OBJECT

public:
    explicit RAccessibleNameFilter(QObject* parent = NULL);

    /**
     * \return True if the given widget is an input widget this filter
     * names (line edits, combo boxes, spin boxes, sliders, text edits,
     * item views).
     */
    static bool isInputWidget(const QWidget* w);

    /**
     * \return Name for the given input widget, derived from the nearest
     * label, or an empty string if no label is found.
     */
    static QString findLabelText(const QWidget* w);

    /**
     * \return The label widget (QLabel, QCheckBox or QRadioButton) nearest
     * to the given input widget: to its left on the same row, else above
     * it. NULL if none.
     */
    static QWidget* findLabel(const QWidget* w);

    /**
     * Names the given input widget after its label, if it has no
     * accessible name of its own.
     */
    static void updateAccessibleName(QWidget* w);

protected:
    bool eventFilter(QObject* obj, QEvent* event) override;

private slots:
    void processPending();

private:
    QList<QPointer<QWidget> > pending;
    bool scheduled;
};

#endif
