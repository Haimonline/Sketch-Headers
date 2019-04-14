//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class MSExportOptions, MSFlowConnection, MSRect, NSDictionary, NSString;

@interface _MSLayer : MSModelObject
{
    long long _booleanOperation;
    BOOL _isFixedToViewport;
    BOOL _isFlippedHorizontal;
    BOOL _isFlippedVertical;
    BOOL _isLocked;
    BOOL _isVisible;
    long long _layerListExpandedType;
    NSString *_name;
    BOOL _nameIsFixed;
    NSString *_originalObjectID;
    unsigned long long _resizingConstraint;
    unsigned long long _resizingType;
    double _rotation;
    BOOL _shouldBreakMaskChain;
    NSDictionary *_userInfo;
    MSExportOptions *_exportOptions;
    MSFlowConnection *_flow;
    MSRect *_frame;
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
@property(retain, nonatomic) MSRect *frame; // @synthesize frame=_frame;
@property(retain, nonatomic) MSFlowConnection *flow; // @synthesize flow=_flow;
@property(retain, nonatomic) MSExportOptions *exportOptions; // @synthesize exportOptions=_exportOptions;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) BOOL shouldBreakMaskChain; // @synthesize shouldBreakMaskChain=_shouldBreakMaskChain;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long resizingType; // @synthesize resizingType=_resizingType;
@property(nonatomic) unsigned long long resizingConstraint; // @synthesize resizingConstraint=_resizingConstraint;
@property(retain, nonatomic) NSString *originalObjectID; // @synthesize originalObjectID=_originalObjectID;
@property(nonatomic) BOOL nameIsFixed; // @synthesize nameIsFixed=_nameIsFixed;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long layerListExpandedType; // @synthesize layerListExpandedType=_layerListExpandedType;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) BOOL isFlippedVertical; // @synthesize isFlippedVertical=_isFlippedVertical;
@property(nonatomic) BOOL isFlippedHorizontal; // @synthesize isFlippedHorizontal=_isFlippedHorizontal;
@property(nonatomic) BOOL isFixedToViewport; // @synthesize isFixedToViewport=_isFixedToViewport;
@property(nonatomic) long long booleanOperation; // @synthesize booleanOperation=_booleanOperation;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

