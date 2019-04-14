//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/BCSortable-Protocol.h>
#import <SketchControllers/MSSharedObjectStyling-Protocol.h>

@class MSAssetLibrary, MSModelObject, NSString;
@protocol BCSortable><MSSharedObjectStyling;

@interface MSShareableObjectReference : NSObject <BCSortable, MSSharedObjectStyling>
{
    MSAssetLibrary *_sourceLibrary;
    struct MSModelObject *_shareableObject;
}

+ (id)referenceForShareableObject:(struct MSModelObject *)arg1 inLibrary:(id)arg2;
+ (id)referenceForShareableObject:(struct MSModelObject *)arg1;
@property(retain, nonatomic) MSModelObject<BCSortable><MSSharedObjectStyling> *shareableObject; // @synthesize shareableObject=_shareableObject;
@property(retain, nonatomic) MSAssetLibrary *sourceLibrary; // @synthesize sourceLibrary=_sourceLibrary;
- (void).cxx_destruct;
- (void)generatePreviewForSyncSheetWithSize:(struct CGSize)arg1 backingScale:(double)arg2 shadow:(BOOL)arg3 colorSpace:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)applyStyleToMenuItem:(id)arg1 withColorSpace:(id)arg2;
- (id)generatePreviewForManageSheetWithBackingScale:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)generatePreviewForPopup:(id)arg1 backingScale:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)generatePreviewForMenuItem:(id)arg1 withColorSpace:(id)arg2 backingScale:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSString *locationPath;
- (id)localLocationPath;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long shareableObjectType;
- (id)foreignObjectCollectionInDocument:(id)arg1;
@property(readonly, nonatomic) NSString *sharedObjectID;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)addToDocument:(id)arg1 withAssetLibraryController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

