// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaSnapIntersection.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RGraphicsView.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSnap.h"
                 void REcmaSnapIntersection::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSnapIntersection*) 0)));
        protoCreated = true;
    }

    
        // primary base class RSnap:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RSnap*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RSnap
        REcmaHelper::registerFunction(&engine, proto, getRSnap, "getRSnap");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, snap, "snap");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RSnapIntersection*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSnapIntersection",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSnapIntersection::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSnapIntersection(): Did you forget to construct with 'new'?"),
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
    
            // non-copyable class:
            RSnapIntersection
                    * cppResult =
                    new
                    RSnapIntersection
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSnapIntersection(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSnapIntersection::getRSnap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSnap* cppResult =
                    qscriptvalue_cast<RSnapIntersection*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSnapIntersection::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSnapIntersection"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSnapIntersection::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RSnap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSnapIntersection::snap
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSnapIntersection::snap", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSnapIntersection::snap";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSnapIntersection* self = 
                        getSelf("snap", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RGraphicsView */
    
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
                           return REcmaHelper::throwError("RSnapIntersection: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument is reference
                    RGraphicsView*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){

                           return REcmaHelper::throwError("RSnapIntersection: Argument 1 is not of type RGraphicsView* or QSharedPointer<RGraphicsView>.",
                               context);
                    }
                    RGraphicsView& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->snap(a0
        ,
    a1);
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RGraphicsView */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
    
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
                           return REcmaHelper::throwError("RSnapIntersection: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument is reference
                    RGraphicsView*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){

                           return REcmaHelper::throwError("RSnapIntersection: Argument 1 is not of type RGraphicsView* or QSharedPointer<RGraphicsView>.",
                               context);
                    }
                    RGraphicsView& a1 = *ap1;
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->snap(a0
        ,
    a1
        ,
    a2);
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    4 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RGraphicsView */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: QMap < RObject::Id , QSet < int > > */
     && (
            context->argument(3).isVariant() || 
            context->argument(3).isQObject() || 
            context->argument(3).isNull()
        ) /* type: RBox */
    
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
                           return REcmaHelper::throwError("RSnapIntersection: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument is reference
                    RGraphicsView*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){

                           return REcmaHelper::throwError("RSnapIntersection: Argument 1 is not of type RGraphicsView* or QSharedPointer<RGraphicsView>.",
                               context);
                    }
                    RGraphicsView& a1 = *ap1;
                
                    // argument is reference
                    QMap < RObject::Id , QSet < int > >*
                    ap2 =
                    qscriptvalue_cast<
                    QMap < RObject::Id , QSet < int > >*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){

                           return REcmaHelper::throwError("RSnapIntersection: Argument 2 is not of type QMap < RObject::Id , QSet < int > >* or QSharedPointer<QMap < RObject::Id , QSet < int > >>.",
                               context);
                    }
                    QMap < RObject::Id , QSet < int > >& a2 = *ap2;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap3 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        3
                        )
                    );
                    if (ap3 == NULL) {
                           return REcmaHelper::throwError("RSnapIntersection: Argument 3 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a3 = 
                    *ap3;
                
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->snap(a0
        ,
    a1
        ,
    a2
        ,
    a3);
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSnapIntersection.snap().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSnapIntersection::snap", context, engine);
            return result;
        }
         QScriptValue REcmaSnapIntersection::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSnapIntersection* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSnapIntersection(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSnapIntersection::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSnapIntersection* self = getSelf("RSnapIntersection", context);
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
    RSnapIntersection* REcmaSnapIntersection::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSnapIntersection* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSnapIntersection >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSnapIntersection.%1(): "
                        "This object is not a RSnapIntersection").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RSnapIntersection* REcmaSnapIntersection::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSnapIntersection* selfBase = getSelf(fName, context);
                RSnapIntersection* self = dynamic_cast<RSnapIntersection*>(selfBase);
                //return REcmaHelper::scriptValueTo<RSnapIntersection >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSnapIntersection.%1(): "
                    "This object is not a RSnapIntersection").arg(fName),
                    context);
            }

            return self;
            


        }
        