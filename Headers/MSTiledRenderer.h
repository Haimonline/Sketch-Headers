//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSRenderingContextCGPoolProvider-Protocol.h>
#import <SketchRendering/MSTilingSystemProvider-Protocol.h>

@class CALayer, MSBitmapEffectsContextPool, MSCGContextPool, MSFlowItemCollector, MSMemoryBuffer, MSMetalRenderer, MSOverlayItemContainer, MSOverlayRenderer, MSRenderInstruction, MSRenderingCache, MSRenderingDriver, MSTileMipLevel, NSArray, NSDictionary, NSOperationQueue, NSString, NSView;
@protocol MSTiledRendererHostView, OS_os_log;

@interface MSTiledRenderer : NSObject <MSRenderingContextCGPoolProvider, MSTilingSystemProvider>
{
    MSRenderingDriver *_driver;
    double _compositingDuration[10];
    unsigned long long _compositingDurationIndex;
    struct _opaque_pthread_mutex_t _tileLock;
    NSObject<OS_os_log> *_log;
    BOOL _rasterisationInProgress;
    BOOL _clearOtherLevels;
    BOOL _forceSyncFirstFrame;
    NSView<MSTiledRendererHostView> *hostView;
    MSMetalRenderer *_renderer;
    NSArray *_tileLevels;
    MSTileMipLevel *_previousLevel;
    MSMemoryBuffer *_contextMemory;
    MSRenderingCache *_renderingCache;
    MSCGContextPool *_contextPool;
    MSBitmapEffectsContextPool *_bitmapEffectsContextPool;
    NSString *_previousPageObjectID;
    NSOperationQueue *_rasterisationQueue;
    MSRenderInstruction *_renderedInstruction;
    MSRenderInstruction *_compositedInstruction;
    NSString *_renderedPageID;
    MSFlowItemCollector *_flowCollector;
    NSDictionary *_cachedFlows;
    MSOverlayItemContainer *_debugItemContainer;
    MSOverlayRenderer *_overlayRenderer;
}

+ (BOOL)performRendererAvailabilityChecks;
- (void).cxx_destruct;
@property(retain, nonatomic) MSOverlayRenderer *overlayRenderer; // @synthesize overlayRenderer=_overlayRenderer;
@property(retain, nonatomic) MSOverlayItemContainer *debugItemContainer; // @synthesize debugItemContainer=_debugItemContainer;
@property(copy, nonatomic) NSDictionary *cachedFlows; // @synthesize cachedFlows=_cachedFlows;
@property(retain, nonatomic) MSFlowItemCollector *flowCollector; // @synthesize flowCollector=_flowCollector;
@property(nonatomic) BOOL forceSyncFirstFrame; // @synthesize forceSyncFirstFrame=_forceSyncFirstFrame;
@property(retain) NSString *renderedPageID; // @synthesize renderedPageID=_renderedPageID;
@property(copy, nonatomic) MSRenderInstruction *compositedInstruction; // @synthesize compositedInstruction=_compositedInstruction;
@property(copy) MSRenderInstruction *renderedInstruction; // @synthesize renderedInstruction=_renderedInstruction;
@property(readonly, nonatomic) NSOperationQueue *rasterisationQueue; // @synthesize rasterisationQueue=_rasterisationQueue;
@property(retain, nonatomic) NSString *previousPageObjectID; // @synthesize previousPageObjectID=_previousPageObjectID;
@property(retain, nonatomic) MSBitmapEffectsContextPool *bitmapEffectsContextPool; // @synthesize bitmapEffectsContextPool=_bitmapEffectsContextPool;
@property(retain, nonatomic) MSCGContextPool *contextPool; // @synthesize contextPool=_contextPool;
@property BOOL clearOtherLevels; // @synthesize clearOtherLevels=_clearOtherLevels;
@property BOOL rasterisationInProgress; // @synthesize rasterisationInProgress=_rasterisationInProgress;
@property(retain, nonatomic) MSRenderingCache *renderingCache; // @synthesize renderingCache=_renderingCache;
@property(retain, nonatomic) MSMemoryBuffer *contextMemory; // @synthesize contextMemory=_contextMemory;
@property(nonatomic) __weak MSTileMipLevel *previousLevel; // @synthesize previousLevel=_previousLevel;
@property(readonly, nonatomic) NSArray *tileLevels; // @synthesize tileLevels=_tileLevels;
@property(readonly, nonatomic) MSMetalRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak NSView<MSTiledRendererHostView> *hostView; // @synthesize hostView;
- (void)_scheduleRedraw;
- (void)updateContentWithRenderInstruction:(id)arg1 synchronously:(BOOL)arg2 hasUserFocus:(BOOL)arg3;
- (void)_doUpdateWithRenderInstruction:(id)arg1 synchronously:(BOOL)arg2 hasUserFocus:(BOOL)arg3;
- (BOOL)_drawTilesForPage:(id)arg1 hasArtboards:(BOOL)arg2 renderingParameters:(struct MSRenderingParameters)arg3 displayPixels:(BOOL)arg4 tiles:(id)arg5 overlaySettings:(id)arg6 canvasColorSpace:(id)arg7 overlayTexture:(id)arg8 flowItems:(id)arg9 hasUserFocus:(BOOL)arg10;
- (id)collectflowItems;
- (CDUnknownBlockType)prepareForRenderWithDiff:(id)arg1;
- (void)_unionDirtyRegion:(CDStruct_75f85af1 *)arg1;
- (id)_createDocumentColorSpaceWithCanvasColorSpace:(id)arg1 document:(id)arg2;
- (struct CGRect)_updatePageObjectID:(id)arg1 document:(id)arg2 dirtyRect:(struct CGRect)arg3;
- (void)_removeAllTilesAndClearDirtyRegions;
- (CDStruct_3b01f0aa *)_visibleDirtyRects:(struct CGRect)arg1 totalZoom:(double)arg2 previousContentScale:(double)arg3 level:(id)arg4;
- (BOOL)_rasteriseContentInRects:(CDStruct_3b01f0aa *)arg1 forPage:(id)arg2 zoomValue:(double)arg3 backingScale:(double)arg4 instruction:(id)arg5 tiles:(id)arg6 renderContentSynchronously:(BOOL)arg7 didCompleteSemaphore:(id)arg8;
- (void)_rasterisationFinishedForTileLevel:(id)arg1 page:(id)arg2 instruction:(id)arg3;
- (void)_doParallelContentRasterisationInRects:(CDStruct_3b01f0aa *)arg1 forPage:(id)arg2 zoomValue:(double)arg3 backingScale:(double)arg4 instruction:(id)arg5 contentsScale:(double)arg6 tiles:(id)arg7;
- (void)_renderTilesWithTotalZoom:(double)arg1 renderingParameters:(struct MSRenderingParameters)arg2 displayPixels:(BOOL)arg3 tiles:(id)arg4;
- (CDStruct_75f85af1 *)_renderTileLevelWithTotalZoom:(double)arg1 displayPixels:(BOOL)arg2 visibleRect:(struct CGRect)arg3 tiles:(id)arg4 inRegion:(const CDStruct_75f85af1 *)arg5;
- (id)_findTileLevelForContentWithZoom:(double)arg1;
@property(readonly, nonatomic) CALayer *layer;
- (BOOL)isDrawing;
@property(readonly, nonatomic) MSRenderingDriver *driver;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 syncFirstFrame:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

