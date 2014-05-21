/**
 *  SGJavaScriptWebView.h
 *  ShareGlobal
 *
 *  Created by huangxp on 13-3-20.
 *
 *  javascript网页视图
 *
 *  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
 */

/** @file */	// Doxygen marker

#import <UIKit/UIKit.h>

@protocol SMJavaScriptWebViewDelegate <NSObject>

/**
 *	@brief 从网页中js代码回调
 *
 *	@param source http的headerFields字典中的Referer字段
 *	@param data 数据
 *
 *	@returns 返回YES，则网页的线程继续运行
 */
- (BOOL)onReceiveMessage:(NSData*)source withData:(NSData*)data;

@end

@interface SMJavaScriptWebView : UIWebView
{
}
@property(nonatomic,assign)id<SMJavaScriptWebViewDelegate> javaScriptDelegate;

/**
 *	@brief 注入javascript，在webViewDidFinishLoad中需强行执行
 *
 *
 */
- (void)injectJavaScriptCallback;

/**
 *	@brief 解析request，在shouldStartLoadWithRequest中调用
 *
 *	@param request 请求
 *
 *	@returns 一般需返回YES
 */
- (BOOL)doParseJavaScript:(NSURLRequest*)request;

/**
 *	@brief 发送信息到javascript中，
 *
 *	@param bundle mainBundle即可
 *	@param data 数据
 *
 */
- (void)sendMessage:(NSBundle*)bundle withData:(NSString*)data;

@end
