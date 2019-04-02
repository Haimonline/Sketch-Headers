//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface BCToolRunningResult : NSObject
{
    int _exitStatus;
    NSData *_errorOutput;
    NSData *_output;
    long long _terminationReason;
}

@property(readonly, nonatomic) long long terminationReason; // @synthesize terminationReason=_terminationReason;
@property(readonly, nonatomic) NSData *output; // @synthesize output=_output;
@property(readonly, nonatomic) int exitStatus; // @synthesize exitStatus=_exitStatus;
@property(readonly, nonatomic) NSData *errorOutput; // @synthesize errorOutput=_errorOutput;
- (void).cxx_destruct;
- (id)initWithExitStatus:(int)arg1 terminationReason:(long long)arg2 output:(id)arg3 errorOutput:(id)arg4;

@end

