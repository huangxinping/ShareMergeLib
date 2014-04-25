/**
 *  UIImage+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 12-5-26.
 *
 *  扩展UIImage
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

/** 保存时可选类型 */
typedef enum _SGImageType
{
    SGImageTypePNG,
    SGImageTypeJPEG,
    SGImageTypeGIF,
    SGImageTypeBMP,
    SGImageTypeTIFF,
}SGImageType;

@interface UIImage (help)

/** 宽度 */
@property (nonatomic, readonly) CGFloat width;

/** 高度 */
@property (nonatomic, readonly) CGFloat height;

/**
 *  @brief  能根据当前设备型号载入不同的图片(例如：iphone5则载入xxx-568h@2x.png，iphone4s载入xxx@2x.png，3gs载入xxx.png) - 优先级 1、xxx-568h@2x.png  2、xxx@2x.png  3、xxx.png
 *
 *  @param  name        在resources中的名称
 *
 *  @return             对象
 */
+ (UIImage *)imageNamedSupportIphone5:(NSString *)name;

/**
 *  @brief  编码成base64
 *
 *  @return             base64编码
 */
- (NSString*)base64Encoding;

/**
 *  @brief  切割图像
 *
 *  @param  bounds  切割矩形
 *
 *  @return         切割后的图像
 */
- (UIImage *)croppedImage:(CGRect)bounds;

/**
 *  @brief  调整大小（调整插值使用：kCGInterpolationHigh）
 *
 *  @param  size            调整后的矩形
 *
 *  @return         调整后的图像
 */
- (UIImage *)resizedImage:(CGSize)size;

/**
 *  @brief  调整大小
 *
 *  @param  size            调整后的矩形
 *  @param  quality         调整大小插值
 *
 *  @return         调整后的图像
 */
- (UIImage *)resizedImage:(CGSize)size interpolationQuality:(CGInterpolationQuality)quality;

/**
 *  @brief  圆角图像
 *
 *  @param  cornerSize  圆角大小
 *
 *  @return         调整后的图像
 */
- (UIImage *)roundedCornerImage:(NSInteger)cornerSize;

/**
 *  @brief  反射图像
 *
 *  @param  reflectionFraction  反射比率
 *
 *  @return         反射后的图像
 */
- (UIImage *)reflectedImage:(CGFloat)reflectionFraction;

/**
 *  @brief  遮罩合成图像
 *
 *  @param  mask    遮罩图像
 *
 *  @return         遮罩合成后的图像
 */
- (UIImage *)maskWithImage:(UIImage *)mask;

/**
 *  @brief  旋转图像（角度）
 *
 *  @param  degrees  角度
 *
 *  @return         旋转后的图像
 */
- (UIImage *)rotateInDegrees:(CGFloat)degrees;

/**
 *  @brief  旋转图像（弧度）
 *
 *  @param  radians  弧度值
 *
 *  @return         旋转后的图像
 */
- (UIImage *)rotateInRadians:(CGFloat)radians;

/**
 *  @brief  垂直翻转
 *
 *  @return         翻转后的图像
 */
- (UIImage *)verticalFlip;

/**
 *  @brief  水平翻转
 *
 *  @return         翻转后的图像
 */
- (UIImage *)horizontalFlip;

/**
 *  @brief  保存图像
 *
 *  @param  path                    路径
 *  @param  type                    保存图像类型
 *  @param  fillColor               背景颜色
 *  @param  compressionQuality      压缩质量（1为不压缩，0为完全压缩）
 *
 *  @return         是否成功
 */
- (BOOL)saveToPath:(NSString *)path type:(SGImageType)type backgroundFillColor:(UIColor *)fillColor compressionQuality:(CGFloat)quality;

/**
 *  @brief  保存图像（使用png，背景颜色为空）
 *
 *  @param  path                路径
 *  @param  compressionQuality  压缩质量（1为不压缩，0为完全压缩）
 *
 *  @return         是否成功
 */
- (BOOL)saveToPath:(NSString *)path compressionQuality:(CGFloat)quality;

/**
 *  @brief  保存图像（使用png，背景颜色为空，质量为最高）
 *
 *  @param  path                路径（使用png，背景颜色为空）
 *
 *  @return         是否成功
 */
- (BOOL)saveToPath:(NSString *)path;

/**
 *  @brief  保存到相簿
 *
 *  @return         反转图像
 */
- (BOOL)saveToPhotosAlbum;

@end
