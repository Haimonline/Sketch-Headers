//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSOverrideInspectorItem.h"

@class NSTextField;

@interface MSTextOverrideInspectorItem : MSOverrideInspectorItem
{
    NSTextField *_overrideTextField;
}

+ (double)textFieldHeightForNumberOfLines:(unsigned long long)arg1;
+ (double)textFieldHeightForOverrideRepresentation:(id)arg1 layers:(id)arg2;
+ (double)heightForOverride:(id)arg1 layers:(id)arg2 shouldShowLabel:(BOOL)arg3 indentationLevel:(unsigned long long)arg4;
+ (unsigned long long)numberOfLinesForOverride:(id)arg1 layers:(id)arg2;
+ (unsigned long long)numberOfLinesForSingleOverride:(id)arg1;
@property(retain, nonatomic) NSTextField *overrideTextField; // @synthesize overrideTextField=_overrideTextField;
- (void).cxx_destruct;
- (id)valueFromControlView:(id)arg1;
- (id)controlViewForEditingOverride;
- (id)dataOverrides;
- (void)dataMenuProviderRefreshMasterData:(id)arg1;
- (void)dataMenuProvider:(id)arg1 didChooseData:(id)arg2;
- (unsigned long long)supportedDataProviders;

@end

