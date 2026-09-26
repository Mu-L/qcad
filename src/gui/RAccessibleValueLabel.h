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

#ifndef RACCESSIBLEVALUELABEL_H
#define RACCESSIBLEVALUELABEL_H

#include "gui_global.h"

/**
 * Accessibility implementation for labels that display a value and carry
 * an accessible description saying what that value is (coordinate display
 * and mouse button tips in the status bar, for example).
 *
 * The Cocoa accessibility plugin of Qt reports the accessible name of a
 * static text as its value, and a screen reader reads that value. The
 * description is at best read as a hint after a delay. A coordinate label
 * is thus read as "-" or "12.5, 7", with nothing to tell which of the four
 * coordinate displays it is, and the tool prompt in the status bar cannot
 * be told from the tip for the right mouse button.
 *
 * For a QLabel with an explicitly set accessible description (not a tool
 * tip) and no accessible name of its own, this interface reports
 * "<description>: <text>" as name, so both are read together
 * ("Absolute Cartesian Coordinate: 12.5, 7"). Other labels are read as
 * Qt reads them (text without accelerator markers, images as graphics).
 * The factory claims every QLabel, since Qt creates and caches the
 * interface of a label when it is shown, i.e. before a script sets the
 * description, so the decision has to be made when the name is read.
 */
class QCADGUI_EXPORT RAccessibleValueLabel {
public:
    /**
     * Installs the accessibility factory (once). Called by RMainWindowQt.
     */
    static void install();

private:
    static bool installed;
};

#endif
