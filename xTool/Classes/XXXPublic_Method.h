//
//  Public_Method.h
//  Gather
//
//  Created by XZP on 2019/6/18.
//  Copyright © 2019年 xzp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

//MARK: ===================== View深度处理 ========================
/// 生成纯色图片
CG_INLINE UIImage* imageWithSizeColor(UIColor* color , CGSize size){
    CGRect rect = CGRectMake(0.0f, 0.0f, size.width, size.height);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}


//MARK: ===================== 事件处理 ========================
/// 页面跳转
CG_INLINE void jump(id from , UIViewController* to){
    if ([from isKindOfClass:[UIViewController class]]) {
        UIViewController * vc = from;
        [vc.navigationController pushViewController:to animated:true];
    }else{
        NSLog(@"无法完成跳转");
    }
}
/// 利用Class进行页面跳转
CG_INLINE void jumpstr(id from , NSString * classname){
    Class css = NSClassFromString(classname);
    jump(from, [[css alloc]init]);
}


//MARK: ===================== 参数处理 ========================
/// 获取文本宽度
CG_INLINE CGFloat textwidth(NSString * str , UIFont *font){
    CGRect rect = [str boundingRectWithSize:CGSizeMake(MAXFLOAT, 20) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:font} context:nil];
    return rect.size.width;
}
/// 获取文本size
CG_INLINE CGSize textSize(NSString * str , UIFont *font){
    CGRect rect = [str boundingRectWithSize:CGSizeMake(MAXFLOAT, 20) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:font} context:nil];
    return rect.size;
}
/// 验证密码
CG_INLINE BOOL verpassword(NSString * pwd){
    NSString * ac = @"^(?![0-9]+$)(?![a-zA-Z]+$)[0-9A-Za-z]{6,16}$";
    NSPredicate * pred = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",ac];
    return [pred evaluateWithObject:pwd];
}
/// 验证邮箱
CG_INLINE BOOL veremail(NSString * maill){
    NSString * ac = @"^([a-z0-9_\\.-]+)@([\\da-z\\.-]+)\\.([a-z\\.]{2,6})$";
    NSPredicate * pred = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",ac];
    return [pred evaluateWithObject:maill];
}
/// 验证手机
CG_INLINE BOOL verphone(NSString * phone){
    NSString * ac = @"^(13[0-9]|14[579]|15[0-3,5-9]|16[6]|17[0135678]|18[0-9]|199)\\d{8}$";
    NSPredicate * pred = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",ac];
    return [pred evaluateWithObject:phone];
}
