//
//  NSURLSession+XYProxyCheck.h
//  XYNetworkMonitor
//
//  Created by 徐新元 on 2020/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURLSession (XYProxyCheck)

/// 是否启用代理检测
+ (void)xy_enableProxyCheck;

@end

NS_ASSUME_NONNULL_END
