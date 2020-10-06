//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSAction.h>

#import "NSMenuDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class MSDocument, NSEvent, NSString, NSTouchBarItem;

@interface MSDocumentAction : MSAction <NSMenuDelegate, NSTouchBarDelegate>
{
    MSDocument *_document;
    NSTouchBarItem *_cachedTouchedBarItem;
    NSEvent *_previousEvent;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSEvent *previousEvent; // @synthesize previousEvent=_previousEvent;
@property(retain, nonatomic) NSTouchBarItem *cachedTouchedBarItem; // @synthesize cachedTouchedBarItem=_cachedTouchedBarItem;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (id)contextForActionObservers;
@property(readonly, nonatomic) NSString *historyMomentTitle;
- (void)performPopUpMenuAction;
- (void)performAction:(id)arg1;
- (void)refreshOverlay;
- (id)canvasView;
- (id)currentPage;
- (void)switchToNormalHandler;
- (id)setCurrentHandlerClass:(Class)arg1;
- (id)toggleHandlerClass:(Class)arg1;
- (id)currentHandler;
- (BOOL)isInNormalHandler;
- (BOOL)validate;
@property(readonly, nonatomic) unsigned long long currentContentMode;
- (id)selectedLayers;
- (id)initWithDocument:(id)arg1;
- (id)menu;
- (void)repopulateMenu:(id)arg1;
- (unsigned long long)touchBarItemSizing;
- (id)touchBarImage;
- (BOOL)isTouchBarItemSelected;
- (BOOL)shouldUseImageForTouchBarItem;
- (void)showTouchBarPopover:(id)arg1;
- (id)makeTouchBarItem;
- (BOOL)touchBarItemButtonShouldShowState;
- (id)makeTouchBarItemButton;
- (void)refreshTouchBarItem;
- (id)touchBarItem;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

