//
//  UnionRewardedVideoDelegate.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UnionRewardedVideoDelegate <NSObject>

@optional
/// 广告展示失败
- (void)rewardedVideoDidShowFailForAdSlotID:(NSString *)slotID error:(nullable NSError *)error extra:(nullable NSDictionary *)extra;
/// 视频开始播放
- (void)rewardedVideoDidStartPlayingForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 视频播放完成
- (void)rewardedVideoDidEndPlayingForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 视频播放失败
- (void)rewardedVideoDidFailToPlayForAdSlotID:(NSString *)slotID error:(NSError *)error extra:(NSDictionary *)extra;
/// 广告关闭
- (void)rewardedVideoDidCloseForAdSlotID:(NSString *)slotID rewarded:(BOOL)rewarded extra:(NSDictionary *)extra;
/// 广告被点击
- (void)rewardedVideoDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 服务器校验激励成功回调
- (void)rewardedVideoDidRewardSuccessForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
