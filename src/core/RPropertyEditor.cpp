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

#include <QtGlobal>

#if QT_VERSION >= 0x050000
#include <QtConcurrent>
#else
#include <qtconcurrentmap.h>
#endif

#include "RColor.h"
#include "RDebug.h"
#include "RGlobal.h"
#include "RMath.h"
#include "RMainWindow.h"
#include "RMetaTypes.h"
#include "RPropertyEditor.h"
#include "RPropertyEvent.h"

RPropertyEditor* RPropertyEditor::instance = NULL;

/**
 * Default Constructor.
 */
RPropertyEditor::RPropertyEditor()
    : guiUpToDate(false),
      updatesDisabled(false),
      entityTypeFilter(RS::EntityAll) {

    instance = this;
}

/**
 * Destructor
 */
RPropertyEditor::~RPropertyEditor() {
}

RPropertyEditor* RPropertyEditor::getInstance() {
    return instance;
}

/**
 * Sets the property with the given name to the given value or to 'mixed'
 * if that property exists already with a different value.
 *
 * \param propertyTypeId: Id of the property.
 * \param showOnRequest: True to show also slow properties shown on request.
 */
void RPropertyEditor::updateProperty(const RPropertyTypeId& propertyTypeId,
        RObject& object, RDocument* document, bool showOnRequest) {

    Q_UNUSED(document)

    // show on request properties:
    showOnRequest = showOnRequest || RSettings::getPropertyEditorShowOnRequest()==true;

    RPropertyTypeId pid = propertyTypeId;

    QString propertyGroupTitle = propertyTypeId.getPropertyGroupTitle();
    QString propertyTitle = propertyTypeId.getPropertyTitle();

    if (guiUpToDate) {
        combinedProperties.clear();
        guiUpToDate = false;
    }

    // existing group:
    if (combinedProperties.contains(propertyGroupTitle)) {
        RPropertyMap& propertyMap = combinedProperties[propertyGroupTitle];

        // existing property in existing group:
        if (propertyMap.contains(propertyTitle)) {
            // only query property if combined property is NOT already mixed:
            if (!propertyMap[propertyTitle].second.isMixed()) {
                // get property: human readable but no attributes:
                QPair<QVariant, RPropertyAttributes> prop;
//                if (!property.isValid()) {
                    prop = object.getProperty(pid, true, true, showOnRequest);
//                }

                // property is sum:
                if (propertyMap[propertyTitle].second.isSum()) {
                    // sum of all values:
                    double v = propertyMap[propertyTitle].first.toDouble();
//                    if (!property.isValid()) {
                        v += prop.first.toDouble();
//                    }
//                    else {
//                        v += property.value.toDouble();
//                    }
                    propertyMap[propertyTitle].first.setValue(v);
                }
                else if (!RS::compare(propertyMap[propertyTitle], prop)) {
                    // mixed value:
//                    if (!property.isValid()) {
                        propertyMap[propertyTitle].first = prop.first;
//                    }
//                    else {
//                        propertyMap[propertyTitle].first = property.value;
//                    }
                    propertyMap[propertyTitle].second.setMixed(true);
                }
            }
        } else {
            // new property in existing group:
            QPair<QVariant, RPropertyAttributes> prop;
//            if (!property.isValid()) {
                prop = object.getProperty(pid, true, false, showOnRequest);
//            }
//            if (!property.isValid()) {
                if (prop.second.isInvisible()) {
                    return;
                }
                propertyMap[propertyTitle] = prop;
//            }
//            else {
//                if (property.attributes.isInvisible()) {
//                    return;
//                }
//                propertyMap[propertyTitle] = qMakePair(property.value, property.attributes);
//            }

            //property.second.setPropertyTypeId(propertyTypeId);
            propertyOrder[propertyGroupTitle].push_back(propertyTitle);
        }
    } else {
        // new property in new group:
        QPair<QVariant, RPropertyAttributes> prop;
//        if (!property.isValid()) {
            prop = object.getProperty(pid, true, false, showOnRequest);
//        }

        RPropertyMap propertyMap;
//        if (!property.isValid()) {
            if (prop.second.isInvisible()) {
                return;
            }
            propertyMap[propertyTitle] = prop;
//        }
//        else {
//            if (property.attributes.isInvisible()) {
//                return;
//            }
//            propertyMap[propertyTitle] = qMakePair(property.value, property.attributes);
//        }
        //property.second.setPropertyTypeId(propertyTypeId);
        combinedProperties[propertyGroupTitle] = propertyMap;
        groupOrder.push_back(propertyGroupTitle);
        propertyOrder[propertyGroupTitle].push_back(propertyTitle);
    }
}

