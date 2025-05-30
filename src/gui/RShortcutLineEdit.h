/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#ifndef RSHORTCUTLINEEDIT_H_
#define RSHORTCUTLINEEDIT_H_

#include "gui_global.h"

#include <QMetaType>
#include <QLineEdit>

/**
 * \scriptable
 * \ingroup gui
 */
class QCADGUI_EXPORT RShortcutLineEdit: public QLineEdit {

Q_OBJECT

public:
    RShortcutLineEdit(QWidget* parent);

public slots:
    virtual void clear();

protected:
    bool eventFilter(QObject *obj, QEvent *event);

private:
    int translateModifiers(Qt::KeyboardModifiers state, const QString &text);

private:
    int m_key[4];
    int m_keyNum;
};

Q_DECLARE_METATYPE(RShortcutLineEdit*)

#endif /* RSHORTCUTLINEEDIT_H_ */
