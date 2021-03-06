//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPopoverAction.h"

#import "MSDocumentUploadDelegate-Protocol.h"

@class MSDocumentUpload, NSArray, NSTimer, NSViewController, SCKAPIOperation;
@protocol MSCloudExportableDocument;

@interface MSCloudAction : MSPopoverAction <MSDocumentUploadDelegate>
{
    NSViewController *_popoverViewController;
    NSArray *_progressImages;
    MSDocumentUpload *_upload;
    SCKAPIOperation *_refreshOperation;
    CDUnknownBlockType _closeAlertUploadDidFinishHandler;
    NSTimer *_displayErrorSheetTimer;
}

+ (void)finishOpenCloudDocument:(id)arg1 displayingShare:(id)arg2 wasAlreadyOpen:(BOOL)arg3 withError:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)openCloudDocumentWithShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)openCloudDocumentWithApplicationURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)openCloudShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)requestCloudUser;
+ (void)signIn;
+ (BOOL)cloudEnabled;
+ (id)userController;
+ (void)attemptRecoveryFromCloudError:(id)arg1 optionIndex:(unsigned long long)arg2;
+ (id)cloudError:(id)arg1 addingRecoveryOptionsWithAttempter:(id)arg2;
+ (BOOL)isErrorRecoverable:(id)arg1;
+ (id)userPresentableErrorWithCloudError:(id)arg1 document:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *displayErrorSheetTimer; // @synthesize displayErrorSheetTimer=_displayErrorSheetTimer;
@property(copy, nonatomic) CDUnknownBlockType closeAlertUploadDidFinishHandler; // @synthesize closeAlertUploadDidFinishHandler=_closeAlertUploadDidFinishHandler;
@property(retain, nonatomic) SCKAPIOperation *refreshOperation; // @synthesize refreshOperation=_refreshOperation;
@property(readonly, nonatomic) MSDocumentUpload *upload; // @synthesize upload=_upload;
@property(retain, nonatomic) NSViewController *popoverViewController; // @synthesize popoverViewController=_popoverViewController;
- (void)deeplinkCloudDocumentWithShare:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)menu;
- (void)doPerformAction:(id)arg1;
- (void)setCloudPlatform:(id)arg1;
- (BOOL)validate;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly, nonatomic) NSArray *progressImages; // @synthesize progressImages=_progressImages;
- (void)updateProgressImage;
- (id)image;
- (id)submenuActionIDs;
- (BOOL)isSelectable;
- (BOOL)hasSubMenu;
- (BOOL)popoverShouldAnimateOnContentFrameDidChange:(id)arg1;
- (id)label;
- (id)tooltip;
- (BOOL)mayShowInToolbar;
@property(readonly, nonatomic) BOOL isCloudDocument;
- (void)progressDidChangeNotification:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (void)authenticationDidChangeNotification:(id)arg1;
- (void)setUpload:(id)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)willPresentError:(id)arg1;
- (void)documentUpload:(id)arg1 didChangeProgress:(id)arg2;
- (void)documentUpload:(id)arg1 didFailWithError:(id)arg2;
- (void)documentUploadDidCancel:(id)arg1;
- (void)documentUpload:(id)arg1 didUploadShare:(id)arg2;
- (void)displayUploadFailedError:(id)arg1;
- (double)displayErrorSheetPeriod;
- (void)clearErrorSheetTimer:(id)arg1;
- (void)setupDisplayErrorSheetTimer;
- (void)refreshShareWithHandler:(CDUnknownBlockType)arg1;
- (void)startUploadUpdating:(id)arg1 orCreateWithOrganization:(id)arg2 project:(id)arg3;
- (id)uploadProviderUpdating:(id)arg1 owner:(id)arg2 project:(id)arg3;
@property(readonly, nonatomic) id <MSCloudExportableDocument> exportedDocument;

@end

