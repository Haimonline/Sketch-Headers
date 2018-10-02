//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSSharedObjectAction.h"

#import "NSMenuDelegate-Protocol.h"

@class MSForeignObjectMenuBuilder, NSString;

@interface MSInsertSharedTextAction : MSSharedObjectAction <NSMenuDelegate>
{
    MSForeignObjectMenuBuilder *_menuBuilder;
}

@property(retain, nonatomic) MSForeignObjectMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
- (void).cxx_destruct;
- (id)tooltip;
- (id)label;
- (id)sharedObjectName;
- (id)imageForToolbar;
- (id)sortedObjectMenuItemsForMenu:(id)arg1;
- (BOOL)validate;
- (void)doPerformAction:(id)arg1;
- (void)showSharedObjectsSheet:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