/**
 * Removes all but the given properties from the combined properties
 * collected so far.
 */
//void RPropertyEditor::removeAllButThese(
//        const QMultiMap<QString, QString>& propertyTitles, bool customOnly) {

//    // iterate through all groups of properties (e.g. "Start Point", "End Point", ...):
//    QStringList removableGroups;
//    RPropertyGroupMap::iterator it;
//    for (it = combinedProperties.begin(); it != combinedProperties.end(); ++it) {

//        // iterate through all properties in the current group (e.g. "X", "Y"):
//        QStringList removableProperties;
//        RPropertyMap::iterator it2;
//        for (it2 = it.value().begin(); it2 != it.value().end(); ++it2) {
//            if (customOnly && !it2.value().second.isCustom()) {
//                continue;
//            }

//            bool keep = false;

//            // check if the current property is among the given properties
//            // we want to keep:
//            QMultiMap<QString, QString>::const_iterator it3;
//            for (it3 = propertyTitles.begin(); it3 != propertyTitles.end(); ++it3) {
//                if (it3.key() == it.key() && it3.value() == it2.key()) {
//                    keep = true;
//                    break;
//                }
//            }

//            if (keep == false) {
//                // schedule property for removal:
//                removableProperties.push_back(it2.key());
//            }
//        }

//        // remove all properties in the current group that are scheduled for removal:
//        QStringList::iterator it4;
//        for (it4 = removableProperties.begin(); it4
//                != removableProperties.end(); ++it4) {
//            it.value().remove(*it4);
//            propertyOrder[it.key()].removeAll(*it4);
//        }

//        // schedule empty groups for removal:
//        if (it.value().empty()) {
//            removableGroups.push_back(it.key());
//        }
//    }

//    // remove all groups that are scheduled for removal:
//    QStringList::iterator it5;
//    for (it5 = removableGroups.begin(); it5 != removableGroups.end(); ++it5) {
//        combinedProperties.remove(*it5);
//        groupOrder.removeAll(*it5);
//    }
//}

/**
 * Implements updateFromDocument from RPropertyListener to show properties for selected objects.
 *
 * Updates the property editor to contain the properties of the
 * objects that are selected for editing in the given document.
 *
 * \param filter RS::EntityUnknown to use same filter as previously used,
 * any other value to change filter.
 */
