//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "BCPopoverDelegate-Protocol.h"
#import "MSColorInspectorDelegate-Protocol.h"
#import "MSLayerChangeObserver-Protocol.h"
#import "MSNativeColorPanelPresenterDelegate-Protocol.h"
#import "MSStylePartPreviewButtonDelegate-Protocol.h"
#import "MSStylePartPreviewButtonDisabledTarget-Protocol.h"

@class BCPopover, MSNativeColorPanelPresenter, MSStylePartPreviewButton, NSString;

@interface MSSliceBackgroundColorInspectorItem : MSInspectorItem <MSColorInspectorDelegate, BCPopoverDelegate, MSStylePartPreviewButtonDelegate, MSStylePartPreviewButtonDisabledTarget, MSLayerChangeObserver, MSNativeColorPanelPresenterDelegate>
{
    MSStylePartPreviewButton *_backgroundColorButton;
    BCPopover *_popover;
    MSNativeColorPanelPresenter *_colorPanelPresenter;
}

+ (BOOL)canHandleLayer:(id)arg1;
@property(retain, nonatomic) MSNativeColorPanelPresenter *colorPanelPresenter; // @synthesize colorPanelPresenter=_colorPanelPresenter;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSStylePartPreviewButton *backgroundColorButton; // @synthesize backgroundColorButton=_backgroundColorButton;
- (void).cxx_destruct;
- (id)previewColorSpaceForClient:(id)arg1;
- (id)documentColorSpace;
- (id)canvasColorSpace;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)stylePartPreviewButtonDisabledAction:(id)arg1;
- (void)changeBackgroundColorTo:(id)arg1;
- (void)backgroundColorAction:(id)arg1;
- (id)companionPopoverForColorPanelPresenter:(id)arg1;
- (void)colorPanelPresenter:(id)arg1 didChangeColor:(id)arg2;
- (void)togglePopover;
- (void)showNativeColorPanel;
- (void)viewWillDisappear;
- (void)dismissViewController:(id)arg1;
- (void)updateDisplayedValues;
- (void)layerDidChange:(id)arg1;
- (void)setLayers:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

