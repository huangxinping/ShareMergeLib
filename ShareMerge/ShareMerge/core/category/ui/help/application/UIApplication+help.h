/**
 *  UIApplication+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-11-03.
 *
 *  UIApplication类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface UIApplication (help)

/**
 *  @brief  得到APP名称
 *
 */
+ (NSString *)applicationName NS_AVAILABLE(10_5, 2_0);

/**
 *  @brief  实际矩形大小（iPad下Landscape下矩形为768x1024，本身其实为1024x768 ）
 *
 */
+ (CGRect)referenceBounds;

/**
 *  @brief  得到名称从Bundle
 *
 *  @param  bundle  bundle（例如：[UIBundle mainBundle]）
 *  @return         名称
 */
+ (NSString *)nameForBundle:(NSBundle *)bundle;

/**
 *  @brief  得到APP版本
 *
 *  @return         版本
 */
+ (NSString *)applicationVersion;

/**
 *  @brief  得到版本从Bundle
 *
 *  @param  bundle  bundle（例如：[UIBundle mainBundle]）
 *  @return         版本
 */
+ (NSString *)versionForBundle:(NSBundle *)bundle;

/**
 *  @brief  得到APP组织标识
 *
 *  @return         标识
 */
+ (NSString *)applicationIdentifier;

/**
 *  @brief  得到组织标识从Bundle
 *
 *  @param  bundle  bundle（例如：[UIBundle mainBundle]）
 *  @return         标识
 */
+ (NSString *)identifierForBundle:(NSBundle *)bundle;

/**
 *  @brief  得到键盘视图
 *
 *  @return         键盘视图
 */
- (UIView *)keyboardView;

/**
 *  @brief  设置状态栏风格
 *
 *  @param  style       状态栏风格
 *  @param  animated    是否动画
 *  @return             无
 */
- (void)setApplicationStyle:(UIStatusBarStyle)style animated:(BOOL)animated;

/**
 *  @brief  设置状态栏风格
 *
 *  @param  style                       状态栏风格
 *  @param  animated                    是否动画
 *  @param  defaultBackgroundColor      启动window的默认背景颜色
 *  @return                             无
 */
- (void)setApplicationStyle:(UIStatusBarStyle)style animated:(BOOL)animated defaultBackgroundColor:(UIColor *)defaultBackgroundColor;

/**
 *	@brief 发送震动
 *
 *
 */
- (void)sendSock;

/**
 *	@brief 判断机器是否越狱
 *
 *
 *	@returns 是否越狱
 */
- (BOOL)isJailbroken;

/**
 *  @brief 增加忽略icloud备份
 *
 *  @param urlPath 文件或文件夹路径 （使用：[NSURL fileWithString:path]）
 *
 *  @return 是否增加成功
 *
 */
- (BOOL)addSkipBackupAttributeToItemAtURL:(NSURL *)urlPath;

/**
 *	@brief 注册应用程序能后台运行
 *
 *
 */
- (void)registerApplicationBackgroundRun;


/**
 *	@brief 设置屏幕常亮
 *
 *	@param disable 是否开启
 *
 */
- (void)setIdleDisable:(BOOL)disable;

@end
