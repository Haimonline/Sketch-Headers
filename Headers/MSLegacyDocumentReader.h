//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSDocumentReader.h>

@class BCStructuredFile, NSDictionary, NSURL;

@interface MSLegacyDocumentReader : MSDocumentReader
{
    BOOL _documentWasMigrated;
    NSDictionary *_UIMetadata;
    NSDictionary *_metadata;
    BCStructuredFile *_file;
    NSURL *_fileURL;
    unsigned long long _documentFileState;
}

@property(readonly, nonatomic) unsigned long long documentFileState; // @synthesize documentFileState=_documentFileState;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) BCStructuredFile *file; // @synthesize file=_file;
- (id)metadata;
- (BOOL)documentWasMigrated;
- (void).cxx_destruct;
- (void)repair;
- (id)UIMetadata;
- (id)data;
- (id)readImmutableDataWithCorruptionDetected:(char *)arg1 error:(id *)arg2;
- (unsigned long long)validate;
- (BOOL)open:(id *)arg1;
- (BOOL)containsPreviewImage;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

