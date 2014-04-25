//
//  SMSQLiteRow.h
//  ShareMerge
//
//  Created by huangxp on 13-7-24.
//  Copyright (c) 2013年 hxp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMSQLiteParameter.h"

@interface SMSQLiteRow : NSObject

@property (nonatomic, readonly) NSMutableArray *rows;

/**
 *	@brief 列大小
 *
 *
 *	@returns 大小
 */
- (NSUInteger)columnCount;

/**
 *	@brief 所有列名称集合
 *
 *
 *	@returns 名称集合
 */
- (NSArray *)columnNames;

/**
 *	@brief 列值
 *
 *	@param index 列索引
 *
 *	@returns 值
 */
- (SMSQLiteParameter *)columnAtIndex:(NSUInteger)index;

/**
 *	@brief 列值
 *
 *	@param name 名称
 *
 *	@returns 值
 */
- (SMSQLiteParameter *)columnWithName:(NSString *)name;

@end
