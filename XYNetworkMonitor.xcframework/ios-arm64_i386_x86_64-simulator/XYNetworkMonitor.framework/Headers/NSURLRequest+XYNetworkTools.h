//
//  NSURLRequest+XYNetworkTools.h
//  XiaoYing
//
//  Created by huakucha on 2018/12/19.
//

#import <Foundation/Foundation.h>

@interface NSURLRequest (XYNetworkTools)

- (NSString *)requestId;
- (void)setRequestId:(NSString *)requestId;


- (NSNumber*)startTime;
- (void)setStartTime:(NSNumber*)startTime;

@end
