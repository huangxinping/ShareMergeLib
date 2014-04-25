/**
 *  SMActivity
 *  ShareMerge
 *
 *  Created by huangxp on 13-08-09.
 *
 *  活动菊花（activityText -- 最多20个字符）
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>
#import "ShareMergeMacros.h"
#import "SMActivityDelegate.h"
#import "ShareInstance.h"

typedef enum _SMActivityDefaultTimeout
{
    SMACTIVITY_DEFAULT_TIMEOUT = NSIntegerMax,
}SMDefaultTimeout;

#if HAS_BLOCK
typedef enum _SMActivityFinshedType
{
    SMACTIVITY_COMMON_FINISHED = 0,
    SMACTIVITY_TIMEOUT_FINISHED,
    SMACTIVITY_CANCEL_FINISHED,
}SMActivityFinshedType;

typedef void (^SMActivityFinished)(SMActivityFinshedType finishedType);

#endif

@interface SMActivity : UIView

@property (nonatomic, SM_PROPERTY_ASSIGN) id<SMActivityDelegate> delegate;
@property (nonatomic, SM_PROPERTY_COPY) NSString *activityText;
@property (nonatomic, assign) NSTimeInterval timeOutSeconds;
@property (nonatomic, assign, readonly) BOOL running;
@property (nonatomic, assign) BOOL openCancel;
@property (nonatomic, assign) BOOL openMask;
@property (nonatomic, assign) SMActivityFinshedType finishedType;
#if HAS_BLOCK
@property (nonatomic, SM_PROPERTY_COPY) SMActivityFinished completionBlock;
#endif

SINGLETON_FOR_HEADER(SMActivity)

/**
 *  @brief  开始活动
 *
 *  @param parentView   依附视图
 *  @param disenable    是否禁用依附视图的触摸
 *
 */
- (void)startActivity:(UIView *)parentView parentViewTouchedDisable:(BOOL)disable;

/**
 *  @brief  开始能自动消失的活动
 *
 *  @param parentView   依附视图
 *  @param disenable    是否禁用依附视图的触摸
 *
 */
- (void)startActivityWithAutoDestroy:(UIView *)parentView parentViewTouchedDisable:(BOOL)disable;

/**
 *  @brief  停止活动
 *
 *  @param  parentViewTouchedEnable 是否开启依附视图的触摸
 *
 */
- (void)stopActivity:(BOOL)parentViewTouchedEnable;

@end
