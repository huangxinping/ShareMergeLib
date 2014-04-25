/**
 *  NSArray+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-6-03.
 *
 *  扩展NSArray为block方式访问
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "ShareMergeMacros.h"

#if HAS_BLOCK

typedef void (^SMEachCallback)(id item);
typedef BOOL (^SMValidationCallback)(id object);

@interface NSArray (block)

/**
 *  @brief  遍历数组元素
 *
 *  @param  block   回调block
 */
- (void)each:(SMEachCallback)block;

/**
 *  @brief  选择数组元素
 *
 *  @param  block   回调block
 */
- (NSArray *)select:(SMValidationCallback)callback;

@end

#endif
