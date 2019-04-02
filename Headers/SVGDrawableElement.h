//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchSVG/_SVGDrawableElement.h>

@class NSXMLElement;

@interface SVGDrawableElement : _SVGDrawableElement
{
    NSXMLElement *_deferredClipping;
}

+ (id)styleDefaults;
@property(retain, nonatomic) NSXMLElement *deferredClipping; // @synthesize deferredClipping=_deferredClipping;
- (void).cxx_destruct;
- (id)gradientFromSVGGradient:(id)arg1 layer:(id)arg2;
- (void)applyEffectsToLayer:(id)arg1;
- (void)applyScaling:(double)arg1 recursivelyToStyleOfLayer:(id)arg2 parentStyle:(id)arg3;
- (void)applyTransform:(id)arg1 toLayer:(id)arg2;
- (void)resizeLayer:(id)arg1 withoutContraintsToRect:(struct CGRect)arg2;
- (void)adjustSizeForChildrenOfLayer:(id)arg1;
- (id)adjustOwnLayer:(id)arg1 parentLayer:(id)arg2;
- (id)enclosingLayerForLayer:(id)arg1 parentLayer:(id)arg2;
- (id)emptyLayerWithParentLayer:(id)arg1;
- (id)makeOwnLayerWithParentLayer:(id)arg1;
- (id)makeLayerGroupWithParentLayer:(id)arg1;
- (id)makeLayerWithParentLayer:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)drawableParent;
- (BOOL)containsDrawables;
- (BOOL)dontCollapse;
- (id)svgAttributesDescription;
- (void)processStyles:(id)arg1 parent:(id)arg2;
- (void)processClipping:(id)arg1 parent:(id)arg2;
- (unsigned long long)processChild:(id)arg1 index:(unsigned long long)arg2;
- (void)processDeferredClippingAtIndex:(unsigned long long)arg1;
- (void)processStyles:(id)arg1;
- (void)processSelf:(id)arg1;
- (id)initWithImporter:(id)arg1 xml:(id)arg2;

@end

