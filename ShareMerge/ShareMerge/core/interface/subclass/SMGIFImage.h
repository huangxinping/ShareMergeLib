/**
 *  SMGIFImage.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-04-29.
 *
 *  GIF图片
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface SMGIFImage : UIImage

/**
 *  帧时长
 */
@property (nonatomic, readonly) NSTimeInterval *frameDurations;

/**
 *  所有帧的时长
 */
@property (nonatomic, readonly) NSTimeInterval totalDuration;

/**
 *  循环次数
 */
@property (nonatomic, readonly) NSUInteger loopCount;

/**
 *  得到帧数据
 *
 *  @param index 索引
 *
 *  @return 图像数据
 */
- (UIImage *)getFrameWithIndex:(NSUInteger)index;

@end
