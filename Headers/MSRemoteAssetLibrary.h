//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchControllers/MSAssetLibrary.h>

@class MSAssetLibraryUpdatingInfo, NSString, NSURL;

@interface MSRemoteAssetLibrary : MSAssetLibrary
{
    BOOL _newUpdatingInfo;
    NSURL *_appcastURL;
    NSString *_libraryVersion;
    NSString *_originalName;
    NSString *_infoText;
    MSAssetLibraryUpdatingInfo *_updatingInfo;
    NSString *_displayName;
}

+ (id)URLForApplicationSupportLibraryNamed:(id)arg1;
+ (id)assetLibraryFolder;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) MSAssetLibraryUpdatingInfo *updatingInfo; // @synthesize updatingInfo=_updatingInfo;
@property(nonatomic) BOOL newUpdatingInfo; // @synthesize newUpdatingInfo=_newUpdatingInfo;
@property(retain, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(copy, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(retain, nonatomic) NSURL *appcastURL; // @synthesize appcastURL=_appcastURL;
- (void).cxx_destruct;
- (void)assetLibraryUpdated;
- (id)name;
@property(readonly, nonatomic) NSString *fileName;
- (id)previewURL;
- (void)resolveLocationOnDisk;
@property(readonly, nonatomic) BOOL downloadAvailable;
@property(readonly, nonatomic) BOOL updateAvailable;
- (unsigned long long)libraryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 appcastURL:(id)arg2 version:(id)arg3 infoText:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAtURL:(id)arg1;

@end

