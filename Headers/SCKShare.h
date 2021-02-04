//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

@class NSArray, NSString, NSURL, SCKProject, SCKShareVersion;
@protocol SCKContentOwner;

@interface SCKShare : SCKObject
{
    BOOL _isPrivate;
    BOOL _canUpdate;
    BOOL _libraryEnabled;
    NSURL *_publicURL;
    NSString *_name;
    NSString *_shortID;
    SCKShareVersion *_currentVersion;
    SCKShareVersion *_latestVersion;
    unsigned long long _versionCount;
    NSArray *_previewThumbnails;
    SCKObject<SCKContentOwner> *_owner;
    SCKProject *_project;
    NSString *_selectedArtboardID;
    NSString *_selectedPageID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL libraryEnabled; // @synthesize libraryEnabled=_libraryEnabled;
@property(readonly, nonatomic) NSString *selectedPageID; // @synthesize selectedPageID=_selectedPageID;
@property(readonly, nonatomic) NSString *selectedArtboardID; // @synthesize selectedArtboardID=_selectedArtboardID;
@property(readonly, nonatomic) SCKProject *project; // @synthesize project=_project;
@property(readonly, nonatomic) SCKObject<SCKContentOwner> *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSArray *previewThumbnails; // @synthesize previewThumbnails=_previewThumbnails;
@property(readonly, nonatomic) BOOL canUpdate; // @synthesize canUpdate=_canUpdate;
@property(readonly, nonatomic) unsigned long long versionCount; // @synthesize versionCount=_versionCount;
@property(readonly, nonatomic) SCKShareVersion *latestVersion; // @synthesize latestVersion=_latestVersion;
@property(readonly, nonatomic) SCKShareVersion *currentVersion; // @synthesize currentVersion=_currentVersion;
@property(readonly, nonatomic) BOOL isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) NSString *shortID; // @synthesize shortID=_shortID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)shareBySettingCurrentVersion:(id)arg1;
- (BOOL)isManagedByOwner:(id)arg1;
- (BOOL)isUpdatedByShare:(id)arg1;
- (id)readOnlyCopy;
- (id)shareBySettingOwner:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSURL *sketchComPublicURL;
@property(readonly, nonatomic) NSURL *publicURL; // @synthesize publicURL=_publicURL;
- (id)initWithDictionary:(id)arg1;

@end

