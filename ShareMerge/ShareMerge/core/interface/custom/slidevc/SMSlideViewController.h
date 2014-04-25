/**
 *  SMSlideViewController.h
 *  ShareMerge
 *
 *  Created by huangxp on 13-08-23.
 *
 *  滑动管理视图控制器
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"

@interface SMSlideViewController : UIViewController<UIScrollViewDelegate>

@property (nonatomic, SM_PROPERTY_RETAIN) NSMutableArray *viewControllers;
@property (nonatomic, readonly) NSUInteger selectedIndex;
@property (nonatomic, assign) CGFloat scaleFactor;

- (id)init;
- (void)nextViewController;
- (void)prevViewController;

@end

@interface UIViewController (SMSlideViewController)

@property (nonatomic, readonly, SM_PROPERTY_RETAIN) SMSlideViewController *slideViewController;

@end
