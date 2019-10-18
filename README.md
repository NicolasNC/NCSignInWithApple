快速集成苹果授权登陆(Sign in with Apple)
![demo效果图](https://upload-images.jianshu.io/upload_images/2609892-78aa0cafcc159dcc.gif?imageMogr2/auto-orient/strip)

[NCSignInWithApple](https://github.com/NicolasNC/NCSignInWithApple)

####前期工作
需要在苹果后台打开该选项，并且重新生成Profiles配置文件
或者
在Xcode11 Signing & Capabilities中添加Sign In With Apple
证书会自动更新
![Sign In With Apples设置](https://upload-images.jianshu.io/upload_images/2609892-64539736b669badf.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)


####集成
1.下载[NCSignInWithApple](https://github.com/NicolasNC/NCSignInWithApple)
导入文件夹NCSignInWithApple到工程

2.实现下面的代码
```
[HandleSignInWithAppleModel signInWithAppleWithButtonRect:CGRectMake(30, self.view.bounds.size.height - 180, self.view.bounds.size.width - 60, 100) withSupView:self.view withType:ASAuthorizationAppleIDButtonTypeDefault withStyle:ASAuthorizationAppleIDButtonStyleWhite success:^(ASAuthorization * _Nonnull authorization, NSString * _Nonnull user) {
        NSLog(@"授权成功");
    } failure:^(NSError * _Nonnull err) {
        NSLog(@"授权失败");
    }];
```
