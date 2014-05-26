/**
 *  SM_Category.h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-07-22.
 *
 *  ShareMerge开发库 - 类别的导出
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#ifndef ShareMerge_SM_Category_h
#define ShareMerge_SM_Category_h

/* blocks - protocol */
#import <SM_BlocksProtocol.h>

/* data - block */
#import <NSArray+block.h>
#import <NSDictionary+block.h>
#import <NSObject+block.h>
#import <NSTimer+block.h>

/* data - help */
#import <NSArray+help.h>
#import <NSMutableArray+help.h>
#import <NSBundle+help.h>
#import <NSCalendar+help.h>
#import <NSCharacterSet+help.h>
#import <UIColor+help.h>
#import <NSData+help.h>
#import <NSDate+help.h>
#import <UIDevice+help.h>
#import <NSDictionary+help.h>
#import <NSFileManager+help.h>
#import <UIFont+help.h>
#import <UIImage+help.h>
#import <NSNotificationCenter+help.h>
#import <NSNumber+help.h>
#import <NSObject+help.h>
#import <NSURLRequest+help.h>
#import <NSMutableString+help.h>
#import <NSString+help.h>
#import <NSURL+help.h>
#import <NSUserDefaults+help.h>

/* ui - block */
#import <UIAlertView+block.h>
#import <UIView+block.h>
#import <UIControl+block.h>
#import <UIActionSheet+block.h>
#import <UIPopoverController+block.h>

/* ui - help */
#import <UIApplication+help.h>
#import <UIBarButtonItem+help.h>
#import <UIControl+help.h>
#import <UIImageView+help.h>
#import <UIButton+help.h>
#import <UILabel+help.h>
#import <UINavigationController+help.h>
#import <UINavigationBar+help.h>
#import <UIScreen+help.h>
#import <UIScrollView+help.h>
#import <UITableView+help.h>
#import <UITableViewController+help.h>
#import <UIToolbar+help.h>
#import <UIView+animations.h>
#import <UIView+help.h>
#import <UIViewController+help.h>
#import <UIWebView+help.h>
#import <UIWindow+help.h>
#import <UITextField+help.h>

/* Category的特别处理，加上这个宏之后，使用该库的工程无需添加-all_load标志 */
#define SM_FIX_CATEGORY_BUG(name) \
    @interface SM_FIX_CATEGORY_BUG_ ## name @end \
    @implementation SM_FIX_CATEGORY_BUG_ ## name @end

#endif // ifndef ShareMerge_SM_Category_h
