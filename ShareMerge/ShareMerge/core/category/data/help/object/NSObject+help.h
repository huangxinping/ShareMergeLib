/**
 *  NSObject+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-6-23.
 *
 *  扩展NSObject
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

typedef void (^BasicBlock)(void);

@interface NSObject (help)

/**
 *  @brief  扩展performSelector可以接收3个参数
 *
 *  @param  object1      参数1
 *  @param  object2      参数2
 *  @param  object3      参数3
 *
 *  @return                 失败返回nil，成功返回值
 *
 */
- (id)performSelector:(SEL)selector withObject:(id)object1 withObject:(id)object2 withObject:(id)object3;

/**
 *  @brief  扩展performSelectorOnMainThread可以接收任意个参数
 *
 *  @param  object1,...      参数列表
 *
 *  @return                 失败返回nil，成功返回值
 *
 */
- (void)performSelectorOnMainThread:(SEL)selector withObjects:(id)object1, ...;

/**
 *  @brief  扩展performSelectorOnMainThread可以接收数组大小个参数
 *
 *  @param  objects      参数数组
 *
 *  @return                 失败返回nil，成功返回值
 *
 */
- (void)performSelectorOnMainThread:(SEL)selector withObjectArray:(NSArray *)objects;

/**
 *  @brief  获取类名
 *
 *  @return                类名
 *
 */
- (NSString *)className;

/**
 *  @brief  获取该类属性列表
 *
 *  @return                属性列表字典
 *
 */
- (NSDictionary *)propertiesDictionary;

/**
 *  @brief  检测是否属于参数列表中的一个
 *
 *  @param  worker      工作块
 *  @param  callback    回调块
 *
 *  @return                 比较结果
 *
 */
- (BOOL)isEqualToAnyOf:objects, ...;

/**
 *  @brief  检测是否不属于某类
 *
 *  @param  aClass      被检测类
 *
 *  @return                 比较结果
 *
 */
- (BOOL)isNotKindOfClass:(Class)aClass;

/**
 *  @brief  检测是否不属于某类并且不为nil
 *
 *  @param  aClass      被检测类
 *
 *  @return                 比较结果
 *
 */
- (BOOL)isNotNilAndOfType:(Class)aClass;

/**
 *  @brief  检测是否不属于某类或者为nil
 *
 *  @param  aClass      被检测类
 *
 *  @return                 比较结果
 *
 */
- (BOOL)isNilOrNotOfType:(Class)aClass;

@end
