//
//  INBeaconDevice.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBeaconDevice_
#define _INBeaconDevice_

#import "INBaseObject.h"

@protocol INLocalStorable;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about beacon device.
 */
@interface INBeaconDevice : INBaseObject<INLocalStorable>

/**
 Beacon name.
 */
@property (nonatomic, assign) NSString *Name;

/**
 Beacon  Universally Unique Identifier.
 */
@property (nonatomic, strong) NSString *UUID;
/**
 Beacon Major value.
 */
@property (nonatomic, strong) NSNumber *Major;
/**
 Beacon Minor value.
 */
@property (nonatomic, strong) NSNumber *Minor;
/**
 Beacon Battery.
 */
@property (nonatomic, strong) NSNumber *Battery;

/**
 Beacon BuildingId.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

@end

NS_ASSUME_NONNULL_END

#endif
