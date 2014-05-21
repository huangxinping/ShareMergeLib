/**
 *  UIDevice+help.h
 *  ShareMerge
 *
 *  Created by huangxp on 12-2-28.
 *
 *  扩展UIDevice
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SystemConfiguration/SCNetworkReachability.h>
#import <CoreLocation/CoreLocation.h>

#define IS_CONNECTED_NETWORK   [UIDevice connectedToNetwork]
#define IS_UNCONNECTED_NETWORK !IS_CONNECTED_NETWORK

@interface UIDevice (help)

/**
 *  @brief  得到当前设备的MAC地址
 *
 *  @param delimiter 分割符（例如：0x-2b-3c-4t  如果delimiter为"-"）
 *
 *  @return MAC地址字串
 */
+ (NSString *)macAddress:(NSString *)delimiter;

/**
 *  @brief  得到当前设备的MAC地址，使用“-”做为分隔符
 *
 *  @return MAC地址字串
 */
+ (NSString *)uniqueDeviceIdentifier;

/**
 *  @brief  是否当前设备为模拟器
 *
 *  @return 是否为模拟器
 */
+ (BOOL)isSimulator;

/**
 *  @brief  检测网络连接状态
 *
 *  @param  flags 检测状态标记
 *
 *  @return 是否已连接
 */
+ (BOOL)checkConnection:(SCNetworkReachabilityFlags *)flags;

/**
 *  @brief  检测是否设备已连接网络
 *
 *  @return 是否已连接
 */
+ (BOOL)connectedToNetwork;

/**
 *  @brief  检测是否设备已连接WIFI
 *
 *  @return 是否已连接WIFI
 */
+ (BOOL)connectedToWiFi;

/**
 *  @brief  提取本地局域网IP地址
 *
 *  @return 局域网IP地址
 */
+ (NSString *)localIPAddress;

/**
 *  @brief  设备名称
 *
 *  @return 名称字串
 */
+ (NSString *)name;

/**
 *  @brief  设备型号
 *
 *  @return 型号字串
 */
+ (NSString *)model;

/**
 *  @brief  系统版本型号
 *
 *  @return 版本字串
 */
+ (NSString *)systemVersion;

/**
 *  @brief  系统版本名称
 *
 *  @return 版本名称字串
 */
+ (NSString *)systemName;

/**
 *  @brief  APP版本
 *
 *  @return APP版本字串
 */
+ (NSString *)appVersion;

/**
 *  @brief  APP组织标识
 *
 *  @return 标识字串
 */
+ (NSString *)bundleIdentifier;

/**
 *  @brief  设备默认语言
 *
 *  @return 语言字串
 */
+ (NSString *)defaultLanguage;

/**
 *  @brief  是否支持照相机
 *
 *  @return 是否支持
 */
+ (BOOL)cameraSupported;

/**
 *  @brief  是否支持相册
 *
 *  @return 是否支持
 */
+ (BOOL)photoLibrarySupported;

/**
 *  @brief  是否支持相簿
 *
 *  @return 是否支持
 */
+ (BOOL)photoAlbumSupported;

/**
 *  @brief  是否支持闪光灯
 *
 *  @return 是否支持
 */
+ (BOOL)flashSupported;

/**
 *  @brief  是否支持前置摄像头
 *
 *  @return 是否支持
 */
+ (BOOL)frontCameraSupported;

/**
 *  @brief  是否支持拍摄视频
 *
 *  @return 是否支持
 */
+ (BOOL)videoCameraSupported;

/**
 *  @brief  是否支持指南针
 *
 *  @return 是否支持
 */
+ (BOOL)compassSupported;

/**
 *  @brief  是否支持陀螺仪
 *
 *  @return 是否支持
 */
+ (BOOL)gyroscopeSupported;

/**
 *  @brief  是否支持麦克风
 *
 *  @return 是否支持
 */
+ (BOOL)microphoneSupported;

/**
 *  @brief  是否支持retina显示
 *
 *  @return 是否支持
 */
+ (BOOL)retinaDisplaySupported;

/**
 *  @brief  是否支持后台
 *
 *  @return 是否支持
 */
+ (BOOL)multitaskingSupported;

/**
 *  @brief  是否支持打电话
 *
 *  @return 是否支持
 */
+ (BOOL)phoneCallSupported;

/**
 *  @brief  是否支持发送短信
 *
 *  @return 是否支持
 */
+ (BOOL)sendSMSSupported;

/**
 *  @brief  是否支持发送邮件
 *
 *  @return 是否支持
 */
+ (BOOL)sendEmailSupported;

/**
 *  @brief  是否设备版本匹配参数version
 *
 *  @param  version        匹配版本号
 *
 *  @return 是否匹配
 */
+ (BOOL)systemVersionEqualTo:(NSString *)version;

/**
 *  @brief  是否设备版本大于匹配参数version
 *
 *  @param  version        匹配版本号
 *
 *  @return 是否匹配
 */
+ (BOOL)systemVersionGreaterThan:(NSString *)version;

/**
 *  @brief  是否设备版本大于等于匹配参数version
 *
 *  @param  version        匹配版本号
 *
 *  @return 是否匹配
 */
+ (BOOL)systemVersionGreaterThanAndEqualTo:(NSString *)version;

/**
 *  @brief  是否设备版本小于匹配参数version
 *
 *  @param  version        匹配版本号
 *
 *  @return 是否匹配
 */
+ (BOOL)systemVersionLessThan:(NSString *)version;

/**
 *  @brief  是否设备版本小于等于匹配参数version
 *
 *  @param  version        匹配版本号
 *
 *  @return 是否匹配
 */
+ (BOOL)systemVersionLessThanAndEqualTo:(NSString *)version;

/**
 *  @brief  活动内存
 *
 *  @return 大小
 */
+ (uint64_t)activeMemory;

/**
 *  @brief  非活动内存
 *
 *  @return 大小
 */
+ (uint64_t)inactiveMemory;

/**
 *  @brief  冻结内存
 *
 *  @return 大小
 */
+ (uint64_t)wiredMemory;

/**
 *  @brief  自由内存
 *
 *  @return 大小
 */
+ (uint64_t)freeMemory;

/**
 *  @brief  被使用的内存
 *
 *  @return 大小
 */
+ (uint64_t)usedMemory;

/**
 *  @brief  总共内存
 *
 *  @return 大小
 */
+ (uint64_t)totalMemory;

@end
