//
//  UnionNativeView.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UIKit/UIKit.h>
#import <UnionSDK/UnionNativeDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface UnionNativeView : UIView

@property (nonatomic, weak) id<UnionNativeDelegate> delegate;
@property (nonatomic, weak) UIViewController *presentingViewController;

@end

NS_ASSUME_NONNULL_END
