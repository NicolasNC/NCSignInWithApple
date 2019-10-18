//
//  ViewController.m
//  NCSignInWithAppleDemo
//
//  Created by lishengfeng on 2019/10/18.
//  Copyright © 2019 Nicolas. All rights reserved.
//

#import "ViewController.h"
#import "HandleSignInWithAppleModel.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [HandleSignInWithAppleModel signInWithAppleWithButtonRect:CGRectMake(30, self.view.bounds.size.height - 180, self.view.bounds.size.width - 60, 100) withSupView:self.view withType:ASAuthorizationAppleIDButtonTypeDefault withStyle:ASAuthorizationAppleIDButtonStyleWhite success:^(ASAuthorization * _Nonnull authorization, NSString * _Nonnull user) {
        NSLog(@"授权成功");
    } failure:^(NSError * _Nonnull err) {
        NSLog(@"授权失败");
    }];
}


@end
