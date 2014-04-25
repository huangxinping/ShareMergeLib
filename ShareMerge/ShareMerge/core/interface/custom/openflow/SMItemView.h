/**
 *  SMItemView.h
 *  ShareGlobal
 *
 *  Created by huangxp on 12-12-17.
 *
 *  子视图（借鉴AFOpenFlowView）
 *
 *  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
 */

/** @file */	// Doxygen marker

#import <UIKit/UIKit.h>

#ifndef COVER_SPACING
    #define COVER_SPACING 50
#endif

#ifndef CENTER_COVER_OFFSET
    #define CENTER_COVER_OFFSET 100
#endif

#ifndef SIDE_COVER_ANGLE
    #define SIDE_COVER_ANGLE 1.4
#endif

#ifndef SIDE_COVER_ZPOSITION
    #define SIDE_COVER_ZPOSITION -150
#endif

@interface SMItemView : UIView {}

/** 索引 */
@property(nonatomic,assign)int number;

/** 间隔 */
@property(nonatomic,assign)CGFloat coverSpacing;

/** 水平位置 */
@property(nonatomic,readonly)CGFloat horizontalPosition;

/** 垂直位置 */
@property(nonatomic,readonly)CGFloat verticalPosition;

/** 图像视图 */
@property(nonatomic,readonly)UIImageView *imageView;

/**
 *  @brief  初始化
 *
 *  @param  frame 矩形
 *  @param  cs    间隔
 *
 *  @return       对象
 *
 */
- (id)initWithFrame:(CGRect)frame coverSpacing:(CGFloat)cs;

/**
 *  @brief  设置图像
 *
 *  @param  newImage            新图像
 *  @param  imageHeight         初始图像高度
 *  @param  reflectionFraction  反射倒影比率
 *
 *
 */
- (void)setImage:(UIImage *)newImage originalImageHeight:(CGFloat)imageHeight reflectionFraction:(CGFloat)reflectionFraction;

@end