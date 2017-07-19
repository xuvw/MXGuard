//
//  MXGuard.h
//  MXGuard
//
//  Created by heke on 2017/7/16.
//  Copyright © 2017年 MX. All rights reserved.
//

#import <UIKit/UIKit.h>

#if __has_include(<MXGuard/MGGuardManager.h>)
//! Project version number for MXGuard.
FOUNDATION_EXPORT double MXGuardVersionNumber;

//! Project version string for MXGuard.
FOUNDATION_EXPORT const unsigned char MXGuardVersionString[];

#import <MXGuard/MGGuardManager.h>
#import <MXGuard/MGGuardConfig.h>

#import <MXGuard/NSObject+MGExts.h>

#import <MXGuard/NSArray+MGExts.h>
#import <MXGuard/NSMutableArray+MGExts.h>

#import <MXGuard/NSString+MGExts.h>
#import <MXGuard/NSMutableString+MGExts.h>

#import <MXGuard/NSDictionary+MGExts.h>
#import <MXGuard/NSMutableDictionary+MGExts.h>

#import <MXGuard/NSSet+MGExts.h>
#import <MXGuard/NSMutableSet+MGExts.h>

#import <MXGuard/NSNotificationCenter+MGExts.h>

#import <MXGuard/MGAnnotation.h>

//for test
#import <MXGuard/NSObject+MGTest1.h>
#import <MXGuard/MGTest2.h>

#else

#import "MGGuardManager.h"
#import "MGGuardConfig.h"

#import "NSObject+MGExts.h"

#import "NSArray+MGExts.h"
#import "NSMutableArray+MGExts.h"

#import "NSDictionary+MGExts.h"
#import "NSMutableDictionary+MGExts.h"

#import "NSSet+MGExts.h"
#import "NSMutableSet+MGExts.h"

#import "NSString+MGExts.h"
#import "NSMutableString+MGExts.h"

#import "NSNotificationCenter+MGExts.h"

#import "MGAnnotation.h"

#endif

//http://www.jianshu.com/p/e8d3465e3763
