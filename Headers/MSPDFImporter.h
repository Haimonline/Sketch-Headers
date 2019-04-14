//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSImporter-Protocol.h>

@class MSPDFScanner, NSString;
@protocol PDFParser;

@interface MSPDFImporter : NSObject <MSImporter>
{
    id <PDFParser> _parser;
    MSPDFScanner *_scanner;
    NSString *_type;
}

+ (id)epsImporter;
+ (id)pdfImporter;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) MSPDFScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) id <PDFParser> parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (BOOL)shouldCollapseSinglePage;
- (BOOL)shouldExpandPages;
- (id)secondPhaseSubtitleForValue:(long long)arg1 maximum:(long long)arg2;
- (id)firstPhaseSubtitle;
- (void)finishImporting;
- (id)unwrappedLayer:(id)arg1;
- (id)importAsLayer;
- (void)importIntoPage:(id)arg1 name:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)name;
- (unsigned long long)prepareToImportFromData:(id)arg1;
- (unsigned long long)prepareToImportFromURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

