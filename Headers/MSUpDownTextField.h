//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import "MSUpDownProtocol-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class MSUpDownController, NSString, NSView;

@interface MSUpDownTextField : NSTextField <NSTextViewDelegate, MSUpDownProtocol, NSTouchBarDelegate>
{
    BOOL _hasMinimum;
    BOOL _hasMaximum;
    id _refreshDelegate;
    MSUpDownController *_upDownController;
    double _ownMinimum;
    double _ownMaximum;
    NSView *_preferredNextKeyView;
    double _minimumIncrementValue;
    unsigned long long _scrubberCount;
    unsigned long long _scrubberIndex;
}

@property(nonatomic) unsigned long long scrubberIndex; // @synthesize scrubberIndex=_scrubberIndex;
@property(nonatomic) unsigned long long scrubberCount; // @synthesize scrubberCount=_scrubberCount;
@property(nonatomic) double minimumIncrementValue; // @synthesize minimumIncrementValue=_minimumIncrementValue;
@property(retain, nonatomic) NSView *preferredNextKeyView; // @synthesize preferredNextKeyView=_preferredNextKeyView;
@property(nonatomic) double ownMaximum; // @synthesize ownMaximum=_ownMaximum;
@property(nonatomic) double ownMinimum; // @synthesize ownMinimum=_ownMinimum;
@property(nonatomic) BOOL hasMaximum; // @synthesize hasMaximum=_hasMaximum;
@property(nonatomic) BOOL hasMinimum; // @synthesize hasMinimum=_hasMinimum;
@property(retain, nonatomic) MSUpDownController *upDownController; // @synthesize upDownController=_upDownController;
@property(nonatomic) __weak id refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
- (void).cxx_destruct;
- (id)makeTouchBar;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)keyUp:(id)arg1;
- (id)maximum;
- (id)minimum;
- (double)incrementValue;
- (void)awakeFromNib;
- (void)connectToValueAdapter:(id)arg1 bindingOptions:(id)arg2;
- (void)connectToValueAdapter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

