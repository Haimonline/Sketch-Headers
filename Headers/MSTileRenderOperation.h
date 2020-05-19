//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MSOverlaySettings, MSTiledRenderer, NSArray, NSBitmapImageRep, NSColorSpace, NSOperationQueue;
@protocol MSRenderingContextCacheProvider;

@interface MSTileRenderOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    NSBitmapImageRep *_renderedImage;
    NSArray *_renderPasses;
    id <MSRenderingContextCacheProvider> _cacheProvider;
    NSColorSpace *_canvasColorSpace;
    MSTiledRenderer *_renderer;
    NSOperationQueue *_renderPassQueue;
    MSOverlaySettings *_overlaySettings;
    struct MSRenderingParameters _renderingParameters;
}

+ (id)renderOperationWithPage:(id)arg1 inDocument:(id)arg2 renderingParameters:(struct MSRenderingParameters)arg3 cacheProvider:(id)arg4 canvasColorSpace:(id)arg5 overlaySettings:(id)arg6;
+ (id)renderOperationWithRenderPasses:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 cacheProvider:(id)arg3 canvasColorSpace:(id)arg4 overlaySettings:(id)arg5;
+ (id)bitmapImageFromRenderPasses:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 cacheProvider:(id)arg3 canvasColorSpace:(id)arg4 overlaySettings:(id)arg5;
+ (id)bitmapImageRenderForPage:(id)arg1 inDocument:(id)arg2 renderingParameters:(struct MSRenderingParameters)arg3 cacheProvider:(id)arg4 canvasColorSpace:(id)arg5 overlaySettings:(id)arg6;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) MSOverlaySettings *overlaySettings; // @synthesize overlaySettings=_overlaySettings;
@property(retain, nonatomic) NSOperationQueue *renderPassQueue; // @synthesize renderPassQueue=_renderPassQueue;
@property(retain, nonatomic) MSTiledRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) NSColorSpace *canvasColorSpace; // @synthesize canvasColorSpace=_canvasColorSpace;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> cacheProvider; // @synthesize cacheProvider=_cacheProvider;
@property(nonatomic) struct MSRenderingParameters renderingParameters; // @synthesize renderingParameters=_renderingParameters;
@property(copy, nonatomic) NSArray *renderPasses; // @synthesize renderPasses=_renderPasses;
@property(retain, nonatomic) NSBitmapImageRep *renderedImage; // @synthesize renderedImage=_renderedImage;
- (void).cxx_destruct;
- (void)renderComplete:(id)arg1;
- (void)start;
- (void)renderNextPass:(id)arg1 image:(struct CGImage *)arg2;
- (BOOL)asynchronous;

@end

