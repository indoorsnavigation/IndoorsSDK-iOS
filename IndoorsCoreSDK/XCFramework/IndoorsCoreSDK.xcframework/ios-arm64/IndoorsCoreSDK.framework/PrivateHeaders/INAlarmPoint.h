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

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about device position.
 */
@interface INAlarmPoint : INBaseObject

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

/**
 Dictionary representation of this class.
 */
- (NSMutableDictionary *)toNSDictionary;

@end

NS_ASSUME_NONNULL_END

#endif
