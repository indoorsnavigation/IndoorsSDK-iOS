//
//  INCalibrationBeacon.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INCalibrationBeacon_
#define _INCalibrationBeacon_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about calibration measurement.
 */
@interface INCalibrationBeacon : INBaseObject

/**
 Identifier of the iBeacon device.
 @see 'INBeacon'
 */
@property (nonatomic, strong) NSNumber *BeaconId;

/**
 Measurement distance.
 */
@property (nonatomic, strong) NSNumber *Distance;

/**
 RSSI of the iBeacon device signal.
 */
@property (nonatomic, strong) NSNumber *RSSI;

/**
 iBeacon power.
 */
@property (nonatomic, strong) NSNumber *Power;

@end

NS_ASSUME_NONNULL_END

#endif
