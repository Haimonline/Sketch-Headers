//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSFillRenderer-Protocol.h>

@class NSString;

@interface MSFillRendererCG : NSObject <MSFillRenderer>
{
}

- (void)drawPatternImageFill:(id)arg1 rect:(struct CGRect)arg2 parentLayerOpacity:(double)arg3 context:(id)arg4;
- (void)drawPatternTiledImageFill:(id)arg1 path:(id)arg2 winding:(unsigned long long)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)drawPatternFill:(id)arg1 path:(id)arg2 layer:(id)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)drawGradientFill:(id)arg1 path:(id)arg2 layer:(id)arg3 hasInnerStroke:(BOOL)arg4 rect:(struct CGRect)arg5 context:(id)arg6;
- (void)drawColorFill:(id)arg1 path:(id)arg2 index:(long long)arg3 hasInnerStroke:(BOOL)arg4 context:(id)arg5;
- (void)renderFill:(id)arg1 path:(id)arg2 layer:(id)arg3 index:(long long)arg4 rect:(struct CGRect)arg5 hasInnerStroke:(BOOL)arg6 context:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

