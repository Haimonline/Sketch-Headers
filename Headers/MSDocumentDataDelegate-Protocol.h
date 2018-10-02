//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSDocumentData, MSModelObject, MSPage, NSArray, NSString;

@protocol MSDocumentDataDelegate <NSObject>
- (struct CGRect)visibleCanvasRectForDocumentData:(MSDocumentData *)arg1;
- (void)determineCurrentArtboard;
- (void)refreshOverlay;
- (void)refreshOverlayInRect:(struct CGRect)arg1;
- (void)layerTreeLayoutDidChange;
- (id)documentData:(MSDocumentData *)arg1 metadataForKey:(NSString *)arg2 object:(MSModelObject *)arg3;
- (void)documentData:(MSDocumentData *)arg1 storeMetadata:(id)arg2 forKey:(NSString *)arg3 object:(MSModelObject *)arg4;
- (void)documentDidChange:(MSDocumentData *)arg1;
- (void)documentDataImmediatelyShowSelectionForAllLayers:(MSDocumentData *)arg1;
- (void)documentData:(MSDocumentData *)arg1 temporarilyHideSelectionForLayers:(NSArray *)arg2;
- (void)documentData:(MSDocumentData *)arg1 didChangeToPage:(MSPage *)arg2;
@end

