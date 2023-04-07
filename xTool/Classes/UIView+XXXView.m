//
//  UIView+XXXView.m
//  shiku_im
//
//  Created by xzp on 2018/12/18.
//  Copyright © 2018年 Reese. All rights reserved.
//

#import "UIView+XXXView.h"
#import "XXXPublic.h"

@implementation UIView (XView)

- (CGFloat)left {
    return self.frame.origin.x;
}

- (void)setLeft:(CGFloat)x {
    CGRect frame = self.frame;
    frame.origin.x = x;
    self.frame = frame;
}

- (CGFloat)top {
    return self.frame.origin.y;
}

- (void)setTop:(CGFloat)y {
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame = frame;
}

- (CGFloat)right {
    return self.frame.origin.x + self.frame.size.width;
}

- (void)setRight:(CGFloat)right {
    CGRect frame = self.frame;
    frame.origin.x = right - frame.size.width;
    self.frame = frame;
}

- (CGFloat)bottom {
    return self.frame.origin.y + self.frame.size.height;
}

- (void)setBottom:(CGFloat)bottom {
    CGRect frame = self.frame;
    frame.origin.y = bottom - frame.size.height;
    self.frame = frame;
}

- (CGFloat)width {
    return self.frame.size.width;
}

- (void)setWidth:(CGFloat)width {
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}

- (CGFloat)height {
    return self.frame.size.height;
}

- (void)setHeight:(CGFloat)height {
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}

- (CGFloat)centerX {
    return self.center.x;
}

- (void)setCenterX:(CGFloat)centerX {
    self.center = CGPointMake(centerX, self.center.y);
}

- (CGFloat)centerY {
    return self.center.y;
}

- (void)setCenterY:(CGFloat)centerY {
    self.center = CGPointMake(self.center.x, centerY);
}

- (CGPoint)origin {
    return self.frame.origin;
}

- (void)setOrigin:(CGPoint)origin {
    CGRect frame = self.frame;
    frame.origin = origin;
    self.frame = frame;
}

- (CGSize)size {
    return self.frame.size;
}

- (void)setSize:(CGSize)size {
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}


// 创建按钮 button
- (UIButton *)createButtonWithFrame:(CGRect)frame Title:(NSString *)title TitleColor:(UIColor *)color Font:(CGFloat)font {
    UIButton * but = [[UIButton alloc] initWithFrame:frame];
    [but setTitle:XDataStr(title) forState:UIControlStateNormal];
    but.titleLabel.font = [UIFont systemFontOfSize:font];
    [but setTitleColor:color forState:UIControlStateNormal];
    [self addSubview:but];
    return but;
}
// 创建 Label
- (UILabel *)createLabelWithFrame:(CGRect)frame Title:(NSString *)title TitleColor:(UIColor *)color Font:(CGFloat)font {
    UILabel *label = [[UILabel alloc] initWithFrame:frame];
    label.text = XDataStr(title);
    label.textColor = color;
    label.font = [UIFont systemFontOfSize:font];
    [self addSubview:label];
    return label;
}
// 创建 TextField
- (UITextField *)createTextFieldWithFrame:(CGRect)frame placeholder:(NSString *)placeholder Font:(CGFloat)font {
    UITextField *textField = [[UITextField alloc] initWithFrame:frame];
    textField.placeholder = placeholder;
    textField.font = [UIFont systemFontOfSize:font];
    [self addSubview:textField];
    return textField;
}

// 创建 iamgeView
- (UIImageView *)creteImageViewWithFrame:(CGRect)frame imageNamed:(NSString *)image {
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:frame];
    imageView.image = [UIImage imageNamed:image];
    imageView.contentMode = UIViewContentModeScaleAspectFill;
    imageView.layer.masksToBounds = YES;
    [self addSubview:imageView];
    return imageView;
}

// 创建 View
- (UIView *)createXViewWithFrame:(CGRect)frame {
    UIView *xView = [[UIView alloc] initWithFrame:frame];
    [self addSubview:xView];
    return xView;
}

@end
