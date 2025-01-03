// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMASHAREDPOINTERELLIPSE_H
        #define RECMASHAREDPOINTERELLIPSE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REllipse.h"
            
            typedef QSharedPointer<REllipse> REllipsePointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerEllipse {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRShape(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    static  QScriptValue getSetCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetMajorPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetRatio
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetStartParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetEndParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetReversed
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // public methods:
    static  QScriptValue
        createInscribed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createFrom4Points
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapeType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        cloneToEllipse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDirected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setZ
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDoubleProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoolProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointCloud
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFoci
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMajorPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinorPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMajorPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMinorPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        switchMajorMinor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRatio
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRatio
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        angleToParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isAngleWithinArc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isParamWithinArc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isReversed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setReversed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSideOfPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMajorRadius
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinorRadius
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFullEllipse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isCircular
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSimpsonLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        contains
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleAtPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getParamTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRadiusAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointOnShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        correctMajorMinor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSweep
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoxCorners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTangents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTangentPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        approximateWithSplines
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        approximateWithArcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOffsetShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        splitAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasProxy
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static REllipse* getSelf(const QString& fName, QScriptContext* context)
    ;static REllipse* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    