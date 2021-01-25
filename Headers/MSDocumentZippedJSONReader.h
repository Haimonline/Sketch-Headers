//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSDocumentReader.h>

@class MSJSONZippedUnarchiver, NSDictionary;

@interface MSDocumentZippedJSONReader : MSDocumentReader
{
    NSDictionary *_UIMetadata;
    NSDictionary *_metadata;
    NSDictionary *_workspaceItems;
    MSJSONZippedUnarchiver *_unarchiver;
}

+ (long long)maximumPixelSizeForImageSource:(struct CGImageSource *)arg1 maximumSize:(struct CGSize)arg2;
+ (long long)documentCompatibilityVersion;
+ (long long)documentVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) MSJSONZippedUnarchiver *unarchiver; // @synthesize unarchiver=_unarchiver;
- (id)workspaceItems;
- (id)metadata;
- (id)UIMetadata;
- (id)previewImageWithMaximumSize:(struct CGSize)arg1;
- (id)previewBitmapImageRepWithSize:(struct CGSize)arg1;
- (id)libraryPreviewImage;
- (id)previewImage;
- (id)readImmutableDataWithCorruptionDetected:(char *)arg1 error:(id *)arg2;
- (unsigned long long)validate;
- (void)repair;
- (BOOL)open:(id *)arg1;
- (BOOL)containsPreviewImage;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

