//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSFrequentObjectsControllerDelegate-Protocol.h"
#import "MSPreviewColorSpaceProvider-Protocol.h"

@class MSColor, MSFrequentColorsController;

@protocol MSFrequentColorsControllerDelegate <MSFrequentObjectsControllerDelegate, MSPreviewColorSpaceProvider>
- (void)frequentColorsController:(MSFrequentColorsController *)arg1 didChooseColor:(MSColor *)arg2;
@end

