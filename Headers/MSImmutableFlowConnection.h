//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/_MSImmutableFlowConnection.h>

@interface MSImmutableFlowConnection : _MSImmutableFlowConnection
{
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
- (struct MSFlowInfo)flowInfoFromParentLayer:(id)arg1 toArtboard:(id)arg2 type:(long long)arg3;
- (struct MSFlowInfo)flowInfoFromParentLayer:(id)arg1 toArtboard:(id)arg2;
- (long long)flowTypeForTransitionFromParentLayer:(id)arg1 toArtboard:(id)arg2;
- (BOOL)isValidFlowConnectionInDocumentData:(id)arg1;
@property(readonly, nonatomic) BOOL isBackAction;
- (id)lightweightCopyWithNewDestinationArtboard_Detach:(id)arg1;

@end

