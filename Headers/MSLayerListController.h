//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchControllers/MSSidebarListController.h>

#import <SketchControllers/BCOutlineViewDataControllerDataSource-Protocol.h>
#import <SketchControllers/BCOutlineViewDataControllerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSView;

@interface MSLayerListController : MSSidebarListController <BCOutlineViewDataControllerDataSource, BCOutlineViewDataControllerDelegate>
{
    NSMutableSet *_layersRequiringPreviewRefresh;
    long long _numberOfLayersRequiringPreviewRefresh;
}

@property long long numberOfLayersRequiringPreviewRefresh; // @synthesize numberOfLayersRequiringPreviewRefresh=_numberOfLayersRequiringPreviewRefresh;
@property(retain, nonatomic) NSMutableSet *layersRequiringPreviewRefresh; // @synthesize layersRequiringPreviewRefresh=_layersRequiringPreviewRefresh;
- (void).cxx_destruct;
- (Class)pasteboardWriterClass;
- (void)dataController:(id)arg1 refreshPreviewsOnNode:(id)arg2;
- (void)dataController:(id)arg1 hoverNodeDidChangeTo:(id)arg2;
- (id)dataController:(id)arg1 menuItemsForSelectedObjects:(id)arg2;
- (void)dataController:(id)arg1 handleBadgePressedOnNode:(id)arg2 withAltState:(BOOL)arg3;
- (void)dataController:(id)arg1 updateNode:(id)arg2 expandedState:(unsigned long long)arg3;
- (long long)mapExpandedStateToLayerListStatus:(unsigned long long)arg1;
- (BOOL)dataController:(id)arg1 isNodeHighlighted:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeExpandable:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeExpanded:(id)arg2;
- (void)dataController:(id)arg1 changeSelectionTo:(id)arg2;
- (BOOL)dataController:(id)arg1 nodeHasSharedStyle:(id)arg2;
- (BOOL)multipleNodesSelectedForDataController:(id)arg1;
- (BOOL)dataController:(id)arg1 isNodeLockedOnCanvas:(id)arg2;
- (BOOL)dataController:(id)arg1 isAncestorOfNodeHiddenOnCanvas:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeHiddenOnCanvas:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeSelected:(id)arg2;
- (id)itemForNode:(id)arg1;
- (id)layerForNode:(id)arg1;
- (id)dataController:(id)arg1 childrenOfNode:(id)arg2;
@property(readonly, nonatomic) NSView *defaultFirstResponder;
- (id)rootObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

