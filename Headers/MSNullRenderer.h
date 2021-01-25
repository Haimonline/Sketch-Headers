//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSAllRenderers-Protocol.h>

@class NSString;

@interface MSNullRenderer : NSObject <MSAllRenderers>
{
}

- (void)drawGradient:(id)arg1 inRect:(struct CGRect)arg2 forBorderThickness:(double)arg3 context:(id)arg4 cacheKey:(id)arg5;
- (void)renderInnerShadow:(id)arg1 path:(id)arg2 cacheObject:(id)arg3 context:(id)arg4;
- (void)renderShadow:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)renderShadow:(id)arg1 path:(id)arg2 windingRule:(unsigned long long)arg3 options:(id)arg4 type:(unsigned long long)arg5 borderPosition:(long long)arg6 fillShouldClip:(BOOL)arg7 lineWidth:(double)arg8 cacheObject:(id)arg9 context:(id)arg10;
- (void)renderBackgroundBlurBehindLayer:(id)arg1 context:(id)arg2 clippedToPath:(id)arg3;
- (void)renderGradientBorder:(id)arg1 path:(id)arg2 advancedOptions:(id)arg3 originalPath:(id)arg4 frame:(struct CGRect)arg5 context:(id)arg6;
- (void)renderBorder:(id)arg1 path:(id)arg2 advancedOptions:(id)arg3 applyClip:(BOOL)arg4 context:(id)arg5;
- (void)renderFill:(id)arg1 path:(id)arg2 layer:(id)arg3 index:(long long)arg4 rect:(struct CGRect)arg5 hasInnerStroke:(BOOL)arg6 context:(id)arg7;
- (void)renderBordersForPath:(id)arg1 style:(id)arg2 applyClip:(BOOL)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)renderFillsForPath:(id)arg1 style:(id)arg2 layer:(id)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)renderPath:(id)arg1 style:(id)arg2 layer:(id)arg3 inRect:(struct CGRect)arg4 fillColor:(struct CGColor *)arg5 context:(id)arg6;
- (void)renderLayerUncached:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;
- (void)renderLayer:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

