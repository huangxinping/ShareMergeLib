/**
 *  NSString+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-10-10.
 *
 *  扩展NSString（所有的转换均使用utf-8编码格式，其他格式请通知huangxp）
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIkit.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonHMAC.h>

@interface NSString (help)

/**
 *	@brief 从JSON字符串，返回Object-C类
 *
 *
 *	@returns Object-C类
 */
- (id)JSONValue;

/**
 *  @brief  转换成c字符buffer
 *
 *  @return                c字符buffer
 *
 */
- (const char *)cstring;

/**
 *  @brief  是否为空
 *
 *  @return                是否
 *
 */
- (BOOL)isEmpty;

/**
 *  @brief  移除所有空格和换行符
 *
 *  @return                结果
 *
 */
- (NSString *)removeWhitespaceAndNewline;

/**
 *  @brief  比较是否匹配，忽略大小写
 *
 *  @return                匹配结果
 *
 */
- (NSComparisonResult)compareCaseInsensitive:(NSString *)other;

/**
 *  @brief  是否不包含
 *
 *  @return                是否
 *
 */
- (BOOL)notEqualToString:(NSString *)string;

/**
 *  @brief  是否包含
 *
 *  @return                是否
 *
 */
- (BOOL)containsString:(NSString *)string;

/**
 *  @brief  是否包含空格
 *
 *  @return                是否
 *
 */
- (BOOL)containsSpace;

/**
 *  @brief  是否为空或包含空格
 *
 *  @return                是否
 *
 */
- (BOOL)isEmptyOrContainsSpace;

/**
 *  @brief  hmac加密
 *
 *  @param type            加密方式（例如：sha1、md5、sha256等等）
 *  @param secret          加密串
 *
 *  @return                加密串
 *
 */
- (NSString *)hmacAlgorithm:(CCHmacAlgorithm)type secret:(NSString *)secret;

/**
 *  @brief  sha1加密
 *
 *  @return                加密串
 *
 */
- (NSString *)sha1;

/**
 *  @brief  md5加密
 *
 *  @return                加密串
 *
 */
- (NSString *)md5;

/**
 *	@brief base64编码
 *
 *
 *	@returns 加密串
 */
- (NSString *)base64EncodedString;

/**
 *	@brief base64解码
 *
 *
 *	@returns 解密串
 */
- (NSString *)base64DecodedString;

/**
 *  @brief  url编码
 *
 *  @return                编码串
 *
 */
- (NSString *)urlEncodedString;

/**
 *  @brief  url解码
 *
 *  @return                解码串
 *
 */
- (NSString *)urlDecodedString;

/**
 *  @brief  自定义的安全加密
 *
 *  @return                加密串
 *
 */
- (NSString *)secureEncode;

/**
 *  @brief  自定义的安全解密
 *
 *  @return                解密串
 *
 */
- (NSString *)secureDecode;

/**
 *  @brief  判断是否是纯数字
 *
 *  @return                是否是
 *
 */
- (BOOL)isPureNumber;

/**
 *  @brief  判断是否是纯数字整型
 *
 *  @return                是否是
 *
 */
- (BOOL)isPureInt;

/**
 *  @brief  判断是否是纯数字浮点型
 *
 *  @return                是否是
 *
 */
- (BOOL)isPureFloat;

/**
 *	@brief 是否是邮箱
 *
 *
 *	@returns 是否是
 */
- (BOOL)isEmail;

/**
 *  @brief  16进制
 *
 *  @return                16进制
 *
 */
- (NSInteger)hexValue;

/**
 *  @brief  转换成无符号整型
 *
 *  @return                结果
 *
 */
- (unsigned int)unsignedIntValue;

/**
 *  @brief  转换成无符号long long
 *
 *  @return                结果
 *
 */
- (unsigned long long)unsignedLongLongValue;

/**
 *  计算文本高度
 *
 *  @param font          字体
 *  @param maxSize       最大尺寸
 *  @param linebreakMode 换行标识
 *
 *  @return 尺寸
 */
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize andLinebreakMode:(NSLineBreakMode)linebreakMode;
@end
