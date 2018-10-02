//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCSingleton.h>

@class NSDictionary;

@interface BCDebugMenuController : BCSingleton
{
    NSDictionary *_settings;
}

@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)revealApplicationSupport:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)valueSelected:(id)arg1;
- (void)optionSelected:(id)arg1;
- (void)buildOptionsMenu:(id)arg1 options:(id)arg2 action:(SEL)arg3;
- (void)buildOptionsMenu:(id)arg1;
- (id)debugMenuItem;
- (id)installDebugSubmenuWithTitle:(id)arg1;
- (void)addDebugMenu;
- (id)init;

@end

