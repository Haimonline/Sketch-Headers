//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSInspectorSection-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class NSArray, NSArrayController, NSString, NSView;
@protocol MSStylePartInspectorDelegate;

@interface MSStylePartInspectorViewController : NSViewController <MSInspectorSection, NSWindowDelegate>
{
    NSView *nameView;
    NSArray *_styleParts;
    NSArrayController *_arrayController;
    id <MSStylePartInspectorDelegate> _delegate;
    unsigned long long _index;
}

+ (id)reusableControllerArray;
+ (id)stylePartViewController;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <MSStylePartInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(retain, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (void).cxx_destruct;
- (void)updateDisplayedValues;
- (void)closePopover;
- (id)views;
- (void)didGetAddedToInspector;
@property(readonly, nonatomic) NSArray *layers;
- (BOOL)hasEnabledStyle;
- (void)prepare;
- (unsigned long long)supportedActionsForLayers:(id)arg1;
- (void)awakeFromNib;
- (id)initWithDelegate:(id)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

