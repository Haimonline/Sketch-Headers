//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSSnapItem.h>

@class NSArray;

@interface MSCompoundSnapItem : MSSnapItem
{
    NSArray *_relativeRects;
    struct CGRect _unionRect;
}

@property(nonatomic) struct CGRect unionRect; // @synthesize unionRect=_unionRect;
@property(retain, nonatomic) NSArray *relativeRects; // @synthesize relativeRects=_relativeRects;
- (void).cxx_destruct;
- (void)setRectForSnapping:(struct CGRect)arg1;
- (struct CGRect)alignmentRectInCoordinateSpace:(id)arg1 options:(unsigned long long)arg2;
- (struct CGRect)rectForSnapping;
- (struct CGRect)boundsRect;
- (void)concatAncestorsAndSelfTransforms;
- (double)rotation;
- (BOOL)shouldConstrainProportions;
- (id)candidateLayersForSnapping:(unsigned long long)arg1;
- (void)enumerateAnchorsForSnappingOnAxes:(unsigned long long)arg1 includingCenter:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithLayers:(id)arg1;

@end

