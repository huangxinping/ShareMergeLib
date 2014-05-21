/**
 *  SM_BlocksProtocol.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-05-21.
 *
 *  ShareMerge中所有使用的blocks
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#ifndef ShareMerge_SM_BlocksProtocol_h
#define ShareMerge_SM_BlocksProtocol_h
#import <UIKit/UIKit.h>

@protocol SMBlocksProtocol <NSObject>

typedef void (^VoidBlock)();
typedef void (^CompletionBlock)(BOOL completed);

typedef void (^DismissBlock)(int buttonIndex, NSString *buttonTitle);
typedef void (^PhotoPickedBlock)(UIImage *chosenImage);

typedef void (^ComposeCreatedBlock)(UIViewController *controller);
typedef void (^ComposeFinishedBlock)(UIViewController *controller, NSError *error);

typedef void (^ProgressBlock)(NSInteger connectionProgress);
typedef void (^DataBlock)(NSData *data);
typedef void (^SuccessBlock)(NSHTTPURLResponse *HTTPResponse);
typedef void (^FailureBlock)(NSError *error);

typedef void (^RowPickedBlock)(NSString *title);

typedef void (^ListBlock)(NSArray *list);

typedef void (^StatusBlock)(unsigned int status);

@end

#endif /* ifndef ShareMerge_SM_BlocksProtocol_h */
