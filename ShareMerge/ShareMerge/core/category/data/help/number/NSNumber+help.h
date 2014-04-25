/**
 *  NSNumber+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 12-2-28.
 *
 *  扩展NSNumber
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSNumber (help)

/**
 *  @brief  能提供otherNumber为nil时，比较结果 - 实际为调用下述函数（系统的函数比较不成立）
 *
 *  @param  otherNumber     被比较数
 *
 *  @return                 比较结果
 *
 */
- (NSComparisonResult)localizedStandardCompare:(NSNumber *)otherNumber;

/**
 *  @brief  能提供otherNumber为nil时，比较结果（系统的函数比较不成立）
 *
 *  @param  otherNumber     被比较数
 *
 *  @return                 比较结果
 *
 */
- (NSComparisonResult)compareMaybeNill:(NSNumber *)otherNumber;

@end
