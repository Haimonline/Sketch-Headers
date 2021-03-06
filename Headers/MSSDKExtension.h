//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSModel-Protocol.h"
#import "MSSerializableObject-Protocol.h"

@class NSString, NSUUID;

@interface MSSDKExtension : NSObject <MSSerializableObject, MSModel>
{
    NSString *_libVer;
    NSString *_epoch;
    long long _seq;
    NSUUID *_installId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *installId; // @synthesize installId=_installId;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *epoch; // @synthesize epoch=_epoch;
@property(copy, nonatomic) NSString *libVer; // @synthesize libVer=_libVer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;

@end

