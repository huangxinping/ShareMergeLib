/**
 *  SMSQLiteResult.h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-07-05.
 *
 *  SQLite结果集
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "ShareMergeMacros.h"
#import "SMSQLiteRow.h"

@interface SMSQLiteResult : NSObject

/**
 *	@brief 结果码
 *
 *
 */
@property (nonatomic, assign) NSInteger code;

/**
 *	@brief 结果信息
 *
 *
 */
@property (nonatomic, SM_PROPERTY_COPY) NSString *message;

/**
 *	@brief 结果数据
 *
 *
 */
@property (nonatomic, readonly) NSMutableArray *data;

/**
 *	@brief 行大小
 *
 *
 *	@returns 大小
 */
- (NSUInteger)rowCount;

/**
 *	@brief 行索引上的结果
 *
 *	@param index 行索引
 *
 *	@returns 结果
 */
- (SMSQLiteRow *)rowAtIndex:(NSUInteger)index;

/**
 *	@brief 行索引+列索引上的值
 *
 *	@param rowIndex 行索引
 *	@param columnIndex 列索引
 *
 *	@returns 结果
 */
- (SMSQLiteParameter *)valueAtRow:(NSUInteger)rowIndex column:(NSUInteger)columnIndex;

/**
 *	@brief 行索引+列名称上的值
 *
 *	@param rowIndex 行索引
 *	@param columnName 列名
 *
 *	@returns 结果
 */
- (SMSQLiteParameter *)valueAtRow:(NSUInteger)rowIndex columnName:(NSString *)columnName;

@end
