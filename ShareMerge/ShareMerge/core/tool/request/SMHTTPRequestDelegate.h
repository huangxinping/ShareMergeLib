/**
 *  SMHTTPRequestDelegate
 *  ShareMerge
 *
 *  Created by huangxp on 13-8-7.
 *
 *  请求委托
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#ifndef ShareMerge_SMHTTPRequestDelegate_h
#define ShareMerge_SMHTTPRequestDelegate_h

@class SMHTTPRequest;
@protocol SMHTTPRequestDelegate <NSObject>
@optional
/**
 *	@brief 请求开始
 *
 *	@param request 请求对象
 *
 */
- (void)requestStarted:(SMHTTPRequest *)request;

/**
 *	@brief 收到response
 *
 *	@param request 请求对象
 *	@param responseHeaders 响应头
 *
 */
- (void)request:(SMHTTPRequest *)request didReceiveResponseHeaders:(NSDictionary *)responseHeaders;

/**
 *	@brief 请求成功
 *
 *	@param request 请求对象
 *
 */
- (void)requestFinished:(SMHTTPRequest *)request;

/**
 *	@brief 请求失败
 *
 *	@param request 请求对象
 *
 */
- (void)requestFailed:(SMHTTPRequest *)request;

@end

#endif
