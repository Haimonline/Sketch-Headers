//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSLayerCoordinateSpace-Protocol.h>

@class MSLayer;
@protocol MSRootLayer;

@interface MSRulerCoordinateSpace : NSObject <MSLayerCoordinateSpace>
{
    MSLayer<MSRootLayer> *_layer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak MSLayer<MSRootLayer> *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) struct CGAffineTransform transformForConvertingFromParentCoordinateSpace;
@property(readonly, nonatomic) struct CGAffineTransform transformForConvertingToParentCoordinateSpace;
- (id)parentCoordinateSpace;
- (struct CGAffineTransform)transformForConvertingToCoordinateSpace:(id)arg1;
- (struct CGAffineTransform)transformForConvertingFromCoordinateSpace:(id)arg1;
- (struct CGVector)convertVector:(struct CGVector)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGVector)convertVector:(struct CGVector)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)initWithLayer:(id)arg1;

@end

