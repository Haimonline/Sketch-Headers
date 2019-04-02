//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BCFoundation/BCRect-Protocol.h>
#import <BCFoundation/NSCopying-Protocol.h>

@class NSString;

@interface BCRect : NSObject <NSCopying, BCRect>
{
    struct CGRect _rect;
}

+ (id)rectWithRect:(struct CGRect)arg1;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) struct CGSize size; // @dynamic size;
@property(nonatomic) struct CGPoint origin; // @dynamic origin;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) struct CGPoint mid;
@property(nonatomic) double maxY; // @dynamic maxY;
@property(nonatomic) double midY; // @dynamic midY;
@property(nonatomic) double minY;
@property(nonatomic) double maxX; // @dynamic maxX;
@property(nonatomic) double midX; // @dynamic midX;
@property(nonatomic) double minX;
@property(nonatomic) double height; // @dynamic height;
@property(nonatomic) double width; // @dynamic width;
@property(nonatomic) double y; // @dynamic y;
@property(nonatomic) double x; // @dynamic x;
- (id)initWithRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

