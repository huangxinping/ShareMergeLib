/**
 *  SMDeviceManager.h
 *  ShareMerge
 *
 *  Created by huangxp on 2014-03-27.
 *
 *  设备管家
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker
#import <Foundation/Foundation.h>

typedef enum
{
    SMDeviceModelUnknown = 0,
    SMDeviceModeliPhoneSimulator,
    SMDeviceModeliPadSimulator,
    SMDeviceModeliPhone,
    SMDeviceModeliPhone3G,
    SMDeviceModeliPhone3GS,
    SMDeviceModeliPhone4,
    SMDeviceModeliPhone4S,
    SMDeviceModeliPhone5,
    SMDeviceModeliPad,
    SMDeviceModeliPad2,
    SMDeviceModeliPad3,
    SMDeviceModeliPad4,
    SMDeviceModeliPadMini,
    SMDeviceModeliPod,
    SMDeviceModeliPod2,
    SMDeviceModeliPod3,
    SMDeviceModeliPod4,
    SMDeviceModeliPod5,
} SMDeviceModel;

typedef enum
{
    SMDeviceFamilyUnknown = 0,
    SMDeviceFamilyiPhone,
    SMDeviceFamilyiPad,
    SMDeviceFamilyiPod,
    SMDeviceFamilySimulator,
} SMDeviceFamily;

typedef enum
{
    SMDeviceDisplayUnknown = 0,
    SMDeviceDisplayiPad,
    SMDeviceDisplayiPhone35Inch,
    SMDeviceDisplayiPhone4Inch,
} SMDeviceDisplay;

@interface SMDeviceManager : NSObject

@property (strong, atomic, readonly) NSString *rawSystemInfoString;
@property (strong, atomic, readonly) NSString *modelString;
@property (assign, atomic, readonly) SMDeviceModel model;
@property (assign, atomic, readonly) SMDeviceFamily family;
@property (assign, atomic, readonly) SMDeviceDisplay display;
@property (assign, atomic, readonly) NSUInteger majorModelNumber;
@property (assign, atomic, readonly) NSUInteger minorModelNumber;
@property (assign, atomic, readonly) NSUInteger majoriOSVersion;
@property (assign, atomic, readonly) NSUInteger minoriOSVersion;

+ (SMDeviceManager *)deviceManager;

@end
