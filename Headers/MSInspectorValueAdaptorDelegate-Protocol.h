//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSInspectorValueAdaptor, NSError;

@protocol MSInspectorValueAdaptorDelegate <NSObject>

@optional
- (BOOL)inspectorValueAdaptor:(MSInspectorValueAdaptor *)arg1 value:(id)arg2 isEqualToValue:(id)arg3;
- (void)inspectorValueAdaptor:(MSInspectorValueAdaptor *)arg1 didEncounterError:(NSError *)arg2;
- (void)inspectorValueAdaptorDidChangeValue:(MSInspectorValueAdaptor *)arg1;
- (BOOL)inspectorValueAdaptor:(MSInspectorValueAdaptor *)arg1 validateValue:(id)arg2 forModel:(id)arg3 context:(id)arg4;
- (void)inspectorValueAdaptor:(MSInspectorValueAdaptor *)arg1 changeValueUsingBlock:(void (^)(void))arg2;
@end

