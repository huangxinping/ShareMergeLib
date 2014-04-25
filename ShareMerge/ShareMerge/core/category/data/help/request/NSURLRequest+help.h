/**
 *  NSURLRequest+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-6-23.
 *
 *  扩展NSURLRequest
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSURLRequest (help)

/** cachePolicy */
@property (nonatomic, readonly) NSURLRequestCachePolicy cachePolicy;

/** 字串body */
@property (nonatomic, readonly) NSString *httpBody;

/** method */
@property (nonatomic, readonly) NSString *httpMethod;

/** 是否使用cookies */
@property (nonatomic, readonly) BOOL shouldHandleCookies;

/** mainDocumentURL */
@property (nonatomic, readonly) NSURL *mainDocumentURL;

/** url */
@property (nonatomic, readonly) NSURL *url;

/** 超时 */
@property (nonatomic, readonly) NSTimeInterval timeoutInterval;

/**
 *  @brief  快速得到request
 *
 *  @param  urlString      request地址
 *
 *  @return                对象
 *
 */
+ (id)requestWithURLString:(NSString *)urlString;

@end
