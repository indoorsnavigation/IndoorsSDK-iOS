//
//  INRawRadioMeasurement.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRawRadioMeasurement_
#define _INRawRadioMeasurement_

#import <Foundation/Foundation.h>
#import "INRawMeasurement.h"

NS_ASSUME_NONNULL_BEGIN

@class INRawRadioMeasurement;

/**
Stores data about raw radio measurement.
*/
@interface INRawRadioMeasurement : INRawMeasurement

/**
 Identifier of the transmitter.
*/
@property (nonatomic) NSString *TransmitterId;

/**
 Received signal strength indication of the measurement.
*/
@property (nonatomic, assign) int RSSI;

-(instancetype)initWithPosition:(INPosition2*)position
                           Type:(int)type
                  TransmitterId:(NSString*)transmitterId
                        andRSSI:(int)rssi;

/**
 Returns the string representation of the object in a comma-separated value (CSV) format.
*/
-(NSString*)getCSVString;

@end

NS_ASSUME_NONNULL_END

#endif
