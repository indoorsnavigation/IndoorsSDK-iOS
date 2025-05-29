//
//  INWaypoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INWaypoint_
#define _INWaypoint_

#import <Foundation/Foundation.h>
#import "INGraphPoint.h"

typedef enum {
    RIGHT,
    LEFT,
    FORWARD,
    BACKWARD,
    UP,
    DOWN,
    TURN,
    TARGET,
    FINISH,
    REINIT
} INRouteDirection ;

NS_ASSUME_NONNULL_BEGIN

/// Stores data about route waypoint.
@interface INWaypoint : INBaseObject

/// Value that represents the angle of the waypoint
@property (nonatomic, strong) NSNumber  *Angle;
/// Distance of the waypoint from the previous waypoint.
@property (nonatomic, strong) NSNumber  *Distance;
/// Value that represents the total distance of the route from the starting point to this waypoint
@property (nonatomic, strong) NSNumber  *TotalDistance;
/// Value that represents the current total distance of the route from the starting point to this waypoint
@property (nonatomic, strong) NSNumber  *CurrentTotalDistance;
/// Represents the direction of the waypoint.
@property (nonatomic) INRouteDirection  Direction;
/// An array of `INGraphPoint` objects that represents the route
@property (nonatomic, strong) NSMutableArray  *Route;
/// Weak reference to the next INWaypoint in the route.
@property (nonatomic, weak) INWaypoint *NextWaypoint;

@end

NS_ASSUME_NONNULL_END

#endif
