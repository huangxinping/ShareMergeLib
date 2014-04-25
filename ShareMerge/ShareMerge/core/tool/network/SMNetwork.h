/**
 *  SMNetwork
 *  ShareMerge
 *
 *  Created by huangxp on 13-7-23.
 *
 *  网络助手函数
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface SMNetwork : NSObject

/**
 *  @brief  是否是IP
 *
 *  @param      host IP地址
 *
 *  @return     是否是
 */
+ (BOOL)isIPAddress:(NSString *)host;

/**
 *  @brief  从域名得到IP地址
 *
 *  @param      domain 域名
 *
 *  @return     IP地址
 */
+ (NSString *)ipFromDomainName:(NSString *)domain;

@end
