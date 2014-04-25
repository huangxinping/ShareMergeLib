/**
 *  NSMutableArray+Stack.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  使用NSMutableArray实现堆栈数据结构
 *  堆栈本质：后进先出
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSMutableArray (stack)

/**
 *  @brief  压入一个元素到堆栈中，
 *
 *  @return 无
 */
- (void)push:(id)inObject;

/**
 *  @brief  从堆栈中弹出最后一个元素，如果堆栈数量为0，则返回nil，否则返回最后一个元素
 *
 *  @return 返回被弹出元素
 */
- (id)pop;

/**
 *  @brief  交换堆栈中的元素
 *
 *  @param  index           交换到索引
 *  @param  from            被交换的索引
 *  @param  removeFirse     是否交换完后，移除from索引所在元素
 *  @return                 无
 */
- (void)swapObjectAtIndex:(NSInteger)index from:(NSInteger)remove removeFirst:(BOOL)removeFirst;

/**
 *  @brief  判断是否堆栈为空
 *
 *  @return      是否为空
 */
- (BOOL)empty;

@end
