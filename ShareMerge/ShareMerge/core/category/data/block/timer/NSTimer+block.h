/**
 *  NSTimer+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-2-16.
 *
 *  扩展NSTimer，使用GCD方式
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "ShareMergeMacros.h"

#if HAS_BLOCK

@interface NSTimer (block)

/**
 *  @brief  GCD方式定时器调度
 *
 *  @param  inTimeInterval          触发间隔时间
 *  @param  inBlock                 块处理函数
 *  @param  inRepeats               是否重复
 *
 *  @return                 对象
 *
 */
+ (id)scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^) ())inBlock repeats:(BOOL)inRepeats;

/**
 *  @brief  GCD方式定时器调度
 *
 *  @param  inTimeInterval          触发间隔时间
 *  @param  inBlock                 块处理函数
 *  @param  inRepeats               是否重复
 *
 *  @return                 对象
 *
 */
+ (id)timerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^) ())inBlock repeats:(BOOL)inRepeats;

@end

#endif
