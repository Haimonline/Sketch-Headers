//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSActionObserver-Protocol.h"
#import "MSCrashesDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class BCReadWriteLock, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTextField, NSURL;

@interface MSCrashLogManager : NSObject <MSActionObserver, MSCrashesDelegate, NSTextFieldDelegate>
{
    BCReadWriteLock *_environmentLock;
    NSMutableDictionary *_environment;
    BCReadWriteLock *_itemsLock;
    NSMutableArray *_items;
    NSString *_text;
    NSString *_attachmentText;
    NSDictionary *_userProvidedInfo;
    NSTextField *_header;
    NSTextField *_emailField;
    NSTextField *_commentsField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *commentsField; // @synthesize commentsField=_commentsField;
@property(nonatomic) __weak NSTextField *emailField; // @synthesize emailField=_emailField;
@property(nonatomic) __weak NSTextField *header; // @synthesize header=_header;
@property(retain, nonatomic) NSDictionary *userProvidedInfo; // @synthesize userProvidedInfo=_userProvidedInfo;
@property(retain, nonatomic) NSString *attachmentText; // @synthesize attachmentText=_attachmentText;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void)send:(id)arg1;
- (void)cancel:(id)arg1;
- (id)attachmentsWithCrashes:(id)arg1 forErrorReport:(id)arg2;
- (BOOL)setup;
- (void)actionController:(id)arg1 didInstantActionWithID:(id)arg2 context:(id)arg3;
- (void)actionController:(id)arg1 didFinishActionWithID:(id)arg2 context:(id)arg3;
- (void)actionController:(id)arg1 willBeginActionWithID:(id)arg2 context:(id)arg3;
- (void)logActionWithName:(id)arg1 actionID:(id)arg2 context:(id)arg3;
- (id)prepareContextForLog:(id)arg1;
@property(readonly, nonatomic) NSDictionary *environment;
@property(readonly, nonatomic) NSArray *items;
- (id)appSupportURL;
@property(readonly, nonatomic) NSURL *environmentURL;
@property(readonly, nonatomic) NSURL *logURL;
- (void)setEnvironmentValue:(id)arg1 forKey:(id)arg2;
- (void)clearEnvironment;
- (void)log:(id)arg1;
- (id)init;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

