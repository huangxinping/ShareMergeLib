/**
 *  SMOther+architecture.h
 *  ShareMerge
 *
 *  Created by huangxp on 14-3-28.
 *
 *  不常用函数
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import "SMOther.h"

@interface SMOther (architecture)

/**
 *  打印内存信息
 */
+ (void)printMemoryInfo;

/**
 *  打印CPU信息
 */
+ (void)printProcessorInfo;

/**
 *  打印线程信息
 */
+ (void)printProcessInfo;

@end
