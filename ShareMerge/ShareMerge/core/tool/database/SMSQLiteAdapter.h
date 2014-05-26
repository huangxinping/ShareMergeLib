/**
 *  SMSQLiteAdapter.h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-07-05.
 *
 *  SQLite适配器
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "SMSQLiteResult.h"

@interface SMSQLiteAdapter : NSObject {}

/**
 *	@brief 表名
 *
 *
 */
@property (nonatomic, SM_PROPERTY_COPY) NSString *tableName;

/**
 *	@brief 实例database
 *
 *	@param database 数据库文件名
 *
 *	@returns 实例
 */
+ (id)database:(NSString *)database;

/**
 *	@brief 实例database
 *
 *	@param database 数据库文件名
 *	@param table 表名
 *
 *	@returns 实例
 */
+ (id)database:(NSString *)database andTable:(NSString *)table;

/**
 *	@brief 实例database
 *
 *	@param database 数据库文件名
 *
 *	@returns 实例
 */
- (id)initWithDatabase:(NSString *)database;

/**
 *	@brief 实例database
 *
 *	@param database 数据库文件名
 *	@param table 表名
 *
 *	@returns 实例
 */
- (id)initWithDatabase:(NSString *)database andTable:(NSString *)table;

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
 *	@returns 是否提交成功
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
- (int)saveChangesSinceLastOperation;

/**
 *	@brief 保存改变（从开始连接开始）
 *
 *
 *	@returns 改变的行数统计
 */
- (int)saveTotalChangesSinceConnection;

/**
 *	@brief 查询
 *
 *	@param fields 字段
 *	@param sql 条件
 *	@param bind condition的绑定值
 *
 *	@returns 结果
 */
- (SMSQLiteResult *)selectFields:(NSArray *)fields byCondition:(NSString *)sql bind:(NSArray *)bind;

/**
 *	@brief 插入
 *
 *	@param data 数据
 *
 *	@returns 结果
 */
- (BOOL)insertData:(NSDictionary *)data;

/**
 *	@brief 更新
 *
 *	@param data 数据
 *	@param sql 条件
 *	@param bind condition的绑定值
 *
 *	@returns 结果
 */
- (BOOL)updateData:(NSDictionary *)data byCondition:(NSString *)sql bind:(NSArray *)bind;

/**
 *	@brief 删除
 *
 *	@param sql 条件
 *	@param bind condition的绑定值
 *
 *	@returns 结果
 */
- (BOOL)deleteByCondition:(NSString *)sql bind:(NSArray *)bind;

/**
 *	@brief 创建表
 *
 *	@param table 表名
 *	@param info 表结构
 *
 *	@returns 是否创建成功
 */
- (BOOL)createTable:(NSString *)table info:(NSArray *)info;

/**
 *	@brief 删除表中所有数据
 *
 *	@param table 表名
 *
 *	@returns 结果
 */
- (BOOL)dropTable:(NSString *)table;

/**
 *	@brief 使用sql语句执行
 *
 *	@param sql sql语句
 *	@param aBind 绑定值
 *
 *	@returns 结果
 */
- (SMSQLiteResult *)excuteSQL:(NSString *)sql bind:(NSArray *)aBind;


@end
