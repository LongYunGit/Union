//
//  UnionAdEvent.h
//  UnionSDK
//
//  Created by DHY on 2021/4/9.
//

#import <Foundation/Foundation.h>
#import <UnionSDK/UnionAdLoadingDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/**
 广告加载成功回调
 @param adapter     上游adapter
 @param time            加载耗时（毫秒）
 @param tag              事件标签
 */
typedef void(^UnionAdLoadFinishBlock)(id adapter, int time, NSString * _Nullable tag);
/**
 广告加载失败回调
 @param adapter                 上游adapter
 @param time                        加载耗时（毫秒）
 @param error                     错误
 @param tag                         事件标签
 */
typedef void(^UnionAdLoadFailBlock)(id adapter, int time, NSError * _Nullable error, NSString * _Nullable tag);
/**
 广告通用回调
 @param adapter     上游adapter
 @param tag              事件标签
 */
typedef void(^UnionAdGeneralBlock)(id adapter, NSString * _Nullable tag);

/**
 广告失败相关回调
 @param adapter     上游adapter
 @param tag              事件标签
 */
typedef void(^UnionAdFailBlock)(id adapter, NSError * _Nullable error, NSString * _Nullable tag);


@protocol UnionAD;
@protocol UnionAdEvent <NSObject>

/// 加载广告回调代理
@property (nonatomic, readonly, weak) id<UnionAdLoadingDelegate> delegate;

/**
 初始化
 
 @param delegate    加载广告代理
 */
- (instancetype)initWithLoadingDelegate:(id<UnionAdLoadingDelegate>)delegate;


/// 订阅广告加载成功事件
- (void)subscribeAdLoadFinishEvent:(UnionAdLoadFinishBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告加载失败事件
- (void)subscribeAdLoadFailEvent:(UnionAdLoadFailBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告曝光事件
- (void)subscribeAdShowEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告点击事件
- (void)subscribeAdClickEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告ZoomOutView点击事件
- (void)subscribeAdZoomOutViewClickEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告点击跳过按钮事件
- (void)subscribeAdSkipEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告关闭事件
- (void)subscribeAdCloseEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告ZoomOutView关闭事件
- (void)subscribeAdZoomOutViewCloseEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告视频开始播放事件
- (void)subscribeAdVideoStartEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告视频播放结束事件
- (void)subscribeAdVideoEndEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告视频播放50%事件
- (void)subscribeAdVideoHalfEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告唤醒失败事件
- (void)subscribeAdDeeplinkFailEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告唤醒成功事件
- (void)subscribeAdDeeplinkSuccessEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告视频播放出错事件
- (void)subscribeAdVideoFailEvent:(UnionAdFailBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告激励视频激励成功事件
- (void)subscribeAdRewardSuccessEvent:(UnionAdGeneralBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告曝光失败事件
- (void)subscribeAdShowFailEvent:(UnionAdFailBlock)block withTag:(nullable NSString *)tag;

/// 订阅广告自动刷新失败事件
- (void)subscribeAdAutoRefreshFailEvent:(UnionAdFailBlock)event withTag:(nullable NSString *)tag;

/// 订阅广告自动刷新成功事件
- (void)subscribeAdAutoRefreshSuccessEvent:(UnionAdGeneralBlock)event withTag:(nullable NSString *)tag;

/// 订阅广告加载失败、广告展示失败、广告关闭事件、zoomOutView关闭事件
- (void)subscribeAdLoadFailAndShowFailAndCloseEvent:(UnionAdGeneralBlock)event withTag:(nullable NSString *)tag;

/// 订阅广告关闭、zoomOutView关闭事件
- (void)subscribeAdCloseAndZoomOutViewCloseEvent:(UnionAdGeneralBlock)event withTag:(nullable NSString *)tag;


/**
 发送广告加载成功事件
 
 @param adapter 上游adapter
 @param time        加载广告耗时
 @param tag          事件标签
 */
- (void)sendAdLoadFinishEventWithAdapter:(id)adapter time:(int)time withTag:(nullable NSString *)tag;

/**
 发送广告加载失败事件
 
 @param adapter                 上游adapter
 @param time                        加载广告耗时
 @param error                      错误
 @param tag                          事件标签
 */
- (void)sendAdLoadFailEventWithAdapter:(id)adapter time:(int)time error:(nullable NSError *)error withTag:(nullable NSString *)tag;

/**
 发送广告曝光事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdShowEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告点击事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdClickEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告ZoomOutView点击事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdZoomOutViewClickEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告点击跳过按钮事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdSkipEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告关闭事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdCloseEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告ZoomOutView关闭事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdZoomOutViewCloseEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告视频开始播放事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdVideoStartEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告视频播放结束事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdVideoEndEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告视频播放50%事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdVideoHaflEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告唤醒失败事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdDeeplinkFailEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告唤醒成功事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdDeeplinkSuccessEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告视频播放出错事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdVideoFailEventWithAdapter:(id)adapter error:(nullable NSError *)error withTag:(nullable NSString *)tag;

/**
 发送广告激励视频激励成功回调事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdRewardSuccessEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/**
 发送广告曝光失败事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdShowFailEventWithAdapter:(id)adapter error:(nullable NSError *)error withTag:(nullable NSString *)tag;

/**
 发送广告自动刷新失败事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdAutoRefreshFailEventWithAdapter:(id)adapter error:(nullable NSError *)error withTag:(nullable NSString *)tag;

/**
 发送广告自动刷新成功事件
 
 @param adapter     上游adapter
 @param tag              事件标签
 */
- (void)sendAdAutoRefreshSuccessEventWithAdapter:(id)adapter withTag:(nullable NSString *)tag;

/// 设置广告请求任务超时（设置超时后，delegate将不会回调）
- (void)setTimeout;

@end

NS_ASSUME_NONNULL_END