void RPropertyEditor::updateFromDocument(RDocument* document, bool onlyChanges, RS::EntityType filter, bool manual, bool showOnRequest) {
    if (updatesDisabled) {
        return;
    }

    if (document == NULL) {
        clearEditor();
        return;
    }

    qDebug() << "RPropertyEditor::updateFromDocument";
    //RDebug::startTimer();

    if (filter!=RS::EntityUnknown) {
        setEntityTypeFilter(filter);
    }

    combinedProperties.clear();
    combinedTypes.clear();
    propertyOrder.clear();
    groupOrder.clear();

    updatesDisabled = true;

    // add all properties of the selected entities in the given document:
    QSet<RObject::Id> objectIds = document->queryPropertyEditorObjects();

    if (objectIds.size()==1) {
        showOnRequest = true;
    }

    QSet<RObject::Id>::iterator it;

    //qDebug() << "manual:" << manual;

    // only block ref and attributes selected:
    // default to filter block ref:
    if (entityTypeFilter==RS::EntityAll && !manual) {
        bool foundBlockRef = false;
        bool foundAttribute = false;
        bool foundOther = false;
        for (it = objectIds.begin(); it != objectIds.end(); ++it) {
            QSharedPointer<RObject> obj = document->queryObjectDirect(*it);
            if (obj.isNull()) {
                continue;
            }

            RS::EntityType type = obj->getType();

            if (!foundBlockRef && type==RS::EntityBlockRef) {
                foundBlockRef = true;
                if (foundAttribute && foundOther) {
                    break;
                }
            }
            if (!foundAttribute && type==RS::EntityAttribute) {
                foundAttribute = true;
                if (foundBlockRef && foundOther) {
                    break;
                }
            }
            if (!foundOther && type!=RS::EntityBlockRef && type!=RS::EntityAttribute) {
                foundOther = true;
                if (foundBlockRef && foundAttribute) {
                    break;
                }
            }

//            if (combinedTypes.contains(type)) {
//                combinedTypes[type]++;
//            }
//            else {
//                combinedTypes.insert(type, 1);
//            }
        }

        if (foundBlockRef && foundAttribute && !foundOther) {
            if (RSettings::getSelectBlockWithAttribute()) {
                entityTypeFilter = RS::EntityBlockRef;
            }
            else {
                entityTypeFilter = RS::EntityBlockRefAttr;
            }
        }
    }

    // collect and count entity types:
    // collect common custom properties:
    QSet<QString> customPropertyNames;
    bool first = true;
    for (it = objectIds.begin(); it != objectIds.end(); ++it) {
        QSharedPointer<RObject> obj = document->queryObjectDirect(*it);
        if (obj.isNull()) {
            continue;
        }

        if (first) {
            customPropertyNames = obj->getCustomPropertyKeys("QCAD").toSet();
        }
        else {
            if (!customPropertyNames.isEmpty()) {
                customPropertyNames.intersect(obj->getCustomPropertyKeys("QCAD").toSet());
            }
        }

        RS::EntityType type = obj->getType();

        if (combinedTypes.contains(type)) {
            combinedTypes[type]++;
        }
        else {
            combinedTypes.insert(type, 1);
        }

        first = false;
    }

    // get list of custom properties that are always shown, even if a selected object does not provide the property:
    QStringList fixedCustomPropertyNames = getFixedCustomPropertyNames(combinedTypes.keys());

    QStringList customPropertyNamesSorted = customPropertyNames.toList();
    customPropertyNamesSorted.append(fixedCustomPropertyNames);
    qSort(customPropertyNamesSorted);

    // find out which properties need to be collected (combined properties of selected object types):
    QSet<RPropertyTypeId> combinedPropertyTypeIds;
    QList<RS::EntityType> combinedTypeIds = combinedTypes.keys();
    for (int i=0; i<combinedTypeIds.length(); i++) {
        RS::EntityType t = combinedTypeIds[i];
        QSet<RPropertyTypeId> propertyTypeIds = RPropertyTypeId::getPropertyTypeIds(t);

        if (i==0) {
            combinedPropertyTypeIds = propertyTypeIds;
        }
        else {
            combinedPropertyTypeIds.intersect(propertyTypeIds);
        }
    }

    QList<RPropertyTypeId> combinedPropertyTypeIdsSorted = combinedPropertyTypeIds.toList();
    qSort(combinedPropertyTypeIdsSorted);

    // list of property type IDs with values (to be filled in by concurrent mapping below):
    QList<RProperty> ccProperties;
    for (int i=0; i<combinedPropertyTypeIdsSorted.length(); i++) {
        ccProperties.append(RProperty(*document, objectIds, combinedPropertyTypeIdsSorted[i], showOnRequest));
    }

    // append custom properties common among all selected objects:
    for (int i=0; i<customPropertyNamesSorted.length(); i++) {
        ccProperties.append(RProperty(*document, objectIds, RPropertyTypeId("QCAD", customPropertyNamesSorted[i]), showOnRequest));
    }


    // for each property, find out value (either identical value or 'mixed'):
    QtConcurrent::blockingMap(ccProperties, RPropertyEditor::computePropertyValue);

    // update combined properties map:
    for (int i=0; i<ccProperties.length(); i++) {
        RProperty& p = ccProperties[i];
        RPropertyTypeId& pid = p.propertyTypeId;
        QVariant& val = p.value;
        RPropertyAttributes& attr = p.attributes;

        // group title (e.g. "Center", "QCAD" for custom propertie, "" for group less):
        QString propertyGroupTitle = pid.getPropertyGroupTitle();
        // proerty title (e.g. "X", "myProp", "Text height", etc.):
        QString propertyTitle = pid.getPropertyTitle();

        if (combinedProperties.contains(propertyGroupTitle)) {
            RPropertyMap& propertyMap = combinedProperties[propertyGroupTitle];

            if (propertyMap.contains(propertyTitle)) {
                // existing property in existing group:
                qWarning() << "should not be reached";
            }

            else {
                // new property in existing group:
                propertyMap[propertyTitle] = QPair<QVariant, RPropertyAttributes>(val, attr);

                propertyOrder[propertyGroupTitle].push_back(propertyTitle);
            }
        }
        else {
            // new property in new group:
            RPropertyMap propertyMap;
            propertyMap[propertyTitle] = QPair<QVariant, RPropertyAttributes>(val, attr);
            combinedProperties[propertyGroupTitle] = propertyMap;

            groupOrder.push_back(propertyGroupTitle);
            propertyOrder[propertyGroupTitle].push_back(propertyTitle);
        }
    }

    RS::EntityType entityTypeFilterProp = entityTypeFilter;
    if (entityTypeFilterProp==RS::EntityBlockRefAttr) {
        // only block ref and attributes selected: show only block ref properties:
        entityTypeFilterProp = RS::EntityBlockRef;
    }

    if (RSettings::getSelectBlockWithAttribute()) {
        //combinedTypes.remove(RS::EntityBlockRefAttr);
        combinedTypes.remove(RS::EntityAttribute);
    }
    else {
        if (combinedTypes.contains(RS::EntityBlockRef) && combinedTypes.contains(RS::EntityAttribute)) {
            combinedTypes.insert(RS::EntityBlockRefAttr, combinedTypes[RS::EntityBlockRef] + combinedTypes[RS::EntityBlockRefAttr]);
        }
    }

    //RDebug::stopTimer("RPropertyEditor::updateFromDocument");

//    qDebug() << "combinedProperties:";
//    QStringList groups = combinedProperties.keys();
//    for (int i=0; i<groups.length(); i++) {
//        qDebug() << "  group:" << groups[i];
//        qDebug() << "    props:" << combinedProperties[groups[i]].keys();
//    }

    updateGui(onlyChanges);

    updatesDisabled = false;

}

