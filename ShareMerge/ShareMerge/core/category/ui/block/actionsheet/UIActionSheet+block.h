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

@interface UIActionSheet (block) <UIActionSheetDelegate, UIImagePickerControllerDelegate, SMBlocksProtocol, UINavigationControllerDelegate>

+ (void)actionSheetWithTitle:(NSString *)title
                     message:(NSString *)message
                     buttons:(NSArray *)buttonTitles
                  showInView:(UIView *)view
                   onDismiss:(DismissBlock)dismissed
                    onCancel:(CancelBlock)cancelled;


+ (void)actionSheetWithTitle:(NSString *)title
                     message:(NSString *)message
      destructiveButtonTitle:(NSString *)destructiveButtonTitle
           cancelButtonTitle:(NSString *)cancelButtonTitle
                     buttons:(NSArray *)buttonTitles
                  showInView:(UIView *)view
                   onDismiss:(DismissBlock)dismissed
                    onCancel:(CancelBlock)cancelled;


+ (void)photoPickerWithTitle:(NSString *)title
                  showInView:(UIView *)view
                   presentVC:(UIViewController *)presentView
               onPhotoPicked:(PhotoPickedBlock)photoPicked
                    onCancel:(CancelBlock)cancelled;

@end
