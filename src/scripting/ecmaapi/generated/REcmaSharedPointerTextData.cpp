// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaSharedPointerTextData.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RVector.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSharedPointerTextBasedData.h"
                 void REcmaSharedPointerTextData::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RTextDataPointer*) 0)));
        protoCreated = true;
    }

    
        // primary base class RTextBasedData:
        
            proto->setPrototype(engine.defaultPrototype(
            qMetaTypeId<RTextBasedDataPointer>()));
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    
        // shared pointer support:
        REcmaHelper::registerFunction(&engine, proto, data, "data");
        

        REcmaHelper::registerFunction(&engine, proto, isNull, "isNull");
        

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RTextBasedData
        REcmaHelper::registerFunction(&engine, proto, getRTextBasedData, "getRTextBasedData");
        
        // conversion for base class REntityData
        REcmaHelper::registerFunction(&engine, proto, getREntityData, "getREntityData");
        
        // conversion for base class RPainterPathSource
        REcmaHelper::registerFunction(&engine, proto, getRPainterPathSource, "getRPainterPathSource");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getType, "getType");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RTextDataPointer>(), *proto);
      
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RTextDataPointer",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSharedPointerTextData::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextData(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RTextData
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RTextBasedData */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RTextBasedData*
                    ap0 =
                    qscriptvalue_cast<
                    RTextBasedData*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RTextData: Argument 0 is not of type RTextBasedData.",
                               context);                    
                    }
                    RTextBasedData 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RTextData
                    cppResult(
                    a0
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        15
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RVector */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RVector */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: double */
            
                && (
                
                        context->argument(
                        3
                        ).isNumber()
                ) /* type: double */
            
                && (
                
                        context->argument(
                        4
                        ).isNumber()
                ) /* type: RS::VAlign */
            
                && (
                
                        context->argument(
                        5
                        ).isNumber()
                ) /* type: RS::HAlign */
            
                && (
                
                        context->argument(
                        6
                        ).isNumber()
                ) /* type: RS::TextDrawingDirection */
            
                && (
                
                        context->argument(
                        7
                        ).isNumber()
                ) /* type: RS::TextLineSpacingStyle */
            
                && (
                
                        context->argument(
                        8
                        ).isNumber()
                ) /* type: double */
            
                && (
                
                        context->argument(
                        9
                        ).isString()
                ) /* type: QString */
            
                && (
                
                        context->argument(
                        10
                        ).isString()
                ) /* type: QString */
            
                && (
                
                        context->argument(
                        11
                        ).isBool()
                ) /* type: bool */
            
                && (
                
                        context->argument(
                        12
                        ).isBool()
                ) /* type: bool */
            
                && (
                
                        context->argument(
                        13
                        ).isNumber()
                ) /* type: double */
            
                && (
                
                        context->argument(
                        14
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RTextData: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap1 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RTextData: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    RS::VAlign
                    a4 =
                    (RS::VAlign)
                    (int)
                    context->argument( 4 ).
                    toNumber();
                
                    // argument isStandardType
                    RS::HAlign
                    a5 =
                    (RS::HAlign)
                    (int)
                    context->argument( 5 ).
                    toNumber();
                
                    // argument isStandardType
                    RS::TextDrawingDirection
                    a6 =
                    (RS::TextDrawingDirection)
                    (int)
                    context->argument( 6 ).
                    toNumber();
                
                    // argument isStandardType
                    RS::TextLineSpacingStyle
                    a7 =
                    (RS::TextLineSpacingStyle)
                    (int)
                    context->argument( 7 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a8 =
                    (double)
                    
                    context->argument( 8 ).
                    toNumber();
                
                    // argument isStandardType
                    QString
                    a9 =
                    (QString)
                    
                    context->argument( 9 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a10 =
                    (QString)
                    
                    context->argument( 10 ).
                    toString();
                
                    // argument isStandardType
                    bool
                    a11 =
                    (bool)
                    
                    context->argument( 11 ).
                    toBool();
                
                    // argument isStandardType
                    bool
                    a12 =
                    (bool)
                    
                    context->argument( 12 ).
                    toBool();
                
                    // argument isStandardType
                    double
                    a13 =
                    (double)
                    
                    context->argument( 13 ).
                    toNumber();
                
                    // argument isStandardType
                    bool
                    a14 =
                    (bool)
                    
                    context->argument( 14 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RTextData
                    cppResult(
                    a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5
        ,
    a6
        ,
    a7
        ,
    a8
        ,
    a9
        ,
    a10
        ,
    a11
        ,
    a12
        ,
    a13
        ,
    a14
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextData(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSharedPointerTextData::getRTextBasedData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RTextBasedData* cppResult =
                    qscriptvalue_cast<RTextData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSharedPointerTextData::getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntityData* cppResult =
                    qscriptvalue_cast<RTextData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSharedPointerTextData::getRPainterPathSource(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RPainterPathSource* cppResult =
                    qscriptvalue_cast<RTextData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSharedPointerTextData::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RTextData"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSharedPointerTextData::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RTextBasedData");
    
        list.append("REntityData");
    
        list.append("RPainterPathSource");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSharedPointerTextData::getType
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerTextData::getType", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerTextData::getType";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextData* self = 
                        getSelf("getType", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RS::EntityType'
    RS::EntityType cppResult =
        
               self->getType();
        // return type: RS::EntityType
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextData.getType().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerTextData::getType", context, engine);
            return result;
        }
         QScriptValue REcmaSharedPointerTextData::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextData* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RTextDataPointer(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSharedPointerTextData::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RTextData cp = qscriptvalue_cast<RTextData>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaSharedPointerTextData::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RTextData* self = getSelf("RTextData", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RTextData* REcmaSharedPointerTextData::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RTextData* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RTextDataPointer >(context->thisObject())
                
                    ->data()
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RTextData.%1(): "
                        "This object is not a RTextData").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RTextData* REcmaSharedPointerTextData::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RTextData* selfBase = getSelf(fName, context);
                RTextData* self = dynamic_cast<RTextData*>(selfBase);
                //return REcmaHelper::scriptValueTo<RTextData >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RTextData.%1(): "
                    "This object is not a RTextData").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaSharedPointerTextData::data
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextData* self = getSelf("data", context);
    return qScriptValueFromValue(engine, self);
    }
     QScriptValue REcmaSharedPointerTextData::isNull
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextDataPointer* self = REcmaHelper::scriptValueTo<RTextDataPointer >(context->thisObject());

    //RTextData* self = getSelf("isNull", context);
    //Q_ASSERT(self!=NULL);
    if (self==NULL) {
        return REcmaHelper::throwError("self is NULL", context);
    }
    return qScriptValueFromValue(engine, self->isNull());
    }
    