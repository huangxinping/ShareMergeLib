/**
 *  UIScrollView+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  扩展UIScrollView
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIScrollView (help)

/**
 *  @brief  滚动到顶部（不使用动画）
 *
 *  @return                无
 *
 */
- (void)scrollToTop;

/**
 *  @brief  滚动到顶部
 *
 *  @param animated     是否使用动画
 *
 *  @return                无
 *
 */
- (void)scrollToTopAnimated:(BOOL)animated;

/**
 *  @brief  滚动到子视图可见
 *
 *  @param view         子视图
 *  @param animated     是否使用动画
 *
 *  @return                无
 *
 */
- (void)scrollViewToVisible:(UIView *)view animated:(BOOL)animated;

@end
