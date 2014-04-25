/**
 *  ShareMerge.h
 *  ShareMerge
 *
 *  Created by huangxp on 2013-07-05.
 *
 *  ShareMerge开发库
 *
 *  Copyright (c) www.sharemerge.com All rights reserved.
 */

/** @file */    // Doxygen marker

#import <Foundation/Foundation.h>
#import <ShareInstance.h>
#import <ShareMergeMacros.h>
#import <SMLanguageManager.h>

#define SM_VERSION @"1.0.0"

#import "core/SM_Core.h"
#import "log/SM_Log.h"

static NSString * ShareMergeLocalizedDocumentation(NSString *key, NSString *comment)
{
    NSBundle *majorBundle = [NSBundle bundleWithURL:[[NSBundle mainBundle] URLForResource:@"ShareMerge" withExtension:@"bundle"]];
    NSString *language = [NSLocale preferredLanguages][0];

    if (![language isEqualToString:[SMLanguageManager selectedLanguage]])
    {
        language = [SMLanguageManager selectedLanguage];
    }

    NSBundle *lanBundle = [NSBundle bundleWithPath:[majorBundle pathForResource:language ofType:@"lproj"]];
    NSString *description = [lanBundle localizedStringForKey:key value:comment table:nil];

    return description;
}

#define SMLocalizedString ShareMergeLocalizedDocumentation
