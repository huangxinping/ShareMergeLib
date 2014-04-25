/**
 *  SMSideViewController
 *  ShareMerge
 *
 *  Created by huangxp on 13-8-16.
 *
 *  边栏菜单
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"
#import "SMSideViewControllerNotifications.h"

typedef NS_ENUM (NSInteger, SMViewWidthLayout)
{
    SMFullWidth,
    SMFixedRevealWidth,
    SMVariableRevealWidth,
};

typedef NS_ENUM (NSInteger, SMSide)
{
    SMLeft,
    SMRight,
};

typedef NS_ENUM (NSInteger, SMResetStrategy)
{
    SMNone = 0,
    SMTapping = 1 << 0,
    SMPanning = 1 << 1
};

@interface SMSideViewController : UIViewController

/**
 *	@brief 左边视图控制器
 *
 *
 */
@property (nonatomic, SM_PROPERTY_RETAIN) UIViewController *underLeftViewController;

/**
 *	@brief 右边试图控制器
 *
 *
 */
@property (nonatomic, SM_PROPERTY_RETAIN) UIViewController *underRightViewController;

/**
 *	@brief 顶部（中间）视图控制器
 *
 *
 */
@property (nonatomic, SM_PROPERTY_RETAIN) UIViewController *topViewController;

/**
 *	@brief 顶部视图偏移到左边像素，如果需要露出则使用anchorLeftRevealAmount
 *
 *
 */
@property (nonatomic, assign) CGFloat anchorLeftPeekAmount;

/**
 *	@brief 顶部视图偏移到右边像素，如果需要露出则使用anchorRightRevealAmount
 *
 *
 */
@property (nonatomic, assign) CGFloat anchorRightPeekAmount;

/**
 *	@brief 左边显示的像素
 *
 *
 */
@property (nonatomic, assign) CGFloat anchorLeftRevealAmount;

/**
 *	@brief 右边显示的像素
 *
 *
 */
@property (nonatomic, assign) CGFloat anchorRightRevealAmount;

/**
 *	@brief 如果不想显示空白空间在顶部和底部视图之间，则设置为NO，默认是YES
 *
 *
 */
@property (nonatomic, assign) BOOL shouldAllowPanningPastAnchor;

/**
 *	@brief 当被定位后允许接受触摸（默认是NO）
 *
 *
 */
@property (nonatomic, assign) BOOL shouldAllowUserInteractionsWhenAnchored;

/**
 *	@brief 顶部视图允许增加手势（默认是NO）
 *
 *
 */
@property (nonatomic, assign) BOOL shouldAddPanGestureRecognizerToTopViewSnapshot;

/**
 *	@brief 底部左边视图宽度的布局
 *
 *
 */
@property (nonatomic, assign) SMViewWidthLayout underLeftWidthLayout;

/**
 *	@brief 底部右边视图宽度的布局
 *
 *
 */
@property (nonatomic, assign) SMViewWidthLayout underRightWidthLayout;

/**
 *	@brief 重置视图结构的方式
 *
 *
 */
@property (nonatomic, assign) SMResetStrategy resetStrategy;

/**
 *	@brief 将顶部视图设置到某边（左边或右边）
 *
 *	@param side 边枚举
 *
 */
- (void)anchorTopViewTo:(SMSide)side;

/**
 *	@brief 将顶部视图设置到某边（左边或右边）
 *
 *	@param side 边枚举
 *
 */
- (void)anchorTopViewTo:(SMSide)side animations:(void (^)())animations onComplete:(void (^)())complete;

/**
 *	@brief 将顶部视图设置到屏幕外
 *
 *	@param side 边枚举
 *
 */
- (void)anchorTopViewOffScreenTo:(SMSide)side;

/**
 *	@brief 将顶部视图设置到屏幕外
 *
 *	@param side 边枚举
 *
 */
- (void)anchorTopViewOffScreenTo:(SMSide)side animations:(void (^)())animations onComplete:(void (^)())complete;

/**
 *	@brief 将顶部视图重置到中间
 *
 *
 */
- (void)resetTopView;

/**
 *	@brief 将顶部视图重置到中间
 *
 *  @param animations   动画（可以为nil）
 *  @param complete     完成动画（可以为nil）
 *
 */
- (void)resetTopViewWithAnimations:(void (^)())animations onComplete:(void (^)())complete;

/**
 *	@brief 滑动手势
 *
 *
 *	@returns 对象
 */
- (UIPanGestureRecognizer *)panGesture;

/**
 *	@brief 返回YES，如果左边顶部视图是显示的
 *
 *
 *	@returns 是否
 */
- (BOOL)underLeftShowing;

/**
 *	@brief 返回YES，如果右边顶部视图是显示的
 *
 *
 *	@returns 是否
 */
- (BOOL)underRightShowing;

/**
 *	@brief 返回YES，如果顶部视图在屏幕之外
 *
 *
 *	@returns 是否
 */
- (BOOL)topViewIsOffScreen;

@end


/* 边栏视图控制器类别 */
@interface UIViewController (SMSideViewController)

- (SMSideViewController *)sideViewController;

@end
