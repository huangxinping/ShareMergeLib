/**
 *  NSObject+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-6-23.
 *
 *  扩展NSObject，使用GCD方式做线程调度
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"

#if HAS_BLOCK

typedef void (^SMWorkerBlock)(void);

@interface NSObject (block)

/**
 *  @brief  GCD线程调度（调度完worker块，则立马会调度callback块）
 *
 *  @param  worker      工作块（不能为nil，不能做UI更新）
 *  @param  callback    回调块（在mainThread中执行，能做UI更新）
 *
 *  @return
 *
 */
- (void)dispatchWorker:(SMWorkerBlock)worker withCallback:(SMWorkerBlock)callback;

/**
 *  @brief  GCD线程调度（调度完worker块，则立马会调度callback块）
 *
 *  @param  worker      工作块（不能为nil，不能做UI更新）
 *  @param  callback    回调块（在mainThread中执行，能做UI更新）
 *
 *  @return
 *
 */
+ (void)dispatchWorker:(SMWorkerBlock)worker withCallback:(SMWorkerBlock)callback;

/**
 *	@brief 执行block块
 *
 *	@param block 执行块
 *	@param delay 等候时间
 *	@param useMainThread 是否在主线程中执行
 *
 */
- (void)performBlock:(SMWorkerBlock)block afterDelay:(NSTimeInterval)delay onMainThread:(BOOL)useMainThread;

/**
 *	@brief 执行block块
 *
 *	@param block 执行块
 *	@param delay 等候时间
 *	@param useMainThread 是否在主线程中执行
 *
 */
+ (void)performBlock:(SMWorkerBlock)block afterDelay:(NSTimeInterval)delay onMainThread:(BOOL)useMainThread;

@end

#endif
