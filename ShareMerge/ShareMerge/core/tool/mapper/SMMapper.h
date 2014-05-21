/**
 *  SMMapper.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-05-21.
 *
 *  将json字符串转换成model
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "ShareGenerics.h"

@interface SMMapper : NSObject

/**
 *  将json字符串转换成模型
 *  解释：
 *      1、如果jsonString是数组类型，则返回值为NSArray，数组的每一个元素都是cls类型
 *      2、如果jsonString是字典类型，则返回值是cls类型
 *
 *  @param cls        类
 *  @param jsonString json字符串
 *
 *  @return 实例
 */
+ (id)populateModelWithClass:(Class)cls fromJSONString:(NSString *)jsonString;

@end

/************************************例子************************************
   {
    "result": [
               {
                   "id": 28596,
                   "title": "SPECIAL OFFER -Heart of Lisbon Flat",
                   "price": 75,
                   "host": {
                       "id": 132309,
                       "display": "heartoflisbonflat"
                   }
               }
               ],
    "price": "2571.0",
    "pagination": {
        "count": 593,
        "pages": 12
    },
    "status": 200
   }


   @interface SMHost : NSObject
   @property (nonatomic, strong) NSNumber *id;
   @property (nonatomic, strong) NSString *display;
   @end


   GENERICSABLE(SMResult) // 它是必须的，如果需要将该模型泛型话

   @interface SMResult : NSObject
   @property (nonatomic, strong) NSNumber *id;
   @property (nonatomic, strong) NSString *title;
   @property (nonatomic, strong) NSNumber *price;
   @property (nonatomic, strong) SMHost *host;
   @end

   @interface SMPagination : NSObject
   @property (nonatomic, strong) NSNumber *count;
   @property (nonatomic, strong) NSNumber *pages;
   @end

   @interface SMRoot : NSObject
   @property (nonatomic, strong) NSArray <SMResult> *result;
   @property (nonatomic, strong) NSString *price;
   @property (nonatomic, strong) NSNumber *status;
   @property (nonatomic, strong) SMPagination *pagination;
   @end


   转换例子：
        1、从字典结构转换：[RMMapper populateModelWithClass:[SMRoot class] fromJSONString:jsonstring]
        2、从数组结构转换：[RMMapper populateModelWithClass:[SMResult class] fromJSONString:jsonstring] // jsonstring为只有“result”块的字符串


************************************例子************************************/
