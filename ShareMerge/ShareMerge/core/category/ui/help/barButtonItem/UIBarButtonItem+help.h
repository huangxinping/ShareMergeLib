/**
 *  UIBarButtonItem+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-6-03.
 *
 *  UIBarButtonItem类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (help)

/**
 *  @brief  创建一个系统风格的item，无target和action
 *
 *  @param  itemType    类型
 *  @return             对象
 */
+ (UIBarButtonItem *)itemWithSystemType:(UIBarButtonSystemItem)itemType;

/**
 *  @brief  创建一个系统风格的item，有target和action
 *
 *  @param  itemType    类型
 *  @param  target      委托目标
 *  @param  action      委托函数
 *  @return             对象
 */
+ (UIBarButtonItem *)itemWithSystemType:(UIBarButtonSystemItem)itemType target:(id)target action:(SEL)action;

/**
 *  @brief  创建一个带文本、样式风格的item，有target和action
 *
 *  @param  title       文本
 *  @param  style       样式
 *  @param  target      委托目标
 *  @param  action      委托函数
 *  @return             对象
 */
+ (UIBarButtonItem *)itemWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action;

/**
 *  @brief  创建一个带图像、样式风格的item，有target和action
 *
 *  @param  image       图像
 *  @param  style       样式
 *  @param  target      委托目标
 *  @param  action      委托函数
 *  @return             对象
 */
+ (UIBarButtonItem *)itemWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action;

/**
 *  @brief  创建一个容易拉伸的item
 *
 *  @return             对象
 */
+ (UIBarButtonItem *)flexibleSpace;


/**
 *  @brief  创建一个容易拉伸的item，但是指定宽度
 *
 *  @return             对象
 */
+ (UIBarButtonItem *)fixedSpace:(CGFloat)width;

@end
