//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchRendering/NSObject-Protocol.h>

@class BCCache;

@protocol MSRenderingContextCacheProvider <NSObject>
@property(readonly, nonatomic) BCCache *zoomIndependentCache;
- (BCCache *)cacheForZoomLevel:(double)arg1;
@end

