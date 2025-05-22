//
//  INRawBeacon.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRawBeacon_
#define _INRawBeacon_

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Beacon information class.
 */
@interface INRawBeacon : INBaseObject

/**
 Beacon name.
 */
@property (nonatomic, strong) NSString *Name;
/**
 Beacon Mac adress.
 */
@property (nonatomic, strong) NSString *MacAddress;
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
 Beacon RSSI.
 */
@property (nonatomic, strong) NSNumber *RSSI;
/**
 Beacon Battery.
 */
@property (nonatomic, strong) NSNumber *Battery;
/**
 Beacon BuildingId.
 */
@property (nonatomic, strong) NSNumber *BuildingId;
/**
 Beacon State.
 */
@property (nonatomic, strong) NSNumber *State;

@end

NS_ASSUME_NONNULL_END

#endif
