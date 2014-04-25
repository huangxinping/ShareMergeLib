/**
 *  SMURLCache,h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-08-01.
 *
 *  url缓存
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "ShareMergeMacros.h"

@interface SMURLCache : NSURLCache

/**
 *	@brief 最小的缓存时间
 *
 *
 */
@property (nonatomic, assign) NSTimeInterval minCacheInterval;

/**
 *	@brief 不提取内存特征
 *
 *
 */
@property (nonatomic, assign) BOOL ignoreMemoryOnlyStoragePolicy;

/**
 *	@brief 默认的图片缓存路径
 *
 *
 *	@returns 路径
 */
+ (NSString *)defaultImageCachePath;

/**
 *	@brief 默认的request缓存路径
 *
 *
 *	@returns 路径
 */
+ (NSString *)defaultRequestCachePath;

/**
 *	@brief 是否缓存过
 *
 *	@param url 网址
 *
 *	@returns 缓存情况
 */
- (BOOL)isCached:(NSURL *)url;

@end
