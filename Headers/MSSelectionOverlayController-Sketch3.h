//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSelectionOverlayController.h"

#import "_TtP6Sketch31SelectionRendererLayoutDelegate_-Protocol.h"

@interface MSSelectionOverlayController (Sketch3) <_TtP6Sketch31SelectionRendererLayoutDelegate_>
- (unsigned long long)collectionRenderer:(id)arg1 resizeHandlesMaskForItemAt:(long long)arg2;
- (BOOL)collectionRenderer:(id)arg1 layout:(id)arg2 shouldHideHandleOfKind:(id)arg3 forElementOfSize:(struct CGSize)arg4 itemIndex:(long long)arg5;
- (BOOL)collectionRenderer:(id)arg1 layout:(id)arg2 shouldHideFrameForItemAt:(long long)arg3;
- (struct CGAffineTransform)collectionRenderer:(id)arg1 layout:(id)arg2 transformForItemAt:(long long)arg3;
- (struct CGSize)collectionRenderer:(id)arg1 layout:(id)arg2 sizeForItemAt:(long long)arg3;
@end

