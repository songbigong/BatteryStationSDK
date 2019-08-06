//
//  BSRootNavViewController.h
//  BatteryStation
//
//  Created by Joe on 05/06/2017.
//  Copyright © 2017 Joe. All rights reserved.
//

#import "STPortraitController.h"
#import "BSDashboardViewController.h"
#import "BSLoginViewController.h"

@interface BSRootViewController : STPortraitController

@property (nonatomic ,strong) BSDashboardViewController  *dashboardCtrl;

@property (nonatomic ,strong) BSLoginViewController      *LoginCtrl;

@property (nonatomic ,strong) UIViewController *currentCtrl;

@property (nonatomic, copy) NSString *currentCityAdCode;  // 当前定位城市adcode (只有第一次打开应用时解析)

- (void)showUserCenterMenu;
- (void)gotoLoginViewController;
- (void)disableRightSearchBtnAction;
- (void)enableRightSearchBtnAction;
@end
