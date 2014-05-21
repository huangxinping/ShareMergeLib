/**
 *  UIControl+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  扩展UIControl
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSData (help)

/** 判断是否为空 */
@property (nonatomic, readonly, getter = isEmpty) BOOL empty;

/**
 *  @brief  转换成字串
 *
 *  @return 转换后的字符串
 */
- (NSString *)stringValue;

/**
 *  @brief  转换数据为16进制方式
 *
 *  @return         16进制显示的NSData
 */
- (NSString *)hexDump;

/**
 *  @brief  将数据CRC32加密
 *
 *  @return 加密后的字符串
 */
- (NSString *)crc32;

/**
 *  @brief  将数据MD5加密
 *
 *  @return 加密后的字符串
 */
- (NSString *)md5;

/**
 *  @brief  将数据aes加密
 *
 *  @param  key     键值
 *  @param  iv
 *
 *  @return         aes加密后的NSData
 */
- (NSData *)aesEncryptWithKey:(NSString *)key initialVector:(NSString *)iv;

/**
 *  @brief  将数据aes解密
 *
 *  @param  key     键值
 *  @param  iv
 *
 *  @return         aes解密后的NSData
 */
- (NSData *)aesDecryptWithKey:(NSString *)key initialVector:(NSString *)iv;

/**
 *  GB18030转码
 *
 *  @return GB18030编码字符串
 */
- (NSString *)GB18030String;

@end
