//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSCloudManifestMakerDelegate-Protocol.h>

@class MSImmutableDocumentData, NSBundle, NSString, NSURL, SCKOrganization;
@protocol OS_dispatch_queue;

@interface MSWebExporter : NSObject <MSCloudManifestMakerDelegate>
{
    BOOL _selectiveExport;
    BOOL _cancelled;
    NSURL *_destinationURL;
    NSString *_name;
    SCKOrganization *_cloudOrganization;
    NSBundle *_clientBundle;
    MSImmutableDocumentData *_immutableDocumentData;
    NSObject<OS_dispatch_queue> *_exportingQueue;
}

+ (id)exportViewportBitmapImageForRequest:(id)arg1;
+ (id)exportBitmapImageForRequest:(id)arg1;
+ (id)imageURLWithHash:(id)arg1 inDirectory:(id)arg2;
+ (id)documentURLInDirectory:(id)arg1;
+ (void)exportArtboardsOfDocument:(id)arg1 withName:(id)arg2 toLocalURL:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)exportSelectedArtboardsOfDocument:(id)arg1 withName:(id)arg2 toLocalURL:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *exportingQueue; // @synthesize exportingQueue=_exportingQueue;
@property(retain, nonatomic) MSImmutableDocumentData *immutableDocumentData; // @synthesize immutableDocumentData=_immutableDocumentData;
@property(retain, nonatomic) NSBundle *clientBundle; // @synthesize clientBundle=_clientBundle;
@property(retain, nonatomic) SCKOrganization *cloudOrganization; // @synthesize cloudOrganization=_cloudOrganization;
@property(nonatomic) BOOL selectiveExport; // @synthesize selectiveExport=_selectiveExport;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void).cxx_destruct;
- (id)cloudManifestMaker:(id)arg1 fileMetadataForAncestry:(id)arg2 layerBehavior:(unsigned long long)arg3 atScale:(double)arg4;
- (BOOL)saveManifestFile:(id)arg1 withError:(id *)arg2;
- (id)exportImageMetadataForRequest:(id)arg1 manifestScale:(double)arg2;
- (id)metadataForDocument:(id)arg1;
@property(readonly, nonatomic) unsigned long long documentFileSize;
- (void)callCompletionBlock:(CDUnknownBlockType)arg1 withDidExport:(BOOL)arg2 error:(id)arg3;
- (BOOL)exportDocumentPreviews;
- (void)exportDocumentWithUIMetadata:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)exportArtboardsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)exportArtboardsAndManifestForCloud:(id)arg1 error:(id *)arg2;
- (void)cancel;
- (id)initWithDocument:(id)arg1 name:(id)arg2 localURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

