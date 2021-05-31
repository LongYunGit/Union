//
//  UponAdBannerAdapter.h
//  UponSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UponSDK/UponAD.h>
#import <UponSDK/UponAdEvent.h>
#import <UponSDK/UponBannerDelegate.h>
#import <UponSDK/UponBannerView.h>

NS_ASSUME_NONNULL_BEGIN

/// banner广告适配器
@protocol UponAdBannerAdapter <NSObject>

@required

/// 广告缓存是否有效
@property (nonatomic, readonly, getter=isAdValid) BOOL adValid;

/// 广告请求是否完成
@property (nonatomic, readonly, getter=isLoadFinished) BOOL loadFinished;

/// 横幅Banner广告视图
@property (nonatomic, readonly) UponBannerView *bannerView;

/// 广告数据
@property (nonatomic, readonly) id<UponAD> adInfo;

/// 广告事件对象
@property (nonatomic, readonly) id<UponAdEvent> event;

/**
 初始化横幅Banner广告
 
 @param adInfo      广告数据
 @param event        广告事件
 */
- (id<UponAdBannerAdapter>)initWithAdInfo:(id<UponAD>)adInfo event:(id<UponAdEvent>)event;

/**
 加载广告物料
 */
- (void)loadAdData;

@end

NS_ASSUME_NONNULL_END
