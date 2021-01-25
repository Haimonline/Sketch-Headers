//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSTextStyle.h>

#import <SketchModel/MSColorUpdateable-Protocol.h>

@class NSDictionary, NSString;

@interface MSTextStyle : _MSTextStyle <MSColorUpdateable>
{
    NSDictionary *_decodedAttributes;
}

+ (BOOL)textAttributes:(id)arg1 inDocument:(id)arg2 areEqualTo:(id)arg3 inDocument:(id)arg4 forPurpose:(unsigned long long)arg5;
+ (id)styleWithAttributes:(id)arg1;
+ (id)emptyStyle;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *decodedAttributes; // @synthesize decodedAttributes=_decodedAttributes;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (id)updateableColors;
- (void)updateColorsUsing:(id)arg1;
- (void)updateColorsUsingBlock:(CDUnknownBlockType)arg1;
- (void)multiplyBy:(double)arg1;
- (id)stringByTransformingString:(id)arg1;
- (void)resetDecodedAttributes;
- (void)syncOwningTextLayerWithThisStyle;
@property(copy, nonatomic) NSDictionary *attributes;
- (void)updateAttributesWithoutSyncingOwningTextLayer:(id)arg1;
@property(readonly, nonatomic) NSString *fontPostscriptName;
@property(readonly, nonatomic) BOOL isRequiredFontAvailable;
- (id)treeAsDictionary;
- (BOOL)isFontAvailable;
- (void)replaceFonts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

