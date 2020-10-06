//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/NSCopying-Protocol.h>

@class NSDictionary, NSImage, NSString;

@interface MSArtboardPreset : NSObject <NSCopying>
{
    BOOL _offersLandscapeVariant;
    BOOL _allowResizedMatching;
    BOOL _isSizeToFit;
    BOOL _isNew;
    NSString *_name;
    unsigned long long _width;
    unsigned long long _height;
    NSString *_imageName;
    NSString *_tooltip;
}

+ (id)sizeToFitPresetWithName:(id)arg1 size:(struct CGSize)arg2;
+ (double)resizeScaleFromArtboardSize:(struct CGSize)arg1 presetSize:(struct CGSize)arg2 offeringLandscapeVariant:(BOOL)arg3;
+ (long long)compareArtboardSize:(struct CGSize)arg1 withScaledPresetSize:(struct CGSize)arg2 offeringLandscapeVariant:(BOOL)arg3 isRotated:(char *)arg4;
- (void).cxx_destruct;
@property(nonatomic) BOOL isNew; // @synthesize isNew=_isNew;
@property(readonly, nonatomic) BOOL isSizeToFit; // @synthesize isSizeToFit=_isSizeToFit;
@property(readonly, copy, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) BOOL allowResizedMatching; // @synthesize allowResizedMatching=_allowResizedMatching;
@property(readonly, nonatomic) BOOL offersLandscapeVariant; // @synthesize offersLandscapeVariant=_offersLandscapeVariant;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSImage *image;
- (id)oppositeOrientationPreset;
@property(readonly, nonatomic) NSString *sizeDescription;
@property(nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSString *layerName;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 size:(struct CGSize)arg2 imageName:(id)arg3;
- (double)resizeScaleFromArtboardSize:(struct CGSize)arg1;
- (unsigned long long)matchWithArtboardSize:(struct CGSize)arg1;

@end

