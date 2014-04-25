//
//  SMSideViewControllerNotifications.h
//  ShareMerge
//
//  Created by huangxp on 13-8-23.
//  Copyright (c) 2013年 hxp. All rights reserved.
//

#ifndef ShareMerge_SMSideViewControllerNotifications_h
#define ShareMerge_SMSideViewControllerNotifications_h

/**
 *	@brief 通知 - 右边视图将要显示
 *
 *
 */
extern NSString *const SMSideViewUnderRightWillAppear;

/**
 *	@brief 通知 - 左边视图将要显示
 *
 *
 */
extern NSString *const SMSideViewUnderLeftWillAppear;

/**
 *	@brief 通知 - 右边视图将要消失
 *
 *
 */
extern NSString *const SMSideViewUnderRightWillDisappear;

/**
 *	@brief 通知 - 左边视图将要消失
 *
 *
 */
extern NSString *const SMSideViewUnderLeftWillDisappear;

/**
 *	@brief 通知 - 顶部视图被调整到左边
 *
 *
 */
extern NSString *const SMSideViewTopDidAnchorLeft;

/**
 *	@brief 通知 - 顶部视图被调整到右边
 *
 *
 */
extern NSString *const SMSideViewTopDidAnchorRight;

/**
 *	@brief 通知 - 顶部视图将要重置
 *
 *
 */
extern NSString *const SMSideViewTopWillReset;

/**
 *	@brief 通知 - 顶部视图已重置
 *
 *
 */
extern NSString *const SMSideViewTopDidReset;

#endif
