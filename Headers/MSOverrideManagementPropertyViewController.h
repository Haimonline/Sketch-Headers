//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSOverrideManagementViewController.h"

@class MSOverrideManagementPropertyItem, NSButton, NSString;

@interface MSOverrideManagementPropertyViewController : MSOverrideManagementViewController
{
    NSString *_propertyName;
    NSButton *_checkButton;
}

@property(retain, nonatomic) NSButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
@property(nonatomic) BOOL canOverride;
- (void)setManagementItem:(id)arg1;
@property(readonly, nonatomic) MSOverrideManagementPropertyItem *propertyItem;

@end

