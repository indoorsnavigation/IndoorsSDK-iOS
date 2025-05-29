//
//  INMapARPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMapARPoint_
#define _INMapARPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"
#import "INARAsset.h"

NS_ASSUME_NONNULL_BEGIN
@class INMapARPointTarget;
@class INPathfinder;
/**
 Stores data about augmented reality point on the map.
 */
@interface INMapARPoint : INBaseObject


@property (nonatomic, strong) NSNumber *Id;
/**
 AR marker identifier.
 @see 'INARAsset'
 */
@property (nonatomic, strong) NSNumber *AssetId;

/**
 X-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Z-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *Z;
/**
 Floor identifier.
 @see 'Floor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 identifier of the `INBuilding` the AR marker belongs to
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 AR Marker roll.
 */
@property (nonatomic, strong) NSNumber *Roll;

/**
 AR marker pitch.
 */
@property (nonatomic, strong) NSNumber *Pitch;

/**
 AR marker Yaw.
 */
@property (nonatomic, strong) NSNumber *Yaw;

/**
 Range of this point on the map for marker downloader.
 */
@property (nonatomic, strong) NSNumber *Range;

/**
 Point activity.
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Reference to 'INARAsset' object.
 @see 'INARAsset'
 */
@property (nonatomic, weak) INARAsset *Asset;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor *Floor;

/**
 Reference to 'INMapARPointTarget' object.
 @see 'INMapARPointTarget'
 */
@property (nonatomic, strong, nullable) INMapARPointTarget *ARPointTarget;

// Объявляем _pathFinder как свойство
@property (nonatomic, strong) INPathfinder *pathFinder;

/**
 Calculates the shortest path from this AR point to its associated target.

 @return An array of INGraphPoint objects representing the path, or an empty array if there's no target or an error occurs.
 */
- (NSArray<INGraphPoint *> *)calculatePathToTarget;

/**
 Calculates the shortest path from a specified starting point to this AR point's target.

 @param newStartPoint The new starting point for path calculation.
 @return An array of INGraphPoint objects representing the path, or an empty array if there's no target, invalid starting point, or an error occurs.
 */
- (NSArray<INGraphPoint *> *)calculatePathToTargetWithStartPoint:(INGraphPoint *)newStartPoint;

/**
 Calculates the shortest path from this AR point to a specified target.

 @param target The target `INMapARPointTarget` to calculate the path to.
 @return An array of `INGraphPoint` objects representing the path, or an empty array if there's no valid target or an error occurs during path calculation.
 */
- (NSArray<INGraphPoint *> *)calculatePathToTargetWithTarget:(INMapARPointTarget *)target;
/**
 Calculates the total distance of the path from this AR point to its target.

 @return An NSNumber containing the total distance as a float value, or @(0.0f) if there's no path or an error occurs.
 */
- (NSNumber *)getTotalPathDistanceToTarget;

@end

NS_ASSUME_NONNULL_END

#endif
