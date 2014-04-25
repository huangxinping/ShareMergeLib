/**
 *  SMLanguageManager.h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-10-29.
 *
 *  多语言管理
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

/*
 en,
 fr,
 de,
 ja,
 nl,
 it,
 es,
 pt,
 "pt-PT",
 da,
 fi,
 nb,
 sv,
 ko,
 "zh-Hans",
 "zh-Hant",
 ru,
 pl,
 tr,
 uk,
 ar,
 hr,
 cs,
 el,
 he,
 ro,
 sk,
 th,
 id,
 ms,
 "en-GB",
 ca,
 hu,
 vi
 */

#define kSMDefaultLanguage      @"zh-Hans"    // 默认
#define KSMChinese_Sim          @"zh-Hans"    // 中文简体
#define KSMChinese              @"zh-Hant"    // 中文繁体
#define kSMEnglish              @"en"         // 英文
#define kSMJapanese             @"ja"        // 日文
#define kSMSpanish              @"es"         // 西班牙文

typedef enum
{
    SMLanguageUnkown,
    SMDefaultLanguage,
    SMChinese_Sim,
    SMChinese,
    SMEnglish,
    SMJapanese,
    SMSpanish,
}SMLanguageType;

@interface SMLanguageManager : NSObject

/**
 *	@brief 是否支撑的语种
 *
 *	@param language 语种
 *
 *	@returns 是否支撑
 */
+ (BOOL)isSupportedLanguage:(NSString *)language;

/**
 *	@brief 设置选中语种
 *
 *	@param language 语种
 *
 *	@returns 空
 */
+ (void)setSelectedLanguage:(NSString *)language;

/**
 *	@brief 当前选中语种
 *
 *
 *	@returns 语种
 */
+ (NSString *)selectedLanguage;

/**
 *	@brief 本地化
 *
 *	@param key 关键字
 *
 *	@returns 本地化的文字
 */
+ (NSString *)localizedString:(NSString *)key;

@end
