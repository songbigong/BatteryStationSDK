//
//  STBlueNavigationController.h
//  Scooter
//
//  Created by mophie on 12/2/15.
//  Copyright © 2015 mophie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STBlueNavigationController : UINavigationController

@property(nonatomic,assign) BOOL doSupportLandscape;

- (void)configNavigationBarONColor:(UIColor *)color;

- (void)hiddenNavBootomLine;

- (void)showNavBootomLine;

- (void)configAppMainNavigationBar;

- (void)configWhiteNavigationBarWithShadow;

@end
