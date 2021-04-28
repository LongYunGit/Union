//
//  UponAdLoadingDelegate.h
//  UponSDK
//
//  Created by DHY on 2021/3/3.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UponAdLoadingDelegate <NSObject>

@optional
- (void)didFinishLoadingADWithAdSlotID:(NSString *)slotID;
- (void)didFailToLoadADWithAdSlotID:(NSString *)slotID error:(nullable NSError *)error;

@end

NS_ASSUME_NONNULL_END
