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

#ifndef RACCESSIBLECONTAINERS_H
#define RACCESSIBLECONTAINERS_H

#include "gui_global.h"

/**
 * Accessibility implementation for the containers of the main window
 * (tool bars, dock widgets, the status bar, the MDI area) and for the
 * graphics views (drawing area).
 *
 * Screen readers navigate an application window by its accessible
 * hierarchy. Qt flattens that hierarchy on macOS: tool bars, scroll areas
 * and plain widgets (QAccessible::ToolBar, Pane, Client) are ignored and
 * their children appear directly in the window, dock widgets and MDI sub
 * windows are reported as windows (ignored, too) and the status bar is
 * exposed as a static text without value, which a screen reader neither
 * reads nor enters. The main window of QCAD is thus presented as a few
 * hundred unstructured buttons, ordered by position, while the drawing
 * area, the document tabs and the status bar are not reachable at all
 * (VoiceOver walks a window in reading order and gives up on large
 * overlapping elements).
 *
 * This factory keeps the structure:
 *
 * - Tool bars, dock widgets and the status bar are groups
 *   (QAccessible::Grouping), named after their title, so a screen reader
 *   user can walk the window from group to group ("File", "CAD Tools",
 *   "Layer List", "Command Line", "Status Bar") and interact with a
 *   group to reach its widgets. macOS only: other platforms present
 *   the native roles of Qt correctly.
 * - The MDI area lists all of its child widgets (Qt only lists the sub
 *   windows), so the document tab bar is accessible.
 * - Graphics views (RGraphicsViewQt and the RHI based views of the
 *   qcadrhi3d module, identified by their class name) are exposed as
 *   graphics (QAccessible::Graphic) with the accessible name and
 *   description set by the script that creates them (ViewportWidget.js),
 *   instead of being dropped as nameless client widgets.
 *
 * Names are taken from the accessible name of the widget if set, from its
 * window title (tool bars, dock widgets) otherwise.
 */
class QCADGUI_EXPORT RAccessibleContainers {
public:
    /**
     * Installs the accessibility factory (once). Called by RMainWindowQt.
     */
    static void install();

private:
    static bool installed;
};

#endif
