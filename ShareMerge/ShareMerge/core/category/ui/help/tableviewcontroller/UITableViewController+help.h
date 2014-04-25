/**
 *  UITableViewController+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-2-16.
 *
 *  扩展UITableViewController
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UITableViewController (help)

/**
 *  @brief  返回一个NSIndexPath数组，依赖于fromRow和toRow
 *
 *  @param  fromRow         从某行开始
 *  @param  toRow           到某行结束
 *  @param  inSection       在某个section中
 *
 *  @return                 NSIndexPath数组
 *
 */
- (NSArray *)indexPathsFromRow:(NSUInteger)fromRow toRow:(NSUInteger)toRow inSection:(NSUInteger)inSection;

/**
 *	@brief 隐藏空白的分割条，主要是底部的分割条
 *
 *
 */
- (void)hideEmptySeparators;

@end
