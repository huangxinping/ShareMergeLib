//
//  SMSQLiteParameter.h
//  ShareMerge
//
//  Created by huangxp on 13-7-24.
//  Copyright (c) 2013年 hxp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"

@interface SMSQLiteParameter : NSObject

@property (nonatomic, SM_PROPERTY_COPY) NSString *name;
@property (nonatomic, SM_PROPERTY_COPY) NSString *value;

/**
 *	@brief 获取当前字段text值
 *
 *
 *	@returns 字段值
 */
- (NSString *)textValue;

/**
 *	@brief 获取当前字段float值
 *
 *
 *	@returns 字段值
 */
- (CGFloat)floatValue;

/**
 *	@brief 获取当前字段integer值
 *
 *
 *	@returns 字段值
 */
- (NSInteger)intValue;

@end
