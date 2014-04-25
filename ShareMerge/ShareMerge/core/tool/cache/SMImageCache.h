/**
 *  SMImageCache
 *  ShareMerge
 *
 *  Created by huangxp on 2013-08-01.
 *
 *  图片缓存 （特别注意：不能缓存超过50MB的图片）
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ShareInstance.h"
#import "SMAsyncDownload.h"

@interface SMImageCache : NSObject {}

/**
 *	@brief 允许从本地文件夹中检测图片（如果允许，则imageURL必须要给本地磁盘路径，否则不能载入成功！）
 *
 *
 */
@property (nonatomic, assign) BOOL shouldCheckForLocalImages;

SINGLETON_FOR_HEADER(SMImageCache)

/**
 *	@brief 计算缓存文件大小（本地磁盘上）
 *
 *
 *	@returns 缓存大小
 */
+ (unsigned long long)calculateSizeCached;

/**
 *	@brief 清理储存的
 *
 *
 */
+ (void)clearCached;

/**
 *	@brief 导入图片从url
 *
 *	@param imageURL 图片url
 *  @param handler block
 *
 *	@returns 下载对象
 */
- (SMAsyncDownload *)loadImageAtURL:(NSURL *)imageURL withHandler:(void (^)(UIImage *image))handler;

/**
 *	@brief 导入图片从url
 *
 *	@param imageURL 图片url
 *	@param cacheURL 缓存url
 *  @param handler block
 *
 *	@returns 下载对象
 */
- (SMAsyncDownload *)loadImageAtURL:(NSURL *)imageURL cacheURL:(NSURL *)cacheURL withHandler:(void (^)(UIImage *image))handler;

/**
 *	@brief 导入图片从url
 *
 *	@param imageURL 图片url
 *	@param cacheURL 缓存url
 *	@param imageView 图像视图
 *  @param handler block
 *
 *	@returns 下载对象
 */
- (SMAsyncDownload *)loadImageAtURL:(NSURL *)imageURL cacheURL:(NSURL *)cacheURL imageView:(UIImageView *)imageView withHandler:(void (^)(UIImage *image))handler;

/**
 *	@brief 取消下载
 *
 *	@param imageView 图像视图
 *
 */
- (void)cancelDownloadForImageView:(UIImageView *)imageView;

/**
 *	@brief 检测是否anURL缓存过图片
 *
 *	@param anURL 图片url
 *
 *	@returns 如果缓存过，则返回实际UIImage，否则为nil
 */
- (UIImage *)cachedImageAtURL:(NSURL *)anURL;

/**
 *	@brief 刷新cache（跟上面的clear有区别，区别在于这个会将本地和内存中用于逻辑计算的变量值都删除掉）
 *
 *
 */
- (void)flush;

@end
