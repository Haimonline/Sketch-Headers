//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSStylePart.h>

@class MSColor, MSGraphicsContextSettings;

@interface _MSStyleShadow : MSStylePart
{
    double _blurRadius;
    double _offsetX;
    double _offsetY;
    double _spread;
    MSColor *_color;
    MSGraphicsContextSettings *_contextSettings;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
@property(nonatomic) double spread; // @synthesize spread=_spread;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

