//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BCLayerList/NSObject-Protocol.h>

@class BCTableRowView;

@protocol BCTableRowViewDelegate <NSObject>
- (void)updateVisualStateOfRowView:(BCTableRowView *)arg1;
- (unsigned long long)tableRowView:(BCTableRowView *)arg1 displayTypeOfRowAtIndex:(long long)arg2;
- (long long)indexOfTableRowView:(BCTableRowView *)arg1;
- (BOOL)isNodeExpandedInTableRowView:(BCTableRowView *)arg1;
- (BOOL)multipleNodesSelected;
- (BOOL)isNodeOfTableRowViewHovered:(BCTableRowView *)arg1;
- (BOOL)isNodeSelectedOnRow:(long long)arg1;
- (BOOL)isNodeOfTableRowViewSelected:(BCTableRowView *)arg1;
@end

