//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSSharedObjectContainer.h"

@interface MSSharedObjectContainer : _MSSharedObjectContainer
{
}

- (id)objectsSortedByName;
- (unsigned long long)numberOfSharedObjects;
- (long long)indexOfSharedObject:(id)arg1;
- (id)sharedObjectAtIndex:(unsigned long long)arg1;
- (id)sharedObjectWithID:(id)arg1;
- (id)objectsReferencing:(id)arg1 inContainer:(id)arg2;
- (void)removeSharedObject:(id)arg1;
- (void)removeSharedObjects:(id)arg1;
- (Class)sharedObjectClass;

@end

