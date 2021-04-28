//
//  UponNativeView.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UIKit/UIKit.h>
#import <UponSDK/UponNativeDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface UponNativeView : UIView

@property (nonatomic, weak) id<UponNativeDelegate> delegate;
@property (nonatomic, weak) UIViewController *presentingViewController;

@end

NS_ASSUME_NONNULL_END
