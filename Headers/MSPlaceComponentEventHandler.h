//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBasePlaceLayerEventHandler.h"

@class NSArray, NSDictionary;

@interface MSPlaceComponentEventHandler : MSBasePlaceLayerEventHandler
{
    NSArray *_shareableObjectReferences;
    NSDictionary *_storedDragImageProviders;
}

+ (id)makeLayerForComponentReference:(id)arg1 forInserting:(BOOL)arg2 intoDocument:(id)arg3 isForeign:(BOOL)arg4;
+ (id)makeLayerForComponentReference:(id)arg1 forInserting:(BOOL)arg2 intoDocument:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *storedDragImageProviders; // @synthesize storedDragImageProviders=_storedDragImageProviders;
@property(retain, nonatomic) NSArray *shareableObjectReferences; // @synthesize shareableObjectReferences=_shareableObjectReferences;
- (BOOL)shouldShowOverlayItems;
- (BOOL)shouldEditLayerafterInsert;
- (void)generatePreviewAndRefreshWhenDone;
- (BOOL)pasteboardContainsComponent:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)layersForInserting;
- (void)readReferencesFromPasteboard:(id)arg1;
- (void)handlerWillLoseFocus;

@end

