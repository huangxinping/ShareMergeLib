/**
 *  UIFont+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-12-29.
 *
 *  扩展UIFont
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

@interface UIFont (help)

/** ctfont属性 */
@property (nonatomic, readonly) CTFontRef CTFont;

/**
 *  @brief  从ctfont转换成UIFont
 *
 *  @param  CTFont   ctfont
 *
 *  @return         转换后的UIFont
 */
+ (UIFont *)fontWithCTFont:(CTFontRef)CTFont;

/**
 *  @brief  从ttf字体文件转换成ctfont（ttf文件必须位于resources path中）
 *
 *  @param  ttfName   ttf文件名（不包含.ttf后缀）
 *  @param  size   字体大小
 *
 *  @return         转换后的ctfont
 */
+ (CTFontRef)bundledFontNamed:(NSString *)ttfName size:(CGFloat)size;

/**
 *  @brief  从ttf字体文件转换成ctfont
 *
 *  @param  ttfPath   ttf文件全路径
 *  @param  size   字体大小
 *
 *  @return         转换后的ctfont
 */
+ (CTFontRef)bundledFontPath:(NSString *)ttfPath size:(CGFloat)size;

@end
