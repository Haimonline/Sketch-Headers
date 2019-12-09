//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

@class MSDocument, NSButton, NSPopUpButton, NSString, NSTextField, NSView, SCKAPIOperation, SCKOrganization, SCKProject, SCKUser;

@interface MSCloudDocumentOperationSheet : CHSheetController
{
    NSString *_documentName;
    unsigned long long _operationType;
    CDUnknownBlockType _completionHandler;
    NSTextField *_headerTitleLabel;
    NSTextField *_headerDescriptionLabel;
    NSView *_nameInputView;
    NSView *_organizationInputView;
    NSPopUpButton *_organizationButton;
    NSView *_projectInputView;
    NSPopUpButton *_projectButton;
    NSButton *_deleteButton;
    SCKAPIOperation *_projectsRequest;
    SCKUser *_userWithProjects;
}

+ (id)runForDocument:(id)arg1 performingOperation:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) SCKUser *userWithProjects; // @synthesize userWithProjects=_userWithProjects;
@property(retain, nonatomic) SCKAPIOperation *projectsRequest; // @synthesize projectsRequest=_projectsRequest;
@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) NSPopUpButton *projectButton; // @synthesize projectButton=_projectButton;
@property(retain, nonatomic) NSView *projectInputView; // @synthesize projectInputView=_projectInputView;
@property(retain, nonatomic) NSPopUpButton *organizationButton; // @synthesize organizationButton=_organizationButton;
@property(retain, nonatomic) NSView *organizationInputView; // @synthesize organizationInputView=_organizationInputView;
@property(retain, nonatomic) NSView *nameInputView; // @synthesize nameInputView=_nameInputView;
@property(retain, nonatomic) NSTextField *headerDescriptionLabel; // @synthesize headerDescriptionLabel=_headerDescriptionLabel;
@property(retain, nonatomic) NSTextField *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *documentName; // @synthesize documentName=_documentName;
- (void).cxx_destruct;
- (void)delete:(id)arg1;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
@property(readonly, nonatomic) SCKProject *project;
- (id)projectsMenu;
- (void)updateProjectsMenu;
- (id)projects;
- (void)requestProjects;
@property(readonly, nonatomic) SCKOrganization *organization;
- (void)selectProject:(id)arg1;
- (void)selectOrganization:(id)arg1;
- (void)reloadOrganizations;
- (void)updateView;
@property(readonly, nonatomic) MSDocument *targetDocument;
- (void)awakeFromNib;

@end

