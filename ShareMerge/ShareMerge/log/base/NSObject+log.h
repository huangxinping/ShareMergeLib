/**
 *  NSObject+log.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-05-21.
 *
 *  输出类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "SM_BlocksProtocol.h"

@interface NSObject (log) <SMBlocksProtocol>

/**
 *  计算代码快运行时间
 *
 *  @param block        需要计算的块代码
 *  @param prefixString 前缀
 */
- (void)logTimeTakenToRunBlock:(VoidBlock)block withPrefix:(NSString *)prefixString;

@end
