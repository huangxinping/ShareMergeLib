/**
 *  NSCalendar+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 09-6-03.
 *
 *  NSCalendar类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

/** 星期类型 */
typedef enum _DayOfTheWeekType
{
    kUndefined = -1,
    kSunday = 0,
    kMonday,
    kTuesday,
    kWednesday,
    kThursday,
    kFriday,
    kSaturday
}DayOfTheWeekType;

@interface NSCalendar (help)

/**
 *  @brief  计算某年某月某日是星期几
 *
 *  @param  name        文件名称（包含文件类型后缀）
 *  @return             星期几（跟kDayOfTheWeekType枚举对应）
 */
+ (DayOfTheWeekType)dayOfTheWeekOnYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 *  @brief  计算某年某月某日是星期几
 *
 *  @param  wday        星期几的枚举
 *  @return             星期几的中文描述
 */
+ (NSString *)nameOfTheDayOfTheWeekType:(DayOfTheWeekType)wday;

/**
 *  @brief  得到中文的所有月份描述（简体）
 *
 *  @return             所有月份中文描述
 */
+ (NSArray *)chineseMonthNames;

/**
 *  @brief  得到中文的设定月份描述（简体）
 *
 *  @return             设定月份中文描述
 */
+ (NSString *)nameOfMonth:(NSInteger)month;

@end
