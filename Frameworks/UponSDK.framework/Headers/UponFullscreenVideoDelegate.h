//
//  UponFullscreenVideoDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponAdLoadingDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UponFullscreenVideoDelegate <UponAdLoadingDelegate>

@optional
- (void)fullscreenVideoDidStartPlayingForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)fullscreenVideoDidEndPlayingForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)fullscreenVideoDidFailToPlayForAdSlotID:(NSString *)slotID error:(NSError *)error extra:(NSDictionary *)extra;
- (void)fullscreenVideoDidCloseForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)fullscreenVideoDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)fullscreenVideoDidSkipForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
