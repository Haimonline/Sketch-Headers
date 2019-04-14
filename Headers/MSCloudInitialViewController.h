//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCloudBaseViewController.h"

@class NSButton, NSLayoutConstraint, NSPopUpButton, NSStackView;

@interface MSCloudInitialViewController : MSCloudBaseViewController
{
    NSStackView *_actionStackView;
    NSButton *_uploadButton;
    NSLayoutConstraint *_uploadButtonWidthConstraint;
    NSPopUpButton *_organizationButton;
}

@property(retain, nonatomic) NSPopUpButton *organizationButton; // @synthesize organizationButton=_organizationButton;
@property(retain, nonatomic) NSLayoutConstraint *uploadButtonWidthConstraint; // @synthesize uploadButtonWidthConstraint=_uploadButtonWidthConstraint;
@property(retain, nonatomic) NSButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) NSStackView *actionStackView; // @synthesize actionStackView=_actionStackView;
- (void).cxx_destruct;
- (void)upload:(id)arg1;
- (void)updateFootnote:(id)arg1;
- (id)selectedOrganization;
- (void)didCompleteLoadingOrganizations:(id)arg1;
- (void)reloadOrganizations;
- (void)viewDidLoad;
- (void)loadView;

@end

