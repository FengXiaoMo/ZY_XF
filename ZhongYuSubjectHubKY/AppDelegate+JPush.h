//
//  AppDelegate+JPush.h
//  ZhongYuSubjectHubKY
//
//  Created by zhongyu on 16/5/21.
//  Copyright © 2016年 RyeWhiskey. All rights reserved.
//

#import "AppDelegate.h"
#import "JPUSHService.h"
#import "RWTabBarViewController.h"

#define JPUSH_KEY @"0525e547b4dfdfa512e7f634"

@interface AppDelegate (JPush)

- (void)initJPushWithLaunchOptions:(NSDictionary *) launchOptions;

- (void)examinePushInformation;

@end
