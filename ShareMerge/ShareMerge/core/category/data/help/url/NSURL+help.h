/**
 *  NSUserDefaults+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 10-8-25.
 *
 *  扩展NSUserDefaults
 *
 *  Copyright (c) 2010年 __MyCompanyName__. All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSURL (help)

/**
 *  @brief  返回URL的域名（例如：http://www.iiseeuu.com/api?query=string&key=value，则返回http://www.iiseeuu.com/）
 *
 *  @return                域名
 *
 */
- (NSString *)baseString;

/**
 *  @brief  返回查询参数（GET方式）
 *
 *  @return                参数字典
 *
 */
- (NSDictionary *)queryDictionary;

@end
