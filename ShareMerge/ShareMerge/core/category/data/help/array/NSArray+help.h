/*
 *  NSArray+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  扩展NSArray
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

@interface NSArray (help)

/** 判断数组是否为空 */
@property (nonatomic, readonly, getter = isEmpty) BOOL empty;

/**
 *	@brief 将数组转换成序列化的字符串
 *
 *
 *	@returns JSON格式的字符串
 */
- (NSString *)JSONObject;

/**
 *	@brief 返回第一个元素
 *
 *
 *	@returns 第一个元素
 */
- (id)frontObject;

/**
 *	@brief 返回最后一个元素
 *
 *
 *	@returns 最后一个元素
 */
- (id)backObject;

/**
 *	@brief 将所有元素反序
 *
 *
 *	@returns 反序列成功的数组
 */
- (NSArray *)reverseArray;

@end
