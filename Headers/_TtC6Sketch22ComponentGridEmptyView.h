//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSImageView, NSStackView, NSTextField;

@interface _TtC6Sketch22ComponentGridEmptyView : NSView
{
    // Error parsing type: , name: stackView
    // Error parsing type: , name: imageView
    // Error parsing type: , name: headingField
    // Error parsing type: , name: subheadingField
    // Error parsing type: , name: creationButton
    // Error parsing type: , name: context
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)createComponent:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, retain) NSButton *creationButton; // @synthesize creationButton;
@property(nonatomic, retain) NSTextField *subheadingField; // @synthesize subheadingField;
@property(nonatomic, retain) NSTextField *headingField; // @synthesize headingField;
@property(nonatomic, retain) NSImageView *imageView; // @synthesize imageView;
@property(nonatomic, retain) NSStackView *stackView; // @synthesize stackView;

@end

