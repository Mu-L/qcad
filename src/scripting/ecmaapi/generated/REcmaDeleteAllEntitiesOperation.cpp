// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaDeleteAllEntitiesOperation.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RObject.h"
            
                #include "RTransaction.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaOperation.h"
                 void REcmaDeleteAllEntitiesOperation::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RDeleteAllEntitiesOperation*) 0)));
        protoCreated = true;
    }

    
        // primary base class ROperation:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<ROperation*>());

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
    
        // conversion for base class ROperation
        REcmaHelper::registerFunction(&engine, proto, getROperation, "getROperation");
        
        // conversion for base class RRequireHeap
        REcmaHelper::registerFunction(&engine, proto, getRRequireHeap, "getRRequireHeap");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, apply, "apply");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RDeleteAllEntitiesOperation*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RDeleteAllEntitiesOperation",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaDeleteAllEntitiesOperation::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDeleteAllEntitiesOperation(): Did you forget to construct with 'new'?"),
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
            RDeleteAllEntitiesOperation
                    * cppResult =
                    new
                    RDeleteAllEntitiesOperation
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RDeleteAllEntitiesOperation
                    * cppResult =
                    new
                    RDeleteAllEntitiesOperation
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDeleteAllEntitiesOperation(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaDeleteAllEntitiesOperation::getROperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                ROperation* cppResult =
                    qscriptvalue_cast<RDeleteAllEntitiesOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDeleteAllEntitiesOperation::getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RRequireHeap* cppResult =
                    qscriptvalue_cast<RDeleteAllEntitiesOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaDeleteAllEntitiesOperation::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RDeleteAllEntitiesOperation"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaDeleteAllEntitiesOperation::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("ROperation");
    
        list.append("RRequireHeap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaDeleteAllEntitiesOperation::apply
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDeleteAllEntitiesOperation::apply", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDeleteAllEntitiesOperation::apply";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDeleteAllEntitiesOperation* self = 
                        getSelf("apply", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){

                           return REcmaHelper::throwError("RDeleteAllEntitiesOperation: Argument 0 is not of type RDocument* or QSharedPointer<RDocument>.",
                               context);
                    }
                    RDocument& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'RTransaction'
    RTransaction cppResult =
        
               self->apply(a0);
        // return type: RTransaction
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){

                           return REcmaHelper::throwError("RDeleteAllEntitiesOperation: Argument 0 is not of type RDocument* or QSharedPointer<RDocument>.",
                               context);
                    }
                    RDocument& a0 = *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'RTransaction'
    RTransaction cppResult =
        
               self->apply(a0
        ,
    a1);
        // return type: RTransaction
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDeleteAllEntitiesOperation.apply().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDeleteAllEntitiesOperation::apply", context, engine);
            return result;
        }
         QScriptValue REcmaDeleteAllEntitiesOperation::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RDeleteAllEntitiesOperation* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RDeleteAllEntitiesOperation(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaDeleteAllEntitiesOperation::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RDeleteAllEntitiesOperation* self = getSelf("RDeleteAllEntitiesOperation", context);
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
    RDeleteAllEntitiesOperation* REcmaDeleteAllEntitiesOperation::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RDeleteAllEntitiesOperation* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RDeleteAllEntitiesOperation >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RDeleteAllEntitiesOperation.%1(): "
                        "This object is not a RDeleteAllEntitiesOperation").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RDeleteAllEntitiesOperation* REcmaDeleteAllEntitiesOperation::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RDeleteAllEntitiesOperation* selfBase = getSelf(fName, context);
                RDeleteAllEntitiesOperation* self = dynamic_cast<RDeleteAllEntitiesOperation*>(selfBase);
                //return REcmaHelper::scriptValueTo<RDeleteAllEntitiesOperation >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RDeleteAllEntitiesOperation.%1(): "
                    "This object is not a RDeleteAllEntitiesOperation").arg(fName),
                    context);
            }

            return self;
            


        }
        