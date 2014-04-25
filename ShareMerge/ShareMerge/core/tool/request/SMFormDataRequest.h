/**
 *  SMFormDataRequest
 *  ShareMerge
 *
 *  Created by huangxp on 13-8-7.
 *
 *  http请求 - POST
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import "SMHTTPRequest.h"

@interface SMFormDataRequest : SMHTTPRequest

/**
 *	@brief 增加post参数
 *
 *	@param value 值
 *	@param key 键
 *
 */
- (void)setPostValue:(id <NSObject> )value forKey:(NSString *)key;

/**
 *	@brief 增加文件post参数
 *
 *	@param filePath 文件路径
 *	@param key 键
 *
 */
- (void)setFile:(NSString *)filePath forKey:(NSString *)key;

/**
 *	@brief 增加文件post参数
 *
 *	@param filePath 文件路径
 *	@param fileName 文件名字
 *	@param contentType 内容类型
 *	@param key 键
 *
 */
- (void)setFile:(NSString *)filePath withFileName:(NSString *)fileName andContentType:(NSString *)contentType forKey:(NSString *)key;

/**
 *	@brief 增减数据post参数
 *
 *	@param data 数据
 *	@param key 键
 *
 */
- (void)setData:(NSData *)data forKey:(NSString *)key;

/**
 *	@brief 增加数据post参数
 *
 *	@param data 数据
 *	@param fileName 文件名称
 *	@param contentType 内容类型
 *	@param key 键
 *
 */
- (void)setData:(id)data withFileName:(NSString *)fileName andContentType:(NSString *)contentType forKey:(NSString *)key;

@end
