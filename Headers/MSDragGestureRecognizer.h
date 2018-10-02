//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSGestureRecognizer.h"

@interface MSDragGestureRecognizer : MSGestureRecognizer
{
    struct CGPoint _location;
    struct CGVector _translation;
    BOOL _receivedMouseDown;
    BOOL _beginsUponMouseDown;
    BOOL _translationLocked;
    unsigned long long _modifierFlags;
}

@property(readonly, nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(nonatomic, getter=isTranslationLocked) BOOL translationLocked; // @synthesize translationLocked=_translationLocked;
@property(nonatomic) BOOL beginsUponMouseDown; // @synthesize beginsUponMouseDown=_beginsUponMouseDown;
- (void)flagsChanged:(id)arg1;
- (void)mouseDragged:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)mouseUp:(id)arg1 location:(struct CGPoint)arg2;
- (void)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 modifierFlags:(unsigned long long)arg3;
- (struct CGPoint)originInLayer:(id)arg1;
- (struct CGPoint)translationAsPointInLayer:(id)arg1;
- (void)setTranslation:(struct CGVector)arg1 inLayer:(id)arg2;
- (struct CGVector)translationInLayer:(id)arg1;
- (struct CGPoint)locationInLayer:(id)arg1;

@end

