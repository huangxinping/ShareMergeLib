/**
 *  UITableView+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  扩展UITableView
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UITableView (help)

/**
 *  @brief  被选中的cell
 *
 *  @return                选中的tableviewcell
 *
 */
- (UITableViewCell *)selectedCell;

/**
 *	@brief 隐藏空白的分割条，主要是底部的分割条
 *
 *
 */
- (void)hideEmptySeparators;

@end
