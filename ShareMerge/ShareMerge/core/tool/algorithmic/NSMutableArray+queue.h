/**
 *  NSMutableArray+queue.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  使用NSMutableArray实现队列数据结构
 *  队列本质：先进先出
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSMutableArray (queue)

/**
 *  @brief  弹出队列中第一个元素，
 *
 *  @return 如果队列数量为0，则返回nil，否则返回被弹出元素
 */
- (id)dequeue;

/**
 *  @brief  添加元素到队列尾端
 *
 *  @param  obj  被添加的元素
 *  @return      无
 */
- (void)enqueue:(id)obj;

/**
 *  @brief  添加元素到队列尾端，如果队列数量为0或index小于0，则返回nil，否则返回被检索元素
 *
 *  @param  obj  被添加的元素
 *  @return      无
 */
- (id)peek:(int)index;

/**
 *  @brief  检索队列第一个元素，如果队列数量为0，则返回nil，否则返回被检索元素
 *
 *  @return      被检索元素
 */
- (id)peekHead;

/**
 *  @brief  检索队列最后一个元素，如果队列数量为0，则返回nil，否则返回被检索元素
 *
 *  @return      被检索元素
 */
- (id)peekTail;

/**
 *  @brief  判断是否队列为空
 *
 *  @return      是否为空
 */
- (BOOL)empty;

@end
