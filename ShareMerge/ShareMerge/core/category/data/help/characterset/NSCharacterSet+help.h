/**
 *  NSCharacterSet+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 09-6-03.
 *
 *  NSCharacterSet类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSCharacterSet (help)

/**
 *  @brief  日语字符集
 *
 *  @return             返回包含日语字符集
 */
+ (id)kanjiCharacterSet;

/**
 *  @brief  平假名字符集
 *
 *  @return             返回包含平假名字符集
 */
+ (id)hiraganaCharacterSet;

/**
 *  @brief  片假名字符集
 *
 *  @return             返回包含片假名字符集
 */
+ (id)katakanaCharacterSet;

@end
