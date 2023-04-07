//
//  UIView+XXXView.h
//  shiku_im
//
//  Created by xzp on 2018/12/18.
//  Copyright © 2018年 Reese. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (XView)

@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (nonatomic) CGPoint origin;
@property (nonatomic) CGSize  size;

/**
 * 创建 button
 *
 * @param frame 按钮大小
 * @param title 按钮文本
 * @param color 按钮字体颜色
 * @param font 按钮字体大小
 * @return button 生成按钮
 *
 */
- (UIButton *)createButtonWithFrame:(CGRect)frame Title:(NSString *)title TitleColor:(UIColor *)color Font:(CGFloat)font;

/**
 * 创建 label
 *
 * @param frame Label大小
 * @param title Label文本
 * @param color Label字体颜色
 * @param font Label字体大小
 * @return label 生成Label
 */
- (UILabel *)createLabelWithFrame:(CGRect)frame Title:(NSString *)title TitleColor:(UIColor *)color Font:(CGFloat)font;

/**
 * 创建 textField
 *
 * @param frame textField大小
 * @param font textField字体大小
 * @return textField 生成textField
 */
- (UITextField *)createTextFieldWithFrame:(CGRect)frame placeholder:(NSString *)placeholder Font:(CGFloat)font;

/**
 * 创建 iamgeView
 *
 * @param frame iamgeView大小
 * @param image image 默认图片
 * @return iamgeView 生成iamgeView
 */
- (UIImageView *)creteImageViewWithFrame:(CGRect)frame imageNamed:(NSString *)image;

/**
 * 创建 UIView
 *
 * @param frame View大小
 * @return UIView 生成UIView
 */
- (UIView *)createXViewWithFrame:(CGRect)frame;
@end

NS_ASSUME_NONNULL_END
