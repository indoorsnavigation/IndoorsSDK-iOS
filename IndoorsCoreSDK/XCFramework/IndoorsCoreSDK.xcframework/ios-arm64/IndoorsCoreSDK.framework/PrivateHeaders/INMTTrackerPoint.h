//
//  INMTTrackerPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMTTrackerPoint_
#define _INMTTrackerPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"
#import "INMTTracker.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the position of the MTTracker device.
 */
@interface INMTTrackerPoint : INBaseObject

/**
 Identifier of the 'INMTTracker' object.
 @see 'INMTTracker'
 */
@property (nonatomic, strong) NSNumber *TrackerId;

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
 Reference to 'INMTTracker' object.
 @see 'INMTTracker'
 */
@property (nonatomic, weak) INMTTracker *Tracker;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor *Floor;

/**
 RSSI of the MTTracker.
 */
@property (nonatomic, strong) NSNumber *RSSI;

/**
 RSSI Range.
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
 Current distance.
 */
@property (nonatomic, strong) NSNumber *CurrentDistance;

/**
 Boolean flag specifies if tracker point is enabled.
 */
@property (nonatomic, strong) NSNumber *Enabled;

/**
 Boolean flag specifies if MTTracker point is active.
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 MTTracker mode number.
 */
@property (nonatomic, strong) NSNumber *Mode;

/**
 MTTracker point state.
 */
@property (nonatomic) INBeaconPointState State;

/**
 MTTracker point timestamp.
 */
@property (nonatomic, strong) NSNumber  *TimeStamp;

- (void)reset;

@end

NS_ASSUME_NONNULL_END

#endif
