/**
 *  UINavigationBar+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-04-14.
 *
 *  navigationbar类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UINavigationBar (help)

/**
 *  隐藏底部一像素高的黑线
 */
- (void)hideBottomHairline;

/**
 *  显示底部一像素高的黑线
 */
- (void)showBottomHairline;

/**
 *  设置背景颜色
 *
 *  @param color 颜色
 */
- (void)setBarColor:(UIColor *)color;

/**
 *  设置左右箭头颜色
 *
 *  @param color 颜色
 */
- (void)setArrowColor:(UIColor *)color;

@end
