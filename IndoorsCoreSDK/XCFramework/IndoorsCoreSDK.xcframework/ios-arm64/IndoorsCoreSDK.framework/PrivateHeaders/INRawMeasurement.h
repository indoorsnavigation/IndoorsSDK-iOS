//
//  INRawMeasurement.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRawMeasurement_
#define _INRawMeasurement_

#import <Foundation/Foundation.h>
#import "INPosition2.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum INRawMeasurementType : NSUInteger
{
    kRawMeasurementTypeAccelerometer,
    kRawMeasurementTypeMagnetometer,
    kRawMeasurementTypeGyroscope,
    kRawMeasurementTypeBarometer,
    kRawMeasurementTypeLocation,
    kRawMeasurementTypeOrientation,
    kRawMeasurementTypeWifi,
    kRawMeasurementTypeBeacon,
    kRawMeasurementTypeBluetooth,
    kRawMeasurementTypeEddystone,
    kRawMeasurementTypeWifiRTT
    
} INRawMeasurementType;

@class INRawMeasurement;

/**
Stores data about raw measurement.
*/
@interface INRawMeasurement : NSObject

/**
 Associated `INPosition2` object.
*/
@property (nonatomic, strong) INPosition2 *Position;

/**
Raw measurement `INRawMeasurementType` type.
*/
@property (nonatomic) int Type;

/**
 Timestamp of the measurement in the Unix time format..
*/
@property (nonatomic) long long Timestamp;

/**
 Returns a CSV formatted string of the measurement data..
*/
-(NSString*)getCSVString;

@end

NS_ASSUME_NONNULL_END

#endif
