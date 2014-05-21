/**
 *  UIPickerView+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-05-21.
 *
 *  PickerView类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "SM_BlocksProtocol.h"

@interface UIPickerView (block) <UIPickerViewDataSource, UIPickerViewDelegate, SMBlocksProtocol>

/**
 *  显示pickerView
 *
 *  @param content        内容
 *  @param view           承载视图
 *  @param rowPickedBlock 选择block
 *
 *  @return 实例
 */
+ (UIPickerView *)pickerViewWithContent:(NSArray *)content
                             showInView:(UIView *)view
                        onShouldDismiss:(RowPickedBlock)rowPickedBlock;

@end
