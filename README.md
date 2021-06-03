组件开发负责人：@赖隆斌 
组件接入对接人：@赖隆斌 

# 介绍
XYNetworkMonitor 可以拦截全局网络请求，统计请求耗时和错误。
！注意，引入XYNetworkMonitor可能导致项目内其他拦截失效

# 0.5.0 修改接入文档
## 一. 0.5.0 修改点
1. 去除白名单，全量监控，增加黑名单排除第三方链接
2. 埋点发送由业务来完成
3. 增加对文件下载类型的支持，之前会忽略文件下载
4. 增加dns时间等详细信息的收集

codereview：XYNetworkMonitor 0.5.0 CodeReview 
详细需求文档：API 监控事件定义 监控体系优化需求v1.1 2021.05.06 

## 二. 接入修改
### 1. 入口方法修改
由
```objective-c
+ (void)initNetworkMonitor:(NSString *)appId
       whiteHostList:(NSArray *)array
  uniqueDeviceIdentifier:(NSString *)uniqueDeviceIdentifier;
```

修改为
```objective-c
+ (void)initNetworkMonitor:(NSString *)appId
      blackListHosts:(NSArray * _Nullable )blackListHosts
  uniqueDeviceIdentifier:(NSString *)uniqueDeviceIdentifier;
```

### 2. XYNetworkToolsManager添加埋点回调block
```objective-c
@property (nonatomic, copy) void(^eventCallback)(NSString * eventName, NSDictionary * attribute);
```

业务端可以这样接入，目前只需要埋点阿里云
```objective-c
[XYNetworkToolsManager shareInstance].eventCallback = ^(NSString * _Nonnull eventName, NSDictionary * _Nonnull attribute) {
    [XYUserBehaviorLog eventAliOnly:eventName attributes:attribute];
};
```


## 三. 测试要点
1. API，接口，素材下载能否正常使用
2. 禁止手机挂代理功能是否正常使用
3. 监控埋点DEV_Event_API_Analysis是否能正常发送给阿里云
4. 以下域名不会监控（小影获取的第三方域名）
> @"beacon-api.aliyuncs.com",
 @"adashxgc.ut.taobao.com",
       @"cdn-adn-https.rayjump.com",
       @"graph.facebook.com",
       @"firebaselogging-pa.googleapis.com",
       @"launches.appsflyer.com",
       @"data.flurry.com",
       @"adc3-launch.adcolony.com",
       @"api.giphy.com",
       @"doraemon.xiaojukeji.com",
       @"googleads.g.doubleclick.net",
       @"mpush-api.aliyun.com",
       @"inapps.appsflyer.com",
       @"adc-ad-assets.adtilt.com",
       @"ub-us.vvbrd.com",
       @"ads30.adcolony.com",
       @"rc.veresource.com",
       @"c4d-cdn.adcolony.com",
       @"events3alt.adcolony.com",
       @"events3.adcolony.com",
       @"wd.adcolony.com",
       @"app-measurement.com",
       @"configure.rayjump.com",
       @"net.rayjump.com",
       @"analytics.rayjump.com",
       @"lh4.googleusercontent.com",
       @"tpc.googlesyndication.com",
       @"lh3.googleusercontent.com",
       @"s0.2mdn.net",
       @"alogs.umeng.com",
       @"uop.umeng.com",
       @"lh5.googleusercontent.com",
       @"pagead2.googleadservices.com",
       @"img4uxiaoyingtv.oss-us-east-1.aliyuncs.com",
       @"v4u.v2c.xyz",