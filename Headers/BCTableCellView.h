//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <BCLayerList/NSMenuDelegate-Protocol.h>

@class BCOutlineView, BCSidebarPreviewImageView, BCTableRowView, NSButton, NSDictionary, NSLayoutConstraint, NSPopUpButton, NSString, NSWindow;
@protocol BCOutlineViewNode, BCOutlineViewPopupConfigurator, BCTableCellViewDelegate;

@interface BCTableCellView : NSTableCellView <NSMenuDelegate>
{
    BOOL _lastUpdatedTextWasEditing;
    BOOL _isShowingImages;
    NSLayoutConstraint *_badgeTrailingSpaceConstraint;
    id <BCTableCellViewDelegate> _delegate;
    unsigned long long _displayState;
    NSButton *_lockHideButton;
    NSPopUpButton *_booleanOpPopUpButton;
    id <BCOutlineViewPopupConfigurator> _badgeConfigurator;
    unsigned long long _lastUpdatedPreviewState;
    BCSidebarPreviewImageView *_previewView;
    NSDictionary *_previewImages;
    BCSidebarPreviewImageView *_maskPreviewView;
    double _designedTextFieldTopPadding;
}

@property(nonatomic) BOOL isShowingImages; // @synthesize isShowingImages=_isShowingImages;
@property(readonly, nonatomic) double designedTextFieldTopPadding; // @synthesize designedTextFieldTopPadding=_designedTextFieldTopPadding;
@property(nonatomic) __weak BCSidebarPreviewImageView *maskPreviewView; // @synthesize maskPreviewView=_maskPreviewView;
@property(retain, nonatomic) NSDictionary *previewImages; // @synthesize previewImages=_previewImages;
@property(nonatomic) __weak BCSidebarPreviewImageView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) BOOL lastUpdatedTextWasEditing; // @synthesize lastUpdatedTextWasEditing=_lastUpdatedTextWasEditing;
@property(nonatomic) unsigned long long lastUpdatedPreviewState; // @synthesize lastUpdatedPreviewState=_lastUpdatedPreviewState;
@property(retain, nonatomic) id <BCOutlineViewPopupConfigurator> badgeConfigurator; // @synthesize badgeConfigurator=_badgeConfigurator;
@property(nonatomic) __weak NSPopUpButton *booleanOpPopUpButton; // @synthesize booleanOpPopUpButton=_booleanOpPopUpButton;
@property(nonatomic) __weak NSButton *lockHideButton; // @synthesize lockHideButton=_lockHideButton;
@property(nonatomic) unsigned long long displayState; // @synthesize displayState=_displayState;
@property(nonatomic) __weak id <BCTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelOperation:(id)arg1;
@property(readonly, nonatomic) NSWindow *destinationWindow;
- (void)drawDragImageInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) double widthForDragImage;
- (void)renameNode;
@property(readonly, nonatomic) BOOL isTextFieldEditing;
- (void)updateConstraints;
- (void)updateMaskIcon;
- (void)updatePreviewIcon;
- (unsigned long long)currentPreviewState;
- (BOOL)shouldDrawAsActive;
@property(readonly, nonatomic) BCTableRowView *rowView;
@property(readonly, nonatomic) BCOutlineView *outlineView;
- (struct NSEdgeInsets)verticalInsets;
- (void)handleBadgePressed:(id)arg1;
- (void)updateBadge;
- (void)updateBadgeImages;
@property(readonly, nonatomic) __weak NSLayoutConstraint *badgeTrailingSpaceConstraint; // @synthesize badgeTrailingSpaceConstraint=_badgeTrailingSpaceConstraint;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)resolveCellViewContainingLocationOfEvent:(id)arg1;
- (BOOL)isEventCurrent:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)stopObserving;
- (void)refreshPreviewImages:(id)arg1;
- (long long)backgroundStyle;
- (void)refreshTextColor;
- (void)updateSelectionStateIfRequired;
- (void)startObserving;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) id <BCOutlineViewNode> node;
@property(readonly, nonatomic) BOOL isNodeLocked;
@property(readonly, nonatomic) BOOL isNodeContainedByHiddenAncestorNode;
@property(readonly, nonatomic) BOOL isNodeHidden;
@property(readonly, nonatomic) BOOL isNodeSelected;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

