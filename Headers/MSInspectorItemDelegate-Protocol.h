//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSDocument, NSViewController;

@protocol MSInspectorItemDelegate <NSObject>
- (MSDocument *)documentForInspectorItem:(NSViewController *)arg1;
- (void)itemDidResize:(NSViewController *)arg1;
- (void)valuesPossiblyChanged:(NSViewController *)arg1;

@optional
- (void)item:(NSViewController *)arg1 wantsSectionToCollapse:(BOOL)arg2;
@end
