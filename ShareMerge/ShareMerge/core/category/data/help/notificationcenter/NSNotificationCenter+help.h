//
//  NSNotificationCenter+help.h
//  hh
//
//  Created by huangxinping on 4/24/14.
//  Copyright (c) 2014 ShareMerge. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^NotificationBlock)(NSNotification *notification);

@interface NSNotificationCenter (help)

/**
    注册通知服务
    @param aName 通知名称
    @param block 回掉
 */
- (void)registerNotificationName:(NSString *)aName notifiedBlock:(NotificationBlock)block;

/**
 *  注册通知服务
 *
 *  @param aName      通知名称
 *  @param block      回掉
 *  @param removeSame 是否移除前一个同样名称的通知
 */
- (void)registerNotificationName:(NSString *)aName notifiedBlock:(NotificationBlock)block removeSame:(BOOL)removeSame;

/**
    通知是否被注册过
    @param name 通知名称
    @returns 是否
 */
- (BOOL)isRegisteredNotificationWithName:(NSString *)aName;

/**
    得到所有通知名称
    @returns 数组
 */
- (NSArray *)getNotificationNames;

/**
    移除通知
    @param aName 通知名称
 */
- (void)removeNotificationWithName:(NSString *)aName;

/**
    移除所有通知
 */
- (void)removeAllNotifications;

@end
