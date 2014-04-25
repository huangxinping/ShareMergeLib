//
//  SMActivityDelegate.h
//  ShareMerge
//
//  Created by huangxp on 13-8-9.
//  Copyright (c) 2013年 hxp. All rights reserved.
//

#ifndef ShareMerge_SMActivityDelegate_h
#define ShareMerge_SMActivityDelegate_h

@class SMActivity;
@protocol SMActivityDelegate<NSObject>
@optional

/**
 *  @brief  完成
 *
 *  @param activity 视图
 *
 */
- (void)activityFinshed:(SMActivity*)activity; 

@end

#endif
