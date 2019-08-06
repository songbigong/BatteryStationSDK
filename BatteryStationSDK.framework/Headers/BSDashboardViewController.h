//
//  BSDashboardViewController.h
//  BatteryStation
//
//  Created by Joe on 10/04/2017.
//  Copyright © 2017 Joe. All rights reserved.
//

#import "STPortraitController.h"
#import <MAMapKit/MAMapView.h>

@class BSRootViewController;
@interface BSDashboardViewController : STPortraitController
@property (nonatomic, weak) MAMapView *aMapView;
@property (nonatomic) BOOL isMenuShowing;   // 是否显示左边菜单
@property (nonatomic, strong) BSRootViewController *rootCtrl;

- (void)didLogin;
- (void)didLogout;
- (void)didUserMenuHidden;

// check if there is an existed reserverd order. 有预订单时，不允许切换城市
- (BOOL)hasReservedOrder;

// 如果用高德地图，参数对象为：AMapPOI； 如果用系统地图，参数对象为：MKMapItem
- (void)updateBatteryStationAtPOI:(id)mapPOI;

// 当移动地图时，显示不支持换电服务城市的提示框
- (void)setCenterAnnotationViewPromptHidden:(BOOL)hidden;

@end
