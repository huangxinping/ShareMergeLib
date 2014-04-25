/**
 *  SMAutocomplete.h
 *  ShareMerge
 *
 *  Created by huangxp on 12-4-16.
 *
 *  自动猜想
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>

typedef enum _SuggestionsStyle
{
    BEGINSWITH = 0,     /** 开始匹配 */
    CONTAINSWITH,       /** 包含匹配 */
}SuggestionsStyle;

@interface SMAutocomplete : NSObject {}

/**
 *  @brief  使用被猜想的数组初始化
 *
 *  @param  初始数组
 *
 *  @return 对象
 */
- (id)initWithArray:(NSArray *)initialArray;

/**
 *  @brief  猜想匹配（SuggestionsStyle是BEGINSWITH）
 *
 *  @param  root    关键根
 *
 *  @return         被猜想出来的结果
 */
- (NSMutableArray *)suggestionsWithRoot:(NSString *)root;

/**
 *  @brief  猜想匹配
 *
 *  @param  root    关键根
 *  @param  ss      匹配模式
 *
 *  @return 被猜想出来的结果
 */
- (NSMutableArray *)suggestionsWithRoot:(NSString *)root style:(SuggestionsStyle)ss;

/**
 *  @brief  增加被猜想匹配的元素
 *
 *  @param  candidate    元素
 *
 */
- (void)addCandidate:(NSString *)candidate;

@end
