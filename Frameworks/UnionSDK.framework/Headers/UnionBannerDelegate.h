//
//  UnionBannerDelegate.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class UnionBannerView;
@protocol UnionBannerDelegate <NSObject>

@optional

/// 广告成功展示
- (void)bannerView:(UnionBannerView *)bannerView didShowAdWithAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告自动刷新成功
- (void)bannerView:(UnionBannerView *)bannerView didAutoRefreshWithAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告自动刷新失败
- (void)bannerView:(UnionBannerView *)bannerView failedToAutoRefreshWithAdSlotID:(NSString *)slotID error:(nullable NSError *)error;
/// 广告被点击
- (void)bannerView:(UnionBannerView *)bannerView didClickWithAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告点击关闭按钮（此时需要开发者自己实现广告视图的关闭操作）
- (void)bannerView:(UnionBannerView *)bannerView didTapCloseButtonWithAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
