//
//  XYUrlUtil.h
//  XiaoYing
//
//  Created by huakucha on 2018/12/19.
//

#import <Foundation/Foundation.h>

@interface XYUrlUtil : NSObject

+ (NSString *)convertJsonFromData:(NSData *)data;

+ (NSData *)getHttpBodyFromRequest:(NSURLRequest *)request;

@end
