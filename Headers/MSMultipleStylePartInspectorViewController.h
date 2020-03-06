//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSReorderingContainerDelegate-Protocol.h"

@class MSReorderingContainerView, NSArray, NSButton, NSString, NSTextField, NSView;
@protocol MSStylePartInspectorDelegate;

@interface MSMultipleStylePartInspectorViewController : NSViewController <MSReorderingContainerDelegate>
{
    NSArray *_layers;
    NSArray *_stylePartViewControllers;
    id <MSStylePartInspectorDelegate> _delegate;
    MSReorderingContainerView *_reorderingContainer;
    NSView *_nameView;
    NSTextField *_nameField;
    NSButton *_addStylePartButton;
    NSButton *_addStylePartHeaderButton;
    NSButton *_removeDisabledStylePartsButton;
    NSButton *_showAdvancedOptionsButton;
}

@property(retain, nonatomic) NSButton *showAdvancedOptionsButton; // @synthesize showAdvancedOptionsButton=_showAdvancedOptionsButton;
@property(retain, nonatomic) NSButton *removeDisabledStylePartsButton; // @synthesize removeDisabledStylePartsButton=_removeDisabledStylePartsButton;
@property(retain, nonatomic) NSButton *addStylePartHeaderButton; // @synthesize addStylePartHeaderButton=_addStylePartHeaderButton;
@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) NSView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) MSReorderingContainerView *reorderingContainer; // @synthesize reorderingContainer=_reorderingContainer;
@property(nonatomic) __weak id <MSStylePartInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *stylePartViewControllers; // @synthesize stylePartViewControllers=_stylePartViewControllers;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateDisplayedValues;
@property(readonly, nonatomic) NSString *menuTitleRemove;
@property(readonly, nonatomic) NSString *menuTitleDuplicate;
@property(readonly, nonatomic) NSString *menuTitlePaste;
@property(readonly, nonatomic) NSString *menuTitleCopy;
- (id)contextMenuForSupportedActions:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)prepareInspector:(id)arg1 parts:(id)arg2 index:(unsigned long long)arg3;
- (BOOL)hasEnabledStyle;
- (void)dealloc;
- (double)startingOffsetForStackingContainerBackground:(id)arg1;
- (void)containerBackground:(id)arg1 dragDidReorderChildAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (unsigned long long)stylePartType;
- (void)showAdvancedOptionsAction:(id)arg1;
- (void)deleteUnusedStylePartsAction:(id)arg1;
- (id)stylePartsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tagFromSender:(id)arg1;
- (void)insertStylePart:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)duplicateStylePartAction:(id)arg1;
- (void)deleteStylePartAction:(id)arg1;
- (void)pasteStylePartAction:(id)arg1;
- (void)copyStylePartAction:(id)arg1;
- (void)addStylePartsForSelection;
- (BOOL)hasPopOver;
- (id)lastEnabledStylePartController;
- (void)addStylePartAction:(id)arg1;
- (void)addNewStylePart;
- (void)closePopovers;
- (id)rotatedStyleParts;
- (void)validateSpecialButtons;
- (unsigned long long)supportedActionsForLayers:(id)arg1;
- (void)prepare;
- (void)prepareForReuse;
- (id)viewForStyleAtOffset:(long long)arg1 index:(unsigned long long)arg2;
- (BOOL)shouldShowDisabledStylesButton;
- (BOOL)shouldShowAdvancedOptionsButton;
- (BOOL)shouldEnableAddStylePartButton;
- (void)styleDidEnableOrDisable;
- (id)views;
- (void)resizeViewToFit;
- (Class)inspectorClassForStyleParts:(id)arg1;
- (id)createInspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)validateAdvancedOptionsButton;
- (void)loadViewControllers;
- (id)title;
- (id)nibName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

