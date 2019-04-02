//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSImmutableLayer.h>

#import <SketchControllers/MSImmutableLayerPreviewability-Protocol.h>

@interface MSImmutableLayer (Preview) <MSImmutableLayerPreviewability>
- (void)addPreviewWithPath:(id)arg1 documentData:(id)arg2 forImageOwner:(id)arg3;
- (id)bezierForDrawingPreviewFromPath:(id)arg1;
- (id)previewImageWithBezier:(id)arg1 documentData:(id)arg2 selected:(BOOL)arg3;
- (BOOL)hasSharedStyleInDocumentData:(id)arg1;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2 bezier:(id)arg3;
- (void)refreshPreviewImagesWithDocumentData:(id)arg1;
- (BOOL)previewImagesRequireRefreshWithDocumentData:(id)arg1;
- (unsigned long long)badgeTypeInDocumentData:(id)arg1;
@end

