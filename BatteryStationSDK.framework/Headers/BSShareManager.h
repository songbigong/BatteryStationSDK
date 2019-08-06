//
//  BSShareManager.h
//  BatteryStation
//
//  Created by corki on 2018/6/12.
//  Copyright © 2018年 Joe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WechatOpenSDK/WXApi.h>
//#import "WXApi.h"
#import <TencentOpenAPI/TencentOAuth.h>
#import <TencentOpenAPI/QQApiInterfaceObject.h>
#import <TencentOpenAPI/QQApiInterface.h>

//typedef void (^ShareCompletedBlock)(BOOL result, NSDictionary * userInfo);

@interface BSShareManager : NSObject  <WXApiDelegate, TencentSessionDelegate, TencentLoginDelegate>

+ (instancetype)shareInstance;

//在腾讯开放平台注册app
- (void)registerAppAtTencent;

//分享文本到微信
- (void)shareTextToWechatWithScene:(int)scene  content:(NSString *)content;

//分享图片到微信
- (void)shareImageToWechatWithScene:(int)scene title:(NSString *)title  imageData:(NSData *)imageData;

//分享网页到微信
- (void)shareWebpageToWechatWithScene:(int)scene  title:(NSString *)title  description:(NSString *)description url:(NSString *)url previewImage:(UIImage *)image;

//分享文本到0、QQ 1、QQZone
- (void)shareTextToTencentWithType:(int)type content:(NSString*)content;

//分享图片到0、QQ 1、QQZone
- (void)shareImageToTencentWithType:(int)type title:(NSString *)title  imageData:(NSData *)imageData;

//分享网页到0、QQ 1、QQZone
- (void)shareWebpageToTencentWithType:(int)type  title:(NSString *)title description:(NSString *)description url:(NSString *)url previewImage:(UIImage *)image;

- (void)didReceiveTencentUrl:(NSURL *)url;


@end
