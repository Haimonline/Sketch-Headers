//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSOverrideManagementItem, NSLayoutConstraint;

@interface MSOverrideManagementViewController : NSViewController
{
    MSOverrideManagementItem *_managementItem;
    NSLayoutConstraint *_indentConstraint;
}

+ (double)rowHeight;
@property(retain, nonatomic) NSLayoutConstraint *indentConstraint; // @synthesize indentConstraint=_indentConstraint;
@property(retain, nonatomic) MSOverrideManagementItem *managementItem; // @synthesize managementItem=_managementItem;
- (void).cxx_destruct;
- (void)updateIndent;

@end

