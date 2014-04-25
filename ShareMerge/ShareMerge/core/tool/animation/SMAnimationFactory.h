/**
 *  SMAnimationFactory.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-9-7.
 *
 *  动画工厂
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "ShareInstance.h"

/** 动画方向 */
typedef enum _SMAnimationDirection
{
    kSMAnimationTop = 0,
    kSMAnimationRight,
    kSMAnimationBottom,
    kSMAnimationLeft,
    kSMAnimationTopLeft,
    kSMAnimationTopRight,
    kSMAnimationBottomLeft,
    kSMAnimationBottomRight
}SMAnimationDirection;

/** 转转动画方向 */
typedef enum _SMAnimationSpinDirection
{
    kSMAnimationSpinClockwise,
    kSMAnimationSpinCounterClockwise
}SMAnimationSpinDirection;

/** 动画名称 */
extern NSString *const kSMAnimationKeyView;
extern NSString *const kSMAnimationKeyName;
extern NSString *const kSMAnimationKeyType;
extern NSString *const kSMAnimationKeyDelegate;
extern NSString *const kSMAnimationKeyStartSelector;
extern NSString *const kSMAnimationKeyStopSelector;

extern NSString *const kSMAnimationTypeIn;
extern NSString *const kSMAnimationTypeOut;
extern NSString *const kSMAnimationTypeActive;

extern NSString *const kSMAnimationScale;
extern NSString *const kSMAnimationRotate;
extern NSString *const kSMAnimationPulse;
extern NSString *const kSMAnimationBounce;
extern NSString *const kSMAnimationWiggle;

extern NSString *const kSMAnimationMoveTo;

extern NSString *const kSMAnimationFadeIn;
extern NSString *const kSMAnimationFadeOut;
extern NSString *const kSMAnimationDropIn;
extern NSString *const kSMAnimationDropOut;
extern NSString *const kSMAnimationSwirlIn;
extern NSString *const kSMAnimationSwirlOut;
extern NSString *const kSMAnimationSlideIn;
extern NSString *const kSMAnimationSlideOut;
extern NSString *const kSMAnimationBounceIn;
extern NSString *const kSMAnimationBounceOut;


@interface SMAnimationFactory : NSObject {}

SINGLETON_FOR_HEADER(SMAnimationFactory)

/**
 *  @brief  渐入
 *
 *  @param  view        视图
 *  @param  duration    动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)fadeIn:(UIView *)view duration:(NSTimeInterval)duration;

/**
 *  @brief  渐入
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)fadeIn:(UIView *)view duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  淡出
 *
 *  @param  view        视图
 *  @param  duration    动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)fadeOut:(UIView *)view duration:(NSTimeInterval)duration;

/**
 *  @brief  淡出
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)fadeOut:(UIView *)view duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  滑入
 *
 *  @param  view            视图
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)slideIn:(UIView *)view direction:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration;

/**
 *  @brief  滑入
 *
 *  @param  view            视图
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)slideIn:(UIView *)view direction:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  滑出
 *
 *  @param  view            视图
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)slideOut:(UIView *)view direction:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration;

/**
 *  @brief  滑出
 *
 *  @param  view            视图
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)slideOut:(UIView *)view direction:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  弹入
 *
 *  @param  view            视图
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)bounceIn:(UIView *)view direction:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration;

/**
 *  @brief  弹入
 *
 *  @param  view            视图
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)bounceIn:(UIView *)view direction:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  弹出
 *
 *  @param  view            视图
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)bounceOut:(UIView *)view direction:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration;

/**
 *  @brief  弹出
 *
 *  @param  view            视图
 *  @param  direction       方向
 *  @param  boundaryView    边界视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)bounceOut:(UIView *)view direction:(SMAnimationDirection)direction boundaryView:(UIView *)boundaryView duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  掉入
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)dropIn:(UIView *)view duration:(NSTimeInterval)duration;

/**
 *  @brief  掉入
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)dropIn:(UIView *)view duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  掉出
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)dropOut:(UIView *)view duration:(NSTimeInterval)duration;

/**
 *  @brief  掉出
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)dropOut:(UIView *)view duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  漩涡
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)swirlIn:(UIView *)view duration:(NSTimeInterval)duration;

/**
 *  @brief  漩涡
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)swirlIn:(UIView *)view duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  漩涡
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)swirlOut:(UIView *)view duration:(NSTimeInterval)duration;

/**
 *  @brief  漩涡
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *  @param  delegate        委托
 *  @param  startSelector   开始动画的回调
 *  @param  stopSelector    结束动画的回调
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)swirlOut:(UIView *)view duration:(NSTimeInterval)duration delegate:(id)delegate startSelector:(SEL)startSelector stopSelector:(SEL)stopSelector;

/**
 *  @brief  移动
 *
 *  @param  view            视图
 *  @param  point           位置
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)move:(UIView *)view toPoint:(CGPoint)point duration:(NSTimeInterval)duration;

/**
 *  @brief  缩放
 *
 *  @param  view            视图
 *  @param  from            起始缩放
 *  @param  to              结束缩放
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)scale:(UIView *)view fromScale:(float)from toScale:(float)to duration:(NSTimeInterval)duration;

/**
 *  @brief  旋转
 *
 *  @param  view            视图
 *  @param  duration        动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)rotate:(UIView *)view duration:(NSTimeInterval)duration;

/**
 *  @brief  跳动
 *
 *  @param  view            视图
 *  @param  minScale        最小缩放
 *  @param  maxScale        最大缩放
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)pulse:(UIView *)view minScale:(float)minScale maxScale:(float)maxScale;

/**
 *  @brief  弹跳
 *
 *  @param  view            视图
 *  @param  height          弹跳高度
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)bounce:(UIView *)view height:(float)height;

/**
 *  @brief  旋转
 *
 *  @param  view            视图
 *  @param  spinDirection            旋转方向
 *  @param  timePerSpin              动画时间
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)rotate:(UIView *)view spinDirection:(SMAnimationSpinDirection)spinDirection timePerSpin:(NSTimeInterval)timePerSpin;

/**
 *  @brief  摆动
 *
 *  @param  view            视图
 *  @param  maxDegrees            摆动最大度数
 *  @param  translation           摆动最大的变换
 *
 *  @return             动画对象
 *
 */
- (CAAnimation *)wiggle:(UIView *)view maxDegrees:(float)degrees maxTranslation:(float)translation;

@end
