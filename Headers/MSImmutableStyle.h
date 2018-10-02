//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSImmutableStyle.h"

@class MSImmutableStyleBorder, MSImmutableStyleFill, MSImmutableStyleInnerShadow, MSImmutableStyleShadow, NSArray;

@interface MSImmutableStyle : _MSImmutableStyle
{
}

- (void)migratePropertiesFromV104OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV103OrEarlierWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (struct CGRect)boundsForPath:(id)arg1;
- (id)_shadowWithGreatestSpread:(id)arg1;
- (struct CGRect)_boundsForShadow:(id)arg1 path:(id)arg2;
- (void)applyPropertiesToBezier:(id)arg1;
@property(readonly, nonatomic) NSArray *enabledInnerShadows;
@property(readonly, nonatomic) NSArray *enabledShadows;
@property(readonly, nonatomic) NSArray *enabledBorders;
@property(readonly, nonatomic) NSArray *enabledFills;
@property(readonly, nonatomic) long long shadowStrokeType;
@property(readonly, nonatomic) unsigned long long shadowType;
- (struct CGRect)boundingBoxForBiggestShadowSpreadForLayer:(id)arg1;
@property(readonly, nonatomic) double outerPaddingForBiggestShadowSpread;
@property(readonly, nonatomic) double outerPaddingForBiggestStroke;
@property(readonly, nonatomic) double thickestInnerStroke;
@property(readonly, nonatomic) double thickestStroke;
@property(readonly, nonatomic) BOOL hasBlending;
@property(readonly, nonatomic) BOOL hasEnabledFill;
@property(readonly, nonatomic) BOOL hasEnabledBorder;
@property(readonly, nonatomic) BOOL hasEnabledInnerShadow;
@property(readonly, nonatomic) BOOL hasEnabledShadow;
@property(readonly, nonatomic) MSImmutableStyleBorder *firstEnabledBorder;
@property(readonly, nonatomic) MSImmutableStyleFill *firstEnabledFill;
@property(readonly, nonatomic) MSImmutableStyleInnerShadow *firstEnabledInnerShadow;
@property(readonly, nonatomic) MSImmutableStyleShadow *firstEnabledShadow;
@property(readonly, nonatomic) BOOL hasMoreThanOneEnabledFill;
@property(readonly, nonatomic) BOOL hasMarkers;
@property(readonly, nonatomic) BOOL hasEnabledBackgroundBlur;
- (void)clearTextStyle;
- (void)migratePropertiesFromV111OrEarlierWithUnarchiver:(id)arg1;
@property(readonly, nonatomic) NSArray *renderableFills;
@property(readonly, nonatomic) BOOL hasEnabledOpaqueFill;
- (id)renderBitmapEffects:(id)arg1 bounds:(struct CGRect)arg2 parentCoordinateTransform:(struct CGAffineTransform)arg3;
- (void)addSVGFilterAttributes:(id)arg1 exporter:(id)arg2 position:(unsigned long long)arg3;
- (void)addBlurFilter:(id)arg1 exporter:(id)arg2;
- (void)addShadowFilters:(id)arg1 includeSource:(BOOL)arg2 attributes:(id)arg3 exporter:(id)arg4;
- (void)applyLayerInfluenceRectBounds:(id)arg1 document:(id)arg2 toFilter:(id)arg3 withRadius:(double)arg4;
- (id)borderAtElementPosition:(long long)arg1 exporter:(id)arg2;
- (id)fillAtElementPosition:(long long)arg1 exporter:(id)arg2;
- (unsigned long long)internalNumberOfElements:(id)arg1;
- (id)borderWithGreatestInset;
- (BOOL)canCombineLastFillWithFirstBorder;
- (BOOL)requiresPathDefinition:(id)arg1;
- (BOOL)hasBorderRequiringMask;
- (void)addSVGAttributes:(id)arg1 exporter:(id)arg2 elementPosition:(unsigned long long)arg3;
- (unsigned long long)numberOfElementsWithExporter:(id)arg1;

@end

