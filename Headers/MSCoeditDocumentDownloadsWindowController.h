//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@interface MSCoeditDocumentDownloadsWindowController : NSWindowController <NSWindowDelegate>
{
    // Error parsing type: , name: downloadsProgress
    // Error parsing type: , name: openers
}

+ (id)sharedController;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)unfollowWithOpener:(id)arg1;
- (void)followWithOpener:(id)arg1;

@end

