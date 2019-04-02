//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, NSString, NSURL;

@interface MSManifestMaker : NSObject
{
    BOOL _selectiveExport;
    BOOL _usePageIfMissingArtboard;
    MSImmutableDocumentData *_documentData;
    NSString *_name;
    NSURL *_fileURL;
}

+ (id)keyForFlowAnimationType:(long long)arg1;
+ (id)manifestValueForColorSpace:(unsigned long long)arg1;
@property(nonatomic) BOOL usePageIfMissingArtboard; // @synthesize usePageIfMissingArtboard=_usePageIfMissingArtboard;
@property(nonatomic) BOOL selectiveExport; // @synthesize selectiveExport=_selectiveExport;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MSImmutableDocumentData *documentData; // @synthesize documentData=_documentData;
- (void).cxx_destruct;
- (id)metadataForFlow:(id)arg1;
- (id)dictForRect:(struct CGRect)arg1 inRootLayer:(id)arg2;
- (id)metadataForLayer:(id)arg1 fixedByLayer:(id)arg2;
- (id)specialiseObjectMetadata:(id)arg1 forSymbolInstance:(id)arg2;
- (id)metadataForChildLayersInSymbolInstance:(id)arg1 inRootLayer:(id)arg2 positionTransform:(struct CGAffineTransform)arg3 withAncestors:(id)arg4 earlierSymbols:(id)arg5 fixedByLayer:(id)arg6;
- (id)metadataForChildLayersInLayer:(id)arg1 inRootLayer:(id)arg2 positionTransform:(struct CGAffineTransform)arg3 withAncestors:(id)arg4 earlierSymbols:(id)arg5 fixedByLayer:(id)arg6;
- (id)metadataForLayer:(id)arg1 inRootLayer:(id)arg2 positionTransform:(struct CGAffineTransform)arg3 withAncestors:(id)arg4 earlierSymbols:(id)arg5 fixedByLayer:(id)arg6;
- (id)metadataForLayersInRootLayer:(id)arg1 ancestors:(id)arg2;
- (id)filesMetadataForRootLayer:(id)arg1 onPage:(id)arg2 id:(id)arg3;
- (id)metadataForRootLayer:(id)arg1 onPage:(id)arg2 earlierSlugs:(id)arg3;
- (BOOL)shouldExportLayerGroup:(id)arg1;
- (id)metadataAndExportForArtboardsOnPage:(id)arg1;
- (id)metadataAndExportForPage:(id)arg1 earlierSlugs:(id)arg2;
- (id)metadataAndExportForPages:(id)arg1;
- (id)createManifest;
- (id)initWithDocument:(id)arg1;

@end

