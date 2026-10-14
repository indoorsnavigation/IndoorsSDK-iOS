//
//  IN2DShapeLayer.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _IN2DShapeLayer_
#define _IN2DShapeLayer_

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface IN2DShapeLayer : CAShapeLayer

- (void)applyFillColor:(NSString *)color;
- (void)applyStrokeColor:(NSString *)color;

- (void)applyBorderColor:(NSString *)color;

- (void)removeSublayers;

@end

NS_ASSUME_NONNULL_END

#endif
