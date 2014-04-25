/**
 *  SMRefreshControl.h
 *  ShareMerge
 *
 *  Created by huangxp on 13-8-25.
 *
 *  下拉刷新
 *
 *  thanks ODRefreshControl project
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"

#if HAS_BLOCK
typedef void (^SMRefreshControlBlock)(void);
#endif

@interface SMRefreshControl : UIControl

/**
 *	@brief 是否在刷新动作
 *
 *
 */
@property (nonatomic, readonly, getter = isRefreshing) BOOL refreshing;

/**
 *	@brief 控件颜色
 *
 *
 */
@property (nonatomic, SM_PROPERTY_RETAIN) UIColor *tintColor;

/**
 *	@brief 菊花风格
 *
 *
 */
@property (nonatomic, assign) UIActivityIndicatorViewStyle activityIndicatorViewStyle;

/**
 *	@brief 菊花颜色
 *
 *
 */
@property (nonatomic, SM_PROPERTY_RETAIN) UIColor *activityIndicatorViewColor;

/**
 *	@brief 创建刷新控件（支持UIScrollView和UITableView）
 *
 *	@param scrollView 滚动视图
 *
 *	@returns 对象
 */
- (id)initInScrollView:(UIScrollView *)scrollView;

/**
 *	@brief 创建刷新控件（支持UIScrollView和UITableView）
 *
 *	@param scrollView 滚动视图
 *	@param activity 菊花控件（由调用者去生成菊花控件）
 *
 *	@returns 对象
 */
- (id)initInScrollView:(UIScrollView *)scrollView activityIndicatorView:(UIActivityIndicatorView *)activity;

/**
 *	@brief 开始刷新
 *
 *
 */
- (void)beginRefreshing;

/**
 *	@brief 结束刷新
 *
 *
 */
- (void)endRefreshing;

#if HAS_BLOCK
- (void)didBeginRefreshingBlock:(SMRefreshControlBlock)block;
#endif

@end
