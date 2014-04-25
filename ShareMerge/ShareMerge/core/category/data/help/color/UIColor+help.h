/**
 *  UIColor+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  扩展UIColor，color值必须是RGB模式
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/** 颜色值在0-255之间 */
extern UIColor * UIColorMakeRGBA(CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);
extern UIColor * UIColorMakeRGB(CGFloat red, CGFloat green, CGFloat blue);

@interface UIColor (help)

/** 返回当前UIColor的颜色模式 */
@property (nonatomic, readonly) CGColorSpaceModel colorSpaceModel;

/** 返回当前UIColor的red值 */
@property (nonatomic, readonly) CGFloat red;

/** 返回当前UIColor的green值 */
@property (nonatomic, readonly) CGFloat green;

/** 返回当前UIColor的blue值 */
@property (nonatomic, readonly) CGFloat blue;

/** 返回当前UIColor的alpha值 */
@property (nonatomic, readonly) CGFloat alpha;

/** 返回当前UIColor的16进制值 */
@property (nonatomic, readonly) UInt32 rgbHex;

/**
 *  @brief  创建UIColor从颜色字符串，串格式为"255,234,23"
 *
 *  @param  colorString  颜色字符串（不包含alpha值）
 *
 *  @return             UIColor对象
 */
+ (UIColor *)colorWithRGB:(NSString *)colorString;

/**
 *  @brief  创建UIColor从颜色字符串，串格式为"255,234,23"
 *
 *  @param  colorString  颜色字符串（包含alpha值）
 *
 *  @return             UIColor对象
 */
+ (UIColor *)colorWithRGBA:(NSString *)colorString;

/**
 *  @brief  创建UIColor从16进制值
 *
 *  @param  hexValue  16禁止颜色值（不包含alpha值）
 *
 *  @return             UIColor对象
 */
+ (UIColor *)colorWithHex:(unsigned int)hexValue;

/**
 *  @brief  创建UIColor从16进制值
 *
 *  @param  hexValue  16禁止颜色值（包含alpha值）
 *
 *  @return             UIColor对象
 */
+ (UIColor *)colorWithHex:(unsigned int)hexValue alpha:(CGFloat)alpha;

/**
 *  @brief  随机产生一个颜色值的UIColor
 *
 *  @return             UIColor对象
 */
+ (UIColor *)randomColor;

@end
