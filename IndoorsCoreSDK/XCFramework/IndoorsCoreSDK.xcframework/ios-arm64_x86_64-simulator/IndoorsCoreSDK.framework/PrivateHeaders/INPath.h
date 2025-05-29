//
//  INPath.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INPath_
#define _INPath_

#import <UIKit/UIKit.h>

@interface INPath : NSObject

+ (NSString*)wifiIconPath;
+ (NSString*)bluetoothIconPath;
+ (NSString*)cellIconPath;
+ (NSString*)playIconPath;
+ (NSString*)panoramaIconPath;
+ (NSString*)arIconPath;
+ (NSString*)infomatIconPath;
+ (NSString*)tearIconPath;
+ (NSString*)arrowIconPath;
+ (NSString*)finishIconPath;

+ (UIBezierPath*)dontForgetThisShit;

+ (NSString*)bubbleIconPath;
+ (NSString*)audioIconPath;

+ (NSString*)particleIconPath;

@end

#endif
