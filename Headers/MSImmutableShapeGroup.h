//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableShapeGroup.h>

#import <SketchModel/MSImmutablePathLayer-Protocol.h>
#import <SketchModel/MSShapeGroupProtocol-Protocol.h>

@class MSImmutableStyle, NSString;

@interface MSImmutableShapeGroup : _MSImmutableShapeGroup <MSShapeGroupProtocol, MSImmutablePathLayer>
{
}

+ (unsigned long long)traits;
- (void)encodePropertiesWithCoder:(id)arg1;
- (BOOL)isLine;
- (long long)booleanOperationForLayer:(id)arg1;
- (BOOL)includeChildrenInCalculatingStyleSize;
- (struct CGRect)calculateInfluenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (BOOL)canSkipAdvancedClipForStrokes;
- (id)defaultName;
- (BOOL)allowsShadowSpread;
- (BOOL)allowsBlur;
@property(readonly, nonatomic) BOOL isPartOfClippingMask;
@property(readonly, nonatomic) BOOL hasMarkers;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayersPre19511;
- (void)migratePropertiesFromV110OrEarlierWithUnarchiver:(id)arg1;
- (struct CGRect)calculateInfluenceRectForBoundsInDocumentPre108;
- (void)migratePropertiesFromV103OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV51OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV106OrEarlierWithUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) MSImmutableStyle *style;
@property(readonly) Class superclass;

@end

