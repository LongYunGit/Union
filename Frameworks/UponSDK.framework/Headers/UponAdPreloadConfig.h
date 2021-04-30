//
//  UponAdPreloadConfig.h
//  UponSDK
//
//  Created by DHY on 2021/3/29.
//

#import <UIKit/UIKit.h>

/// 头条信息流图片尺寸
typedef NS_ENUM(NSInteger, UponTTImageFeedSize) {
    UponTTImageFeedSize228_150,
    UponTTImageFeedSize690_388
};

NS_ASSUME_NONNULL_BEGIN

/// 预加载配置
@interface UponAdPreloadConfig : NSObject

/// 预加载的banner视图尺寸
@property (nonatomic, assign) CGSize bannerSize;
/// 预加载的信息流广告视图尺寸
@property (nonatomic, assign) CGSize nativeSize;
/// 头条信息流图片尺寸比例配置（默认：228_150）
@property (nonatomic, assign) UponTTImageFeedSize ttImgFeedSize;
/// 信息流预加载条数（默认1条）
@property (nonatomic, assign) NSInteger nativeOfCount;

@end

NS_ASSUME_NONNULL_END
