//
//  UnionBannerView.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UIKit/UIKit.h>
#import <UnionSDK/UnionBannerDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface UnionBannerView : UIView

@property(nonatomic, weak) id<UnionBannerDelegate> delegate;
@property(nonatomic, weak) UIViewController *presentingViewController;

@end

NS_ASSUME_NONNULL_END
