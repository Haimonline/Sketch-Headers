//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSPasteboardLayersBase : NSObject
{
}

+ (void)addObjectIDToNameMappingForOverrides:(id)arg1 toMapping:(id)arg2 document:(id)arg3;
+ (id)objectIDToLayerNameMappingFromLayers:(id)arg1 symbols:(id)arg2 document:(id)arg3;
+ (id)usedSharedObjectsInDocument:(id)arg1 layers:(id)arg2;
+ (id)swappedSymbolsForOverrides:(id)arg1;
+ (id)usedSymbolsInContainer:(id)arg1 document:(id)arg2 skip:(id)arg3;
+ (id)usedSymbolsInContainer:(id)arg1 document:(id)arg2;
+ (id)dataForPasteboardData:(id)arg1;
+ (id)pasteboardDataFromData:(id)arg1;

@end
