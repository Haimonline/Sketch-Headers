//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _TtC17SketchControllers9MSResizer;

@interface _TtC17SketchControllers15MSResizeSession : NSObject
{
    // Error parsing type: , name: layers
    // Error parsing type: , name: resizer
    // Error parsing type: , name: snapItem
    // Error parsing type: , name: _isValid
    // Error parsing type: , name: zoomScale
    // Error parsing type: , name: visibleRect
    // Error parsing type: , name: rulersAreVisible
    // Error parsing type: , name: _mouseLocation
    // Error parsing type: , name: options
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)updateModel;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)updateWithPoint:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)updateWithDragRecognizer:(id)arg1;
@property(nonatomic) BOOL rulersAreVisible; // @synthesize rulersAreVisible;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
- (void)dealloc;
- (void)finish;
- (id)initWithLayers:(id)arg1 handle:(long long)arg2 snapItem:(id)arg3;
- (id)initWithLayer:(id)arg1 handle:(long long)arg2 snapItem:(id)arg3;
@property(nonatomic, readonly) _TtC17SketchControllers9MSResizer *resizer; // @synthesize resizer;
@property(nonatomic, readonly) NSArray *layers; // @synthesize layers;

@end