void RPropertyEditor::computePropertyValue(RProperty& ccProp) {
    bool mixed = false;
    bool invisible = false;

    QSet<RObject::Id>::const_iterator it;
    for (it = ccProp.objectIds->constBegin(); it != ccProp.objectIds->constEnd(); ++it) {
        //QSharedPointer<RObject> obj = ccProp.document->queryObjectDirect(*it);
        RObject* obj = ccProp.document->queryObjectCC(*it);
        //QSharedPointer<RObject> obj = ccProp.document->queryObject(*it);

        QPair<QVariant, RPropertyAttributes> prop = obj->getProperty(ccProp.propertyTypeId, true, true, ccProp.showOnRequest);

        if (prop.second.isInvisible()) {
            // property is invisible:
            invisible = true;
            break;
        }

        if (!ccProp.value.isValid()) {
            // first value:
            ccProp.value = prop.first;
            ccProp.attributes = prop.second;
        }
        else {
            // next value:
            if (prop.second.isSum()) {
                // sum up all values:
                double v = ccProp.value.toDouble();
                ccProp.value.setValue(v + prop.first.toDouble());
            }
            else {
                // compare and set to mixed if values don't match:
                if (!RS::compare(ccProp.value, prop.first)) {
                    mixed = true;
                    break;
                }
            }
        }
    }

    if (invisible) {
        // property is invisible:
        return;
    }

    // group title (e.g. "Center", "QCAD" for custom propertie, "" for group less):
    QString propertyGroupTitle = ccProp.propertyTypeId.getPropertyGroupTitle();
    // proerty title (e.g. "X", "myProp", "Text height", etc.):
    QString propertyTitle = ccProp.propertyTypeId.getPropertyTitle();

    // retrieve custom property attributes from RObject as previously registered:
    // this allows for custom properties to have attributes such as read-only, invisible, custom label, etc):
    if (ccProp.propertyTypeId.isCustom()) {
        ccProp.attributes = RObject::getCustomPropertyAttributes(propertyGroupTitle, propertyTitle);
        if (ccProp.attributes.isInvisible()) {
            return;
        }
    }

    if (mixed) {
        // value is mixed:
        //qDebug() << "value is mixed:" << propertyGroupTitle << propertyTitle;
        ccProp.attributes.setMixed(true);
    }
}

