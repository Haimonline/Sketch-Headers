//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSExportRequest, NSImage, NSString;

@interface MSExportPreviewViewModel : NSObject
{
    BOOL _isVectorFormat;
    NSImage *_previewImage;
    MSExportRequest *_cachedExportRequest;
    NSString *_layerName;
    NSString *_defaultExportFormat;
    struct CGRect _previewFrame;
}

@property(nonatomic) struct CGRect previewFrame; // @synthesize previewFrame=_previewFrame;
@property(readonly, nonatomic) BOOL isVectorFormat; // @synthesize isVectorFormat=_isVectorFormat;
@property(readonly, nonatomic) NSString *defaultExportFormat; // @synthesize defaultExportFormat=_defaultExportFormat;
@property(readonly, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
@property(retain, nonatomic) MSExportRequest *cachedExportRequest; // @synthesize cachedExportRequest=_cachedExportRequest;
@property(retain, nonatomic) NSImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (void)exportDataInFormat:(id)arg1 toURL:(id)arg2;
- (id)imageDataInFormat:(id)arg1;
- (id)initWithPreviewImage:(id)arg1 cachedExportRequest:(id)arg2 ancestry:(id)arg3;

@end

