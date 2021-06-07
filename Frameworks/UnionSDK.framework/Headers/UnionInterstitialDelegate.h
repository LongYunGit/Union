//
//  UnionInterstitialDelegate.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UnionInterstitialDelegate <NSObject>

@optional
/// 广告成功展示回调
- (void)interstitialDidShowForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告展示失败
- (void)interstitialFailedToShowForAdSlotID:(NSString *)slotID error:(nullable NSError *)error extra:(nullable NSDictionary *)extra;
/// 视频播放开始
- (void)interstitialDidStartPlayingVideoForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 视频播放完成
- (void)interstitialDidEndPlayingVideoForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 视频播放失败
- (void)interstitialDidFailToPlayVideoForAdSlotID:(NSString *)slotID error:(NSError *)error extra:(NSDictionary *)extra;
/// 广告关闭
- (void)interstitialDidCloseForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告被点击
- (void)interstitialDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
