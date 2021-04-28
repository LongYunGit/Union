//
//  UponSplashDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponAdLoadingDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UponSplashDelegate <UponAdLoadingDelegate>

@optional
- (void)splashDidShowForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)splashDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)splashDidSkipForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)splashDidCloseForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

- (void)splashZoomOutViewDidClickForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)splashZoomOutViewDidCloseForAdSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
