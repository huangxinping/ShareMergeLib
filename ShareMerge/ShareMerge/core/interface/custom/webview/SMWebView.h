/**
 *  SMWebView.h
 *  ShareGlobal
 *
 *  Created by huangxp on 13-3-20.
 *
 *  javascript网页视图
 *
 *  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@class SMWebView;
@protocol SMWebViewDelegate <NSObject>

/**
 *	@brief 从网页中js代码回调
 *
 *  @param webView 网页控件
 *	@param source http的headerFields字典中的Referer字段
 *	@param data 数据
 *
 *	@returns 返回YES，则网页的线程继续运行
 */
- (BOOL)onReceiveMessage:(SMWebView *)webView source:(NSData *)source withData:(NSData *)data;

@end

@protocol SMWebViewProgressDelegate <NSObject>

/**
 *  @brief 进入回调
 *
 *  @param webView  网页控件
 *  @param progress 进度
 */
- (void)webViewProgress:(SMWebView *)webView updateProgress:(CGFloat)progress;

@end

@interface SMWebView : UIWebView
{
}

/**
 *  js桥接委托
 */
@property (nonatomic, assign) id<SMWebViewDelegate> javaScriptDelegate;

/**
 *  进度委托
 */
@property (nonatomic, weak) id <SMWebViewProgressDelegate> progressDelegate;

/**
 *  当前进度
 */
@property (nonatomic, readonly) CGFloat progress; // 0.0..1.0

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
- (BOOL)doParseJavaScript:(NSURLRequest *)request;

/**
 *	@brief 发送信息到javascript中，
 *
 *	@param bundle mainBundle即可
 *	@param data 数据
 *
 */
- (void)sendMessage:(NSBundle *)bundle withData:(NSString *)data;

@end
