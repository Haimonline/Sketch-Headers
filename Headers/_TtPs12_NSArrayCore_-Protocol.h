//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_TtPs10_NSCopying_-Protocol.h"
#import "_TtPs18_NSFastEnumeration_-Protocol.h"

@protocol _TtPs12_NSArrayCore_ <_TtPs10_NSCopying_, _TtPs18_NSFastEnumeration_>
@property(nonatomic, readonly) long long count;
- (long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(long long)arg3;
- (void)getObjects:(id *)arg1 range:(CDStruct_912cb5d2)arg2;
- (id)objectAtIndex:(long long)arg1;
@end

