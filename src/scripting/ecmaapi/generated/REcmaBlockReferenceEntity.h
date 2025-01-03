// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMABLOCKREFERENCEENTITY_H
        #define RECMABLOCKREFERENCEENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RBlockReferenceEntity.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaBlockReferenceEntity {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRtti
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStaticPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        cloneToBlockReferenceEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScaleFactors
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScaleFactors
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColumnCount
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setColumnCount
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRowCount
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRowCount
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColumnSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setColumnSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRowSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRowSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setReferencedBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setReferencedBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasBlockOwnership
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencedBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencedBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyTransformationTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapToBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RBlockReferenceEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RBlockReferenceEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    