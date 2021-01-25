//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (BCFoundation)
- (id)gzipped_bcAndReturnError:(id *)arg1;
@property(nonatomic, readonly) NSString *hexString;
@property(readonly, nonatomic) NSString *sha1String_bc;
@property(readonly, nonatomic) NSData *sha1Data_bc;
- (id)sha1AsString;
- (id)sha1;
- (void)encodeAsRAWArchive:(id)arg1;
@property(readonly, nonatomic) BOOL isGzipped_bc;
- (id)dataByDecompressing_bc;
- (id)dataByCompressingWithAlgorithm_bc:(int)arg1;
@end

