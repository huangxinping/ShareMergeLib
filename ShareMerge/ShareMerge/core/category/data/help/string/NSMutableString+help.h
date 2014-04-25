/**
 *  NSMutableString+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-27.
 *
 *  扩展NSMutableString
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSMutableString (help)

/**
 *  @brief  替换
 *
 *  @return                无
 *
 */
- (void)replaceOccurencesOfString:(NSString *)searchString withString:(NSString *)replacement;

@end
