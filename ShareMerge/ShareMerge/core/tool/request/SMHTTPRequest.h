/**
 *  SMHTTPRequest
 *  ShareMerge
 *
 *  Created by huangxp on 13-8-7.
 *
 *  http请求 - GET
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "ShareMergeMacros.h"
#import "SMHTTPRequestDelegate.h"

typedef enum SMHTTPRequestTimeouts
{
    kSMHTTPRequestDefaultTimeout = 30
} SMHTTPRequestTimeouts;

#if HAS_BLOCK
typedef void (^SMBasicBlock)(void);
#endif

@interface SMHTTPRequest : NSObject
{
#if HAS_BLOCK
    SMBasicBlock _completionBlock;
    SMBasicBlock _failedBlock;
#endif
}

@property (nonatomic, SM_PROPERTY_ASSIGN) id <SMHTTPRequest> delegate;
@property (nonatomic, assign) int tag;
@property (nonatomic, SM_PROPERTY_RETAIN) NSURL *url;
@property (nonatomic, assign) int responseStatusCode;
@property (nonatomic, SM_PROPERTY_RETAIN) NSError *error;
@property (nonatomic, assign) NSTimeInterval timeOutSeconds;
@property (nonatomic, SM_PROPERTY_RETAIN) NSData *responseData;
@property (nonatomic, SM_PROPERTY_COPY) NSString *responseString;
@property (nonatomic, assign, getter = isUseCache) BOOL useCache;

/**
 *	@brief 计算缓存文件大小（本地磁盘上）
 *
 *
 *	@returns 缓存大小
 */
+ (unsigned long long)calculateSizeCached;

/**
 *	@brief 清理储存的
 *
 *
 */
+ (void)clearCached;

/**
 *	@brief 创建request
 *
 *	@param url 请求地址
 *
 *	@returns 对象
 */
+ (id)requestWithURL:(NSURL *)url;

/**
 *	@brief 创建request
 *
 *	@param urlBuffer 请求地址
 *
 *	@returns 对象
 */
+ (id)requestWithURLBuffer:(NSString *)urlBuffer;

/**
 *	@brief 初始化从url
 *
 *	@param url 网址
 *
 *	@returns 对象
 */
- (id)initWithURL:(NSURL *)url;

#if HAS_BLOCK
/**
 *	@brief 设置完成回调block
 *
 *	@param aCompletionBlock 完成block
 *
 */
- (void)setCompletionBlock:(SMBasicBlock)aCompletionBlock;

/**
 *	@brief 设置失败回调block
 *
 *	@param aFailedBlock 失败block
 *
 */
- (void)setFailedBlock:(SMBasicBlock)aFailedBlock;
#endif

/**
 *	@brief 开始同步请求
 *
 *
 */
- (void)startSynchronous;

/**
 *	@brief 开始异步请求
 *
 *
 */
- (void)startAsynchronous;

/**
 *	@brief 清理委托及取消请求
 *
 *
 */
- (void)clearDelegatesAndCancel;

@end 
