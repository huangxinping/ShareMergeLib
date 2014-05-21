/**
 *  SMImageScrollView.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-03-26.
 *
 *  支持放大缩小的图像视图
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface SMImageScrollView : UIView

/**
 *  图像
 */
@property (nonatomic, strong) UIImage *image;

/**
 *  最小缩放
 */
@property (nonatomic, assign) CGFloat minimumZoomScale;

/**
 *  最大缩放
 */
@property (nonatomic, assign) CGFloat maximumZoomScale;

/**
 *  触控block
 */
@property (nonatomic, copy) void (^ touchedHandle)(SMImageScrollView *zoomImageView);

@end
