//
//  INPosition2.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INPosition2_
#define _INPosition2_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INBuilding.h"

NS_ASSUME_NONNULL_BEGIN

@class INBuilding;
/**
 Custom 3d-vector class.
 */
@interface INPosition2 : INBaseObject

/**
 */
@property (strong, nonatomic) NSNumber *X;

/**
 */
@property (strong, nonatomic) NSNumber *Y;

/**
 Floor identifier.
 */
@property (strong, nonatomic) NSNumber *FloorId;

/**
 Heading value.
 */
@property (strong, nonatomic) NSNumber *Heading;

/**
 Accuracy value.
 */
@property (strong, nonatomic) NSNumber *Accuracy;

/**
 Distance.
 */
@property (strong, nonatomic) NSNumber *Distance;

/**
 Position timestamp.
 */
@property (strong, nonatomic) NSNumber *Timestamp;

-(instancetype)initWithX:(NSNumber*)x
                       Y:(NSNumber*)y
              andFloorId:(NSNumber*)floorId;

/// Shifts the position by the specified angle and distance within the building.
-(INPosition2*)shiftPositionByAngle:(float)angle
                       andDistance:(float)distance
                        inBuilding:(INBuilding*)building;

@end

NS_ASSUME_NONNULL_END

#endif
