//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSGPURenderer-Protocol.h>

@class MSOpenGLLayer, MSOpenGLOffscreenBuffer, NSString;

@interface MSOpenGLRenderer : NSObject <MSGPURenderer>
{
    BOOL _hasScissorRect;
    int _drawableWidth;
    int _drawableHeight;
    MSOpenGLLayer *_openGLLayer;
    MSOpenGLOffscreenBuffer *_offscreenBuffer;
    CDStruct_bf95b13b _scissorRect;
}

+ (id)createWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (BOOL)isCompatibleWithAvailableGPUs;
@property(retain, nonatomic) MSOpenGLOffscreenBuffer *offscreenBuffer; // @synthesize offscreenBuffer=_offscreenBuffer;
@property(nonatomic) int drawableHeight; // @synthesize drawableHeight=_drawableHeight;
@property(nonatomic) int drawableWidth; // @synthesize drawableWidth=_drawableWidth;
@property(nonatomic) BOOL hasScissorRect; // @synthesize hasScissorRect=_hasScissorRect;
@property(nonatomic) CDStruct_bf95b13b scissorRect; // @synthesize scissorRect=_scissorRect;
@property(retain, nonatomic) MSOpenGLLayer *openGLLayer; // @synthesize openGLLayer=_openGLLayer;
- (void).cxx_destruct;
- (CDStruct_ffe6b7c1)maximumTextureSize;
- (void)unlockTextures;
- (void)lockTextures;
- (BOOL)requiresSynchronousRendering;
- (id)layer;
- (id)createTextureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)resetScissorRect;
- (void)setScissorRectWithX:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)drawShadowForArtboardInRect:(struct CGRect)arg1 selected:(BOOL)arg2 shadow:(id)arg3;
- (void)drawTexturedQuadInDestinationRect:(struct CGRect)arg1 sourceTexture:(id)arg2 sourceRect:(struct CGRect)arg3 bilinearFilter:(BOOL)arg4;
- (void)drawTexturedQuadInDestinationRect:(struct CGRect)arg1 sourceTexture:(id)arg2 bilinearFilter:(BOOL)arg3;
- (void)drawTexturedTriangleMesh:(const CDStruct_e817f9f7 *)arg1 sourceTexture:(id)arg2;
- (void)drawColorTriangleMesh:(const CDStruct_e817f9f7 *)arg1 disableOverlappingFragmentBlending:(BOOL)arg2;
- (void)drawColorQuadInRect:(struct CGRect)arg1 color:(CDStruct_818bb265)arg2;
- (void)_endDrawCall;
- (void)_beginDrawCall;
- (void)endFrameAndWaitForFrame:(BOOL)arg1;
- (BOOL)beginFrameWithClearColor:(id)arg1 drawableSize:(struct CGSize)arg2 backingScaleFactor:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)scheduleDrawBlock:(CDUnknownBlockType)arg1;
- (BOOL)_renderingOffscreen;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

