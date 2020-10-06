//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class CALayer, CAShapeLayer, MSBorderedImageViewCell, NSColor;

@interface MSBorderedImageView : NSImageView
{
    BOOL _selected;
    BOOL _includeBorder;
    SEL _doubleClickAction;
    double _borderWidth;
    double _cornerRadius;
    NSColor *_contentBackgroundColor;
    struct CGPath *_borderPath;
    CAShapeLayer *_backgroundLayer;
    CALayer *_imageLayer;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) struct CGPath *borderPath; // @synthesize borderPath=_borderPath;
@property(retain, nonatomic) NSColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) BOOL includeBorder; // @synthesize includeBorder=_includeBorder;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) SEL doubleClickAction; // @synthesize doubleClickAction=_doubleClickAction;
- (void)updateLayer;
@property(readonly, nonatomic) NSColor *borderColor;
- (void)invalidateBorderPath;
@property(readonly, nonatomic) MSBorderedImageViewCell *imageCell;
- (BOOL)wantsUpdateLayer;
@property(readonly, nonatomic) double borderInset;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (void)layout;
- (id)initWithCoder:(id)arg1;

@end

