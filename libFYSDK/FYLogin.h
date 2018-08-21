//
//  FYLogin.h
//  FYSDK
//
//  Created by sugoqn on 2018/5/17.
//  Copyright © 2018年 sugoqn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FYLogin : NSObject
/**
 回收

 @param CacheKey 为爱换机平台获取的CacheKey 
 */
+ (void)GotoRecycle:(NSString *)CacheKey;

/**
 是否安装了爱换机店员版
 */
+ (BOOL)isInstallAiHuanJiB2B;
@end
