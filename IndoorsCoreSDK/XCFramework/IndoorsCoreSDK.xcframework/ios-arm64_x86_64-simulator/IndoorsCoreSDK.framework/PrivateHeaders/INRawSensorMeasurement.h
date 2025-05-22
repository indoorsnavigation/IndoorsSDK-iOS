//
//  INRawSensorMeasurement.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRawSensorMeasurement_
#define _INRawSensorMeasurement_

#import <Foundation/Foundation.h>
#import "INRawMeasurement.h"
#import "INVector3D.h"

NS_ASSUME_NONNULL_BEGIN

@class INRawSensorMeasurement;

/**
Stores data about raw radio measurement.
*/
@interface INRawSensorMeasurement : INRawMeasurement

/**
Associated `INVector3D` object.
*/
@property (strong, nonatomic) INVector3D *Vector;

-(instancetype)initWithPosition:(INPosition2*)position
                           Type:(int)type
                    andVector3D:(INVector3D*)vector3d;

/**
 Returns the string representation of the object in a comma-separated value (CSV) format.
*/
-(NSString*)getCSVString;

@end

NS_ASSUME_NONNULL_END

#endif
