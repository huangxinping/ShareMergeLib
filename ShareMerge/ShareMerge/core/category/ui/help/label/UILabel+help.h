/**
 *  UILabel+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-12-29.
 *
 *  扩展UILabel
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UILabel (help)

/**
 *  @brief  顶上对齐
 *
 */
- (void)alignTop;

/**
 *  @brief  底部对齐
 *
 */
- (void)alignBottom;

/**
 *  @brief  自动调整尺寸，根据给定宽度
 *
 *  @param  fixedWidth   宽度
 *
 */
- (void)sizeToFitFixedWidth:(NSInteger)fixedWidth;

@end
