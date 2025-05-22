//
//  INColor.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INColor_
#define _INColor_

#import <UIKit/UIKit.h>

@interface INColor : NSObject
+ (UIColor*)defaultTint;
+ (UIColor*)blackColor;
+ (UIColor*)whiteColor;
+ (UIColor*)blueColor;
+ (UIColor*)grayColor;
+ (UIColor*)lightGrayColor;
+ (UIColor*)lightGrayColor2;
+ (UIColor*)lightGrayColor3;
+ (UIColor*)lightGrayColor4;
+ (UIColor*)lightGrayColor5;
+ (UIColor*)lightGrayColor6;
+ (UIColor*)lightGrayColor7;
+ (UIColor*)lightGrayColorWithOpacity;
+ (UIColor*)orangeColor;
+ (UIColor*)magentaColor;
+ (UIColor*)redColor;
+ (UIColor*)darkGreenColor;
+ (UIColor*)greenColor;
+ (UIColor*)lightGreenColor;
+ (UIColor*)blackWithOpacityColor;
+ (UIColor*)whiteWithOpacityColor;
+ (UIColor*)whiteWithDeepOpacityColor;
+ (UIColor*)clearColor;
+ (UIColor*)flatBlue;
+ (UIColor*)flatGray;
+ (UIColor*)gridGray;

+ (UIColor*)greyColor;

// Dynamics
+ (UIColor*)tabColor;
+ (UIColor*)dynamicBackground;
+ (UIColor*)dynamicForeground;
+ (UIColor*)dynamicSecondaryBackground;
+ (UIColor*)dynamicSecondaryForeground;
+ (UIColor*)dynamicAccentSecondaryBackground;

+ (UIColor*)lightBlueColor;

+ (UIColor*)darkYellowColor;
+ (UIColor*)coralColor;
+ (UIColor*)deepBlueColor;

+ (UIColor*)lightBlueColor2;

+ (UIColor *)colorWithHexString:(NSString *)hexString;
+ (NSString *)hexStringFromColor:(UIColor *)color;
+ (UIColor *)lighterColorForColor:(UIColor *)color;
+ (UIColor *)darkerColorForColor:(UIColor *)color;

+ (UIColor *)lightGreenForBooking;
+ (UIColor *)greenForBooking;
+ (UIColor *)orangeForBooking;

+ (UIColor*)buttonsTintColorOnMap;


+ (UIColor *)dynamicColorWithDayTime:(UIColor *)dayColor andNightColor:(UIColor *)nightColor;

@end

#endif
