//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class MSInlineUpDownTextField, MSStackTool, NSButton, _TtC6Sketch23MSSpacingInspectorModel;

@interface _TtC6Sketch22MSSpacingInspectorItem : MSInspectorItem
{
    // Error parsing type: , name: horizontalField
    // Error parsing type: , name: verticalField
    // Error parsing type: , name: tidyButton
    // Error parsing type: , name: stackController
    // Error parsing type: , name: $__lazy_storage_$_horizontalAdaptor
    // Error parsing type: , name: $__lazy_storage_$_verticalAdaptor
    // Error parsing type: , name: tool
    // Error parsing type: , name: viewModel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, retain) _TtC6Sketch23MSSpacingInspectorModel *viewModel; // @synthesize viewModel;
@property(nonatomic, retain) MSStackTool *tool; // @synthesize tool;
- (void)viewDidLoad;
@property(nonatomic, retain) NSButton *tidyButton; // @synthesize tidyButton;
@property(nonatomic, retain) MSInlineUpDownTextField *verticalField; // @synthesize verticalField;
@property(nonatomic, retain) MSInlineUpDownTextField *horizontalField; // @synthesize horizontalField;

@end

