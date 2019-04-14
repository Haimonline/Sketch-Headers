//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPath, NSArray;

@interface MSBezierContour : NSObject
{
    struct CGRect _bounds;
    BOOL _clockwise;
    BOOL _isRectangular;
    MSPath *_path;
    // Error parsing type: A^^v, name: __boundsAtomic
    // Error parsing type: A^^v, name: __clockwiseAtomic
    // Error parsing type: A^^v, name: __isRectangularAtomic
    // Error parsing type: A^^v, name: __pathAtomic
    BOOL _closed;
    NSArray *_segments;
}

+ (id)contourWithPolygonAtPoint:(struct CGPoint)arg1 radius:(double)arg2 sides:(unsigned long long)arg3;
+ (id)contourWithRect:(struct CGRect)arg1;
+ (id)contourWithFBBezierContour:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
- (void).cxx_destruct;
- (id)description;
- (id)debugQuickLookObject;
- (id)intersectionsWithSegment:(id)arg1;
- (id)contourWithInset:(double)arg1 joinStrategy:(unsigned long long)arg2;
- (id)contourWithInset:(double)arg1;
- (id)rejoinSegments:(id)arg1 joinStrategy:(unsigned long long)arg2 closed:(BOOL)arg3;
- (id)segmentsByDiscardingTinySegments:(id)arg1 closed:(BOOL)arg2;
- (id)segmentsByCheckingForPointsInJoin:(id)arg1;
- (id)simplifiedSegments;
- (id)segmentsWithFlatness:(double)arg1;
- (id)simplifySegment:(id)arg1;
- (id)simplifiedSegmentsBySplittingSegment:(id)arg1 atOffset:(double)arg2;
- (id)segmentBeforeSegment:(id)arg1 inArray:(id)arg2 closed:(BOOL)arg3;
- (id)segmentAfterSegment:(id)arg1 inArray:(id)arg2 closed:(BOOL)arg3;
- (id)segmentAfter:(id)arg1;
- (id)segmentBefore:(id)arg1;
- (id)closedContour;
- (id)reversedContour;
@property(readonly, nonatomic, getter=isClockwise) BOOL clockwise;
- (BOOL)calculateIsClockwise;
@property(readonly, nonatomic) MSPath *path;
- (id)createPath;
@property(readonly, nonatomic) BOOL isRectangular;
- (BOOL)doSegmentsFormARectangle:(id)arg1 closed:(BOOL)arg2;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)calculateBounds;
- (id)initWithSegments:(id)arg1 closed:(BOOL)arg2;
- (id)FBBezierContour;

@end

