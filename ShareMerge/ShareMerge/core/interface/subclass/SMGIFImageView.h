/**
 *  SMGIFImageView.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-04-29.
 *
 *  GIF图像视图
 *
 *
 *  例子：
 *          SMGIFImageView* imageView = [[SMGIFImageView alloc] initWithFrame:ccr(0,0,30,20)];
 *          [self.view addSubview:imageView];
 *          imageView.image = [SMGIFImage imageNamed:@"joy.gif"];
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface SMGIFImageView : UIImageView

/**
 *  运行循环的模式（NSDefaultRunLoopMode、NSRunLoopCommonModes两种）
 */
@property (nonatomic, copy) NSString *runLoopMode;

@end
