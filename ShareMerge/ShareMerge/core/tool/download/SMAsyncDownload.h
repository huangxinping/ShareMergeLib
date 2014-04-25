/**
 *  SMAsyncDownload.h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-07-31
 *
 *  异步下载，使用GCD
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"

typedef void (^completeBlock)(NSData *data, NSString *url, NSURLResponse *response);
typedef void (^errorBlock)(NSError *error);
typedef void (^progressBlock)(CGFloat progress);
typedef void (^modifyRequestBlock)(NSMutableURLRequest *request);

@interface SMAsyncDownload : NSURLConnection

@property (nonatomic, SM_PROPERTY_COPY) NSString *requestURL;
@property (nonatomic, readonly, getter = isPaused) BOOL pauseOperation;

/**
 *	@brief 下载请求
 *
 *	@param requestUrl 下载地址
 *	@param completeBlock 完成block
 *	@param errorBlock 错误block
 *
 *	@returns 对象
 */
+ (id)request:(NSString *)requestURL completeBlock:(completeBlock)completeBlock errorBlock:(errorBlock)errorBlock;

/**
 *	@brief 下载请求
 *
 *	@param requestUrl 下载地址
 *	@param modifyRequestBlock 修改请求block
 *	@param completeBlock 完成block
 *	@param errorBlock 错误block
 *
 *	@returns 对象
 */
+ (id)request:(NSString *)requestURL modifyRequest:(modifyRequestBlock)modifyRequestBlock completeBlock:(completeBlock)completeBlock errorBlock:(errorBlock)errorBlock;

/**
 *	@brief 下载请求
 *
 *	@param requestUrl 下载地址
 *	@param completeBlock 完成block
 *	@param errorBlock 错误block
 *	@param progressBlock 进度block
 *
 *	@returns 对象
 */
+ (id)request:(NSString *)requestURL completeBlock:(completeBlock)completeBlock errorBlock:(errorBlock)errorBlock progress:(progressBlock)progressBlock;

/**
 *	@brief 下载请求
 *
 *	@param requestUrl 下载地址
 *	@param modifyRequestBlock 修改请求block
 *	@param completeBlock 完成block
 *	@param errorBlock 错误block
 *	@param progressBlock 进度block
 *
 *	@returns 对象
 */
+ (id)request:(NSString *)requestURL modifyRequest:(modifyRequestBlock)modifyRequestBlock completeBlock:(completeBlock)completeBlock errorBlock:(errorBlock)errorBlock progress:(progressBlock)progressBlock;

/**
 *	@brief 下载请求
 *
 *	@param requestUrl 下载地址
 *	@param modifyRequestBlock 修改请求block
 *	@param completeBlock 完成block
 *	@param errorBlock 错误block
 *	@param progressBlock 进度block
 *
 *	@returns 对象
 */
- (id)initWithRequest:(NSString *)requestURL modifyRequest:(modifyRequestBlock)modifyRequestBlock completeBlock:(completeBlock)completeBlock errorBlock:(errorBlock)errorBlock progress:(progressBlock)progressBlock;

/**
 *	@brief 暂停
 *
 *
 */
- (void)pause;

/**
 *	@brief 恢复
 *
 *
 */
- (void)resume;

@end
