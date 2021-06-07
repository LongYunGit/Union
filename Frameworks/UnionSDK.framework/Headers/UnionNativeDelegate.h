//
//  UnionNativeDelegate.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class UnionNativeView;
@protocol UnionNativeDelegate <NSObject>

@optional
/// 广告成功展示
- (void)didShowNativeAdInAdView:(UnionNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告展示失败
- (void)didShowFailNativeAdInAdView:(UnionNativeView *)adView adSlotID:(NSString *)slotID error:(nullable NSError *)error extra:(NSDictionary *)extra;
/// 广告被点击
- (void)didClickNativeAdInAdView:(UnionNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 视频播放开始
- (void)didStartPlayingVideoInAdView:(UnionNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 视频播放完成
- (void)didEndPlayingVideoInAdView:(UnionNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告点击了关闭按钮（此时需要开发者自己实现广告的关闭操作）
- (void)didTapCloseButtonInAdView:(UnionNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
