/**
 *  UIView+animations.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-8.
 *
 *  扩展UIView动画
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import "SMAnimationFactory.h"

@interface UIView (animations)

/**
 *  @brief  淡入
 *
 *  @param  duration 动画时间
 *
 */
- (void)animationFadeInWithDuration:(NSTimeInterval)duration;

/**
 *  @brief  淡入
 *
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始回调
 *  @param  stopSelector    结束回调
 *
 */
- (void)animationFadeInWithDuration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  淡出
 *
 *  @param  duration 动画时间
 *
 */
- (void)animationFadeOutWithDuration:(NSTimeInterval)duration;

/**
 *  @brief  淡出
 *
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始回调
 *  @param  stopSelector    结束回调
 *
 */
- (void)animationFadeOutWithDuration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  掉入
 *
 *  @param  duration 动画时间
 *
 */
- (void)animationDropInWithDuration:(NSTimeInterval)duration;

/**
 *  @brief  掉入
 *
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始回调
 *  @param  stopSelector    结束回调
 *
 */
- (void)animationDropInWithDuration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  掉出
 *
 *  @param  duration 动画时间
 *
 */
- (void)animationDropOutWithDuration:(NSTimeInterval)duration;

/**
 *  @brief  掉出
 *
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始回调
 *  @param  stopSelector    结束回调
 *
 */
- (void)animationDropOutWithDuration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  涡旋入
 *
 *  @param  duration 动画时间
 *
 */
- (void)animationSwirlInWithDuration:(NSTimeInterval)duration;

/**
 *  @brief  涡旋入
 *
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始回调
 *  @param  stopSelector    结束回调
 *
 */
- (void)animationSwirlInWithDuration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  涡旋出
 *
 *  @param  duration 动画时间
 *
 */
- (void)animationSwirlOutWithDuration:(NSTimeInterval)duration;

/**
 *  @brief  涡旋出
 *
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始回调
 *  @param  stopSelector    结束回调
 *
 */
- (void)animationSwirlOutWithDuration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  滑入
 *
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *
 */
- (void)animationSlideInWithDirection:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration;

/**
 *  @brief  滑入
 *
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 */
- (void)animationSlideInWithDirection:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  滑出
 *
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *
 */
- (void)animationSlideOutWithDirection:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration;

/**
 *  @brief  滑出
 *
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 */
- (void)animationSlideOutWithDirection:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  弹入
 *
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *
 */
- (void)animationBounceInWithDirection:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration;

/**
 *  @brief  弹入
 *
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 */
- (void)animationBounceInWithDirection:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  弹出
 *
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *
 */
- (void)animationBounceOutWithDirection:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration;

/**
 *  @brief  弹出
 *
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 */
- (void)animationBounceOutWithDirection:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  跳动
 *
 *  @param  minScale        最小缩放
 *  @param  maxScale        最大缩放
 *
 */
- (void)animationStartPulseWithMinScale:(float)minScale maxScale:(float)maxScale;

/**
 *  @brief  停止跳动
 *
 */
- (void)animationStopPulse;

/**
 *  @brief  弹跳
 *
 *  @param  height          弹跳高度
 *
 */
- (void)animationStartBounceWithHeight:(float)height;

/**
 *  @brief  停止弹跳
 *
 */
- (void)animationStopBounce;

/**
 *  @brief  旋转
 *
 *  @param  spinDirection            旋转方向
 *  @param  timePerSpin              动画时间
 *
 */
- (void)animationStartRotateWithTimePerSpin:(NSTimeInterval)timePerSpin spinDirection:(SMAnimationSpinDirection)spinDirection;

/**
 *  @brief  停止旋转
 *
 */
- (void)animationStopRotate;

/**
 *  @brief  摆动
 *
 */
- (void)animationStartWiggle;

/**
 *  @brief  停止摆动
 *
 */
- (void)animationStopWiggle;

/**
 *  @brief  移动
 *
 *  @param  toPoint            位置
 *  @param  duration              动画时间
 *
 */
- (void)moveTo:(CGPoint)toPoint duration:(NSTimeInterval)duration;

@end
