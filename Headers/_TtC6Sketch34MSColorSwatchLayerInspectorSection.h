//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

#import "BCHSBColorPickerDelegate-Protocol.h"
#import "MSColorComponentsControllerDelegate-Protocol.h"

@interface _TtC6Sketch34MSColorSwatchLayerInspectorSection : MSBaseInspectorSection <BCHSBColorPickerDelegate, MSColorComponentsControllerDelegate>
{
    // Error parsing type: , name: $__lazy_storage_$_pickerView
    // Error parsing type: , name: $__lazy_storage_$_picker
    // Error parsing type: , name: $__lazy_storage_$_componentsViewController
    // Error parsing type: , name: changeTracker
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)documentColorSpaceForClient:(id)arg1;
- (id)previewColorSpaceForClient:(id)arg1;
- (void)colorComponentsControllerModelDidChange:(id)arg1;
- (void)colorComponentsControllerColorDidChange:(id)arg1;
- (BOOL)supportsLayers:(id)arg1;
@property(nonatomic, retain) id layers;
- (void)colorPicked:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (id)views;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

