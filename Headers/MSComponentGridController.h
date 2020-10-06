//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSCollectionViewDataSource-Protocol.h"
#import "NSCollectionViewDelegateFlowLayout-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"
#import "_TtP6Sketch17DoubleClickAction_-Protocol.h"

@class MSComponentInspectorDriver, NSCollectionView, _TtC6Sketch22ComponentGridEmptyView;

@interface MSComponentGridController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout, NSUserInterfaceValidations, _TtP6Sketch17DoubleClickAction_>
{
    // Error parsing type: , name: componentsPanelController
    // Error parsing type: , name: delegate
    // Error parsing type: , name: inspectorDriver
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: emptyView
    // Error parsing type: , name: sections
    // Error parsing type: , name: showsMultipleLibraries
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(id)arg4;
- (void)collectionView:(id)arg1 didDeselectItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)delete:(id)arg1;
- (void)doubleClick:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)group:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC6Sketch22ComponentGridEmptyView *emptyView; // @synthesize emptyView;
@property(nonatomic, retain) NSCollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak MSComponentInspectorDriver *inspectorDriver; // @synthesize inspectorDriver;

@end

