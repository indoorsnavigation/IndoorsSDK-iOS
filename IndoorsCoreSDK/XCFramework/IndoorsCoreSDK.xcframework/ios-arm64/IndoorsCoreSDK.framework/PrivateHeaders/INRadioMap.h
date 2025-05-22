//
//  INRadioMaps.h
//  IndoorsSDK
//
//  Created by Mac on 07.07.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INRadioMaps_h
#define INRadioMaps_h

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about radio maps.
 */
@interface INRadioMap : INBaseObject

/**
 The building ID.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 The editor ID for the radio map.
 */
@property (nonatomic, strong) NSNumber *Editor;

/**
 The device type for the radio map. iOS = 0 or Android = 1
 */
@property (nonatomic, strong) NSNumber *DeviceType;


@end

NS_ASSUME_NONNULL_END

#endif /* INRadioMaps_h */
