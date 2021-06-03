//
//  XYNetworkToolsManager.h
//  XiaoYing
//
//  Created by huakucha on 2018/12/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define kXYNetworkMonitorNotificationKey @"XYNetworkMonitorNotificationKey"

@interface XYNetworkToolsManager : NSObject

+ (XYNetworkToolsManager *)shareInstance;

@property (nonatomic, strong) NSMutableDictionary *headerFields;

@property (nonatomic, readonly) NSArray *blackListHosts;

/// 是否禁止挂代理
@property (nonatomic, assign) BOOL *isProxyDenied;

/// 埋点发送
@property (nonatomic, copy) void(^eventCallback)(NSString * eventName, NSDictionary * attribute);

/*
 * 其他APPs，使用设备唯一标识符
 */
+ (void)initNetworkMonitor:(NSString *)appId
            blackListHosts:(NSArray * _Nullable )blackListHosts
    uniqueDeviceIdentifier:(NSString *)uniqueDeviceIdentifier;

/*
 * 仅限小影使用traceId
 */
+ (void)initNetworkMonitor:(NSString *)appId
            blackListHosts:(NSArray * _Nullable )blackListHosts
           xiaoyingtraceId:(NSString *)traceId;


- (void)canInterceptNetFlow:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
