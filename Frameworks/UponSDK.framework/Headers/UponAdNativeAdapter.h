//
//  UponAdNativeAdapter.h
//  UponSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UponSDK/UponAD.h>
#import <UponSDK/UponAdEvent.h>
#import <UponSDK/UponNativeDelegate.h>
#import <UponSDK/UponNativeView.h>

NS_ASSUME_NONNULL_BEGIN

/// 原生信息流广告适配器
@protocol UponAdNativeAdapter <NSObject>

@required

/// 广告物料是否准备好，可以展示了。YES：可以展示；NO：不能展示
@property (nonatomic, readonly, getter=isReady) BOOL ready;

/// 信息流广告视图数组
@property (nonatomic, readonly) NSArray<UponNativeView *> *adViewList;

/// 广告数据
@property (nonatomic, readonly) id<UponAD> adInfo;

/// 广告事件对象
@property (nonatomic, readonly) id<UponAdEvent> event;

/**
 初始化信息流广告
 
 @param adInfo      广告数据
 @param event        广告事件
 
 @return 如果adInfo.adType不支持，返回nil
 */
- (nullable id<UponAdNativeAdapter>)initWithAdInfo:(id<UponAD>)adInfo event:(id<UponAdEvent>)event;

/**
 加载广告物料
 */
- (void)loadAdData;


@end

NS_ASSUME_NONNULL_END
