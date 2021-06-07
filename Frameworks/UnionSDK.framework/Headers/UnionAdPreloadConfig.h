//
//  UnionAdPreloadConfig.h
//  UnionSDK
//
//  Created by DHY on 2021/3/29.
//

#import <UIKit/UIKit.h>

/// 头条信息流图片尺寸
typedef NS_ENUM(NSInteger, UnionTTImageFeedSize) {
    UnionTTImageFeedSize228_150,
    UnionTTImageFeedSize690_388
};

NS_ASSUME_NONNULL_BEGIN

@class UnionNativeInfo, UnionBannerInfo;
/**
 预加载配置
 banner和信息流类型的广告如果想要支持预加载功能，需要您手动配置以下信息。
 bannerSize：为预加载的banner的默认尺寸
 nativeSize、ttImgFeedSize、nativeOfCount：为预加载信息流的默认信息配置
 
 bannerMap：为针对广告位不同尺寸的banner做的独立配置（如果独立配置中不存在相关信息，将采用上面的默认配置），
 这里是为了兼容不同尺寸的banner而设置的独立配置，<U聚合平台的广告位ID，配置信息>
 nativeMap：为针对广告位不同尺寸的信息流做的独立配置（如果独立配置中不存在相关信息，将采用上面的默认配置），
 这里是为了兼容不同尺寸的信息流广告而设置的独立配置，<U聚合平台的广告位ID，配置信息>
 
 Draw信息流是全屏的，不需要设置尺寸，您可以通过设置nativeOfCount改变Draw信息流预加载的条数
 */
@interface UnionAdPreloadConfig : NSObject

/// 预加载的banner视图尺寸
@property (nonatomic, assign) CGSize bannerSize;
/// 预加载的信息流广告视图尺寸
@property (nonatomic, assign) CGSize nativeSize;
/// 头条信息流图片尺寸比例配置（默认：228_150）
@property (nonatomic, assign) UnionTTImageFeedSize ttImgFeedSize;
/// 信息流预加载条数（默认1条）
@property (nonatomic, assign) NSInteger nativeOfCount;

/// 预加载的banner视图尺寸（针对广告位进行独立配置）
@property (nonatomic, strong) NSDictionary<NSString *, UnionBannerInfo *> *bannerMap;
/// 预加载的信息流视图尺寸（针对广告位进行独立配置）
@property (nonatomic, strong) NSDictionary<NSString *, UnionNativeInfo *> *nativeMap;


/**
 获取banner广告的实际配置尺寸
 
 @param adSlotID U聚合平台的广告位ID
 */
- (CGSize)bannerSizeForAdSlotID:(NSString *)adSlotID;

/**
 获取信息流广告的实际配置尺寸
 
 @param adSlotID U聚合平台的广告位ID
 */
- (UnionNativeInfo *)nativeInfoForAdSlotID:(NSString *)adSlotID;

@end


@interface UnionNativeInfo : NSObject

/// 预加载的信息流广告视图尺寸
@property (nonatomic, assign) CGSize nativeSize;
/// 头条信息流图片尺寸比例配置（默认：228_150）
@property (nonatomic, assign) UnionTTImageFeedSize ttImgFeedSize;
/// 信息流预加载条数（默认1条）
@property (nonatomic, assign) NSInteger nativeOfCount;

@end

@interface UnionBannerInfo : NSObject

/// 预加载的banner视图尺寸
@property (nonatomic, assign) CGSize bannerSize;

@end

NS_ASSUME_NONNULL_END
