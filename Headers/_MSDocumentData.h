//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class MSAssetCollection, MSPatchInfo, MSSharedStyleContainer, MSSharedTextStyleContainer, MSSymbolContainer, NSArray, NSDictionary, NSMutableArray, _TtC11SketchModel17MSSwatchContainer;

@interface _MSDocumentData : MSModelObject
{
    BOOL _agreedToFontEmbedding;
    BOOL _autoEmbedFonts;
    unsigned long long _colorSpace;
    unsigned long long _currentPageIndex;
    NSDictionary *_userInfo;
    MSAssetCollection *_assets;
    NSMutableArray *_fontReferences;
    NSMutableArray *_foreignLayerStyles;
    NSMutableArray *_foreignSwatches;
    NSMutableArray *_foreignSymbols;
    NSMutableArray *_foreignTextStyles;
    MSSharedStyleContainer *_layerStyles;
    MSSymbolContainer *_layerSymbols;
    MSSharedTextStyleContainer *_layerTextStyles;
    NSMutableArray *_pages;
    MSPatchInfo *_patchInfo;
    _TtC11SketchModel17MSSwatchContainer *_sharedSwatches;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
+ (id)defaultPageArray;
+ (long long)initialPageNumber;
+ (id)localizedNewPageName;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_fontReferences:(id)arg1;
- (void)setRaw_userInfo:(id)arg1;
- (void)setRaw_currentPageIndex:(unsigned long long)arg1;
- (void)setRaw_colorSpace:(unsigned long long)arg1;
- (void)setRaw_autoEmbedFonts:(BOOL)arg1;
- (void)setRaw_agreedToFontEmbedding:(BOOL)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)movePageFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllPages;
- (void)removePagesAtIndexes:(id)arg1;
- (void)removePageAtIndex:(unsigned long long)arg1;
- (void)removePage:(id)arg1;
- (void)insertPages:(id)arg1 afterPage:(id)arg2;
- (void)insertPage:(id)arg1 afterPage:(id)arg2;
- (void)insertPages:(id)arg1 beforePage:(id)arg2;
- (void)insertPage:(id)arg1 beforePage:(id)arg2;
- (void)insertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addPages:(id)arg1;
- (void)addPage:(id)arg1;
- (void)moveForeignTextStyleFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllForeignTextStyles;
- (void)removeForeignTextStylesAtIndexes:(id)arg1;
- (void)removeForeignTextStyleAtIndex:(unsigned long long)arg1;
- (void)removeForeignTextStyle:(id)arg1;
- (void)insertForeignTextStyles:(id)arg1 afterForeignTextStyle:(id)arg2;
- (void)insertForeignTextStyle:(id)arg1 afterForeignTextStyle:(id)arg2;
- (void)insertForeignTextStyles:(id)arg1 beforeForeignTextStyle:(id)arg2;
- (void)insertForeignTextStyle:(id)arg1 beforeForeignTextStyle:(id)arg2;
- (void)insertForeignTextStyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addForeignTextStyles:(id)arg1;
- (void)addForeignTextStyle:(id)arg1;
- (void)moveForeignSymbolFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllForeignSymbols;
- (void)removeForeignSymbolsAtIndexes:(id)arg1;
- (void)removeForeignSymbolAtIndex:(unsigned long long)arg1;
- (void)removeForeignSymbol:(id)arg1;
- (void)insertForeignSymbols:(id)arg1 afterForeignSymbol:(id)arg2;
- (void)insertForeignSymbol:(id)arg1 afterForeignSymbol:(id)arg2;
- (void)insertForeignSymbols:(id)arg1 beforeForeignSymbol:(id)arg2;
- (void)insertForeignSymbol:(id)arg1 beforeForeignSymbol:(id)arg2;
- (void)insertForeignSymbol:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addForeignSymbols:(id)arg1;
- (void)addForeignSymbol:(id)arg1;
- (void)moveForeignSwatchFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllForeignSwatchs;
- (void)removeForeignSwatchsAtIndexes:(id)arg1;
- (void)removeForeignSwatchAtIndex:(unsigned long long)arg1;
- (void)removeForeignSwatch:(id)arg1;
- (void)insertForeignSwatchs:(id)arg1 afterForeignSwatch:(id)arg2;
- (void)insertForeignSwatch:(id)arg1 afterForeignSwatch:(id)arg2;
- (void)insertForeignSwatchs:(id)arg1 beforeForeignSwatch:(id)arg2;
- (void)insertForeignSwatch:(id)arg1 beforeForeignSwatch:(id)arg2;
- (void)insertForeignSwatch:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addForeignSwatchs:(id)arg1;
- (void)addForeignSwatch:(id)arg1;
- (void)moveForeignLayerStyleFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllForeignLayerStyles;
- (void)removeForeignLayerStylesAtIndexes:(id)arg1;
- (void)removeForeignLayerStyleAtIndex:(unsigned long long)arg1;
- (void)removeForeignLayerStyle:(id)arg1;
- (void)insertForeignLayerStyles:(id)arg1 afterForeignLayerStyle:(id)arg2;
- (void)insertForeignLayerStyle:(id)arg1 afterForeignLayerStyle:(id)arg2;
- (void)insertForeignLayerStyles:(id)arg1 beforeForeignLayerStyle:(id)arg2;
- (void)insertForeignLayerStyle:(id)arg1 beforeForeignLayerStyle:(id)arg2;
- (void)insertForeignLayerStyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addForeignLayerStyles:(id)arg1;
- (void)addForeignLayerStyle:(id)arg1;
- (void)moveFontReferenceFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllFontReferences;
- (void)removeFontReferencesAtIndexes:(id)arg1;
- (void)removeFontReferenceAtIndex:(unsigned long long)arg1;
- (void)removeFontReference:(id)arg1;
- (void)insertFontReferences:(id)arg1 afterFontReference:(id)arg2;
- (void)insertFontReference:(id)arg1 afterFontReference:(id)arg2;
- (void)insertFontReferences:(id)arg1 beforeFontReference:(id)arg2;
- (void)insertFontReference:(id)arg1 beforeFontReference:(id)arg2;
- (void)insertFontReference:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addFontReferences:(id)arg1;
- (void)addFontReference:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) _TtC11SketchModel17MSSwatchContainer *sharedSwatches; // @synthesize sharedSwatches=_sharedSwatches;
@property(retain, nonatomic) MSPatchInfo *patchInfo; // @synthesize patchInfo=_patchInfo;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) MSSharedTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(retain, nonatomic) MSSymbolContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(retain, nonatomic) MSSharedStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) NSArray *foreignTextStyles; // @synthesize foreignTextStyles=_foreignTextStyles;
@property(retain, nonatomic) NSArray *foreignSymbols; // @synthesize foreignSymbols=_foreignSymbols;
@property(retain, nonatomic) NSArray *foreignSwatches; // @synthesize foreignSwatches=_foreignSwatches;
@property(retain, nonatomic) NSArray *foreignLayerStyles; // @synthesize foreignLayerStyles=_foreignLayerStyles;
@property(retain, nonatomic) NSArray *fontReferences; // @synthesize fontReferences=_fontReferences;
@property(retain, nonatomic) MSAssetCollection *assets; // @synthesize assets=_assets;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) unsigned long long colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) BOOL autoEmbedFonts; // @synthesize autoEmbedFonts=_autoEmbedFonts;
@property(nonatomic) BOOL agreedToFontEmbedding; // @synthesize agreedToFontEmbedding=_agreedToFontEmbedding;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) BOOL hasDefaultPageArray;

@end

