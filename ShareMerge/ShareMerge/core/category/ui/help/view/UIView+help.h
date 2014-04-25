/**
 *  UIView+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-26.
 *
 *  扩展UIView
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"

@interface UIView (help)

/** 起点 */
@property (nonatomic, assign) CGPoint origin;

/** 大小 */
@property (nonatomic, assign) CGSize size;

/** 左坐标 */
@property (nonatomic, assign) CGFloat left;

/** 右坐标 */
@property (nonatomic, assign) CGFloat right;

/** 上坐标 */
@property (nonatomic, assign) CGFloat top;

/** 下坐标 */
@property (nonatomic, assign) CGFloat bottom;

/** 横轴方向的中心点 */
@property (nonatomic, assign) CGFloat centerX;

/** 竖轴方向的中心点 */
@property (nonatomic, assign) CGFloat centerY;

/** 宽度 */
@property (nonatomic, assign) CGFloat width;

/** 高度 */
@property (nonatomic, assign) CGFloat height;

/**
 *  @brief  视图变图像
 *
 *  @return             视图的图像
 *
 */
- (UIImage *)imageRepresentation;

/**
 *  @brief  视图变图像（忽略retina和非retina的尺寸区别）
 *
 *  @return             视图的图像
 *
 */
- (UIImage *)imageRepresentationIgnoreDevice;

/**
 *  @brief  隐藏视图
 *
 */
- (void)hide;

/**
 *  @brief  显示视图
 *
 */
- (void)show;

/**
 *  @brief  从自己一直到最顶端视图的超视图
 *
 *  @return             超视图数组
 *
 */
- (NSArray *)superViews;

/**
 *  @brief  第一个超视图，strict=NO（strict：严格）
 *
 *  @param      superviewClass 被检测的视图类
 *
 *  @return             超视图
 *
 */
- (id)firstSuperviewOfClass:(Class)superviewClass;

/**
 *  @brief  第一个超视图
 *
 *  @param      superviewClass  被检测的视图类
 *  @param      strict          是否严格检测
 *
 *  @return             超视图
 *
 */
- (id)firstSuperviewOfClass:(Class)superviewClass strict:(BOOL)strict;

/**
 *  @brief  是否包含被检测子视图
 *
 *  @param      subView  子视图
 *
 *  @return             是否包含
 *
 */
- (BOOL)containsSubView:(UIView *)subView;

/**
 *  @brief  是否包含被检测子视图类型
 *
 *  @param      classType  子视图类型
 *
 *  @return             是否包含
 *
 */
- (BOOL)containsSubViewOfClassType:(Class)classType;

/**
 *  @brief  查找子视图中第一个有输入状态的控件，并将输入状态丢弃
 *
 *  @return             查找到有输入状态的控件，则返回YES，否则返回NO
 *
 */
- (BOOL)findAndResignFirstResonder;

/**
 *  @brief  移除所有子视图
 *
 */
- (void)removeAllSubviews;

/**
 *  @brief  显示外边框，用于调试
 *
 */
- (void)setDebug:(BOOL)debug;
 
/**
 *	@brief 圆角
 *
 *	@param corners 哪些角需要圆角（可通过抑或设置多个角，如：UIRectCornerBottomLeft | UIRectCornerBottomRight）
 *	@param radius 圆角半径
 *
 */
- (void)roundingCorners:(UIRectCorner)corners cornerRadii:(CGSize)cornerRadii;

/**
 *  @brief  居中于rect中
 *
 *  @param  rect 居中的衡量矩形
 */
- (void)centerInRect:(CGRect)rect;

/**
 *  @brief  居中于rect中的垂直方向
 *
 *  @param  rect 居中的衡量矩形
 */
- (void)centerVerticallyInRect:(CGRect)rect;

/**
 *  @brief  居中于rect中的水平方向
 *
 *  @param  rect 居中的衡量矩形
 */
- (void)centerHorizontallyInRect:(CGRect)rect;

/**
 *  @brief  居中于超视图中
 *
 */
- (void)centerInSuperView;

/**
 *  @brief  居中于超视图中的垂直方向
 *
 */
- (void)centerVerticallyInSuperView;

/**
 *  @brief  居中于超视图中的水平方向
 *
 */
- (void)centerHorizontallyInSuperView;

/**
 *  @brief  得到自己在超视图中的索引序号
 *
 *  @return 索引
 *
 */
- (NSUInteger)indexOfSuperView;

/**
 *  @brief  得到自己属于的viewcontroller
 *
 *  @return 视图控制器
 *
 */
- (UIViewController *)belongViewController;

/**
 *  @brief  调整到置顶
 *
 */
- (void)bringToFront;

/**
 *  @brief  调整到置后
 *
 */
- (void)sendToBack;

/**
 *  @brief  增加一个深度
 *
 */
- (void)bringOneLevelUp;

/**
 *  @brief  减少一个深度
 *
 */
- (void)sendOneLevelDown;

/**
 *  @brief  当前是否置顶
 *
 */
- (BOOL)isInFront;

/**
 *  @brief  当前是否置后
 *
 */
- (BOOL)isAtBack;

/**
 *  @brief  交换视图深度
 *
 */
- (void)swapDepthsWithView:(UIView *)swapView;

/**
 *  @brief  隐藏键盘
 *
 */
- (void)hideKeyboard;

/**
 *  @brief  注册隐藏键盘工具
 *
 */
- (void)registerKeyboardHideTool;

/**
 *	@brief 视图层次结构
 *
 *
 *	@returns 层次结构描述
 */
//- (NSString*)viewgraphDescription;

@end
