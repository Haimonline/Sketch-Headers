//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSDocumentData, MSLayer, MSModelObject, NSArray, NSMutableSet, NSString;

@protocol MSDocumentDataDelegate <NSObject>
- (BOOL)validateSelectionOfLayer:(MSLayer *)arg1 proposedIDsOfLayersToSelect:(NSMutableSet *)arg2;
- (struct CGRect)visibleCanvasRectForDocumentData:(MSDocumentData *)arg1;
- (void)refreshOverlay;
- (void)layerTreeLayoutDidChange;
- (id)documentData:(MSDocumentData *)arg1 metadataForKey:(NSString *)arg2 object:(MSModelObject *)arg3;
- (void)documentData:(MSDocumentData *)arg1 storeMetadata:(id)arg2 forKey:(NSString *)arg3 object:(MSModelObject *)arg4;
- (void)documentDidChange:(MSDocumentData *)arg1;
- (void)documentData:(MSDocumentData *)arg1 temporarilyHideSelectionForLayers:(NSArray *)arg2;
@end

