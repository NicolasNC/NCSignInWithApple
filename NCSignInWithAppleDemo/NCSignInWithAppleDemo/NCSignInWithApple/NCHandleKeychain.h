//
//  NCHandleKeychain.h
//  SignInWithApple
//
//  Created by lishengfeng on 2019/10/17.
//  Copyright © 2019 Nicolas. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NCHandleKeychain : NSObject
+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)delete:(NSString *)service;
@end

NS_ASSUME_NONNULL_END
