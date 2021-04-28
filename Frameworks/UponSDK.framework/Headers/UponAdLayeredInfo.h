//
//  UponAdLayeredInfo.h
//  UponSDK
//
//  Created by DHY on 2021/3/12.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponConstant.h>

NS_ASSUME_NONNULL_BEGIN

/// 广告所在分层信息
@interface UponAdLayeredInfo : NSObject

/// 当前广告所在分层ID
@property (nonatomic, readonly) NSInteger layeredID;
/// 分层类型
@property (nonatomic, readonly) UponAdLayeredType layeredType;
/// 是否需要预加载
@property (nonatomic, readonly, getter=needPreload) BOOL preload;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithID:(NSInteger)layeredID type:(UponAdLayeredType)type needPreload:(BOOL)preload NS_DESIGNATED_INITIALIZER;
+ (instancetype)newWithID:(NSInteger)layeredID type:(UponAdLayeredType)type needPreload:(BOOL)preload;

@end

NS_ASSUME_NONNULL_END
