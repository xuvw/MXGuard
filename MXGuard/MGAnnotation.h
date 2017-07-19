//
//  MGAnnotation.h
//  MXGuard
//
//  Created by heke on 2017/7/19.
//  Copyright © 2017年 MX. All rights reserved.
//

#import <Foundation/Foundation.h>

#define MG_Deprecated                       __attribute__((deprecated))
#define MG_Unavailable                      __attribute__((unavailable))
#define MG_NSObject                         __attribute__((NSObject))
#define MG_Designated_initializer           __attribute__((objc_designated_initializer))
#define MG_Constructor                      __attribute__((constructor))
#define MG_Destructor                       __attribute__((destructor))
#define MG_Subclassing_restricted           __attribute__((objc_subclassing_restricted))
#define MG_Requires_super                   __attribute__((objc_requires_super))
#define MG_Boxable                          __attribute__((objc_boxable))
#define MG_Enable_if(booleanEpr, info)      __attribute__((enable_if(booleanEpr, info)))
#define MG_Cleanup(funcName,block)          __attribute__((cleanup(funcName)))=block
#define MG_Overloadable                     __attribute__((overloadable))
#define MG_Runtime_name(classRuntimeName)   __attribute__((objc_runtime_name(classRuntimeName)))

@interface MGAnnotation : NSObject

@end
