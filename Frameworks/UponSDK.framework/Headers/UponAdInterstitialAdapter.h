//
//  UponAdInterstitialAdapter.h
//  UponSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UponSDK/UponAD.h>
#import <UponSDK/UponAdEvent.h>
#import <UponSDK/UponInterstitialDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 插屏广告适配器
@protocol UponAdInterstitialAdapter <NSObject>

@required

/// 广告物料是否准备好，可以展示了。YES：可以展示；NO：不能展示
@property (nonatomic, readonly, getter=isReady) BOOL ready;
/// 判断当前广告是否已经展示过
@property (nonatomic, readonly, getter=isShowed) BOOL showed;

/// 广告数据
@property (nonatomic, readonly) id<UponAD> adInfo;

/// 广告事件对象
@property (nonatomic, readonly) id<UponAdEvent> event;

/**
 初始化全屏视频广告
 
 @param adInfo      广告数据
 @param event        广告事件
 */
- (id<UponAdInterstitialAdapter>)initWithAdInfo:(id<UponAD>)adInfo event:(id<UponAdEvent>)event;

/**
 加载广告物料
 */
- (void)loadAdData;

/**
 显示激励视频
 */
- (void)showInRootViewController:(UIViewController *)viewController delegate:(id<UponInterstitialDelegate>)delegate;


@end

NS_ASSUME_NONNULL_END
