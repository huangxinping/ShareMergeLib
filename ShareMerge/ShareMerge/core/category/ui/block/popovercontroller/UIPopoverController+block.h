/**
 *  UIPopoverController+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-05-21.
 *
 *  PopoverController类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "SM_BlocksProtocol.h"
#import "ShareInstance.h"

@interface UIPopoverController (block) <UIPopoverControllerDelegate, SMBlocksProtocol>

/**
 *  分享单例
 *
 *  @return 实例
 */
+ (UIPopoverController *)sharedPopover;

/**
 *  显示Popovercontroller
 *
 *  @param controller    内容视图控制器
 *  @param view          承载视频
 *  @param shouldDismiss 选择block
 *  @param cancelled     取消block
 */
+ (void)popOverWithContentViewController:(UIViewController *)controller
                              showInView:(UIView *)view
                         onShouldDismiss:(VoidBlock)shouldDismiss
                                onCancel:(VoidBlock)cancelled;

@end
