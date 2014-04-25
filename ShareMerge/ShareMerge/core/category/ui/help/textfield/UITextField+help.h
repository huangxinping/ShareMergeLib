/**
 *  UITextField+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 13-12-25.
 *
 *  扩展UITextField
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UITextField (help)

/**
 *  @brief  设置textfield输入长度
 *
 *  @param  length         输入长度
 *
 *  @return                无
 *
 */
- (void)limitTextLength:(NSInteger)length;

@end
