//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentsCollectionItem.h"

@class NSURL;

@interface MSExistingDocumentCollectionItem : MSDocumentsCollectionItem
{
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)updateCloudStatus;
- (void)cancelDocumentDownload;
- (void)updateDownloadProgress;
- (BOOL)isEqual:(id)arg1;
- (void)fetchPreviewImageWithMaximumPixelSize:(double)arg1 previewImageCache:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)matchesURL:(id)arg1;
- (BOOL)providesPreviewImage;
- (id)toolTip;
- (id)title;
- (id)initWithURL:(id)arg1;

@end

