//
//  UponBannerDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponAdLoadingDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@class UponBannerView;
@protocol UponBannerDelegate <UponAdLoadingDelegate>

@optional
- (void)bannerView:(UponBannerView *)bannerView failedToAutoRefreshWithAdSlotID:(NSString *)slotID error:(nullable NSError *)error;
- (void)bannerView:(UponBannerView *)bannerView didShowAdWithAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)bannerView:(UponBannerView *)bannerView didClickWithAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)bannerView:(UponBannerView *)bannerView didAutoRefreshWithAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)bannerView:(UponBannerView *)bannerView didTapCloseButtonWithAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
