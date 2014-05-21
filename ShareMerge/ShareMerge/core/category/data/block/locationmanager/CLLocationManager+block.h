/**
 *  CLLocationManager+block.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-05-21.
 *
 *  CLLocationManager类别
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <CoreLocation/CoreLocation.h>
#import "ShareInstance.h"
#import "SM_BlocksProtocol.h"

@interface CLLocationManager (block)<CLLocationManagerDelegate>

SINGLETON_FOR_HEADER(CLLocationManager)

/**
 *  侦测设备的位置更新
 *
 *  @param filter        位置更新
 *  @param accuracy      精准度
 *  @param changedStatus 授权改变block
 *  @param located       位置改变block
 *  @param failed        失败block
 */
- (void)updateLocationWithDistanceFilter:(CLLocationDistance)filter
                      andDesiredAccuracy:(CLLocationAccuracy)accuracy
            didChangeAuthorizationStatus:(StatusBlock)changedStatus
                      didUpdateLocations:(ListBlock)located
                        didFailWithError:(FailureBlock)failed;

/**
 *  侦测设备的位置更新
 *
 *  @param filter        位置更新
 *  @param accuracy      精准度
 *  @param located       位置改变block
 *  @param failed        失败block
 */
- (void)updateLocationWithDistanceFilter:(CLLocationDistance)filter
                      andDesiredAccuracy:(CLLocationAccuracy)accuracy
                      didUpdateLocations:(ListBlock)located
                        didFailWithError:(FailureBlock)failed;

/**
 *  侦测设备的位置更新
 *
 *  @param located       位置改变block
 *  @param failed        失败block
 */
- (void)locationManagerDidUpdateLocations:(ListBlock)located
                         didFailWithError:(FailureBlock)failed;
@end
