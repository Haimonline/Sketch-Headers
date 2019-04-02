//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSDataSupplierDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol MSDataSupplierManagerDelegate;

@interface MSDataSupplierManager : NSObject <MSDataSupplierDelegate>
{
    id <MSDataSupplierManagerDelegate> _delegate;
    NSString *_objectID;
    NSMutableArray *_pluginData;
    NSMutableArray *_localData;
    NSMutableArray *_builtinData;
    NSMutableDictionary *_builtinDataGroups;
    NSMutableDictionary *_localDataGroups;
    NSMutableDictionary *_pluginDataGroups;
    NSMutableDictionary *_replyContexts;
}

+ (BOOL)validLocalDataFileSystemURL:(id)arg1;
+ (id)URLForBuiltinDataNamed:(id)arg1;
+ (id)localizedBuiltinDataFolder;
+ (id)builtinDataDefaultLanguageFolder;
+ (id)builtinDataDefaultURL;
+ (id)builtinDataDefaultLanguage;
+ (id)builtinDataDefaultPath;
+ (id)makeObjectID;
@property(retain, nonatomic) NSMutableDictionary *replyContexts; // @synthesize replyContexts=_replyContexts;
@property(retain, nonatomic) NSMutableDictionary *pluginDataGroups; // @synthesize pluginDataGroups=_pluginDataGroups;
@property(retain, nonatomic) NSMutableDictionary *localDataGroups; // @synthesize localDataGroups=_localDataGroups;
@property(retain, nonatomic) NSMutableDictionary *builtinDataGroups; // @synthesize builtinDataGroups=_builtinDataGroups;
@property(retain, nonatomic) NSMutableArray *builtinData; // @synthesize builtinData=_builtinData;
@property(retain, nonatomic) NSMutableArray *localData; // @synthesize localData=_localData;
@property(retain, nonatomic) NSMutableArray *pluginData; // @synthesize pluginData=_pluginData;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) __weak id <MSDataSupplierManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)makeGroupsFromPluginDataSuppliers:(id)arg1;
- (id)builtinDataGroupsFromDefaults;
- (id)builtinDataFromDefaults;
- (id)localDataFromDefaults;
- (void)postDataSupplierChangeNotification;
- (BOOL)hasLocalDataSupplierWithDataIdentifier:(id)arg1;
- (id)firstPluginDataSupplierWithIdentifier:(id)arg1;
- (id)firstDataSupplierInArray:(id)arg1 dataIdentifier:(id)arg2;
- (id)imageForTextLocalDataSupplier:(id)arg1 forSize:(struct CGSize)arg2;
- (id)imageForImageLocalDataSupplier:(id)arg1;
- (void)replaceLocalDataSupplierGroup:(id)arg1 withLocalGroup:(id)arg2;
- (id)groupNameForPluginGroupIdentifier:(id)arg1;
- (id)dataSupplierMenuItemImage:(id)arg1;
- (void)dataSupplierGroupDidChange:(id)arg1;
- (void)dataSupplierDataDidChange:(id)arg1;
- (BOOL)removePluginDataSupplierGroupsWithNoAssociatedPlugin:(id)arg1;
- (void)removePluginDataSuppliersNotIdentifiedWithIdentifiers:(id)arg1;
- (void)removeLocalDataSuppliers:(id)arg1;
- (void)removeLocalDataSupplierGroup:(id)arg1;
- (void)removeLocalDataSupplierGroupWithIdentifier:(id)arg1;
- (id)dataGroupsFromBuiltinData;
- (void)savePluginDataGroups;
- (void)saveBuiltinDataGroups;
- (void)saveLocalDataGroups;
- (id)dataGroupsFromLocalData;
- (void)loadBuiltinData;
- (void)addBuiltinDataSupplierGroup:(id)arg1;
- (void)loadPluginData;
- (void)loadLocalData;
- (id)localDataSupplierGroupsInFolder:(id)arg1;
- (BOOL)canAddLocalDataGroupWithURL:(id)arg1;
- (id)localDataSupplierGroupWithMultipleDataSuppliersWithGroupFolder:(id)arg1;
- (void)addLocalDataSuppliers:(id)arg1;
- (BOOL)hasLocalDataSupplierWithURL:(id)arg1;
- (void)addLocalDataSupplierGroup:(id)arg1;
- (void)addLocalData:(id)arg1;
- (id)builtinDataInApplication;
- (void)loadDataSuppliers;
- (id)localDataSuppliers;
@property(readonly, nonatomic) NSDictionary *dataSupplierGroups;
- (id)usableDataSupplierWithIdentifier:(id)arg1;
- (id)dataSupplierWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *dataSuppliers;
- (void)removeAndFinalizeReplyContextWithKey:(id)arg1;
- (void)supplyData:(id)arg1 atIndex:(id)arg2 forKey:(id)arg3;
- (void)supplyData:(id)arg1 forKey:(id)arg2;
- (void)requestDataFromPluginDataSupplier:(id)arg1 dataContext:(id)arg2 applierBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deregisterDataSuppliersForPluginWithIdentifier:(id)arg1;
- (id)pluginDataSupplierGroupForPluginIdentifier:(id)arg1;
- (id)pluginDataSuppliersWithPluginIdentifier:(id)arg1;
- (void)registerPluginDataSupplier:(id)arg1 withName:(id)arg2 dataType:(id)arg3 pluginIdentifier:(id)arg4 commandIdentifier:(id)arg5;
- (void)setPluginDataReplyContext:(id)arg1 forDataKey:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

