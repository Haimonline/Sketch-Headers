//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSPasteboardReader-Protocol.h>

@class NSString;

@interface MSPasteboardTextReader : NSObject <MSPasteboardReader>
{
}

- (id)pasteboardDataFromPasteboard:(id)arg1 colorSpace:(id)arg2 options:(unsigned long long)arg3 sender:(id)arg4;
- (id)attributedStringFromPasteboard:(id)arg1 options:(unsigned long long)arg2;
- (id)supportedPasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

