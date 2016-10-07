//
//  UIButton+WF.h
//  WeiXin
//
//  Created by Yong Feng Guo on 14-11-18.
//  Copyright (c) 2014年 Fung. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (WF)

/**
 * 设置普通状态与高亮状态的背景图片
 */
- (void)setStretchedN_BG:(NSString *)nbg H_BG:(NSString *)hbg;
- (void)setN_BG:(NSString *)nbg H_BG:(NSString *)hbg;

@end
