/**
 *  SMMath
 *  ShareMerge
 *
 *  Created by huangxp on 13-7-23.
 *
 *  数学助手函数
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SMMath : NSObject

/**
 *  @brief  度数转弧度
 *
 *  @param degrees  需转换的度数
 *
 *  @return         转换后的弧度
 *
 */
+ (CGFloat)degreesToRadians:(CGFloat)degrees;

/**
 *  @brief  弧度转度数
 *
 *  @param radians  需转换的弧度
 *
 *  @return         转换后的度数
 *
 */
+ (CGFloat)radiansToDegrees:(CGFloat)radians;

/**
 *  @brief  计算两点间的距离
 *
 *  @param  first   第一点
 *  @param  second  第二点
 *
 *  @return         两点间的距离
 *
 */
+ (CGFloat)distanceBetweenPoints:(CGPoint)first second:(CGPoint)second;

/**
 *  @brief  计算两点间的夹角
 *
 *  @param  first   第一点
 *  @param  second  第二点
 *
 *  @return         两点间的夹角
 *
 */
+ (CGFloat)angleBetweenPoints:(CGPoint)first second:(CGPoint)second;

/**
 *  @brief  计算两条线段间的夹角
 *
 *  @param  line1Start      第一条线段的起点
 *  @param  line1End        第一条线段的终点
 *  @param  line2Start      第二条线段的起点
 *  @param  line2End        第二条线段的终点
 *
 *  @return         两点间的距离
 *
 */
+ (CGFloat)angleBetweenLines:(CGPoint)line1Start line1End:(CGPoint)line1End line2Start:(CGPoint)line2Start line2End:(CGPoint)line2End;

/**
 *  @brief uikit坐标系转换到quartz坐标系
 *
 *  @param point        需转换的位置
 *
 *  @param frameSize    对比框架尺寸（例如：iphone非retina则为320x640）
 *
 */
+ (CGPoint)uiToQuartz:(CGPoint)point frameSize:(CGSize)frameSize;

@end
