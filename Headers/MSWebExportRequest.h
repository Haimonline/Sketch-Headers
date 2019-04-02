//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchRendering/MSExportRequest.h>

@class MSImmutableLayer;
@protocol MSWebExportableRootLayer;

@interface MSWebExportRequest : MSExportRequest
{
    unsigned long long _layerBehavior;
}

+ (id)webExportRequestForRootLayer:(id)arg1 inDocument:(id)arg2 atScale:(double)arg3;
@property(nonatomic) unsigned long long layerBehavior; // @synthesize layerBehavior=_layerBehavior;
- (id)includedLayerIDs;
- (id)includedLayerIDsFromLayer:(id)arg1 ancestors:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain, nonatomic) MSImmutableLayer<MSWebExportableRootLayer> *rootLayer; // @dynamic rootLayer;

@end

