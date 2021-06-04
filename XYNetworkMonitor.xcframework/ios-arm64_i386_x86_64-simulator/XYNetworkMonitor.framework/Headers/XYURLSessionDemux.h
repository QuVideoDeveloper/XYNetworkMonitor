//
//  XYURLSessionDemux.h
//  XiaoYing
//
//  Created by huakucha on 2018/12/19.
//

#import <Foundation/Foundation.h>

@interface XYURLSessionDemux : NSObject

- (instancetype)initWithConfiguration:(NSURLSessionConfiguration *)configuration;

@property (atomic, copy,   readonly) NSURLSessionConfiguration *configuration;
@property (atomic, strong, readonly) NSURLSession *session;

- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)request delegate:(id<NSURLSessionDataDelegate>)delegate modes:(NSArray *)modes;

@end
