//
//  STPortraitController.h
//  Scooter
//
//  Created by ZQQ on 16/1/26.
//  Copyright © 2016年 mophie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface STPortraitController : UIViewController

- (UINavigationBar *)customNavigationBar;
- (void)setCustomizeBackBarItemForTarget:(UIViewController *)target action:(SEL)backAction;

//网络连接View方法
- (void)setNetworkErrorViewHidden:(BOOL)hidden;
- (void)setNetworkErrorViewCenterTopOffset:(CGFloat)offset;

//数据为空View方法
- (void)setDataEmptyViewHidden:(BOOL)hidden;
- (void)setDataEmptyViewImg:(NSString *)imgName promptText:(NSString *)text topOffset:(CGFloat)offset;
-( void)setDataEmptyViewOprBtnTitle:(NSString *)title hidden:(BOOL)isHidden;
- (void)back;
@property(nonatomic, assign)   BOOL     isPageLogCancel;
@property(nonatomic, assign)   BOOL     isGesturesBackDenied;

@end
