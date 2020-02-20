// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMADOCUMENTINTERFACE_H
        #define RECMADOCUMENTINTERFACE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDocumentInterface.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaDocumentInterface {

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
        clearCaches
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStorage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGraphicsScenes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGraphicsViewWithFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGraphicsSceneWithFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addCoordinateListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        notifyCoordinateListeners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addLayerListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeLayerListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        notifyLayerListeners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addTransactionListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeTransactionListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        notifyTransactionListeners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScriptHandler
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isScriptRunning
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDefaultAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDefaultAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        terminateCurrentAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queueAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        killAllActions
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasCurrentAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentStatefulAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasCurrentStatefulAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        suspend
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resume
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setClickMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClickMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        terminateEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keyPressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keyReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseMoveEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mousePressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mouseDoubleClickEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        coordinateEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        coordinateEventPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        commandEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        commandEventPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        wheelEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        tabletEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        swipeGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        panGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        pinchGestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        propertyChangeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        ucsSetEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomChangeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        enableUpdates
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        disableUpdates
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        enableRegeneration
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        disableRegeneration
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        enableMouseTracking
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        disableMouseTracking
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateAllEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        regenerateScenes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateSelectionStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        regenerateViews
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        repaintViews
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        registerScene
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unregisterScene
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        importUrl
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        importFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCorrectedFileName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        tagState
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        undoToTag
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        undo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        redo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flushTransactions
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flushRedo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSnap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSnap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSnapRestriction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSnapRestriction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        snap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        restrictOrtho
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        highlightEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        highlightReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectBoxXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectAll
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectAll
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addZoomBoxToPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addShapeToPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addAuxShapeToPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addEntityToPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addDrawableToPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        beginPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        endPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPreviewEmpty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keepPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        showPropertiesOf
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomIn
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomOut
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        autoZoom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomToSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomPrevious
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        previewOperation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyOperation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        objectChangeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRelativeZero
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRelativeZero
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        lockRelativeZero
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unlockRelativeZero
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isRelativeZeroLocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        lockSnap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unlockSnap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toggleSnapLock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSnapLocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCursorPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCursorPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCursorOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCursorOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deleteTerminatedActions
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unsetCurrentViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentUcsName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastKnownViewWithFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLastKnownViewWithFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClipboard
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deleteClipboard
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isClipboard
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSuspended
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNotifyListeners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNotifyListeners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDeleting
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        eval
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDocumentInterface* getSelf(const QString& fName, QScriptContext* context)
    ;static RDocumentInterface* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumIoErrorCode(QScriptEngine* engine, const RDocumentInterface::IoErrorCode& value)
    ;static  void fromScriptValueEnumIoErrorCode(const QScriptValue& value, RDocumentInterface::IoErrorCode& out)
    ;};
    #endif
    