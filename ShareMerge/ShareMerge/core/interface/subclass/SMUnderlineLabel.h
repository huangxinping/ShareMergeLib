/**
 *  SMUnderlineLabel
 *  ShareMerge
 *
 *  Created by huangxp on 2013-10-31.
 *
 *  下划线标签
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"

@interface SMUnderlineLabel : UILabel

@property (nonatomic, SM_PROPERTY_RETAIN) UIColor *underlineColor;
@property (nonatomic, assign) CGFloat underlineWidth;

@end
