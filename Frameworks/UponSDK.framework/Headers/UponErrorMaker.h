//
//  UponErrorMaker.h
//  UponSDK
//
//  Created by DHY on 2021/3/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#ifndef _UponErrorMaker_
#define _UponErrorMaker_

FOUNDATION_EXTERN NSError * UponError(NSInteger code, NSString *desc, NSString * _Nullable reason, NSString * _Nullable suggestion);

#endif /* _UponErrorMaker_ */

NS_ASSUME_NONNULL_END
