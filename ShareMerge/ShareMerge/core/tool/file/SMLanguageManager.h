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
   en,  英语
   fr,  法语
   de,  德语
   ja,  日语
   nl,  荷兰语
   it,  意大利语
   es,  西班牙语
   pt,  葡萄牙语
   da,  丹麦语
   fi, 芬兰语
   nb, 挪威语
   sv, 瑞典语
   ko, 朝鲜语
   zh-Hans, 简体中文语
   zh-Hant, 繁体中文语
   ru, 俄文语
   pl, 波兰语
   tr, 土耳其语
   uk, 乌克兰语
   ar, 阿拉伯语
   hr, 克罗地亚语
   cs, 捷克语
   el, 希腊语
   he, 希伯来语或以色列语
   ro, 罗马尼亚
   sk, 斯洛伐克
   th, 泰语
   id, 印度尼西亚语
   ms,  马来西亚语
   ca, 加泰罗尼亚语（西班牙的地方语）
   hu, 匈牙利语
   vi 越南语
 */

#define kSMDefaultLanguage @"zh-Hans"         // 默认
#define KSMChinese_Sim     @"zh-Hans"         // 中文简体
#define KSMChinese         @"zh-Hant"         // 中文繁体
#define kSMEnglish         @"en"              // 英文
#define kSMJapanese        @"ja"              // 日文
#define kSMSpanish         @"es"              // 西班牙文

@interface SMLanguageManager : NSObject

/**
 *  注册实际使用的语种（理论上底层支持上面35个语种，但是不是每个项目都需要所有的语种。所以单个项目注册需要支撑的语种列表）
 *
 *  @param supportedLanguage 被支持的语种列表
 */
+ (void)registerActualSupportedLanguage:(NSArray *)supportedLanguage;

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
