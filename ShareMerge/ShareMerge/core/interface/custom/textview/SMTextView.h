/**
 *  SMTextView.h
 *  ShareMerge
 *
 *  Created by huangxp on 12-1-10.
 *
 *  扩展textview，使其支持placeholder
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */	// Doxygen marker

#import <UIKit/UIKit.h>

@interface SMTextView : UITextView
{
    NSString *_placeholderText;
    UIColor *_placeholderColor;
    UILabel *_placeholder;
}

/** placeholder文字信息 */
@property(nonatomic,copy)NSString *placeholderText;

/** placeholder文字颜色 */
@property(nonatomic,retain)UIColor *placeholderColor;

/**
 *  @brief  设置光标到结尾
 *
 */
- (void)setCursorToEnd;

@end