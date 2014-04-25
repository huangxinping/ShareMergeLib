/**
 *  UIWebView+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 10-8-25.
 *
 *  扩展UIWebView
 *
 *  Copyright (c) 2010年 __MyCompanyName__. All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIWebView (help)

/**
 *  @brief  文档尺寸
 *
 *  @return  尺寸
 *
 */
- (CGSize)sizeOfDocument;

/**
 *  @brief  移除底部阴影
 *
 */
- (void)removeShadow;

/**
 *  @brief  透明
 *
 */
- (void)makeTransparent;

/**
 *  @brief  透明并移除阴影
 *
 */
- (void)makeTransparentAndRemoveShadow;

/**
 *  @brief  载入url
 *
 */
- (void)loadURL:(NSURL *)url;

/**
 *  @brief  载入url
 *
 */
- (void)loadURLString:(NSString *)urlString;

@end
