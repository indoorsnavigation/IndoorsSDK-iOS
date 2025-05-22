//
//  INAlertManager.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INAlertManager_
#define _INAlertManager_

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface INAlertManager : NSObject

+ (void)showAlertWithTitle:(NSString *)title
                andMessage:(NSString *)message;

+ (void)showAlertWithTitle:(NSString *)title
                   message:(NSString *)message
        fromViewController:(UIViewController*)viewController
        andCompletionBlock:(void (^)(id object))completionBlock;

+ (void)showAlertWithTitle:(NSString *)title
                   message:(NSString*)message
             withTextField:(BOOL)useTextField
        fromViewController:(UIViewController*)viewController
            positiveString:(NSString*)positiveString
            negativeString:(NSString*)negativeString
   positiveCompletionBlock:(void (^)(id object))positiveCompletionBlock
andNegativeCompletionBlock:(void (^)())negativeCompletionBlock;

@end

#endif
