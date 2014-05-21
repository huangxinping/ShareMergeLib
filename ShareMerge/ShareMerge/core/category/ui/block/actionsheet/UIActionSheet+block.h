/**
 *  UIActionSheet+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-05-21.
 *
 *  ActionSheet类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "SM_BlocksProtocol.h"

@interface UIActionSheet (block) <UIActionSheetDelegate, UIImagePickerControllerDelegate, SMBlocksProtocol>

/**
 *  显示ActionSheet
 *
 *  @param title                  标题
 *  @param sheetStyle             风格
 *  @param cancelButtonTitle      取消按钮标题
 *  @param destructiveButtonTitle 销毁按钮标题
 *  @param buttonTitles           可互动按钮标题
 *  @param disabledTitles         不能用的按钮标题
 *  @param view                   承载视图
 *  @param dismissed              选择block
 *  @param cancelled              取消block
 *
 *  @return 实例
 */
+ (UIActionSheet *)actionSheetWithTitle:(NSString *)title
                                  style:(UIActionSheetStyle)sheetStyle
                      cancelButtonTitle:(NSString *)cancelButtonTitle
                 destructiveButtonTitle:(NSString *)destructiveButtonTitle
                           buttonTitles:(NSArray *)buttonTitles
                         disabledTitles:(NSArray *)disabledTitles
                             showInView:(UIView *)view
                              onDismiss:(DismissBlock)dismissed
                               onCancel:(VoidBlock)cancelled;

/**
 *  显示ActionSheet
 *
 *  @param title                  标题
 *  @param cancelButtonTitle      取消按钮标题
 *  @param destructiveButtonTitle 销毁按钮标题
 *  @param buttonTitles           可互动按钮标题
 *  @param view                   承载视图
 *  @param dismissed              选择block
 *  @param cancelled              取消block
 *
 *  @return 实例
 */
+ (UIActionSheet *)actionSheetWithTitle:(NSString *)title
                      cancelButtonTitle:(NSString *)cancelButtonTitle
                 destructiveButtonTitle:(NSString *)destructiveButtonTitle
                           buttonTitles:(NSArray *)buttonTitles
                             showInView:(UIView *)view
                              onDismiss:(DismissBlock)dismissed
                               onCancel:(VoidBlock)cancelled;

/**
 *  显示ActionSheet
 *
 *  @param title                  标题
 *  @param buttonTitles           可互动按钮标题
 *  @param view                   承载视图
 *  @param dismissed              选择block
 *
 *  @return 实例
 */
+ (UIActionSheet *)actionSheetWithTitle:(NSString *)title
                           buttonTitles:(NSArray *)buttonTitles
                             showInView:(UIView *)view
                              onDismiss:(DismissBlock)dismissed;

/**
 *  显示图像来源选择ActionSheet
 *
 *  @param title                  标题
 *  @param cancelButtonTitle      取消按钮标题
 *  @param view                   承载视图
 *  @param presentVC              由哪个视图控制器管理
 *  @param photoPicked            选择block
 *  @param cancelled              取消block
 *
 *  @return 实例
 */
+ (UIActionSheet *)photoPickerWithTitle:(NSString *)title
                      cancelButtonTitle:(NSString *)cancelButtonTitle
                             showInView:(UIView *)view
                              presentVC:(UIViewController *)presentVC
                          onPhotoPicked:(PhotoPickedBlock)photoPicked
                               onCancel:(VoidBlock)cancelled;

@end
