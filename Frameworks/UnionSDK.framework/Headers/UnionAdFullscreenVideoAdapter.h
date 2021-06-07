//
//  UnionAdFullscreenVideoAdapter.h
//  UnionSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UnionSDK/UnionAD.h>
#import <UnionSDK/UnionAdEvent.h>
#import <UnionSDK/UnionFullscreenVideoDelegate.h>


NS_ASSUME_NONNULL_BEGIN

/// 全屏视频广告适配器
@protocol UnionAdFullscreenVideoAdapter <NSObject>

@required

/// 广告缓存是否有效
@property (nonatomic, readonly, getter=isAdValid) BOOL adValid;

/// 广告请求是否完成
@property (nonatomic, readonly, getter=isLoadFinished) BOOL loadFinished;

/// 广告数据
@property (nonatomic, readonly) id<UnionAD> adInfo;

/// 广告事件对象
@property (nonatomic, readonly) id<UnionAdEvent> event;

@property (nonatomic, readonly, weak) UIViewController *rootViewController;

/**
 初始化全屏视频广告
 
 @param ad               广告数据
 @param event        广告事件
 */
- (id<UnionAdFullscreenVideoAdapter>)initWithAd:(id<UnionAD>)ad event:(id<UnionAdEvent>)event;

/**
 加载广告物料
 */
- (void)loadAdData;

/**
 显示全屏视频
 */
- (void)showInRootViewController:(UIViewController *)viewController delegate:(id<UnionFullscreenVideoDelegate>)delegate;;



@end

NS_ASSUME_NONNULL_END
