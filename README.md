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






MIT License

Copyright (c) 2018 爱换机

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
