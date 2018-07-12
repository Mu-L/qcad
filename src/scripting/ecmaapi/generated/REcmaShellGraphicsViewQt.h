


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #ifndef RECMASHELLGRAPHICSVIEWQT_H
        #define RECMASHELLGRAPHICSVIEWQT_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RGraphicsViewQt.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaShellGraphicsViewQt : public RGraphicsViewQt {

        public:
      
    // Destructor:
    
            ~REcmaShellGraphicsViewQt();
        static RGraphicsViewQt* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellGraphicsViewQt* getSelfShell(const QString& fName, QScriptContext* context)
    ;
    
    
    
    // Constructors:
    
      REcmaShellGraphicsViewQt(
                QWidget * parent
        = NULL, bool showFocus
        = true
            );
        
    
    
      void disableGestures(
                
            );
        
    
    
      void repaintView(
                
            );
        
    
    
      void repaintNow(
                
            );
        
    
    
      void giveFocus(
                
            );
        
    
    
      bool hasFocus(
                
            );
        
    
    
      void removeFocus(
                
            );
        
    
    
      int getWidth(
                
            );
        
    
    
      int getHeight(
                
            );
        
    
    
      QRect getRect(
                
            );
        
    
    
      bool getSignalsBlocked(
                
            );
        
    
    
      void setSignalsBlocked(
                bool on
            );
        
    
    
      QCursor getCursor(
                
            );
        
    
    
      void setCursor(
                Qt::CursorShape cursorShape
            );
        
      void setCursor(
                const QCursor & cursor
            );
        
    
    
      void setFocusFrameWidget(
                QFrame * w
            );
        
    
    
      void viewportChangeEvent(
                
            );
        
    
    
      void emitUpdateSnapInfo(
                RSnap * snap, RSnapRestriction * restriction
            );
        
    
    
      void emitUpdateTextLabel(
                const RTextLabel & textLabel
            );
        
    
    
      void simulateMouseMoveEvent(
                
            );
        
    
    
      double getDevicePixelRatio(
                
            );
        
    
    
      bool registerForFocus(
                
            );
        
    
    
      QSize sizeHint(
                
            );
        
    
    
      bool event(
                QEvent * e
            );
        
    
    
      bool gestureEvent(
                QGestureEvent * event
            );
        
    
    
      void focusInEvent(
                QFocusEvent * event
            );
        
    
    
      void focusOutEvent(
                QFocusEvent * event
            );
        
    
    
      void tabletEvent(
                QTabletEvent * event
            );
        
    
    
      void mouseMoveEvent(
                QMouseEvent * event
            );
        
    
    
      void mousePressEvent(
                QMouseEvent * event
            );
        
    
    
      void mouseReleaseEvent(
                QMouseEvent * event
            );
        
    
    
      void mouseDoubleClickEvent(
                QMouseEvent * event
            );
        
    
    
      void wheelEvent(
                QWheelEvent * event
            );
        
    
    
      void paintEvent(
                QPaintEvent * arg1
            );
        
    
    
      void resizeEvent(
                QResizeEvent * event
            );
        
    
    
      void keyPressEvent(
                QKeyEvent * event
            );
        
    
    
      void keyReleaseEvent(
                QKeyEvent * event
            );
        
    
    
      void dragEnterEvent(
                QDragEnterEvent * event
            );
        
    
    
      void dropEvent(
                QDropEvent * event
            );
        
    
  
        // methods of 1st level base class RGraphicsViewImage:
        
      void clear(
                
            );
        
    
      void setViewportNumber(
                int n
            );
        
    
      int getViewportNumber(
                
            );
        
    
      void setNavigationAction(
                RAction * action
            );
        
    
      RBox getBox(
                
            );
        
    
      void autoZoom(
                int margin
        = RDEFAULT_MIN1, bool ignoreEmpty
        = false, bool ignoreLineweight
        = false
            );
        
    
      void zoomTo(
                const RBox & window, int margin
        = 0
            );
        
    
      void zoom(
                const RVector & center, double factor
            );
        
    
      void pan(
                const RVector & delta, bool regen
        = true
            );
        
    
      void centerToBox(
                const RBox & box
            );
        
    
      void centerToPoint(
                const RVector & point
            );
        
    
      void setGrid(
                RGrid * grid
            );
        
    
      RGrid * getGrid(
                
            );
        
    
      double getFactor(
                bool includeStepFactor
        = true
            );
        
    
      void setFactor(
                double f, bool regen
        = true
            );
        
    
      RVector getOffset(
                bool includeStepOffset
        = true
            );
        
    
      void setOffset(
                const RVector & offset, bool regen
        = true
            );
        
    
      QColor getBackgroundColor(
                
            );
        
    
      void setMargin(
                int m
            );
        
    
      void setColorMode(
                RGraphicsView::ColorMode cm
            );
        
    
      void setHairlineMode(
                bool on
            );
        
    
      bool getHairlineMode(
                
            );
        
    
      void setHairlineMinimumMode(
                bool on
            );
        
    
      bool getHairlineMinimumMode(
                
            );
        
    
      void setAntialiasing(
                bool on
            );
        
    
      bool getAntialiasing(
                
            );
        
    
      RGraphicsScene * getScene(
                
            );
        
    
      RDocument * getDocument(
                
            );
        
    
      RDocumentInterface * getDocumentInterface(
                
            );
        
    
      void setExporting(
                bool on
            );
        
    
      bool isExporting(
                
            );
        
    
      bool isPrintingOrExporting(
                
            );
        
    
      void setPrinting(
                bool on
            );
        
    
      bool isPrinting(
                
            );
        
    
      void setPrintPreview(
                bool on
            );
        
    
      bool isPrintPreview(
                
            );
        
    
      void setPrintPointSize(
                const RVector & s
            );
        
    
      void setTextHeightThresholdOverride(
                int v
            );
        
    
      int getTextHeightThresholdOverride(
                
            );
        
    
      bool isGridVisible(
                
            );
        
    
      void setGridVisible(
                bool on
            );
        
    
      void setScene(
                RGraphicsSceneQt * scene, bool regen
        = true
            );
        
    
      void setBackgroundColor(
                const QColor & col
            );
        
    
      void regenerate(
                bool force
        = false
            );
        
    
      void updateImage(
                
            );
        
    
      void saveViewport(
                
            );
        
    
      void restoreViewport(
                
            );
        
    
      RVector mapFromView(
                const RVector & v, double z
        = 0.0
            );
        
    
      RVector mapToView(
                const RVector & v
            );
        
    
      double mapDistanceFromView(
                double d
            );
        
    
      double mapDistanceToView(
                double d
            );
        
    
      void resizeImage(
                int w, int h
            );
        
    
      void paintGridPoint(
                const RVector & ucsPosition
            );
        
    
      void paintGridLine(
                const RLine & ucsPosition
            );
        
    
      void setPaintOrigin(
                bool val
            );
        
    
      void setPanOptimization(
                bool on
            );
        
    
      bool getPanOptimization(
                
            );
        
    
      void paintEntities(
                QPainter * painter, const RBox & queryBox
            );
        
    
      void paintEntity(
                QPainter * painter, REntity::Id id, bool preview
        = false
            );
        
    
      QImage getBuffer(
                
            );
        
    
      QTransform getTransform(
                
            );
        
    
      void clearBackground(
                
            );
        
    
      void addToBackground(
                const RPainterPath & path
            );
        
    
      void setBackgroundTransform(
                double bgFactor, const RVector & bgOffset
            );
        
    
      void clearOverlay(
                int overlayId
            );
        
      void clearOverlay(
                int overlayId, RObject::Id objectId
            );
        
    
      void addToOverlay(
                int overlayId, RObject::Id objectId, const RGraphicsSceneDrawable & drawable
            );
        
    
      void setColorCorrectionOverride(
                bool on
            );
        
    
      bool getColorCorrectionOverride(
                
            );
        
    
      void setMinimumLineweight(
                double lw
            );
        
    
      void setPaintOffset(
                const RVector & offset
            );
        
    
      RVector getPaintOffset(
                
            );
        
    
      bool isAlphaEnabled(
                
            );
        
    
      void setAlphaEnabled(
                bool on
            );
        
    
            // methods of 2nd level base class RGraphicsView:
            
      void clearCaches(
                
            );
        
    
      void setDisplayOnlyCurrentUcs(
                bool on
            );
        
    
      QList < RVector > mapCornersFromView(
                
            );
        
    
      RVector getMinimum(
                
            );
        
    
      RVector getMaximum(
                
            );
        
    
      void handleTerminateEvent(
                RTerminateEvent & event
            );
        
    
      void handleKeyPressEvent(
                QKeyEvent & event
            );
        
    
      void handleKeyReleaseEvent(
                QKeyEvent & event
            );
        
    
      void handleMouseMoveEvent(
                RMouseEvent & event
            );
        
    
      void handleMousePressEvent(
                RMouseEvent & event
            );
        
    
      void handleMouseReleaseEvent(
                RMouseEvent & event
            );
        
    
      void handleMouseDoubleClickEvent(
                RMouseEvent & event
            );
        
    
      void handleWheelEvent(
                RWheelEvent & event
            );
        
    
      void handleTabletEvent(
                RTabletEvent & event
            );
        
    
      void handleSwipeGestureEvent(
                QSwipeGesture & gesture
            );
        
    
      void handlePanGestureEvent(
                QPanGesture & gesture
            );
        
    
      void handlePinchGestureEvent(
                QPinchGesture & gesture
            );
        
    
      void zoomIn(
                
            );
        
      void zoomIn(
                const RVector & center, double factor
        = 1.2
            );
        
    
      void zoomOut(
                
            );
        
      void zoomOut(
                const RVector & center, double factor
        = 1.2
            );
        
    
      void zoomPrevious(
                
            );
        
    
      bool zoomToSelection(
                int margin
        = RDEFAULT_MIN1
            );
        
    
      bool zoomToEntities(
                const QSet < REntity::Id > & ids, int margin
        = RDEFAULT_MIN1
            );
        
    
      void startPan(
                
            );
        
    
      int isActive(
                
            );
        
    
      RRefPoint getClosestReferencePoint(
                const RVector & screenPosition, int range
            );
        
      RRefPoint getClosestReferencePoint(
                REntity::Id entityId, const RVector & screenPosition
            );
        
    
      REntity::Id getClosestEntity(
                const RVector & screenPosition, int range, int strictRange, bool includeLockedLayers
        = true, bool selectedOnly
        = false
            );
        
    
      int getMargin(
                
            );
        
    
      RGraphicsView::ColorMode getColorMode(
                
            );
        
    
      QList < RTextLabel > getTextLabels(
                
            );
        
    
      void clearTextLabels(
                
            );
        
    
      void addTextLabel(
                const RTextLabel & textLabel
            );
        
    
      RVector getLastKnownMousePosition(
                
            );
        
    
      double getCurrentStepScaleFactor(
                
            );
        
    
      void setCurrentStepScaleFactor(
                double f
            );
        
    
      RVector getCurrentStepOffset(
                
            );
        
    
      void setCurrentStepOffset(
                const RVector & s
            );
        
    
      void updateTextHeightThreshold(
                
            );
        
    
      bool isPathVisible(
                const RPainterPath & path
            );
        
    
      bool isShared(
                
            );
        
    

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	static  QScriptValue
        sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        event
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        gestureEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        focusInEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        focusOutEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        tabletEvent
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
        wheelEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resizeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keyPressEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        keyReleaseEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        dragEnterEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        dropEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;QScriptValue __qtscript_self;
            };
            Q_DECLARE_METATYPE(REcmaShellGraphicsViewQt*)
        
	#endif
    