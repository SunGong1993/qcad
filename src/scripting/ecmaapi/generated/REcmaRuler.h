// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMARULER_H
        #define RECMARULER_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RRuler.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaRuler {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        setGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOrientation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOrientation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintTick
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RRuler* getSelf(const QString& fName, QScriptContext* context)
    ;static RRuler* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    