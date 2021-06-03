//
//  XYNetworkSessionConfiguration.h
//  AWSCore
//
//  Created by Frenzy Feng on 2019/12/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XYNetworkSessionConfiguration : NSObject

//是否交换方法
@property (nonatomic,assign) BOOL isExchanged;

+ (instancetype)defaultConfiguration;
// 交换掉NSURLSessionConfiguration的 protocolClasses方法
- (void)load;
// 还原初始化
- (void)unload;

@end

NS_ASSUME_NONNULL_END
