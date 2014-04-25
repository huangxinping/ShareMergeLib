/**
 *  UIScreen+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-4-2.
 *
 *  扩展UIScreen
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UIScreen (help)

/**
 *  @brief  当前边界（跟当前设备方向有关）
 *
 *  @return                边界矩形
 *
 */
- (CGRect)currentBounds;

/**
 *  @brief  边界（通过设备方向计算）
 *
 *  @param  orientation     设备方向
 *
 *  @return                边界矩形
 *
 */
- (CGRect)boundsForOrientation:(UIInterfaceOrientation)orientation;

/**
 *  @brief  是否retina显示屏
 *
 *  @return                是否retina
 *
 */
- (BOOL)isRetinaDisplay;

@end
