//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import "NSMenuDelegate-Protocol.h"

@class MSActionController, NSAttributedString, NSImage, NSMenuItem, NSString, NSToolbarItem;

@interface MSAction : NSResponder <NSMenuDelegate>
{
    BOOL _isSelectable;
    MSActionController *_controller;
    NSToolbarItem *_toolbarItem;
}

+ (id)classNamesToImageNamesDictionary;
+ (id)imageName;
@property(readonly, nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
@property(nonatomic) __weak MSActionController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (BOOL)handlesKeyEvent:(id)arg1;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) BOOL hasSubMenu;
- (id)submenuActionIDs;
- (BOOL)containsActionWithID:(id)arg1;
@property(readonly, nonatomic) long long validationStatus;
@property(readonly, nonatomic) BOOL validate;
@property(readonly, nonatomic) unsigned short shortcutCharacter;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSString *imageName;
- (void)doPerformAction:(id)arg1;
- (id)cleanName;
- (void)performAction:(id)arg1;
- (id)contextForActionObservers;
@property(readonly, nonatomic) BOOL hasDynamicTitle;
@property(readonly, nonatomic) NSAttributedString *badgeTitle;
@property(readonly, nonatomic) NSString *tooltip;
@property(readonly, nonatomic) BOOL mayShowInToolbar;
- (id)imageForToolbarCustomisationSheet;
@property(readonly, nonatomic) NSString *labelForToolbarCustomisationSheet;
@property(readonly, nonatomic) NSImage *imageForToolbar;
@property(readonly, nonatomic) NSString *labelForToolbar;
@property(readonly, nonatomic) NSMenuItem *menuItemForToolbarItem;
- (id)makeToolbarItemForToolbar:(BOOL)arg1;
- (void)validateToolbarItem;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuItems;
@property(readonly, nonatomic) NSString *labelForMenu;
- (id)menuItemsForMenu:(id)arg1;
@property(readonly, nonatomic) SEL preferredMenuAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

