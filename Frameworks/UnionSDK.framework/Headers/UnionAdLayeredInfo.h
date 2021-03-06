//
//  UnionAdLayeredInfo.h
//  UnionSDK
//
//  Created by DHY on 2021/3/12.
//

#import <Foundation/Foundation.h>
#import <UnionSDK/UnionConstant.h>

NS_ASSUME_NONNULL_BEGIN

/// 广告所在分层信息
@interface UnionAdLayeredInfo : NSObject

/// 当前广告所在分层ID
@property (nonatomic, readonly) NSInteger layeredID;
/// 分层类型
@property (nonatomic, readonly) UnionAdLayeredType layeredType;
/// 是否需要预加载
@property (nonatomic, readonly, getter=needPreload) BOOL preload;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithID:(NSInteger)layeredID type:(UnionAdLayeredType)type needPreload:(BOOL)preload NS_DESIGNATED_INITIALIZER;
+ (instancetype)newWithID:(NSInteger)layeredID type:(UnionAdLayeredType)type needPreload:(BOOL)preload;

@end

NS_ASSUME_NONNULL_END
