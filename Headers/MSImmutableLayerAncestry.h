//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableArtboardGroup, MSImmutableDocumentData, MSImmutableLayer, MSImmutableLayerGroup, MSImmutablePage, NSArray;

@interface MSImmutableLayerAncestry : NSObject
{
    MSImmutableLayer *_layer;
    MSImmutableDocumentData *_document;
    MSImmutablePage *_page;
    NSArray *_ancestors;
}

+ (id)ancestryWithMSLayer:(id)arg1;
@property(retain, nonatomic) NSArray *ancestors; // @synthesize ancestors=_ancestors;
@property(readonly, nonatomic) MSImmutablePage *page; // @synthesize page=_page;
@property(readonly, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(readonly, nonatomic) MSImmutableLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToImmutableLayerAncestry:(id)arg1;
@property(readonly, nonatomic) unsigned long long hash;
- (struct CGRect)absoluteRect;
@property(readonly, nonatomic) MSImmutableArtboardGroup *artboard;
@property(readonly, nonatomic) MSImmutableLayerGroup *parentGroup;
@property(readonly, nonatomic) NSArray *ancestorsAndSelf;
- (BOOL)ancestorsForLayerInGroup:(id)arg1 array:(id)arg2;
- (id)findAncestors;
- (id)initWithMSLayer:(id)arg1;
- (id)initWithLayer:(id)arg1 ancestors:(id)arg2 document:(id)arg3;
- (id)initWithLayer:(id)arg1 document:(id)arg2;

@end

