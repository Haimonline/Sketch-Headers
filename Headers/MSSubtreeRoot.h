//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSImmutableLayerGroup, MSImmutableModelObject, NSArray;
@protocol MSWebExportableRootLayer;

@interface MSSubtreeRoot : NSObject
{
    MSImmutableModelObject *_object;
    NSArray *_ancestorsOfObject;
    MSImmutableDocumentData *_document;
}

@property(retain, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(retain, nonatomic) NSArray *ancestorsOfObject; // @synthesize ancestorsOfObject=_ancestorsOfObject;
@property(retain, nonatomic) MSImmutableModelObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)page;
- (struct CGRect)overlayDirtyDiffRectForPage:(id)arg1;
- (struct CGRect)contentDirtyDiffRectForPage:(id)arg1;
@property(readonly, nonatomic) MSImmutableLayerGroup<MSWebExportableRootLayer> *webExportableRootLayer;

@end

