/**
 *  NSDictionary+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-12-29.
 *
 *  扩展NSDictionary
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSDictionary (help)

/** 是否字典为空 */
@property (nonatomic, readonly, getter = isEmpty) BOOL empty;

/**
 *	@brief 将数组转换成序列化的字符串
 *
 *
 *	@returns JSON格式的字符串
 */
- (NSString *)JSONObject;

/**
 *  @brief  判断是否有关键字
 *
 *  @param  searchKey   关键字
 *
 *  @return             是否存在
 */
- (BOOL)hasKey:(id)searchKey;

/**
 *  @brief  提取某个索引上的关键字
 *
 *  @param  index   索引
 *
 *  @return             如果字典不为空并index小于字典数量则返回索引上的关键字，否则返回nil
 */
- (id)keyForIndex:(NSInteger)index;

/**
 *  @brief  提取某个索引上的值
 *
 *  @param  index   索引
 *
 *  @return             如果字典不为空并index小于字典数量则返回索引上的值，否则返回nil
 */
- (id)valueForIndex:(NSInteger)index;

/**
 *  @brief  将某个key对应的value转换成BOOL返回
 *
 *  @param  key   关键字
 *
 *  @return             value的BOOL表示
 */
- (BOOL)boolForKey:(NSString *)key;

/**
 *  @brief  将某个key对应的value转换成unsigned int返回
 *
 *  @param  key   关键字
 *
 *  @return             value的unsigned int表示
 */
- (NSInteger)integerForKey:(NSString *)key;

/**
 *  @brief  将某个key对应的value转换成float返回
 *
 *  @param  key   关键字
 *
 *  @return             value的float表示
 */
- (CGFloat)floatForKey:(NSString *)key;

@end
