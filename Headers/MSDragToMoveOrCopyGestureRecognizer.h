//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSDragGestureRecognizer.h>

@class NSArray, NSNumber;

@interface MSDragToMoveOrCopyGestureRecognizer : MSDragGestureRecognizer
{
    BOOL _shouldInterpretAlignment;
    unsigned long long _alignModifierMask;
    NSNumber *_alignmentAxis;
    id _draggedItem;
    NSArray *_originalDraggedItems;
    NSArray *_originalDragPositions;
    NSArray *_copiedItems;
    double _alignmentDistance;
}

@property(nonatomic) double alignmentDistance; // @synthesize alignmentDistance=_alignmentDistance;
@property(copy, nonatomic) NSArray *copiedItems; // @synthesize copiedItems=_copiedItems;
@property(copy, nonatomic) NSArray *originalDragPositions; // @synthesize originalDragPositions=_originalDragPositions;
@property(copy, nonatomic) NSArray *originalDraggedItems; // @synthesize originalDraggedItems=_originalDraggedItems;
@property(retain, nonatomic) id draggedItem; // @synthesize draggedItem=_draggedItem;
@property(readonly, nonatomic) NSNumber *alignmentAxis; // @synthesize alignmentAxis=_alignmentAxis;
@property(nonatomic) BOOL shouldInterpretAlignment; // @synthesize shouldInterpretAlignment=_shouldInterpretAlignment;
@property(nonatomic) unsigned long long alignModifierMask; // @synthesize alignModifierMask=_alignModifierMask;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL align;
- (void)reset;
- (void)setState:(long long)arg1;
@property(readonly, nonatomic) BOOL shouldSnap;
@property(readonly, nonatomic) BOOL shouldCopyDraggedItems;
- (void)recalculateAlignmentAxis;
- (struct CGPoint)locationInLayer:(id)arg1;
- (struct CGVector)translationInLayer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

