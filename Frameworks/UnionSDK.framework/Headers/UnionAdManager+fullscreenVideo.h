//
//  UnionAdManager+fullscreenVideo.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UnionSDK/UnionAdManager.h>
#import <UnionSDK/UnionFullscreenVideoDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface UnionAdManager (fullscreenVideo)

/**
 判断广告位ID placementID对应的广告是否可以展示
 
 @param slotID     Union平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)fullscreenVideoReadyForAdSlotID:(NSString *)slotID;

/**
 展示全屏视频广告
 
 @param slotID                    Union平台的广告key
 @param viewController  展示广告的视图控制器
 @param delegate                回调代理
 */
+ (void)showFullscreenVideoWithAdSlotID:(NSString *)slotID
                       inViewController:(UIViewController *)viewController
                               delegate:(id<UnionFullscreenVideoDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
