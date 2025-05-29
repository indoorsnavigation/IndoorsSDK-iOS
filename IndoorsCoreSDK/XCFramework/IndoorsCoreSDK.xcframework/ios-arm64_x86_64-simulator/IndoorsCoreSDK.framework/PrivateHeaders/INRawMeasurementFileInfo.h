//
//  INRawMeasurementFileInfo.h
//  IndoorsSDK
//
//  Created by Mac on 13.07.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INRawMeasurementFileInfo : INBaseObject

/**
 The building ID.
 */
@property (nonatomic, strong) NSNumber *Building;

/**
 The UUID.
 */
@property (nonatomic, strong) NSString *UUID;

/**
 The editor ID for the radio map.
 */
@property (nonatomic, strong) NSString *DeviceModel;

/**
 The file with measurements.
 */
@property (nonatomic, strong, nullable) NSString *File;

@end

NS_ASSUME_NONNULL_END
