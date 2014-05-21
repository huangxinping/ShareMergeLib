/**
 *  UIDevice+jailbroken.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-3-28.
 *
 *  越狱机器获取
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <UIKit/UIKit.h>

@interface UIDevice (jailbroken)

/**
 *  @brief  IMEI
 *
 *  @return IMEI
 */
+ (NSString *)IMEI;

/**
 *  @brief  设备的mobile Identifier，可能跟IMEI一样，但是CDMA制式可能不一样
 *
 *  @return CMID
 */
+ (NSString *)CMID;

/**
 *  @brief  ICCID
 *
 *  @return ICCID
 */
+ (NSString *)ICCID;

/**
 *  @brief  IMSI
 *
 *  @return IMSI
 */
+ (NSString *)IMSI;

/**
 *  @brief  设备的Subscriber Identifier，可能跟IMSI一样，但是CDMA制式可能不一样
 *
 *  @return CSID
 */
+ (NSString *)CSID;

/**
 *  @brief  仅仅CDMA制式有
 *
 *  @return MEID
 */
+ (NSString *)MEID;

/**
 *  @brief  UDID
 *
 *  @return UDID
 */
+ (NSString *)UDID;

/**
 *  @brief  序列号
 *
 *  @return 号码
 */
+ (NSString *)serialNumber;

/**
 *  @brief  网卡地址
 *
 *  @return 地址
 */
+ (NSString *)wifiAddress;

/**
 *  @brief  蓝牙地址
 *
 *  @return 地址
 */
+ (NSString *)bluetoothAddress;

/**
 *  @brief  cpu架构
 *
 *  @return 如 @"armv6", @"armv7", @"i486"
 */
+ (NSString *)cpuArchitecture;

/**
 *  @brief  设备型号
 *
 *  @return 如 @"iPhone3,1", @"iPod4,1", @"x86_64"
 */
+ (NSString *)productType;

/**
 *  @brief  飞行模式
 *
 *  @return 是否开启
 */
+ (BOOL)airplaneMode;

/**
 *  @brief  得到运营商名称
 *
 *  @return 运营商名称
 */
+ (NSString *)getCarrier;

@end
