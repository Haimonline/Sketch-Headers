//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSCloudAction, MSCloudBaseViewController;

@interface MSCloudViewController : NSViewController
{
    MSCloudBaseViewController *_contentViewController;
    MSCloudAction *_action;
}

@property(readonly, nonatomic) MSCloudAction *action; // @synthesize action=_action;
@property(retain, nonatomic) MSCloudBaseViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)refreshLicenseIfIneligible;
- (void)resetContentViewController:(id)arg1;
- (void)licenseDidChangeNotification:(id)arg1;
- (void)shareDidChangeNotification:(id)arg1;
- (void)shareUploadDidChangeNotification:(id)arg1;
- (void)userDidChangeNotification:(id)arg1;
- (void)environmentDidChangeNotification:(id)arg1;
- (void)updateFrame;
- (void)animateAlpha:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)defaultContentViewController;
- (void)addContentViewController:(id)arg1;
- (void)removeContentViewController:(id)arg1;
- (void)setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)loadView;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

