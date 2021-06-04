//
//  XYNetworkTrackId.h
//  AWSCore
//
//  Created by Frenzy Feng on 2019/12/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XYNetworkTraceId : NSObject

@property (nonatomic, strong) NSString *uniqueDeviceIdentifier;

- (instancetype)initWithUniqueIdentifier:(NSString *)uniqueIdentifier;

- (NSString *)traceId;

@end

NS_ASSUME_NONNULL_END
