//
//  UponNativeDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponAdLoadingDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@class UponNativeView;
@protocol UponNativeDelegate <UponAdLoadingDelegate>

@optional
- (void)didShowNativeAdInAdView:(UponNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)didClickNativeAdInAdView:(UponNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)didStartPlayingVideoInAdView:(UponNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)didEndPlayingVideoInAdView:(UponNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;
- (void)didTapCloseButtonInAdView:(UponNativeView *)adView adSlotID:(NSString *)slotID extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
