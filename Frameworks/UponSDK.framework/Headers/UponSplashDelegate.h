//
//  UponSplashDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UponSplashDelegate <NSObject>

@optional
/// 广告成功展示
- (void)splashDidShowForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告展示失败
- (void)splashDidShowFailForAdSlotID:(NSString *)slotID error:(nullable NSError *)error extra:(nullable NSDictionary *)extra;
/// 广告被点击
- (void)splashDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 点击跳过
- (void)splashDidSkipForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
/// 广告关闭
- (void)splashDidCloseForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

- (void)splashZoomOutViewDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)splashZoomOutViewDidCloseForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
