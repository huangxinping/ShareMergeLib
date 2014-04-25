/**
 *  NSDictionary+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-6-03.
 *
 *  扩展NSDictionary为block方式访问
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "ShareMergeMacros.h"

#if HAS_BLOCK

typedef void (^SMKeyValueCallback)(id key, id object);

@interface NSDictionary (block)

/**
 *  @brief  遍历字典元素
 *
 *  @param  block   回调block
 */
- (void)each:(SMKeyValueCallback)block;

@end

#endif
