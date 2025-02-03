// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaMixedOperation.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RObject.h"
            
                #include "RTransaction.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaOperation.h"
                 void REcmaMixedOperation::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RMixedOperation*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, addObject, "addObject");
            
            REcmaHelper::registerFunction(&engine, proto, deleteObject, "deleteObject");
            
            REcmaHelper::registerFunction(&engine, proto, endCycle, "endCycle");
            
            REcmaHelper::registerFunction(&engine, proto, apply, "apply");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RMixedOperation*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    ctor.setProperty("NoMode",
    QScriptValue(RMixedOperation::NoMode),
    QScriptValue::ReadOnly);


    ctor.setProperty("UseCurrentAttributes",
    QScriptValue(RMixedOperation::UseCurrentAttributes),
    QScriptValue::ReadOnly);


    ctor.setProperty("Delete",
    QScriptValue(RMixedOperation::Delete),
    QScriptValue::ReadOnly);


    ctor.setProperty("ForceNew",
    QScriptValue(RMixedOperation::ForceNew),
    QScriptValue::ReadOnly);


    ctor.setProperty("EndCycle",
    QScriptValue(RMixedOperation::EndCycle),
    QScriptValue::ReadOnly);


    // enum conversions:
    
    qScriptRegisterMetaType<RMixedOperation::Mode>(
        &engine,
        toScriptValueEnumMode,
        fromScriptValueEnumMode,
        ctor.property(QString::fromLatin1("prototype"))
    );

        
    // init class:
    engine.globalObject().setProperty("RMixedOperation",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaMixedOperation::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMixedOperation(): Did you forget to construct with 'new'?"),
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
            RMixedOperation
                    * cppResult =
                    new
                    RMixedOperation
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
            RMixedOperation
                    * cppResult =
                    new
                    RMixedOperation
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMixedOperation(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaMixedOperation::getROperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                ROperation* cppResult =
                    qscriptvalue_cast<RMixedOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaMixedOperation::getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RRequireHeap* cppResult =
                    qscriptvalue_cast<RMixedOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaMixedOperation::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RMixedOperation"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaMixedOperation::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("ROperation");
    
        list.append("RRequireHeap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaMixedOperation::addObject
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMixedOperation::addObject", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMixedOperation::addObject";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMixedOperation* self = 
                        getSelf("addObject", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QSharedPointer < RObject > */
    
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        
                          // never clone RObject based object:
                          QSharedPointer < RObject >(o0);
                        
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
    // end of arguments

    // call C++ function:
    // return type 'QSharedPointer < RObject >'
    QSharedPointer < RObject > cppResult =
        
               self->addObject(a0);
        // return type: QSharedPointer < RObject >
                // Shared pointer to object, cast to best match:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QSharedPointer < RObject > */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        
                          // never clone RObject based object:
                          QSharedPointer < RObject >(o0);
                        
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QSharedPointer < RObject >'
    QSharedPointer < RObject > cppResult =
        
               self->addObject(a0
        ,
    a1);
        // return type: QSharedPointer < RObject >
                // Shared pointer to object, cast to best match:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QSharedPointer < RObject > */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        
                          // never clone RObject based object:
                          QSharedPointer < RObject >(o0);
                        
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    bool
                    a2 =
                    (bool)
                    
                    context->argument( 2 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QSharedPointer < RObject >'
    QSharedPointer < RObject > cppResult =
        
               self->addObject(a0
        ,
    a1
        ,
    a2);
        // return type: QSharedPointer < RObject >
                // Shared pointer to object, cast to best match:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMixedOperation.addObject().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMixedOperation::addObject", context, engine);
            return result;
        }
         QScriptValue
        REcmaMixedOperation::deleteObject
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMixedOperation::deleteObject", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMixedOperation::deleteObject";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMixedOperation* self = 
                        getSelf("deleteObject", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QSharedPointer < RObject > */
    
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        
                          // never clone RObject based object:
                          QSharedPointer < RObject >(o0);
                        
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->deleteObject(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMixedOperation.deleteObject().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMixedOperation::deleteObject", context, engine);
            return result;
        }
         QScriptValue
        REcmaMixedOperation::endCycle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMixedOperation::endCycle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMixedOperation::endCycle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMixedOperation* self = 
                        getSelf("endCycle", context);
                  

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
    // return type 'void'
    
               self->endCycle();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMixedOperation.endCycle().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMixedOperation::endCycle", context, engine);
            return result;
        }
         QScriptValue
        REcmaMixedOperation::apply
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMixedOperation::apply", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMixedOperation::apply";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMixedOperation* self = 
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

                           return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type RDocument* or QSharedPointer<RDocument>.",
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

                           return REcmaHelper::throwError("RMixedOperation: Argument 0 is not of type RDocument* or QSharedPointer<RDocument>.",
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RMixedOperation.apply().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMixedOperation::apply", context, engine);
            return result;
        }
         QScriptValue REcmaMixedOperation::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RMixedOperation* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RMixedOperation(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaMixedOperation::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RMixedOperation* self = getSelf("RMixedOperation", context);
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
    RMixedOperation* REcmaMixedOperation::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RMixedOperation* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RMixedOperation >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RMixedOperation.%1(): "
                        "This object is not a RMixedOperation").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RMixedOperation* REcmaMixedOperation::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RMixedOperation* selfBase = getSelf(fName, context);
                RMixedOperation* self = dynamic_cast<RMixedOperation*>(selfBase);
                //return REcmaHelper::scriptValueTo<RMixedOperation >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RMixedOperation.%1(): "
                    "This object is not a RMixedOperation").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaMixedOperation::toScriptValueEnumMode(QScriptEngine* engine, const RMixedOperation::Mode& value)
    
        {
            return QScriptValue(engine, (int)value);
        }
         void REcmaMixedOperation::fromScriptValueEnumMode(const QScriptValue& value, RMixedOperation::Mode& out)
    
        {
            out = qvariant_cast<RMixedOperation::Mode>(value.toVariant());
        }
        