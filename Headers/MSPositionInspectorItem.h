//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "MSInspectorMathValueAdaptorDelegate-Protocol.h"

@class MSCoordinateInspectorValueAdaptor, MSInlineUpDownTextField, MSMathInspectorValueAdaptor, NSString;

@interface MSPositionInspectorItem : MSInspectorItem <MSInspectorMathValueAdaptorDelegate>
{
    MSInlineUpDownTextField *_yField;
    MSInlineUpDownTextField *_rotationField;
    MSInlineUpDownTextField *_xField;
    MSCoordinateInspectorValueAdaptor *_xAdaptor;
    MSCoordinateInspectorValueAdaptor *_yAdaptor;
    MSMathInspectorValueAdaptor *_rotationAdapter;
}

@property(retain, nonatomic) MSMathInspectorValueAdaptor *rotationAdapter; // @synthesize rotationAdapter=_rotationAdapter;
@property(retain, nonatomic) MSCoordinateInspectorValueAdaptor *yAdaptor; // @synthesize yAdaptor=_yAdaptor;
@property(retain, nonatomic) MSCoordinateInspectorValueAdaptor *xAdaptor; // @synthesize xAdaptor=_xAdaptor;
@property(retain, nonatomic) MSInlineUpDownTextField *xField; // @synthesize xField=_xField;
@property(retain, nonatomic) MSInlineUpDownTextField *rotationField; // @synthesize rotationField=_rotationField;
@property(retain, nonatomic) MSInlineUpDownTextField *yField; // @synthesize yField=_yField;
- (void).cxx_destruct;
- (void)inspectorValueAdaptorDidChangeValue:(id)arg1;
- (BOOL)inspectorValueAdaptorAllowFloat:(id)arg1;
- (BOOL)allowFloatValues;
- (void)refreshIfNecessary:(id)arg1;
- (void)updateDisplayedValues;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

