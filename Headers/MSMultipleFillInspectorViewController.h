//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSMultipleColorStylePartInspectorViewController.h"

#import "BCPopoverDelegate-Protocol.h"
#import "MSInspectorSection-Protocol.h"

@class BCPopover, MSTextLabelForUpDownField, NSButton, NSString;

@interface MSMultipleFillInspectorViewController : MSMultipleColorStylePartInspectorViewController <MSInspectorSection, BCPopoverDelegate>
{
    MSTextLabelForUpDownField *_opacityLabel;
    NSButton *_addStylePartButton;
    NSButton *_advancedOptionsButton;
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSButton *advancedOptionsButton; // @synthesize advancedOptionsButton=_advancedOptionsButton;
@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) MSTextLabelForUpDownField *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
- (void).cxx_destruct;
- (id)views;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (unsigned long long)stylePartType;
- (void)dismissViewController:(id)arg1;
- (unsigned long long)traitsForAvancedOptions;
- (BOOL)shouldShowAdvancedOptionsButton;
- (void)viewWillDisappear;
- (BOOL)shouldDisableAddStylePartButton;
- (void)prepare;
- (void)showAdvancedOptionsAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

