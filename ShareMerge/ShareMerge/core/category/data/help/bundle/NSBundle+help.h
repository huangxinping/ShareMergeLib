/**
 *  NSBundle+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-6-03.
 *
 *  NSBundle类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSBundle (help)

/**
 *  @brief  从resource文件夹中得到文件全路径
 *
 *  @param  name        文件名称（包含文件类型后缀）
 *  @return             路径
 */
- (NSString *)pathForResource:(NSString *)name;

/**
 *  @brief  从resource文件夹中得到文件全路径
 *
 *  @param  name        文件名称（包含文件类型后缀）
 *  @return             路径
 */
- (NSURL *)urlForResource:(NSString *)name;

/**
 *  @brief  从resource文件夹中得到文件全路径
 *
 *  @param  name        文件名称
 *  @param  type        文件类型名称
 *  @return             路径
 */
- (NSURL *)urlForResource:(NSString *)name ofType:(NSString *)type;


@end
