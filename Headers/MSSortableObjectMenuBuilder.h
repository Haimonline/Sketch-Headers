//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/NSMenuDelegate-Protocol.h>

@class NSMapTable, NSString;
@protocol MSMenuBuilderDelegate;

@interface MSSortableObjectMenuBuilder : NSObject <NSMenuDelegate>
{
    NSMapTable *_collatedImages;
    id <MSMenuBuilderDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <MSMenuBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)applyStyleToMenuItem:(id)arg1;
- (void)prepareForDisplay:(id)arg1;
- (void)updateImages;
@property(readonly, nonatomic) NSMapTable *collatedImages; // @synthesize collatedImages=_collatedImages;
- (void)menuWillOpen:(id)arg1;
- (id)menuItemWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 sharedObjects:(id)arg4;
- (id)sharedObjectsFromDescriptorsContents:(id)arg1;
- (id)menuItemsForSortedSharedObjects:(id)arg1 selectedObjects:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)menuItemsForSortableObjects:(id)arg1 selectedObjects:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)addSortedSharedObjects:(id)arg1 selectedObjects:(id)arg2 toMenu:(id)arg3 target:(id)arg4 selector:(SEL)arg5;
- (void)selectMenuItemsInPopUpButton:(id)arg1 selectedObjects:(id)arg2;
- (void)addSortableObjects:(id)arg1 selectedObjects:(id)arg2 toPopUpButton:(id)arg3 target:(id)arg4 selector:(SEL)arg5;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

