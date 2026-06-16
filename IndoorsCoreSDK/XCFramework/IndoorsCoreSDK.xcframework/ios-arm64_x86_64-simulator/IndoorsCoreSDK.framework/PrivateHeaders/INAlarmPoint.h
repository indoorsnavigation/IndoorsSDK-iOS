//
//  INAlarmPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INAlarmPoint_
#define _INAlarmPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"

@protocol INLocalStorable;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about device position.
 */
@interface INAlarmPoint : INBaseObject<INLocalStorable>

/**
 Floor identifier.
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 X-coordinate of the device.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of the device.
 */
@property (nonatomic, strong) NSNumber *Y;


@property (nonatomic, strong) NSNumber *Status;

@property (nonatomic, strong) NSNumber *User;

@property (nonatomic, strong) NSNumber *Building;

/**
 Dictionary representation of this class.
 */
- (NSMutableDictionary *)toNSDictionary;

@end

NS_ASSUME_NONNULL_END

#endif
