//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchRendering/MSArtboardRendererCG.h>

@interface MSSymbolRendererCG : MSArtboardRendererCG
{
}

- (void)drawErrorPatternInRect:(struct CGRect)arg1 context:(id)arg2 error:(long long)arg3;
- (void)drawBrokenLinkSymbolErrorIconInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawRecursiveSymbolErrorIconInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)renderPreparedSymbolContents:(id)arg1 forInstance:(id)arg2 influenceBounds:(struct CGRect)arg3 ignoreDrawingArea:(BOOL)arg4 inContext:(id)arg5;
- (void)renderSymbolOrErrorPatternForInstance:(id)arg1 influenceBounds:(struct CGRect)arg2 ignoreDrawingArea:(BOOL)arg3 context:(id)arg4;
- (BOOL)setupTransparencyIfRequiredForInstance:(id)arg1 influenceBounds:(struct CGRect)arg2 context:(id)arg3 previousAlpha:(double *)arg4;
- (void)renderLayerUncached:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;

@end

