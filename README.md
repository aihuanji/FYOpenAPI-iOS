# OpenAPI 爱换机授权登录

方法名介绍

引入"FYSDK.a"

#import "FYSDK.h"

方法名介绍
-------
/**
 回收

 @param CacheKey 为爱换机平台获取的CacheKey 
 */
+ (void)GotoRecycle:(NSString *)CacheKey;

/**
 是否安装了爱换机店员版
 */
+ (BOOL)isInstallAiHuanJiB2B;

使用方法
/**
 检测本地app
 */
```
if ([FYLogin isInstallAiHuanJiB2B]){
   NSLog(@"本机已安装爱换机店员版");
}else{
   NSLog(@"未在本机中查找到爱换机店员版");
}
```
/**
 跳转登录回收
 */
```
[FYLogin GotoRecycle:@"Cachekey"//需要爱换机平台中申请获得];
```
