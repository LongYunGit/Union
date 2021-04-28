//
//  UponInterstitialDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponAdLoadingDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UponInterstitialDelegate <UponAdLoadingDelegate>

@optional
- (void)interstitialDidShowForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)interstitialFailedToShowForAdSlotID:(NSString *)slotID error:(NSError *)error extra:(NSDictionary *)extra;
- (void)interstitialDidStartPlayingVideoForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)interstitialDidEndPlayingVideoForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)interstitialDidFailToPlayVideoForAdSlotID:(NSString *)slotID error:(NSError *)error extra:(NSDictionary *)extra;
- (void)interstitialDidCloseForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)interstitialDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
