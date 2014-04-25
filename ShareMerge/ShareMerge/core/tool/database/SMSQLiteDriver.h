/**
 *  SMSQLiteDriver.h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-07-05.
 *
 *  SQLite驱动
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "SMSQLiteResult.h"

@interface SMSQLiteDriver : NSObject

/**
 *	@brief 实例
 *
 *	@param database 数据库文件名
 *
 *	@returns 实例
 */
- (id)initWithDatabase:(NSString *)database;

/**
 *	@brief 检测+创建数据库文件
 *
 *	@param database 数据库文件名
 *
 */
- (void)checkAndCreateDatabase:(NSString *)database;

/**
 *	@brief 执行语句
 *
 *	@param sql 语句
 *	@param bind 条件绑定
 *
 *	@returns 结果
 */
- (SMSQLiteResult *)querySql:(NSString *)sql bind:(NSArray *)bind;

/**
 *	@brief 开启事务
 *
 *
 *	@returns 是否开启成功
 */
- (BOOL)beginTransaction;

/**
 *	@brief 提交事务
 *
 *
 *	@returns 事务提交成功
 */
- (BOOL)commitTransaction;

/**
 *	@brief 回滚事务
 *
 *
 *	@returns 是否回滚成功
 */
- (BOOL)rollbackTransaction;

/**
 *	@brief 保存改变（从最近连接开始）
 *
 *
 *	@returns 改变的行数统计
 */
- (int)changesSinceLastOperation;

/**
 *	@brief 保存改变（从开始连接开始）
 *
 *
 *	@returns 改变的行数统计
 */
- (int)totalChangesSinceConnection;
@end
