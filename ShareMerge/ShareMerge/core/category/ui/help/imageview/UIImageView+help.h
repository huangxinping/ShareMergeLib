/**
 *  UIImageView+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 11-12-29.
 *
 *  扩展UIImageView (thanks kvImageView+help)
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 *
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIImageView (help)

/**
 *  @brief  快速创建
 *
 *  @param  image   图像
 *
 *  @return         对象
 */
+ (id)viewWithImage:(UIImage *)image;

/**
 *  @brief  快速创建
 *
 *  @param  imageName   图像名称（包含后缀名，在resouces中）
 *
 *  @return         对象
 */
+ (id)viewWithImageNamed:(NSString *)imageName;

/**
 *  @brief  圆角
 *
 *  @param  radius   弧度
 *
 */
- (void)cornerRadius:(CGFloat)radius;

/**
 *	@brief 载入图片从url
 *
 *	@param imageURL 图片url
 *
 */
- (void)loadImageAtURL:(NSURL *)imageURL;

/**
 *	@brief 载入图片从url
 *
 *	@param imageURL 图片url
 *  @param startBlock 开始block
 *	@param completionBlock 完成block
 *
 */
- (void)loadImageAtURL:(NSURL *)imageURL startBlock:(void(^)())startBlock completionBlock:(void (^)(UIImage *image))completionBlock;

/**
 *	@brief 载入图片从url
 *
 *	@param imageURL 图片url
 *	@param showActivityIndicator 是否显示activity
 *	@param indicatorStyle 指标风格
 *	@param loadingImage 载入图片
 *	@param notAvailableImage 不可用时图片
 *
 */
- (void)loadImageAtURL:(NSURL *)imageURL showActivityIndicator:(BOOL)showActivityIndicator activityIndicatorStyle:(UIActivityIndicatorViewStyle)indicatorStyle loadingImage:(UIImage *)loadingImage notAvailableImage:(UIImage *)notAvailableImage;

/**
 *	@brief 载入图片从url
 *
 *	@param imageURL 图片url
 *	@param cacheURL 缓存url（适用于图片的url总是会变化，但是图片实际就是一张，可以通过cacheURL辨识它）
 *	@param showActivityIndicator 是否显示activity
 *	@param indicatorStyle 指标风格
 *	@param loadingImage 载入图片
 *	@param notAvailableImage 不可用时的显示图片
 *
 */
- (void)loadImageAtURL:(NSURL *)imageURL cacheURL:(NSURL *)cacheURL showActivityIndicator:(BOOL)showActivityIndicator activityIndicatorStyle:(UIActivityIndicatorViewStyle)indicatorStyle loadingImage:(UIImage *)loadingImage notAvailableImage:(UIImage *)notAvailableImage;

/**
 *	@brief 取消下载，也会隐藏activity
 *
 *
 */
- (void)cancelImageDownload;

/**
 *	@brief 显示activity
 *
 *	@param indicatorStyle 指标方式
 *
 */
- (void)showActivityIndicatorWithStyle:(UIActivityIndicatorViewStyle)indicatorStyle;

/**
 *	@brief 隐藏activity
 *
 *
 */
- (void)hideActivityIndicator;


@end
