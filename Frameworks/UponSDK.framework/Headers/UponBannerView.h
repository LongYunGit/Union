//
//  UponBannerView.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UIKit/UIKit.h>
#import <UponSDK/UponBannerDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface UponBannerView : UIView

@property(nonatomic, weak) id<UponBannerDelegate> delegate;
@property(nonatomic, weak) UIViewController *presentingViewController;

@end

NS_ASSUME_NONNULL_END
