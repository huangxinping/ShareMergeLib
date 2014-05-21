/**
 *  UIControl+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-05-21.
 *
 *  UIControl类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

typedef void (^UIControlBlocksActionBlock)(UIControl *sender, UIEvent *event);

@interface UIControl (block)

/**
 *  增加Action
 *
 *  @param controlEvents 事件
 *  @param block         回掉
 *
 *  @return action
 */
- (instancetype)addActionForControlEvents:(UIControlEvents)controlEvents usingBlock:(UIControlBlocksActionBlock)block;

/**
 *  移除所有的Action
 */
- (void)removeAllActions;

/**
 *  移除一个特别的Action
 *
 *  @param action 前面addActionForControlEvents：usingBlock返回的
 */
- (void)removeAction:(id)action;
@end
