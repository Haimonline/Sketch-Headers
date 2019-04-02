//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCollectionViewFlowLayout.h>

@class NSIndexSet;

@interface MSAssetCollectionLayout : NSCollectionViewFlowLayout
{
    NSIndexSet *_updatedIndexes;
    unsigned long long _displayMode;
    unsigned long long _itemSizeMode;
}

+ (struct NSEdgeInsets)sectionInsetsForItemSizeMode:(unsigned long long)arg1 displayMode:(unsigned long long)arg2;
+ (double)lineSpacingForItemSizeMode:(unsigned long long)arg1 displayMode:(unsigned long long)arg2;
+ (double)interItemSpacingForItemSizeMode:(unsigned long long)arg1;
+ (struct CGSize)itemSizeForItemSizeMode:(unsigned long long)arg1 displayMode:(unsigned long long)arg2 collectionViewWidth:(double)arg3;
+ (Class)layoutAttributesClass;
@property(nonatomic) unsigned long long itemSizeMode; // @synthesize itemSizeMode=_itemSizeMode;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) NSIndexSet *updatedIndexes; // @synthesize updatedIndexes=_updatedIndexes;
- (void).cxx_destruct;
- (void)recalculateLayoutParameters;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint)arg1;

@end

