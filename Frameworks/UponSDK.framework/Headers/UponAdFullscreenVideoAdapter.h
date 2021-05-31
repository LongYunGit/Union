//
//  UponAdFullscreenVideoAdapter.h
//  UponSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UponSDK/UponAD.h>
#import <UponSDK/UponAdEvent.h>
#import <UponSDK/UponFullscreenVideoDelegate.h>


NS_ASSUME_NONNULL_BEGIN

/// 全屏视频广告适配器
@protocol UponAdFullscreenVideoAdapter <NSObject>

@required

/// 广告缓存是否有效
@property (nonatomic, readonly, getter=isAdValid) BOOL adValid;

/// 广告请求是否完成
@property (nonatomic, readonly, getter=isLoadFinished) BOOL loadFinished;

/// 广告数据
@property (nonatomic, readonly) id<UponAD> adInfo;

/// 广告事件对象
@property (nonatomic, readonly) id<UponAdEvent> event;

@property (nonatomic, readonly, weak) UIViewController *rootViewController;

/**
 初始化全屏视频广告
 
 @param ad               广告数据
 @param event        广告事件
 */
- (id<UponAdFullscreenVideoAdapter>)initWithAd:(id<UponAD>)ad event:(id<UponAdEvent>)event;

/**
 加载广告物料
 */
- (void)loadAdData;

/**
 显示全屏视频
 */
- (void)showInRootViewController:(UIViewController *)viewController delegate:(id<UponFullscreenVideoDelegate>)delegate;;



@end

NS_ASSUME_NONNULL_END
