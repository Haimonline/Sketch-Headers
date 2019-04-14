//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <SketchControllers/NSWindowDelegate-Protocol.h>

@class MSHUDViewController, NSString, NSView;

@interface MSHUDWindowController : NSWindowController <NSWindowDelegate>
{
    NSView *_hudView;
    MSHUDViewController *_hudViewController;
}

+ (id)makeHUD;
@property(retain, nonatomic) MSHUDViewController *hudViewController; // @synthesize hudViewController=_hudViewController;
@property(nonatomic) __weak NSView *hudView; // @synthesize hudView=_hudView;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isVisible;
- (void)toggle;
- (void)trackIfDocumentWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

