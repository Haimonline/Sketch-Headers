//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSSelectionRenderer, NSArray;

@interface MSSelectionOverlayController : NSObject
{
    // Error parsing type: , name: selectedLayers
    // Error parsing type: , name: durationForTemporarilyHidingSelection
    // Error parsing type: , name: timerForRestoringTemporarilyHiddenSelection
    // Error parsing type: , name: model
    // Error parsing type: , name: renderer
}

- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) MSSelectionRenderer *renderer; // @synthesize renderer;
- (void)restoreShowingSelection;
- (void)temporarilyHideSelection;
- (void)refreshIfNecessary:(id)arg1;
@property(nonatomic, copy) NSArray *selectedLayers; // @synthesize selectedLayers;
- (void)dealloc;
- (id)init;

@end

