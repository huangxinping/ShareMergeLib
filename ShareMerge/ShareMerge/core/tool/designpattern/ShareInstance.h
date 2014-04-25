/**
 *  ShareInstance.h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-07-11
 *
 *  单例
 *
 *  Copyright (c) www.sharemerge.com. All rights reserved.
 */

/** @file */    // Doxygen marker

#ifndef ShareMerge_ShareInstance_h
#define ShareMerge_ShareInstance_h
#import "ShareMergeMacros.h"

#import <Foundation/Foundation.h>

#define SINGLETON_FOR_HEADER(CLASSNAME) + (CLASSNAME *)sharedInstance;

#define SINGLETON_FOR_CLASS(CLASSNAME)  static CLASSNAME * shared ## CLASSNAME = nil;

#if !HAS_ARC
#define SINGLETON_FOR_FUNCTION(CLASSNAME)                       \
\
+ (CLASSNAME *)sharedInstance                                    \
{                                                               \
static dispatch_once_t pred;                                \
dispatch_once(&pred, ^ {                                     \
shared ## CLASSNAME = [[CLASSNAME alloc] init];           \
});                                                         \
return shared ## CLASSNAME;                                   \
}                                                               \
\
+(id)allocWithZone : (NSZone *)zone                               \
{                                                               \
@synchronized(self) {                                       \
if (shared ## CLASSNAME == nil) {                             \
shared ## CLASSNAME = [super allocWithZone : zone];     \
return shared ## CLASSNAME;                           \
}                                                       \
}                                                           \
return nil;                                                 \
}                                                               \
\
-(id)copyWithZone : (NSZone *)zone                                \
{                                                               \
return self;                                                \
}                                                               \
\
-(id)retain                                                    \
{                                                               \
return self;                                                \
}                                                               \
\
-(unsigned)retainCount                                         \
{                                                               \
return UINT_MAX;                                            \
}                                                               \
\
-(oneway void)release                                          \
{                                                               \
}                                                               \
\
-(id)autorelease                                               \
{                                                               \
return self;                                                \
}
#else // if !HAS_ARC
#define SINGLETON_FOR_FUNCTION(CLASSNAME)                       \
\
+ (CLASSNAME *)sharedInstance                                    \
{                                                               \
static dispatch_once_t pred;                                \
dispatch_once(&pred, ^ {                                     \
shared ## CLASSNAME = [[CLASSNAME alloc] init];           \
});                                                         \
return shared ## CLASSNAME;                                   \
}
#endif // if !HAS_ARC

#endif // ifndef ShareMerge_ShareInstance_h
