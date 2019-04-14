//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchPluginManager/COPrintController-Protocol.h>

@class COScript, MSPluginBundle, MSPluginCommandSpecifier, MSPluginManager, MSPluginScript, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface MSPluginCommand : NSObject <COPrintController>
{
    MSPluginCommandSpecifier *_commandSpecifier;
    BOOL _disableCocoaScriptPreprocessor;
    BOOL _hasAPI;
    BOOL _errorInScript;
    NSString *_identifier;
    MSPluginScript *_script;
    NSString *_name;
    NSDictionary *_handlers;
    NSString *_shortcut;
    MSPluginBundle *_pluginBundle;
    unsigned long long _scope;
    NSMutableArray *_logsWhenRunViaTests;
    COScript *_session;
    NSMutableDictionary *_context;
    NSString *_executingScript;
    NSMutableDictionary *_coreModuleMap;
    MSPluginManager *_manager;
}

+ (id)commandWithJSON:(id)arg1 scripts:(id)arg2 scriptsURL:(id)arg3;
+ (id)actionIDsNotToReload;
@property(nonatomic) __weak MSPluginManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSMutableDictionary *coreModuleMap; // @synthesize coreModuleMap=_coreModuleMap;
@property(retain, nonatomic) NSString *executingScript; // @synthesize executingScript=_executingScript;
@property(nonatomic) BOOL errorInScript; // @synthesize errorInScript=_errorInScript;
@property(nonatomic) BOOL hasAPI; // @synthesize hasAPI=_hasAPI;
@property(retain, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) COScript *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableArray *logsWhenRunViaTests; // @synthesize logsWhenRunViaTests=_logsWhenRunViaTests;
@property(nonatomic) BOOL disableCocoaScriptPreprocessor; // @synthesize disableCocoaScriptPreprocessor=_disableCocoaScriptPreprocessor;
@property(readonly, nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(nonatomic) __weak MSPluginBundle *pluginBundle; // @synthesize pluginBundle=_pluginBundle;
@property(readonly, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, copy, nonatomic) NSDictionary *handlers; // @synthesize handlers=_handlers;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MSPluginScript *script; // @synthesize script=_script;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2 onDocument:(id)arg3;
- (id)valueForKey:(id)arg1 onDocument:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 onLayer:(id)arg3;
- (id)valueForKey:(id)arg1 onLayer:(id)arg2;
- (id)pluginBundleIdentifierForMetadata;
- (void)setValue:(id)arg1 forKey:(id)arg2 onObject:(id)arg3 forPluginIdentifier:(id)arg4;
- (void)setValue:(id)arg1 forKey:(id)arg2 onDocument:(id)arg3 forPluginIdentifier:(id)arg4;
- (void)setValue:(id)arg1 forKey:(id)arg2 onLayer:(id)arg3 forPluginIdentifier:(id)arg4;
- (id)valueForKey:(id)arg1 onDocument:(id)arg2 forPluginIdentifier:(id)arg3;
- (id)valueForKey:(id)arg1 onLayer:(id)arg2 forPluginIdentifier:(id)arg3;
- (id)metadata;
- (BOOL)shouldReloadWithActionID:(id)arg1;
- (id)menuItemWithAction:(SEL)arg1;
- (unsigned long long)shortcutModifiers;
- (id)shortcutKey;
@property(readonly, nonatomic) MSPluginCommandSpecifier *commandSpecifier;
- (void)error:(id)arg1;
- (void)print:(id)arg1;
- (id)logString;
- (void)log:(id)arg1 atLevel:(id)arg2;
@property(nonatomic) BOOL stayRunning;
- (id)executeScript:(id)arg1;
- (BOOL)hasRunHandler;
- (BOOL)tearDownIfFinished;
- (id)runHandler:(id)arg1 context:(id)arg2 manager:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (id)runHandler:(id)arg1 context:(id)arg2 manager:(id)arg3;
- (id)runHandlerWithKey:(id)arg1 context:(id)arg2 manager:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (id)runHandlerWithKey:(id)arg1 context:(id)arg2 manager:(id)arg3;
- (id)run:(id)arg1 manager:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)run:(id)arg1 manager:(id)arg2;
- (id)runHandler:(id)arg1 withOptionalKey:(id)arg2 context:(id)arg3 manager:(id)arg4 onComplete:(CDUnknownBlockType)arg5;
- (id)fullContextFromContext:(id)arg1 url:(id)arg2;
- (void)tearDownSession;
- (void)setUpSessionWithContext:(id)arg1;
- (void)newSessionForURL:(id)arg1 shouldReload:(BOOL)arg2;
- (void)loadJSGlobals;
- (id)flattenedHandlerIndexWithHandlers:(id)arg1;
- (void)dealloc;
- (id)initWithScript:(id)arg1 identifier:(id)arg2 name:(id)arg3 handlers:(id)arg4 shortcut:(id)arg5 scope:(unsigned long long)arg6;
- (id)initWithScript:(id)arg1 identifier:(id)arg2 name:(id)arg3 runHandler:(id)arg4 scope:(unsigned long long)arg5;

@end