/**
 * Implements updateFromObject from RPropertyListener to show properties for one single object.
 */
void RPropertyEditor::updateFromObject(RObject* object, RDocument* document) {
    if (object != NULL) {
        QSet<RPropertyTypeId> propertyTypeIds = object->getPropertyTypeIds();
        QList<RPropertyTypeId> propertyTypeIdsSorted = propertyTypeIds.toList();
        qSort(propertyTypeIdsSorted);
        updateEditor(*object, propertyTypeIdsSorted, true, document);
    }
}

/**
 * Updates the property widget to include the properties of the given property owner.
 */
void RPropertyEditor::updateEditor(RObject& object, const QList<RPropertyTypeId>& propertyTypeIds, bool doUpdateGui, RDocument* document, bool showOnRequest) {
    // TODO: query all properties of an opject in one go (ordered as list)
    // try for one object type (e.g. circle) to see if it impacts performance

//    QList<RProperty> properties = object.getAllProperties(showOnRequest);
//    //qDebug() << "properties:" << properties.length();
//    for (int i=0; i<properties.length(); i++) {
//        RProperty p = properties[i];
//        updateProperty(p.propertyTypeId, p, object, document, showOnRequest);
//    }

    //QList<RPropertyTypeId> propertyTypeIds = object.getPropertyTypeIds().toList();
    //qSort(propertyTypeIds);

    //QList<RPropertyTypeId> propertyTypeIdsSorted = propertyTypeIds.toList();
    //qSort(propertyTypeIdsSorted);

    QList<RPropertyTypeId>::const_iterator it;
    for (it = propertyTypeIds.begin(); it != propertyTypeIds.end(); ++it) {
        updateProperty(*it, object, document, showOnRequest);
    }

    if (doUpdateGui) {
        updateGui();
    }
}

void RPropertyEditor::clearEditor() {
    combinedProperties.clear();
    propertyOrder.clear();
    groupOrder.clear();
    updateGui();
}

void RPropertyEditor::updateLayers(RDocumentInterface* documentInterface, QList<RObject::Id>& layerIds) {
    Q_UNUSED(layerIds)

    updateLayers(documentInterface);
}

void RPropertyEditor::updateLayers(RDocumentInterface* documentInterface) {
    if (documentInterface==NULL) {
        // 20190130: changed from false to true:
        // workaround for Qt 5.10.1 bug (crash when changing layer name in property editor)
        updateFromDocument(NULL, true);
    }
    else {
        // 20190130: changed from false to true:
        // workaround for Qt 5.10.1 bug (crash when changing layer name in property editor)
        updateFromDocument(&documentInterface->getDocument(), true);
    }
}

void RPropertyEditor::setCurrentLayer(RDocumentInterface* documentInterface, RObject::Id previousLayerId) {
    Q_UNUSED(previousLayerId)

    updateLayers(documentInterface);
}

void RPropertyEditor::clearLayers() {
    // do nothing
}

