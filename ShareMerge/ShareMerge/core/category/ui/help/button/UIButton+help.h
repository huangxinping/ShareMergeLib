/**
 *  UIButton+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-03-04.
 *
 *  UIButton类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UIButton (help)

/**
 *	@brief 移除所有的绑定事件
 *
 */
- (void)removeAllTargets;

/**
 *	@brief 载入图片从url
 *
 *	@param imageURL 图片url
 *
 */
- (void)loadImageAtURL:(NSURL *)imageURL forState:(UIControlState)state;

/**
 *	@brief 载入图片从url
 *
 *	@param imageURL 图片url
 *	@param showActivityIndicator 是否显示activity
 *	@param indicatorStyle 指标风格
 *	@param loadingImage 载入图片
 *	@param notAvailableImage 不可用时图片
 *
 */
- (void)loadImageAtURL:(NSURL *)imageURL showActivityIndicator:(BOOL)showActivityIndicator activityIndicatorStyle:(UIActivityIndicatorViewStyle)indicatorStyle loadingImage:(UIImage *)loadingImage notAvailableImage:(UIImage *)notAvailableImage forState:(UIControlState)state;

@end
