//
//  UIImage+Scaled.h
//  FSImageScaled
//
//  Created by 王方帅 on 15/9/23.
//  Copyright (c) 2015年 王方帅. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Scaled)

//UIImage缩放到固定的尺寸，新图片通过返回值返回
-(UIImage *)imageScaledToSize:(CGSize)newSize;

//UIImage按比例将宽度高度差异小的一方缩放到指定的大小，然后截取另一方，使其跟newSize一样大
-(UIImage *)imageScaledInterceptToSize:(CGSize)newSize;

//UIImage缩放到固定的尺寸，高度宽度按照大的一边算
-(UIImage *)imageScaledToBigFixedSize:(CGSize)newSize;

//UIImage尺寸不足添黑边处理
-(UIImage *)imageBlackBackGroundToSize:(CGSize)newSize;

//UIImage图案填充到指定size
-(UIImage *)imageFillToSize:(CGSize)newSize;

//UIImage左右两点拉伸
-(UIImage *)imageStretchToSize:(CGSize)newSize withX1:(float)x1 withX2:(float)x2 y:(float)y;

@end
