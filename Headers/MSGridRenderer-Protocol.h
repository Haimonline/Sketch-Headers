//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchRendering/MSRenderer-Protocol.h>

@class MSImmutableBaseGrid, MSRenderingContext;

@protocol MSGridRenderer <MSRenderer>
- (void)renderGrid:(MSImmutableBaseGrid *)arg1 in:(struct CGRect)arg2 origin:(struct CGPoint)arg3 context:(MSRenderingContext *)arg4;
@end

