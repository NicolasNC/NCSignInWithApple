//
//  HandleSignInWithAppleModel.h
//  SignInWithApple
//
//  Created by lishengfeng on 2019/10/18.
//  Copyright © 2019 Nicolas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AuthenticationServices/AuthenticationServices.h>
NS_ASSUME_NONNULL_BEGIN

@interface HandleSignInWithAppleModel : NSObject
+ (HandleSignInWithAppleModel *)defaultSignInWithAppleModel;
+ (void)attempDealloc;
+ (void)signInWithAppleWithButtonRect:(CGRect)rect
        withSupView:(UIView *)superView                    withType:(ASAuthorizationAppleIDButtonType)type withStyle:(ASAuthorizationAppleIDButtonStyle)style success:(void(^)(ASAuthorization *authorization,NSString *user))success
    failure:(void (^)(NSError *err))failure;
@end

NS_ASSUME_NONNULL_END
