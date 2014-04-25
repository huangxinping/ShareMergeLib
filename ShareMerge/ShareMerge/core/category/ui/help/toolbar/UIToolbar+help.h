/**
 *  UIToolbar+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 10-4-25.
 *
 *  扩展UIToolbar
 *
 *  Copyright (c) 2010年 __MyCompanyName__. All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UIToolbar (help)

/**
 *  @brief  设置item标题
 *
 *  @param  title          标题
 *  @param  tag            标识
 *
 *  @return                无
 *
 */
- (void)setItemTitle:(NSString *)title forTag:(NSInteger)tag;

/**
 *  @brief  通过tag获取item
 *
 *  @param  tag            标识
 *
 *  @return                item
 *
 */
- (UIBarButtonItem *)itemWithTag:(NSInteger)tag;

/**
 *  @brief  获取某个tag的item所在序号
 *
 *  @param  tag            标识
 *
 *  @return                序号索引
 *
 */
- (NSUInteger)indexOfItemWithTag:(NSInteger)tag;

@end
