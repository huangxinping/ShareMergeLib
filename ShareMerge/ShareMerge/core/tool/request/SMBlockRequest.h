/**
 *  SMBlockRequest.h
 *  ShareMerge
 *
 *  Created by huangxp on 13-4-15.
 *
 *  HTTP请求，使用block（如果客户端不支持block则不能在请求失败后，自动弹出重试）
 *
 *  Copyright (c) 2013年 www.sharemerge.com. All rights reserved.
 */

/** @file */	// Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIkit.h>
#import "ShareInstance.h"

typedef NS_ENUM(NSInteger, SMRequestType) {
    REQUEST_GET,
    REQUEST_POST,
};
 
/**
 *	@brief block返回加载activity视图
 *
 *	@returns 加载activity的视图
 */
typedef UIView* (^StartRequestBlock)();

/**
 *	@brief 停止block （分三种情况：1、正常返回字符串 2、nil为statusCode!=200 3、请求错误，则返回NSError）
 *
 */
typedef void (^StopRequestBlock)(id object);

/**
 *	@brief 参数block，可传nil
 *
 *	@returns 参数字典（使用key-value的方式注入）
 */
typedef NSDictionary* (^ParametersBlock)();

/**
 *	@brief 取消重试请求
 *
 */
typedef void (^CancelRetryRequest)();


@interface SMBlockRequest : NSObject

SINGLETON_FOR_HEADER(SMBlockRequest)

/**
 *	@brief 创建block类型的request
 *
 *	@param type HTTP请求类型
 *	@param url 请求地址
 *	@param useCache 是否使用缓存
 *	@param timeOut 超时
 *	@param activityText 菊花文字（如果为nil，则使用默认显示文字）
 *	@param activityOpenCancel 菊花是否能取消
 *	@param activityOpenMask 菊花是否有掩码视图
 *	@param parametersBlock 参数block
 *	@param startBlock 开始block
 *	@param stopBlock 停止block
 *	@param cancelRetryRequest 取消重试block
 *
 */
- (void)makeRequest:(SMRequestType)type url:(NSURL*)url useCache:(BOOL)useCache timeOut:(NSUInteger)timeOut activityText:(NSString*)activityText activityOpenCancel:(BOOL)activityOpenCancel activityOpenMask:(BOOL)activityOpenMask parametersBlock:(ParametersBlock)parametersBlock startBlock:(StartRequestBlock)startBlock stopBlock:(StopRequestBlock)stopBlock cancelRetryBlock:(CancelRetryRequest)cancelRetryRequest;

/**
 *	@brief 创建block类型的request
 *
 *	@param type HTTP请求类型
 *	@param urlBuffer 请求地址缓存
 *	@param useCache 是否使用缓存
 *	@param timeOut 超时
 *	@param activityText 菊花文字（如果为nil，则使用默认显示文字）
 *	@param activityOpenCancel 菊花是否能取消
 *	@param activityOpenMask 菊花是否有掩码视图
 *	@param parametersBlock 参数block
 *	@param customHeaderBlock 自定义的请求头参数block
 *	@param startBlock 开始block
 *	@param stopBlock 停止block
 *	@param cancelRetryRequest 取消重试block
 *
 */
- (void)makeRequest:(SMRequestType)type urlBuffer:(NSString*)urlBuffer useCache:(BOOL)useCache timeOut:(NSUInteger)timeOut activityText:(NSString*)activityText activityOpenCancel:(BOOL)activityOpenCancel  activityOpenMask:(BOOL)activityOpenMask parametersBlock:(ParametersBlock)parametersBlock startBlock:(StartRequestBlock)startBlock stopBlock:(StopRequestBlock)stopBlock cancelRetryBlock:(CancelRetryRequest)cancelRetryRequest;


#pragma mark - 使用默认的activity样式

/**
 *	@brief 创建block类型的request
 *
 *	@param type HTTP请求类型
 *	@param url 请求地址
 *	@param useCache 是否使用缓存
 *	@param timeOut 超时
 *	@param parametersBlock 参数block
 *	@param startBlock 开始block
 *	@param stopBlock 停止block
 *	@param cancelRetryRequest 取消重试block
 *
 */
- (void)makeRequest:(SMRequestType)type url:(NSURL*)url useCache:(BOOL)useCache timeOut:(NSUInteger)timeOut parametersBlock:(ParametersBlock)parametersBlock startBlock:(StartRequestBlock)startBlock stopBlock:(StopRequestBlock)stopBlock cancelRetryBlock:(CancelRetryRequest)cancelRetryRequest;

/**
 *	@brief 创建block类型的request
 *
 *	@param type HTTP请求类型
 *	@param urlBuffer 请求地址缓存
 *	@param useCache 是否使用缓存
 *	@param timeOut 超时
 *	@param activityText 菊花文字（如果为nil，则使用默认显示文字）
 *	@param activityOpenCancel 菊花是否能取消
 *	@param parametersBlock 参数block
 *	@param customHeaderBlock 自定义的请求头参数block
 *	@param startBlock 开始block
 *	@param stopBlock 停止block
 *	@param cancelRetryRequest 取消重试block
 *
 */
- (void)makeRequest:(SMRequestType)type urlBuffer:(NSString*)urlBuffer useCache:(BOOL)useCache timeOut:(NSUInteger)timeOut parametersBlock:(ParametersBlock)parametersBlock startBlock:(StartRequestBlock)startBlock stopBlock:(StopRequestBlock)stopBlock cancelRetryBlock:(CancelRetryRequest)cancelRetryRequest;

@end 

#define SMBlockRequestInstance [SMBlockRequest sharedInstance]
