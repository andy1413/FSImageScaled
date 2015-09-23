//
//  ViewController.m
//  FSImageScaled
//
//  Created by 王方帅 on 15/9/23.
//  Copyright (c) 2015年 王方帅. All rights reserved.
//

#import "ViewController.h"
#import "UIImage+Scaled.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    _iconImageView.image = [[UIImage imageNamed:@"1.jpg"] imageScaledInterceptToSize:CGSizeMake(_iconImageView.frame.size.width*2, _iconImageView.frame.size.height*2)];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
