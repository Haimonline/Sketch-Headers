//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSDataMenuProvider, MSDataSupplier, NSArray, NSMenu, NSString;

@protocol MSDataMenuProviderDelegate <NSObject>
- (NSString *)dataMenuProviderDataIdentifier:(MSDataMenuProvider *)arg1;
- (void)dataMenuProviderRemoveDataRecord:(MSDataMenuProvider *)arg1;
- (void)dataMenuProviderRefreshMasterData:(MSDataMenuProvider *)arg1;
- (void)dataMenuProviderRefreshData:(MSDataMenuProvider *)arg1;
- (void)dataMenuProvider:(MSDataMenuProvider *)arg1 didChooseData:(MSDataSupplier *)arg2;
- (BOOL)dataMenuProviderIsOverrideMenu:(MSDataMenuProvider *)arg1;
- (unsigned long long)dataMenuProviderDataTypeForMenuBuilding:(MSDataMenuProvider *)arg1;
- (NSArray *)dataMenuProviderSelectedLayersWithAppliedData:(MSDataMenuProvider *)arg1;
- (BOOL)dataMenuProviderCanRefreshData:(MSDataMenuProvider *)arg1;
- (BOOL)dataMenuProviderCanApplyMasterDataToInstances:(MSDataMenuProvider *)arg1;
- (BOOL)dataMenuProvider:(MSDataMenuProvider *)arg1 canChooseDataOfType:(unsigned long long)arg2;

@optional
- (void)dataMenuProvider:(MSDataMenuProvider *)arg1 willUpdateMenu:(NSMenu *)arg2;
@end

