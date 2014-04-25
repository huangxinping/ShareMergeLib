/**
 *  UIAlertView+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 13-7-1.
 *
 *  UIAlertView类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"

#if HAS_BLOCK

/**
 *	@brief 按钮点击回调
 *
 *	@param buttonIndex 按钮索引
 *
 */
typedef void (^SMAlertViewButtonCallback)(NSInteger buttonIndex);

@interface UIAlertView (block)

/**
 *	@brief 创建一个block类型的AlertView
 *
 *	@param title 标题
 *	@param message 消息
 *	@param inBlock block
 *	@param cancenButtonTitle 取消按钮及其他
 *
 */
+ (void)showWithTitle:(NSString *)title message:(NSString *)message block:(SMAlertViewButtonCallback)inBlock cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ...NS_REQUIRES_NIL_TERMINATION;

/**
 *	@brief 创建一个block类型的AlertView
 *
 *	@param title 标题
 *	@param message 消息
 *	@param inBlock block
 *	@param buttonTitle  按钮标题
 *
 */
+ (void)showSimpleWithTitle:(NSString *)title message:(NSString *)message block:(SMAlertViewButtonCallback)inBlock buttonTitle:(NSString *)buttonTitle;

/**
 *	@brief 创建一个block类型的AlertView
 *
 *	@param title 标题
 *	@param message 消息
 *	@param inBlock block
 *
 */
+ (void)showSimpleWithTitle:(NSString *)title message:(NSString *)message block:(SMAlertViewButtonCallback)inBlock;

@end

#endif
