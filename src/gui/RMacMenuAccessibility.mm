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

#include "RMacMenuAccessibility.h"

#import <AppKit/AppKit.h>

#include <QRegularExpression>

QString RMacMenuAccessibility::getSpokenTitle(const QString& title) {
    QString ret = title;

    // trailing key code, added by RGuiAction::initTexts on macOS:
    // "Delete (ER)", "Zoom In (+)":
    QString code;
    static const QRegularExpression rxCode("\\s\\(([A-Z0-9+\\-*/.,;:<>=]{1,6})\\)$");
    QRegularExpressionMatch mCode = rxCode.match(ret);
    if (mCode.hasMatch()) {
        code = mCode.captured(1);
        ret = ret.left(mCode.capturedStart(0));
    }

    // undo / redo: "[-]" (nothing to undo) or "[transaction text]":
    static const QRegularExpression rxUndo("\\s\\[([^\\]]*)\\]");
    QRegularExpressionMatch mUndo = rxUndo.match(ret);
    if (mUndo.hasMatch()) {
        QString desc = mUndo.captured(1).trimmed();
        ret = ret.left(mUndo.capturedStart(0)) + ret.mid(mUndo.capturedEnd(0));
        if (!desc.isEmpty() && desc != "-") {
            ret += ": " + desc;
        }
    }

    if (!code.isEmpty()) {
        // spell the key code ("ER" -> "E R"):
        QString spelled;
        for (int i = 0; i < code.length(); i++) {
            if (i > 0) {
                spelled += " ";
            }
            spelled += code.at(i);
        }
        ret += ", " + spelled;
    }

    return ret.simplified();
}

namespace {

void updateMenuItem(NSMenuItem* item) {
    if (item == nil || item.isSeparatorItem) {
        return;
    }
    QString title = QString::fromNSString(item.title);
    QString spoken = RMacMenuAccessibility::getSpokenTitle(title);
    NSString* label = item.accessibilityLabel;
    if (spoken == title) {
        // nothing to translate: default (title):
        if (label != nil) {
            item.accessibilityLabel = nil;
        }
        return;
    }
    if (label == nil || spoken != QString::fromNSString(label)) {
        item.accessibilityLabel = spoken.toNSString();
    }
}

} // namespace

@interface RMacMenuAccessibilityObserver : NSObject
- (void)menuItemChanged:(NSNotification*)notification;
@end

@implementation RMacMenuAccessibilityObserver
- (void)menuItemChanged:(NSNotification*)notification {
    NSMenu* menu = notification.object;
    NSNumber* index = notification.userInfo[@"NSMenuItemIndex"];
    if (menu == nil || index == nil) {
        return;
    }
    NSInteger i = index.integerValue;
    if (i < 0 || i >= menu.numberOfItems) {
        return;
    }
    updateMenuItem([menu itemAtIndex:i]);
}
@end

void RMacMenuAccessibility::install() {
    static RMacMenuAccessibilityObserver* observer = nil;
    if (observer != nil) {
        return;
    }
    observer = [[RMacMenuAccessibilityObserver alloc] init];
    NSNotificationCenter* nc = [NSNotificationCenter defaultCenter];
    [nc addObserver:observer selector:@selector(menuItemChanged:) name:NSMenuDidAddItemNotification object:nil];
    [nc addObserver:observer selector:@selector(menuItemChanged:) name:NSMenuDidChangeItemNotification object:nil];
}
