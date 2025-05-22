//
//  INBeaconPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBeaconPoint_
#define _INBeaconPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"
#import "INBeacon.h"

typedef enum : NSInteger
{
    INBeaconPointStateNotSeen,
    INBeaconPointStateActive,
    INBeaconPointStateSeen,
    INBeaconPointStateDisabled
    
} INBeaconPointState;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the position of the iBeacon device.
 */
@interface INBeaconPoint : INBaseObject

/**
 Identifier of the 'INBeacon' object.
 @see 'INBeacon'
 */
@property (nonatomic, strong) NSNumber *BeaconId;

/**
 Floor identifier.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 X-coordinate of the beacon on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of the beacon on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Virtual X-coordinate of the beacon on the map.
 */
@property (nonatomic, strong) NSNumber *VirtualX;

/**
 Virtual Y-coordinate of the beacon on the map.
 */
@property (nonatomic, strong) NSNumber *VirtualY;

/**
 Reference to 'INBeacon' object.
 @see 'INBeacon'
 */
@property (nonatomic, weak) INBeacon *Beacon;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor *Floor;

/**
 RSSI of the beacon.
 */
@property (nonatomic, strong) NSNumber *RSSI;

/**
 */
@property (nonatomic, strong) NSNumber *RangeRSSI;

/**
 RSSI of the beacon.
 */
@property (nonatomic, strong) NSNumber *Distance;

/**
 Real distance.
 */
@property (nonatomic, strong) NSNumber *RealDistance;

/**
 Boolean flag specifies if beacon point is enabled.
 */
@property (nonatomic, strong) NSNumber *Enabled;

/**
 Boolean flag specifies if beacon point is active.
 */
@property (nonatomic, strong) NSNumber *Active;


/// State of the beacon point.
@property (nonatomic) INBeaconPointState State;

/**
 Beacon point timestamp.
 */
@property (nonatomic, strong) NSNumber  *TimeStamp;

@property (nonatomic, strong) NSString  *BeaconIdString;



/// Resets by setting 'moving average' to nil and 'distance' to infinity.
- (void)reset;

@end

NS_ASSUME_NONNULL_END

#endif
