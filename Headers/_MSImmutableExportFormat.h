//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class NSString;

@interface _MSImmutableExportFormat : MSImmutableModelObject
{
    double _absoluteSize;
    NSString *_fileFormat;
    NSString *_name;
    long long _namingScheme;
    double _scale;
    long long _visibleScaleType;
}

+ (Class)mutableClass;
@property(nonatomic) long long visibleScaleType; // @synthesize visibleScaleType=_visibleScaleType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) long long namingScheme; // @synthesize namingScheme=_namingScheme;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;
@property(nonatomic) double absoluteSize; // @synthesize absoluteSize=_absoluteSize;
- (void).cxx_destruct;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

