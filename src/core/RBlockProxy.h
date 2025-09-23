/**
 * Copyright (c) 2011-2025 by Andrew Mustun. All rights reserved.
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

#ifndef RBLOCKPROXY_H
#define RBLOCKPROXY_H

#include "../core_global.h"

#include <QList>
#include <QString>

class RDocument;
class RBlock;

/**
 * Proxy for advanced block functionality. May be implemented
 * by a plugin.
 *
 * \ingroup core
 */
class QCADCORE_EXPORT RBlockProxy {
public:
    virtual ~RBlockProxy() {}

    virtual bool loadXRef(RBlock* block) = 0;
    virtual QString getFullXRefFilePath(const RBlock* block) = 0;
};

#endif
