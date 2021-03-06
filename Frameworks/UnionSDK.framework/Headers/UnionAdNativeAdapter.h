//
//  UnionAdNativeAdapter.h
//  UnionSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UnionSDK/UnionAD.h>
#import <UnionSDK/UnionAdEvent.h>
#import <UnionSDK/UnionNativeDelegate.h>
#import <UnionSDK/UnionNativeView.h>

NS_ASSUME_NONNULL_BEGIN

/// 原生信息流广告适配器
@protocol UnionAdNativeAdapter <NSObject>

@required

/// 广告缓存是否有效
@property (nonatomic, readonly, getter=isAdValid) BOOL adValid;

/// 广告请求是否完成
@property (nonatomic, readonly, getter=isLoadFinished) BOOL loadFinished;

/// 信息流广告视图数组
@property (nonatomic, readonly) NSArray<UnionNativeView *> *adViewList;

/// 广告数据
@property (nonatomic, readonly) id<UnionAD> adInfo;

/// 广告事件对象
@property (nonatomic, readonly) id<UnionAdEvent> event;

/**
 初始化信息流广告
 
 @param adInfo      广告数据
 @param event        广告事件
 
 @return 如果adInfo.adType不支持，返回nil
 */
- (nullable id<UnionAdNativeAdapter>)initWithAdInfo:(id<UnionAD>)adInfo event:(id<UnionAdEvent>)event;

/**
 加载广告物料
 */
- (void)loadAdData;


@end

NS_ASSUME_NONNULL_END
