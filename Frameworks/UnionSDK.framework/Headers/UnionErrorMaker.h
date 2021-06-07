//
//  UnionErrorMaker.h
//  UnionSDK
//
//  Created by DHY on 2021/3/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#ifndef _UnionErrorMaker_
#define _UnionErrorMaker_

FOUNDATION_EXTERN NSError * UnionError(NSInteger code, NSString *desc, NSString * _Nullable reason, NSString * _Nullable suggestion);


/// 参数错误
extern const NSInteger kErrorCodeParam;
/// 内部错误
extern const NSInteger kErrorCodeInternal;
/// 上游平台暂不支持
extern const NSInteger kErrorCodePlatformNonsupport;
/// 广告尚未准备好
extern const NSInteger kErrorCodeAdNoReady;
/// 初始化数据错误
extern const NSInteger kErrorCodeAdDataInstall;
/// 无法连接因特网
extern const NSInteger kErrorCodeNotConnectedToInternet;
/// 广告加载超时
extern const NSInteger kErrorCodeAdLoadTimeout;
/// 没有可展示的广告
extern const NSInteger kErrorCodeNoMatchAds;

#endif /* _UnionErrorMaker_ */

NS_ASSUME_NONNULL_END
