/**
 *  SMOpenFlowView.h
 *  ShareGlobal
 *
 *  Created by huangxp on 12-12-17.
 *
 *  CoverFlow视图（借鉴AFOpenFlowView）
 *
 *  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
 */

/** @file */	// Doxygen marker

#import <UIKit/UIKit.h>
#import "SMItemView.h"
#import "ShareMergeMacros.h"

@protocol SMOpenFlowViewDataSource;
@protocol SMOpenFlowViewDelegate;

@interface SMOpenFlowView : UIView
{
	UIImage *defaultImage;
    
    CGFloat coverSpacing;           // default COVER_SPACING
    CGFloat centerCoverOffset;      // default CENTER_COVER_OFFSET
    CGFloat sideCoverAngle;         // default SIDE_COVER_ANGLE
    CGFloat sideCoverZPosition;     // default SIDE_COVER_ZPOSITION
    NSInteger coverBuffer;          // default 6
    CGFloat reflectionFraction;     // default 0.85
}

/** 数据源 */
@property(nonatomic,SM_PROPERTY_ASSIGN)id<SMOpenFlowViewDataSource> dataSource;

/** 委托 */
@property(nonatomic,SM_PROPERTY_ASSIGN)id<SMOpenFlowViewDelegate> viewDelegate;

/** 默认图像 */
@property(nonatomic,SM_PROPERTY_RETAIN)UIImage *defaultImage;

/** 间隔 */
@property(nonatomic,assign)CGFloat coverSpacing;

/** 中心封面偏移 */
@property(nonatomic,assign)CGFloat centerCoverOffset;

/** 封面旋转角度 */ 
@property(nonatomic,assign)CGFloat sideCoverAngle;

/** 封面Z轴位置 */
@property(nonatomic,assign)CGFloat sideCoverZPosition;

/** 封面缓存 */
@property(nonatomic,assign)NSInteger coverBuffer;

/** 反射比率 */
@property(nonatomic,assign)CGFloat reflectionFraction;

/** 封面数量 */
@property(nonatomic,assign,readonly) NSInteger numberOfImages;

/**
 *  @brief  设置新的选择封面
 *
 *  @param  newSelectedCover 新的封面索引
 *
 */
- (void)setSelectedCover:(int)newSelectedCover;

/**
 *  @brief  居中被选中的封面
 *
 *  @param  animated 是否动画居中
 *
 */
- (void)centerOnSelectedCover:(BOOL)animated;

/**
 *  @brief  刷新数据
 *
 */
- (void)reloadData;

@end

@protocol SMOpenFlowViewDelegate <NSObject>
@optional

/**
 *  @brief  滑动选中了某个封面
 *
 *  @param  openFlowView    视图
 *  @param  index           索引
 *
 */
- (void)openFlowView:(SMOpenFlowView *)openFlowView selectionDidChange:(int)index;

/**
 *  @brief  双击选中了某个封面
 *
 *  @param  openFlowView    视图
 *  @param  index           索引
 *
 */
- (void)openFlowView:(SMOpenFlowView *)openFlowView doubleTapDidChange:(int)index;
@end

@protocol SMOpenFlowViewDataSource <NSObject>
@required

/**
 *  @brief  数量
 *
 *  @param  openFlowView    视图
 *
 *  @return                 数量
 *
 */
- (NSInteger)numberOfImages:(SMOpenFlowView *)openFlowView;

/**
 *  @brief  请求某个封面图像
 *
 *  @param  openFlowView    视图
 *  @param  index           索引
 *
 *  @return                 图像
 *
 */
- (UIImage*)openFlowView:(SMOpenFlowView *)openFlowView requestImageForIndex:(int)index;

/**
 *  @brief  默认图像
 *
 *  @return                 图像
 *
 */
- (UIImage*)defaultImage;
@end