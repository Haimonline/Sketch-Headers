//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSSwiftPathRendererCG : NSObject
{
}

- (id)init;
- (void)renderBordersForPath:(id)arg1 style:(id)arg2 applyClip:(BOOL)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)renderFillsForPath:(id)arg1 style:(id)arg2 layer:(id)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)renderPath:(id)arg1 style:(id)arg2 layer:(id)arg3 inRect:(struct CGRect)arg4 fillColor:(struct CGColor *)arg5 context:(id)arg6;

@end
