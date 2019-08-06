//
//  BSLoginViewController.h
//  BatteryStation
//
//  Created by Joe on 12/05/2017.
//  Copyright © 2017 Joe. All rights reserved.
//

#import "STPortraitController.h"

@protocol LoginViewControllerDelegate;

@interface BSLoginViewController : STPortraitController

@property (nonatomic, weak) id<LoginViewControllerDelegate> delegate;

@property (nonatomic, assign) BOOL isFromAnonymous;     //是否是匿名登录 YES：匿名

@end

@protocol LoginViewControllerDelegate <NSObject>

@optional
- (void)didLoginSuccessfully:(id)sender;

@end
