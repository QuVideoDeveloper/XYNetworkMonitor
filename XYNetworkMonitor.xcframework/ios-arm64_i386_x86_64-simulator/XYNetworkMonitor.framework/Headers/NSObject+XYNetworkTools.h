//
//  NSObject+XYNetworkTools.h
//  XiaoYing
//
//  Created by huakucha on 2018/12/19.
//

#import <Foundation/Foundation.h>

@interface NSObject (XYNetworkTools)

+ (void)networktools_swizzleClassMethodWithOriginSel:(SEL)oriSel swizzledSel:(SEL)swiSel;

+ (void)networktools_swizzleInstanceMethodWithOriginSel:(SEL)oriSel swizzledSel:(SEL)swiSel;

@end
