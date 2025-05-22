//
//  INGraphEdge.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGraphEdge_
#define _INGraphEdge_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INGraphPoint.h"

@class INGraphPoint;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the edge of the route.
 */
@interface INGraphEdge : INBaseObject

/**
 The type of the edge.
 */
@property (nonatomic, strong) NSNumber *ConnectionType;

/**
 Identifier of the first point of the edge.
 @see 'INGraphPoint'
 */
@property (nonatomic, strong) NSNumber *FirstPointId;

/**
 Identifier of the second point of the edge.
 @see 'INGraphPoint'
 */
@property (nonatomic, strong) NSNumber *SecondPointId;

/**

 @see 'INBuilding'
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Reference to 'INGraphPoint' object of the first point of the edge.
 @see 'INGraphPoint'
 */
@property (nonatomic, weak) INGraphPoint *FirstPoint;

/**
 Reference to 'INGraphPoint' object of the second point of the edge.
 @see 'INGraphPoint'
 */
@property (nonatomic, weak) INGraphPoint *SecondPoint;

@end

NS_ASSUME_NONNULL_END

#endif
