//
//  UponFullscreenVideoDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UponFullscreenVideoDelegate <NSObject>

@optional
/// 广告展示失败
- (void)fullscreenVideoDidShowFailForAdSlotID:(NSString *)slotID error:(nullable NSError *)error extra:(nullable NSDictionary *)extra;
/// 视频播放开始
- (void)fullscreenVideoDidStartPlayingForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 视频播放结束
- (void)fullscreenVideoDidEndPlayingForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 视频播放失败
- (void)fullscreenVideoDidFailToPlayForAdSlotID:(NSString *)slotID error:(NSError *)error extra:(NSDictionary *)extra;
/// 广告关闭
- (void)fullscreenVideoDidCloseForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告被点击
- (void)fullscreenVideoDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 点击跳过
- (void)fullscreenVideoDidSkipForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
