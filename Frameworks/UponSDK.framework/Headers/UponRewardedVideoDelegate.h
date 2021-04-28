//
//  UponRewardedVideoDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponAdLoadingDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UponRewardedVideoDelegate <UponAdLoadingDelegate>

@optional
- (void)rewardedVideoDidStartPlayingForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)rewardedVideoDidEndPlayingForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)rewardedVideoDidFailToPlayForAdSlotID:(NSString *)slotID error:(NSError *)error extra:(NSDictionary *)extra;
- (void)rewardedVideoDidCloseForAdSlotID:(NSString *)slotID rewarded:(BOOL)rewarded extra:(NSDictionary *)extra;
- (void)rewardedVideoDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)rewardedVideoDidRewardSuccessForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
