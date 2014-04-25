/**
 *  NSDate+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  扩展NSDate
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

struct SMDateInformation
{
    int day;
    int month;
    int year;
    int weekday;
    int minute;
    int hour;
    int second;
};
typedef struct SMDateInformation   SMDateInformation;

@interface NSDate (help)

/**
 *  @brief  date转换到string，使用时间格式为：yyyy-MM-dd HH:mm:ss
 *
 *  @param  date  时间
 *
 *  @return 转换后的时间字串
 */
+ (NSString *)dateToString:(NSDate *)date;

/**
 *  @brief  date转换到string
 *
 *  @param  date        时间
 *  @param  dateFormat  时间格式
 *
 *  @return 转换后的时间字串
 */
+ (NSString *)dateToString:(NSDate *)date dateFormat:(NSString *)dateFormat;

/**
 *  @brief  现在时间用字符串表示
 *
 *  @param  dateFormat  时间格式
 *
 *  @return 转换后的时间字串
 */
+ (NSString *)nowWithDateFormat:(NSString *)dateFormat;

/**
 *  @brief  现在时间用字符串表示，使用时间格式为：yyyy-MM-dd HH:mm:ss
 *
 *  @return 转换后的时间字串
 */
+ (NSString *)now;

/**
 *  @brief  当前日期的前一天
 *
 *  @return 前一天的NSDate
 */
+ (NSDate *)yesterday;

/**
 *  @brief  从日期字串转换到NSDate
 *
 *  @param dateString 时间字串
 *
 *  @return 字串转换后的NSDate
 */
+ (NSDate *)dateFromString:(NSString *)dateString;

/**
 *  @brief  从日期字串转换到NSDate
 *
 *  @param dateString 时间字串
 *  @param dateFormat 时间格式
 *
 *  @return 字串转换后的NSDate
 */
+ (NSDate *)dateFromString:(NSString *)dateString dateFormat:(NSString *)dateFormat;

/**
 *  @brief  计算当前时间和比较时间的差值，（例如：刚刚、1分钟前、1小时前等）
 *
 *  @param otherDate  时间
 *
 *  @return 计算后的字串
 */
+ (NSString *)intervalDescription:(NSDate *)otherDate;

/**
 *  @brief  时间到时间戳
 *
 *  @date   要转换的时间
 *
 *  @return 转换后的字串
 */
+ (NSString *)dateToTimestamp:(NSDate *)date;

/**
 *  @brief  时间戳到时间
 *
 *  @return 转换后的时间
 */
+ (NSDate *)timestampToDate:(NSString *)timestamp;

/**
 *  @brief  计算偏移月份后的日期
 *
 *  @param numMonths 偏移月份
 *
 *  @return 偏移后的NSDate
 */
- (NSDate *)offsetMonth:(int)numMonths;

/**
 *  @brief  计算偏移天数后的日期
 *
 *  @param numDays 偏移天数
 *
 *  @return 偏移后的NSDate
 */
- (NSDate *)offsetDay:(int)numDays;

/**
 *  @brief  计算偏移小时后的日期
 *
 *  @param numHours 偏移小时
 *
 *  @return 偏移后的NSDate
 */
- (NSDate *)offsetHours:(int)numHours;

/**
 *  @brief  当月第一个星期一
 *
 *  @return 无
 */
- (int)firstWeekDayInMonth;

/**
 *  @brief  计算当前日期有多少天
 *
 *  @return 天数
 */
- (int)numDaysInMonth;

/**
 *  @brief  计算当前日期的年份
 *
 *  @return 年份
 */
- (int)year;

/**
 *  @brief  计算当前日期的月份
 *
 *  @return 月份
 */
- (int)month;

/**
 *  @brief  计算当前日期的天数
 *
 *  @return 天数
 */
- (int)day;

/**
 *  @brief  比较两个日期是否为同一天
 *
 *  @param anotherDate  需比较的时间
 *
 *  @return             前一月份的NSDate
 */
- (BOOL)isSameDay:(NSDate *)anotherDate;

/**
 *  @brief  比较两个日期相差的月份数
 *
 *  @param toDate  需比较的时间
 *
 *  @return        月份差
 */
- (int)monthsBetweenDate:(NSDate *)toDate;

/**
 *  @brief  比较两个日期相差的天数数
 *
 *  @param toDate  需比较的时间
 *
 *  @return        天数差
 */
- (NSInteger)daysBetweenDate:(NSDate *)toDate;

/**
 *  @brief  判断当前时间是否为当天
 *
 *  @return        是否为当天
 */
- (BOOL)isToday;

/**
 *  @brief  判断是否当前日期比otherDate要早
 *
 *  @return        是否要早
 */
- (BOOL)isEarlierThanDate:(NSDate *)otherDate;

/**
 *  @brief  判断是否当前日期比otherDate要晚
 *
 *  @return        是否要晚
 */
- (BOOL)isAfterDate:(NSDate *)otherDate;

/**
 *  @brief  转换NSDate到struct，使用系统默认时区
 *
 *  @return        struct表示方式的NSDate
 */
- (SMDateInformation)dateInformation;

/**
 *  @brief  转换NSDate到struct，根据时区
 *
 *  @return        struct表示方式的NSDate
 */
- (SMDateInformation)dateInformationWithTimeZone:(NSTimeZone *)tz;

/**
 *  @brief  转换struct到NSDate，使用系统默认时区
 *
 *  @return        NSDate的日期
 */
+ (NSDate *)dateFromDateInformation:(SMDateInformation)info;

/**
 *  @brief  转换struct到NSDate，根据时区
 *
 *  @return        NSDate的日期
 */
+ (NSDate *)dateFromDateInformation:(SMDateInformation)info timeZone:(NSTimeZone *)tz;

/**
 *  @brief  转换struct到日期字串描述
 *
 *  @return        日期字串
 */
+ (NSString *)dateInformationDescriptionWithInformation:(SMDateInformation)info;

@end
