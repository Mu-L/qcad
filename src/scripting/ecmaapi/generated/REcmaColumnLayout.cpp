// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaColumnLayout.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QToolButton>
            
                #include "RGuiAction.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaColumnLayout::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RColumnLayout*) 0)));
        protoCreated = true;
    }

    
        // primary base class QLayout:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QLayout*>());

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
    
        // conversion for base class QLayout
        REcmaHelper::registerFunction(&engine, proto, getQLayout, "getQLayout");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, addItem, "addItem");
            
            REcmaHelper::registerFunction(&engine, proto, count, "count");
            
            REcmaHelper::registerFunction(&engine, proto, itemAt, "itemAt");
            
            REcmaHelper::registerFunction(&engine, proto, takeAt, "takeAt");
            
            REcmaHelper::registerFunction(&engine, proto, minimumSize, "minimumSize");
            
            REcmaHelper::registerFunction(&engine, proto, sizeHint, "sizeHint");
            
            REcmaHelper::registerFunction(&engine, proto, setGeometry, "setGeometry");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RColumnLayout*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RColumnLayout*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, getAccumulatedSortOrder, "getAccumulatedSortOrder");
            
            REcmaHelper::registerFunction(&engine, &ctor, getSortOrder, "getSortOrder");
            
            REcmaHelper::registerFunction(&engine, &ctor, getGroupSortOrder, "getGroupSortOrder");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RColumnLayout",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaColumnLayout::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RColumnLayout(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
                && (
                
                        context->argument(
                        1
                        ).isQObject()
                ) /* type: QToolBar * */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: int */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
            // argument isQObject
            QToolBar *
            a1 =
            qobject_cast<
            QToolBar *>
            ( context->argument(
            1
            ).
            toQObject()
            );
        
                    // argument isStandardType
                    int
                    a2 =
                    (int)
                    
                    context->argument( 2 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RColumnLayout
                    * cppResult =
                    new
                    RColumnLayout
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RColumnLayout(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaColumnLayout::getQLayout(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QLayout* cppResult =
                    qscriptvalue_cast<RColumnLayout*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaColumnLayout::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RColumnLayout"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaColumnLayout::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QLayout");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaColumnLayout::addItem
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::addItem", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::addItem";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RColumnLayout* self = 
                        getSelf("addItem", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QLayoutItem * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    QLayoutItem * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<QLayoutItem >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RColumnLayout: Argument 0 is not of type QLayoutItem *QLayoutItem *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->addItem(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.addItem().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::addItem", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::count
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::count", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::count";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RColumnLayout* self = 
                        getSelf("count", context);
                  

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
    // return type 'int'
    int cppResult =
        
               self->count();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.count().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::count", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::itemAt
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::itemAt", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::itemAt";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RColumnLayout* self = 
                        getSelf("itemAt", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QLayoutItem *'
    QLayoutItem * cppResult =
        
               self->itemAt(a0);
        // return type: QLayoutItem *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.itemAt().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::itemAt", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::takeAt
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::takeAt", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::takeAt";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RColumnLayout* self = 
                        getSelf("takeAt", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QLayoutItem *'
    QLayoutItem * cppResult =
        
               self->takeAt(a0);
        // return type: QLayoutItem *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.takeAt().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::takeAt", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::getAccumulatedSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::getAccumulatedSortOrder", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::getAccumulatedSortOrder";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isQObject()
        ) /* type: QObject * */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        RColumnLayout::
       getAccumulatedSortOrder(a0
        ,
    a1);
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.getAccumulatedSortOrder().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::getAccumulatedSortOrder", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::getSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::getSortOrder", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::getSortOrder";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isQObject()
        ) /* type: QObject * */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        RColumnLayout::
       getSortOrder(a0
        ,
    a1);
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.getSortOrder().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::getSortOrder", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::getGroupSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::getGroupSortOrder", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::getGroupSortOrder";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isQObject()
        ) /* type: QObject * */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        RColumnLayout::
       getGroupSortOrder(a0
        ,
    a1);
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.getGroupSortOrder().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::getGroupSortOrder", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::minimumSize
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::minimumSize", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::minimumSize";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RColumnLayout* self = 
                        getSelf("minimumSize", context);
                  

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
    // return type 'QSize'
    QSize cppResult =
        
               self->minimumSize();
        // return type: QSize
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.minimumSize().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::minimumSize", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::sizeHint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::sizeHint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RColumnLayout* self = 
                        getSelf("sizeHint", context);
                  

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
    // return type 'QSize'
    QSize cppResult =
        
               self->sizeHint();
        // return type: QSize
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.sizeHint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::sizeHint", context, engine);
            return result;
        }
         QScriptValue
        REcmaColumnLayout::setGeometry
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaColumnLayout::setGeometry", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaColumnLayout::setGeometry";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RColumnLayout* self = 
                        getSelf("setGeometry", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QRect */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    QRect*
                    ap0 =
                    qscriptvalue_cast<
                    QRect*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){

                           return REcmaHelper::throwError("RColumnLayout: Argument 0 is not of type QRect* or QSharedPointer<QRect>.",
                               context);
                    }
                    QRect& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setGeometry(a0);
    } else


        
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setGeometry();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RColumnLayout.setGeometry().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaColumnLayout::setGeometry", context, engine);
            return result;
        }
         QScriptValue REcmaColumnLayout::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RColumnLayout* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RColumnLayout(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaColumnLayout::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RColumnLayout* self = getSelf("RColumnLayout", context);
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
    RColumnLayout* REcmaColumnLayout::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RColumnLayout* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RColumnLayout >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RColumnLayout.%1(): "
                        "This object is not a RColumnLayout").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RColumnLayout* REcmaColumnLayout::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RColumnLayout* selfBase = getSelf(fName, context);
                RColumnLayout* self = dynamic_cast<RColumnLayout*>(selfBase);
                //return REcmaHelper::scriptValueTo<RColumnLayout >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RColumnLayout.%1(): "
                    "This object is not a RColumnLayout").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RColumnLayout*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RColumnLayout*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RColumnLayout*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    