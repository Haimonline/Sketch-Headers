//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/NSCoding-Protocol.h>

@class NSImage, NSString;
@protocol MSDataSupplierDelegate;

@interface MSDataSupplier : NSObject <NSCoding>
{
    BOOL _enabled;
    id <MSDataSupplierDelegate> _delegate;
    NSString *_dataName;
    unsigned long long _dataType;
    NSString *_dataIdentifier;
    NSImage *_menuItemImage;
}

@property(retain, nonatomic) NSImage *menuItemImage; // @synthesize menuItemImage=_menuItemImage;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSString *dataIdentifier; // @synthesize dataIdentifier=_dataIdentifier;
@property(readonly, nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *dataName; // @synthesize dataName=_dataName;
@property(nonatomic) __weak id <MSDataSupplierDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dataForItem:(id)arg1 ofType:(unsigned long long)arg2;
- (void)resetMenuItemImage;
@property(readonly, nonatomic) NSString *uttDataType;
@property(readonly, nonatomic) BOOL isUsableDataSupplier;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL valid;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDataSupplier:(id)arg1;
- (unsigned long long)hash;
- (id)imageFileURLForDataItem:(id)arg1;
- (void)generateDataForObjects:(id)arg1 dataSupplierManager:(id)arg2 dataApplier:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)applyDataAtIndex:(unsigned long long)arg1 datum:(id)arg2 dataApplier:(CDUnknownBlockType)arg3;
- (void)applyDataWithCount:(unsigned long long)arg1 data:(id)arg2 dataApplier:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataIdentifier:(id)arg1 dataName:(id)arg2 dataType:(unsigned long long)arg3;

@end

