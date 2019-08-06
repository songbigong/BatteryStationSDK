//
//  BatteryStationSDK.h
//  BatteryStationSDK
//
//  Created by immotor on 2019/7/22.
//  Copyright © 2019 immotor. All rights reserved.
//

#import <Foundation/Foundation.h>
#ifdef NSFoundationVersionNumber_iOS_9_x_Max
#import <UserNotifications/UserNotifications.h>
#endif

@interface BatteryStationSDK : NSObject
@property (nonatomic, strong) NSString *APIKey_gaode;//高德地图绑定bundle id得到的Key
+ (instancetype)sharedBatteryStationSDK;

- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillTerminate;
- (BOOL)applicationopenURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;
- (void)applicationdidRegisterUserNotificationSettings;
- (void)applicationdidRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)applicationdidFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
- (void)applicationdidReceiveRemoteNotification:(NSDictionary *)userInfo;
// iOS 10收到通知
- (void)userNotificationCenter:(UNUserNotificationCenter *)center willPresentNotification:(UNNotification *)notification withCompletionHandler:(void (^)(UNNotificationPresentationOptions options))completionHandler;
// 通知的点击事件
- (void)userNotificationCenter:(UNUserNotificationCenter *)center didReceiveNotificationResponse:(UNNotificationResponse *)response withCompletionHandler:(void(^)())completionHandler;
@end

#import <BatteryStationSDK/BSLoginViewController.h>
#import <BatteryStationSDK/BSRootViewController.h>
#import <BatteryStationSDK/STBlueNavigationController.h>
#import <BatteryStationSDK/STPortraitController.h>
#import <BatteryStationSDK/BSShareManager.h>

