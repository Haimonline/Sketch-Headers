//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSLayer.h>

@interface MSLayer (AdjustAfterInsert)
+ (id)layerOfDataType:(unsigned long long)arg1;
- (void)adjustAfterInsert;
- (BOOL)canBeHidden;
- (long long)cornerRectType;
- (id)overrideSelectionPaths;
- (BOOL)shouldRefreshOverlayForFlows;
- (BOOL)shouldDrawSelectionStroke;
- (BOOL)shouldDrawSelection;
- (BOOL)canSmartRotate;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2 showSelection:(BOOL)arg3;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2;
- (id)duplicate;
- (BOOL)shouldFlattenAfterRotate;
- (Class)handlerClass;
- (BOOL)handleDoubleClick;
- (void)fillEmptyLayerWithData:(id)arg1 fromSupplier:(id)arg2;
- (id)inspectorSections;
- (void)writeBitmapImageToFile:(id)arg1;
- (void)applyScreenPickerColor:(id)arg1 preferredStyleName:(id)arg2;
- (id)debugQuickLookObject;
@end

