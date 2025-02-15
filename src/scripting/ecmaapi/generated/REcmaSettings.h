// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASETTINGS_H
        #define RECMASETTINGS_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RSettings.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSettings {

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
        uninit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNoWrite
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAppId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDevicePixelRatio
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLocale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        loadTranslations
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        translate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOriginalArguments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOriginalArguments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArguments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntListArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFloatArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColorArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoxArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        testArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDeployed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getApplicationPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPluginPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPluginPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getThemePath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStandardLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCacheLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDataLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTempLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDesktopLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocumentsLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHomeLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPluginsLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isGuiEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDebuggerEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasQuitFlag
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setQuitFlag
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFileName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLaunchPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLaunchPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRulerFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRulerFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSnapLabelFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSnapLabelFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getInfoLabelFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStatusBarFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSelectionColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePointColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartReferencePointColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndReferencePointColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSecondaryReferencePointColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTertiaryReferencePointColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCrossHairColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCrossHairColorInactive
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGridColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMetaGridColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOriginColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHighResolutionGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoScaleGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoScaleMetaGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoScalePatterns
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoZoomOnLoad
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColorCorrection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColorCorrectionDisableForPrinting
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColorThreshold
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFadingFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextHeightThreshold
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArcAngleLengthThreshold
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinArcAngleStep
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDashThreshold
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQtVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQtVersionString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isQt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCompilerVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOSVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReleaseDate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVersionString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNumericalVersionString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMajorVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinorVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRevisionVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBuildVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRevisionString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFirstStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFirstStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNewVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isNewVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPreviousVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPreviousVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSnapRange
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPickRange
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getZeroWeightWeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPreviewEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLimitZoomAndScroll
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShowCrosshair
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShowCrosshair
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShowLargeCrosshair
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShowLargeCrosshair
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShowLargeOriginAxis
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShowLargeOriginAxis
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getConcurrentDrawing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setConcurrentDrawing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNumberLocale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        initRecentFiles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addRecentFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeRecentFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRecentFiles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearRecentFiles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColorValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoolValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDoubleValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStringValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStringListValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScaleList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setApplicationNameOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getApplicationNameOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasApplicationNameOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAllKeys
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQSettings
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resetCache
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resetDarkModeCache
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setXDataEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isXDataEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNextVersionEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isNextVersionEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoScaleLinetypePatterns
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getApplyLineweightToPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUseSecondarySelectionColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUseSolidLineSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMouseThreshold
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPositionByMousePress
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAllowMouseMoveInterruptionsOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAllowMouseMoveInterruptions
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isTextRenderedAsText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayer0CompatibilityOn
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSelectBlockWithAttribute
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHideAttributeWithBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getImportRecomputedDimBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIgnoreBlockReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIgnoreAllReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePointSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePointShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxReferencePointEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxReferencePointEntitiesDisplay
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyEditorShowOnRequest
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSimpleTextAlignLeft
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRenderThinPolylines1px
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxHatchTime
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxHatchComplexity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPolarCoordinateSeparator
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCartesianCoordinateSeparator
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRelativeCoordinatePrefix
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDarkMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasDarkGuiBackground
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasCustomStyleSheet
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPrinterNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDefaultPrinterName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendOpenGLMessage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOpenGLMessages
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RSettings* getSelf(const QString& fName, QScriptContext* context)
    ;static RSettings* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    