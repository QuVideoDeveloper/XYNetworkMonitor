//
//  XYNetFlowHttpModel.h
//  XiaoYing
//
//  Created by huakucha on 2018/12/19.
//

#import <Foundation/Foundation.h>

@interface XYNetFlowHttpModel : NSObject

@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) NSString *requestBody;
@property (nonatomic, copy) NSString *statusCode;
@property (nonatomic, copy) NSData *responseData;
@property (nonatomic, copy) NSString *responseBody;
@property (nonatomic, copy) NSString *mineType;
@property (nonatomic, assign) NSTimeInterval startTime;
@property (nonatomic, assign) NSTimeInterval endTime;
@property (nonatomic, copy) NSString *totalDuration;


@property (nonatomic, strong) NSURLRequest *request;
@property (nonatomic, strong) NSURLResponse *response;
@property (nonatomic, strong) NSError *error;


/// 域名
@property (nonatomic, copy) NSString * domain;

/// 请求包体多少字节
@property (nonatomic, assign) int64_t requestByte;

/// 返回包体多少字节
@property (nonatomic, assign) int64_t responseByte;

/// 是否为首包
@property (nonatomic, assign) BOOL isFirst;

/// DNS解析耗时(毫秒级)
@property (nonatomic, assign) NSTimeInterval dnsCostMills;

/// Http建连耗时(毫秒级)
@property (nonatomic, assign) NSTimeInterval connectCostMills;

/// 服务器响应耗时(毫秒级)
@property (nonatomic, assign) NSTimeInterval responseCostMills;

/// 服务器域名/IP地址
@property (nonatomic, copy) NSString * inetSocketAddress;

/// 模式，是否是代理模式(VPN等)
@property (nonatomic, copy) NSString * proxy;

+ (XYNetFlowHttpModel *)dealWithResponseData:(NSData *)responseData response:(NSURLResponse*)response request:(NSURLRequest *)request WithError:(NSError *)error;

@end
