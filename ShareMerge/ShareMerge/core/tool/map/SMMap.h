/**
 *  SMMap
 *  ShareMerge
 *
 *  Created by huangxp on 13-7-23.
 *
 *  地图助手函数
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface SMMap : NSObject

/**
 *  @brief  GPS在中国会有偏移，经过此函数可调整至真实位置
 *
 *  @param      coordinate      需要转换的GPS获取位置
 *
 *  @return                     得到一个经过偏移的位置
 */
+ (CLLocationCoordinate2D)revertOffset:(CLLocationCoordinate2D)coordinate;

/**
 *  @brief  位置信息从goole获取描述信息(调用者异步获取)
 *
 *  @param      coordinate      需要转换的GPS获取位置
 *
 *  @return                     得到坐标所对应的位置信息
 */
+ (NSString *)googleReverseGeocoderWithCoordinate:(CLLocationCoordinate2D)coordinate;

@end
