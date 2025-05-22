//
//  INParser.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INParser_
#define _INParser_

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface INParser : NSObject

+ (UIBezierPath *)bezierPathWithSVGString:(NSString *)svgString;
+ (UIBezierPath*)bezierPathForString:(NSString*)string
                            withFont:(UIFont*)font;

+ (NSArray *)getPointsFromSVGString:(NSString*)path;

@end

NS_ASSUME_NONNULL_END

#endif
