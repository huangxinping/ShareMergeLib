/**
 *  NSMutableArray+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 10-6-26.
 *
 *  扩展NSMutableArray
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSMutableArray (help)

/**
 *  @brief  从后面增加元素，使用多元素列表
 *
 *  @param  firstObject,... 元素列表
 *  @return                 无
 */
- (void)appendObjects:(id)firstObject, ...;

/**
 *  @brief  从前面增加元素，使用多元素列表
 *
 *  @param  firstObject,... 元素列表
 *  @return                 无
 */
- (void)prependObjects:(id)firstObject, ...;

/**
 *  @brief  交换元素
 *
 *  @param  from    从哪个索引
 *  @param  to      到哪个索引
 *  @return         无
 */
- (void)swap:(NSUInteger)from toIndex:(NSUInteger)to;

/**
 *	@brief 反序列数组
 *
 *
 */
- (void)reverse;

@end
