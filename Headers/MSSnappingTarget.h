//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSSnappingTarget : NSObject
{
    unsigned long long _guideType;
    struct CGPoint _point;
    struct CGVector _directionVector;
}

+ (id)targetsForEdgesOfRect:(struct CGRect)arg1 includeCenter:(BOOL)arg2;
@property(readonly, nonatomic) unsigned long long guideType; // @synthesize guideType=_guideType;
@property(readonly, nonatomic) struct CGVector directionVector; // @synthesize directionVector=_directionVector;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)targetByApplyingTransform:(struct CGAffineTransform)arg1;
@property(readonly, nonatomic) struct BCLineSegment lineSegment;
@property(readonly, nonatomic) struct BCLine line;
- (id)initWithPoint:(struct CGPoint)arg1 directionVector:(struct CGVector)arg2 guideType:(unsigned long long)arg3;
- (id)initWithPoint:(struct CGPoint)arg1 axis:(unsigned long long)arg2 wantsGuide:(BOOL)arg3 length:(double)arg4;
- (id)initWithPosition:(double)arg1 onAxis:(unsigned long long)arg2;
- (id)initWithGuideLine:(struct BCLineSegment)arg1;

@end

