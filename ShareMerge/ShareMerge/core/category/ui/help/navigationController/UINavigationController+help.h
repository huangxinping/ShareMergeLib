/**
 *  UINavigationController+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-12-29.
 *
 *  扩展UINavigationController
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>


@interface UINavigationController (help)

/** 前置视图控制器 */
@property (nonatomic, readonly, retain) UIViewController *backViewController;

/**
 *  @brief  快速创建导航控制器，并将controller设置为根控制器
 *
 *  @param  controller  根控制器
 *
 *  @return             对象
 *
 */
+ (id)controllerWithRootController:(UIViewController *)controller;

@end
