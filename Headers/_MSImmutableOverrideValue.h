//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class NSObject, NSString;
@protocol NSCopying;

@interface _MSImmutableOverrideValue : MSImmutableModelObject
{
    BOOL _isEditing;
    NSString *_originalName;
    NSString *_overrideName;
    NSObject<NSCopying> *_value;
}

+ (Class)mutableClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSObject<NSCopying> *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *overrideName; // @synthesize overrideName=_overrideName;
@property(retain, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (void)collaborationDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (id)collaborationDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)pluginDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (void)copyPropertiesFromObject:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

