/**
 *  ShareMergeMacros.h
 *  ShareMerge
 *
 *  Created by huangxp on 13-7-11.
 *
 *  宏
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#ifndef ShareMerge_ShareMergeMacros_h
#define ShareMerge_ShareMergeMacros_h

/* 是否ARC可用 */
#if __has_feature(objc_arc)
    #define HAS_ARC   1
#endif

/* 是否block可用 */
#if NS_BLOCKS_AVAILABLE
    #define HAS_BLOCK 1
#endif

/* 输出 */
#ifdef DEBUG
#define SMLog(...)                 do { printf("\n\n------------------------------ShareMerge------------------------------\n"); printf("文件：%s\n函数：%s\n行号：%u\n", __FILE__, __FUNCTION__, __LINE__); NSLog(__VA_ARGS__); printf("------------------------------ShareMerge------------------------------\n\n"); } while (0)
#else
#define SMLog(...)                 do {} while (0)
#endif

/* 安全释放 */
#define SM_INVALIDATE_TIMER(timer) { [timer invalidate]; timer = nil; }
#define SM_RELEASE_CF_SAFELY(ref)  { if (nil != (ref)) { CFRelease(ref); ref = nil; } }
#define SM_FREE_SAFELY(pointer)    { if (NULL != pointer) { free(pointer); pointer = NULL } }

/* 系统判断 */
#define IS_IPHONE          (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPAD            (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPOD            ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])
#define IS_IPHONE_5_SCREEN [[UIScreen mainScreen] bounds].size.height >= 568.0f && [[UIScreen mainScreen] bounds].size.height < 1024.0f
#define IS_IPHONE_4_SCREEN [[UIScreen mainScreen] bounds].size.height >= 480.0f && [[UIScreen mainScreen] bounds].size.height < 568.0f

/* 格式 */
#define SAFE_FORMAT_OBJECT(object)          [object isEqual :[NSNull null]] ? @"" :[NSString stringWithFormat:@"%@", object]
#define SAFE_FORMAT_INT(int)                [NSString stringWithFormat : @"%d", int]
#define SAFE_FORMAT_FLOAT(float, reserve)   [NSString stringWithFormat : @"%.%df", float, reserve]

/* 导航 */
#define SHOW_NAVIGATIONBAR(yesOrNo)         self.navigationController.navigationBarHidden = !yesOrNo

/* 初始化 */
#define DEFAULT_NEW_OBJECT(obj)             [[obj alloc] init]
#if !HAS_ARC
#define DEFAULT_NEW_OBJECT_AUTORELEASE(obj) [[[obj alloc] init] autorelease]
#else
#define DEFAULT_NEW_OBJECT_AUTORELEASE(obj) DEFAULT_NEW_OBJECT(obj)
#endif

/* 常用 */
#define ccr(t, l, w, h)                     CGRectMake(t, l, w, h)
#define ccp(x, y)                           CGPointMake(x, y)
#define ccs(w, h)                           CGSizeMake(w, h)
#define ccei(t, l, b, r)                    UIEdgeInsetsMake(t, l, b, r)

/* ARC兼容 */
#if !defined(__clang__) || __clang_major__ < 3
#ifndef __bridge
    #define __bridge
#endif

#ifndef __bridge_retain
    #define __bridge_retain
#endif

#ifndef __bridge_retained
    #define __bridge_retained
#endif

#ifndef __autoreleasing
    #define __autoreleasing
#endif

#ifndef __strong
    #define __strong
#endif

#ifndef __unsafe_unretained
    #define __unsafe_unretained
#endif

#ifndef __weak
    #define __weak
#endif

#endif // if !defined(__clang__) || __clang_major__ < 3

#if HAS_ARC
    #define SM_ATTRIBUTE_BRIDGE    __bridge
    #define SM_ATTRIBUTE_UNSAFE    __unsafe_unretained
    #define SM_ATTRIBUTE_ASSIGN    __weak
    #define SM_ATTRIBUTE_RETAIN    __strong

    #define SM_BLOCK_RETAIN_CIRCLE __weak

    #define SM_PROPERTY_RETAIN     strong
    #define SM_PROPERTY_ASSIGN     weak
    #define SM_PROPERTY_COPY       copy

    #define SM_RETAIN(x)                    (x)
    #define SM_RELEASE(x)                   ({ (x) = nil; })
    #define SM_AUTORELEASE(x)               (x)

    #define SM_BLOCK_COPY(x)                (x)
    #define SM_BLOCK_RELEASE(x)

    #define BLOCK_WEAK_GUIDE(class, source) __weak class * w ## source = source

    #define SM_SUPER_DEALLOC()

    #define SM_AUTORELEASE_POOL_START()     @autoreleasepool {
    #define SM_AUTORELEASE_POOL_END()       }

#else /* if HAS_ARC */
    #define SM_ATTRIBUTE_BRIDGE
    #define SM_ATTRIBUTE_UNSAFE
    #define SM_ATTRIBUTE_ASSIGN
    #define SM_ATTRIBUTE_RETAIN

    #define SM_BLOCK_RETAIN_CIRCLE __block

    #define SM_PROPERTY_RETAIN     retain
    #define SM_PROPERTY_ASSIGN     assign
    #define SM_PROPERTY_COPY       copy

    #define SM_RETAIN(x)                ([(x)retain])
    #define SM_RELEASE(x)               ({ if (x) { [x release]; (x) = nil; } })
    #define SM_AUTORELEASE(x)           ([(x)autorelease])

    #define SM_BLOCK_COPY(x)            (Block_copy(x))
    #define SM_BLOCK_RELEASE(x)         (Block_release(x))

    #define SM_SUPER_DEALLOC()          ([super dealloc])

    #define SM_AUTORELEASE_POOL_START() NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
    #define SM_AUTORELEASE_POOL_END()   [pool release];

#endif // if HAS_ARC

#endif // ifndef ShareMerge_ShareMergeMacros_h
