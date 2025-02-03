// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaDeleteSelectionOperation.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaClipboardOperation.h"
                 void REcmaDeleteSelectionOperation::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RDeleteSelectionOperation*) 0)));
        protoCreated = true;
    }

    
        // primary base class RClipboardOperation:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RClipboardOperation*>());

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
    
        // conversion for base class RClipboardOperation
        REcmaHelper::registerFunction(&engine, proto, getRClipboardOperation, "getRClipboardOperation");
        
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
            qMetaTypeId<RDeleteSelectionOperation*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RDeleteSelectionOperation",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaDeleteSelectionOperation::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDeleteSelectionOperation(): Did you forget to construct with 'new'?"),
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
            RDeleteSelectionOperation
                    * cppResult =
                    new
                    RDeleteSelectionOperation
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDeleteSelectionOperation(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaDeleteSelectionOperation::getRClipboardOperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RClipboardOperation* cppResult =
                    qscriptvalue_cast<RDeleteSelectionOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDeleteSelectionOperation::getROperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                ROperation* cppResult =
                    qscriptvalue_cast<RDeleteSelectionOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDeleteSelectionOperation::getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RRequireHeap* cppResult =
                    qscriptvalue_cast<RDeleteSelectionOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaDeleteSelectionOperation::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RDeleteSelectionOperation"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaDeleteSelectionOperation::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RClipboardOperation");
    
        list.append("ROperation");
    
        list.append("RRequireHeap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaDeleteSelectionOperation::apply
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDeleteSelectionOperation::apply", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDeleteSelectionOperation::apply";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDeleteSelectionOperation* self = 
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

                           return REcmaHelper::throwError("RDeleteSelectionOperation: Argument 0 is not of type RDocument* or QSharedPointer<RDocument>.",
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

                           return REcmaHelper::throwError("RDeleteSelectionOperation: Argument 0 is not of type RDocument* or QSharedPointer<RDocument>.",
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RDeleteSelectionOperation.apply().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDeleteSelectionOperation::apply", context, engine);
            return result;
        }
         QScriptValue REcmaDeleteSelectionOperation::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RDeleteSelectionOperation* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RDeleteSelectionOperation(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaDeleteSelectionOperation::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RDeleteSelectionOperation* self = getSelf("RDeleteSelectionOperation", context);
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
    RDeleteSelectionOperation* REcmaDeleteSelectionOperation::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RDeleteSelectionOperation* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RDeleteSelectionOperation >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RDeleteSelectionOperation.%1(): "
                        "This object is not a RDeleteSelectionOperation").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RDeleteSelectionOperation* REcmaDeleteSelectionOperation::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RDeleteSelectionOperation* selfBase = getSelf(fName, context);
                RDeleteSelectionOperation* self = dynamic_cast<RDeleteSelectionOperation*>(selfBase);
                //return REcmaHelper::scriptValueTo<RDeleteSelectionOperation >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RDeleteSelectionOperation.%1(): "
                    "This object is not a RDeleteSelectionOperation").arg(fName),
                    context);
            }

            return self;
            


        }
        