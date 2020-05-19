//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableLayerGroup.h>

@class MSImmutableColor, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid, NSDictionary;

@interface _MSImmutableArtboardGroup : MSImmutableLayerGroup
{
    BOOL _hasBackgroundColor;
    BOOL _includeBackgroundColorInExport;
    BOOL _includeInCloudUpload;
    BOOL _isFlowHome;
    NSDictionary *_presetDictionary;
    BOOL _resizesContent;
    MSImmutableColor *_backgroundColor;
    MSImmutableSimpleGrid *_grid;
    MSImmutableRulerData *_horizontalRulerData;
    MSImmutableLayoutGrid *_layout;
    MSImmutableRulerData *_verticalRulerData;
}

+ (Class)mutableClass;
+ (BOOL)hasClickThroughDefault;
+ (BOOL)shouldBreakMaskChainDefault;
+ (id)defaultBackgroundColor;
@property(retain, nonatomic) MSImmutableRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(retain, nonatomic) MSImmutableLayoutGrid *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MSImmutableRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(retain, nonatomic) MSImmutableSimpleGrid *grid; // @synthesize grid=_grid;
@property(retain, nonatomic) MSImmutableColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL resizesContent; // @synthesize resizesContent=_resizesContent;
@property(retain, nonatomic) NSDictionary *presetDictionary; // @synthesize presetDictionary=_presetDictionary;
@property(nonatomic) BOOL isFlowHome; // @synthesize isFlowHome=_isFlowHome;
@property(nonatomic) BOOL includeInCloudUpload; // @synthesize includeInCloudUpload=_includeInCloudUpload;
@property(nonatomic) BOOL includeBackgroundColorInExport; // @synthesize includeBackgroundColorInExport=_includeBackgroundColorInExport;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
- (void).cxx_destruct;
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
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
@property(nonatomic, readonly) BOOL hasDefaultBackgroundColor;

@end

