//
//  INRawLocationMeasurement.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRawLocationMeasurement_
#define _INRawLocationMeasurement_

#import <Foundation/Foundation.h>
#import "INRawMeasurement.h"

NS_ASSUME_NONNULL_BEGIN

@class INRawLocationMeasurement;

/**
Stores data about raw location measurement.
*/
@interface INRawLocationMeasurement : INRawMeasurement

/**
Associated `INVector3D` object.
*/
@property (nonatomic, strong) CLLocation *Location;

-(instancetype)initWithPosition:(INPosition2*)position
                           Type:(int)type
                    andLocation:(CLLocation*)location;

/**
 Returns the string representation of the object in a comma-separated value (CSV) format.
*/
-(NSString*)getCSVString;

@end

NS_ASSUME_NONNULL_END

#endif
