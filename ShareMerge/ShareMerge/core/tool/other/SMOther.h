/**
 *  SMOther.h
 *  ShareMerge
 *
 *  Created by huangxp on 13-7-23.
 *
 *  不常用函数
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface SMOther : NSObject

/**
 *  @brief  根据中文得到拼音，如果是多音字，会得到多个拼音,后面是声调
 *
 *  @return     拼音数组
 */
+ (NSArray *)makePinYin:(unichar)chchr;

/**
 *  @brief  根据中文得到拼音，如果是多音字，会得到多个拼音（不带声调）
 *
 *  @return     拼音数组
 */
+ (NSArray *)makePinYin2:(unichar)chchr;

/**
 *  @brief  得到中文拼音的第一个字母（例如 新：x）
 *
 *  @return     首字母
 */
+ (char)pinyinFirstLetter:(unichar)chchr;

@end
