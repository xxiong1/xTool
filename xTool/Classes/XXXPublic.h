//
//  Public.h
//  Gather
//
//  Created by XZP on 2019/6/18.
//  Copyright © 2019年 xv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XXXPublic_Method.h"
#import "UIView+XXXView.h"

//#ifdef DEBUG
//#define NSLog(FORMAT, ...) fprintf(stderr, "%s\t%s\n",[[NSString stringWithFormat: @"打印", ## __VA_ARGS__] UTF8String]  ,[[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String]);
//#else
//#define NSLog(FORMAT, ...) nil
//#endif

#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"第%d行：%s\n 页面及方法：%s \n\n",__LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String],__func__);
#else
#define NSLog(...)
#endif


//MARK: ===================== 屏幕 ========================
/// 屏幕尺寸
#define XScr_b [[UIScreen mainScreen] bounds]
/// 屏幕宽度
#define XScr_w XScr_b.size.width
/// 屏幕高度
#define XScr_h XScr_b.size.height


//MARK: ===================== 适配 ========================
/// iphone_X
#define XIs_ipx XScr_h>=812
#define XIs_ios11    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)


//MARK: ===================== 字符串处理 ========================
/// URL(字符串->URL)
#define XUrl(x) [NSURL URLWithString:x]
/// 字符串评接
#define XString(x,y) [NSString stringWithFormat:@"%@%@",x,y]
/// 字符串处理
#define XDataStr(Str) Str?Str:@""


//MARK: ===================== View处理 ========================
/// 添加图片
#define XImage(x) [UIImage imageNamed:x]
/// 添加字体
#define XFont(x) [UIFont systemFontOfSize:x]
/// 添加颜色 RGB
#define RGB(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
/// 添加颜色 灰度
#define RGBG(g) [UIColor colorWithRed:(g)/255.0f green:(g)/255.0f blue:(g)/255.0f alpha:1]
/// 添加颜色 RGBA
#define RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
/// 添加随机颜色
#define RGB_RandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]


//MARK: ===================== 其他 ========================
/// 系统版本
#define XSystemVersion [[[UIDevice currentDevice] systemVersion] floatValue]
/// 强弱应用
#define XWS(self) __weak typeof(self) weak##Self = self;
