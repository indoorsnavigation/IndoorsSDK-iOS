//
//  INTaskStatus.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INTaskStatus_
#define _INTaskStatus_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about task status.
 */
@interface INTaskStatus : INBaseObject

/**
 Task status name.
 */
@property (nonatomic, strong, nullable) NSString *Name;

@property (nonatomic, strong, nullable) NSString *Description;

@property (nonatomic, strong, nullable) NSNumber *Order;

@property (nonatomic, strong, nullable) NSString *Icon;

@property (nonatomic, strong, nullable) NSString *TextColor;

@property (nonatomic, strong, nullable) NSString *BackgroundColor;

@property (nonatomic, strong, nullable) NSNumber *AllowRatings;

@property (nonatomic, strong, nullable) NSNumber *Default;

@property (nonatomic, strong, nullable) NSNumber *Editor;

@property (nonatomic, strong, nullable) NSNumber *IsMeanCompleteness;



@end


NS_ASSUME_NONNULL_END

#endif
