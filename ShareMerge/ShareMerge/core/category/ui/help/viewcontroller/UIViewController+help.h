/**
 *  UIViewController+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  扩展UIViewController
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UIViewController (help)

/**
 *  @brief  根据设备类型载入不同的xib文件（例如：iphone5则在nibNameOrNil后添加-iPhone5，ipad则在nibNameOrNil添加-iPad）  目前不同设备xib文件必须为：xxx-iPhone5.xib或xxx-iPad.xib或xxx-iPhone.xib
 *
 *  @param      nibNameOrNil    nib文件名（不带-iPhone5或-iPad或-iPhone）
 *
 *  @return                     对象
 *
 */
- (id)initWithNibNameSupportIphone5:(NSString *)nibNameOrNil;

/**
 *  @brief  压入视图控制器
 *
 *  @param      viewController  视图控制器
 *
 *  @return                     无
 *
 */
- (void)pushViewController:(UIViewController *)viewController;

/**
 *  @brief  弹出视图控制器
 *
 *  @return                     无
 *
 */
- (void)popViewController;

@end