void RPropertyEditor::propertyChanged(RPropertyTypeId propertyTypeId,
                                      QVariant propertyValue,
                                      QVariant::Type typeHint) {

    RMainWindow* appWin = RMainWindow::getMainWindow();
    if (appWin == NULL) {
        qWarning() << QString("RPropertyEditor::itemChanged: mainWindow is NULL");
        return;
    }

    if (typeHint!=QVariant::Invalid) {
        // broken for double to int conversion:
        //propertyValue = propertyValue.convert(typeHint);
        if (typeHint==QVariant::Int && propertyValue.type()==QVariant::Double) {
            propertyValue = QVariant(RMath::mround(propertyValue.toDouble()));
        }
    }

    appWin->postPropertyEvent(propertyTypeId, propertyValue, entityTypeFilter);
}

void RPropertyEditor::listPropertyChanged(RPropertyTypeId propertyTypeId,
                     int index, QVariant propertyValue) {

    QVariant v;
    QList<QPair<int, double> > list;
    list.append(QPair<int, double>(index, propertyValue.toDouble()));
    v.setValue(list);

    propertyChanged(propertyTypeId, v);
}

/**
 * \return All groups in correct order.
 */
QStringList RPropertyEditor::getGroupTitles() {
    return groupOrder;
}

/**
 * \return All properties of the given group in correct order.
 */
QStringList RPropertyEditor::getPropertyTitles(const QString& group) {
    if (!propertyOrder.contains(group)) {
        return QStringList();
    }
    return propertyOrder.value(group);
}

/**
 * \return Property value of given property.
 */
QVariant RPropertyEditor::getPropertyValue(const RPropertyTypeId& propertyTypeId) {
    return getPropertyValue(propertyTypeId.getPropertyGroupTitle(), propertyTypeId.getPropertyTitle());
}

/**
 * \return Property value of given property.
 */
QVariant RPropertyEditor::getPropertyValue(const QString& group, const QString& title) {
    if (!combinedProperties.contains(group)) {
        return QVariant();
    }

    if (!combinedProperties.value(group).contains(title)) {
        return QVariant();
    }

    QPair<QVariant, RPropertyAttributes> pair = combinedProperties[group][title];
    return pair.first;
}

/**
 * \return Property attributes of given property.
 */
RPropertyAttributes RPropertyEditor::getPropertyAttributes(const RPropertyTypeId& propertyTypeId) {
//    if (propertyTypeId.isCustom()) {
//        QString group = propertyTypeId.getPropertyGroupTitle();
//        QString title = propertyTypeId.getPropertyTitle();
//        return getCustomPropertyAttributes(group, title);
//    }

    return getPropertyAttributes(propertyTypeId.getPropertyGroupTitle(), propertyTypeId.getPropertyTitle());
}

/**
 * \return Property attributes for given property.
 */
RPropertyAttributes RPropertyEditor::getPropertyAttributes(const QString& group, const QString& title) {
    if (!combinedProperties.contains(group)) {
        return RPropertyAttributes();
    }

    if (!combinedProperties.value(group).contains(title)) {
        return RPropertyAttributes();
    }

    QPair<QVariant, RPropertyAttributes> pair = combinedProperties[group][title];

//    if (pair.second.isCustom()) {
//        return getCustomPropertyAttributes(group, title);
//    }

    return pair.second;
}

RPropertyAttributes RPropertyEditor::getCustomPropertyAttributes(const QString& group, const QString& title) {
    RPropertyAttributes ret = RObject::getCustomPropertyAttributes(group, title);
    //ret.setPropertyTypeId(RPropertyTypeId(group, title));
    return ret;
}

QList<RS::EntityType> RPropertyEditor::getTypes() {
    return combinedTypes.keys();
}

int RPropertyEditor::getTypeCount(RS::EntityType type) {
    if (combinedTypes.contains(type)) {
        return combinedTypes.value(type);
    }
    else {
        return 0;
    }
}

bool RPropertyEditor::checkType(RS::EntityType type, RS::EntityType filter) {
    if (type==filter) {
        return true;
    }
    if (filter==RS::EntityBlockRefAttr && (type==RS::EntityBlockRef || type==RS::EntityAttribute)) {
        return true;
    }

    return false;
}
