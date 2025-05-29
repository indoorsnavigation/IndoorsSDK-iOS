//
//  INUserZones.h
//  IndoorsSDK
//
//  Created by Indoors on 17.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUserZones_h
#define INUserZones_h


#import "INBaseObject.h"
#import "INUserZoneBusinessHours.h"
#import "INMapZone.h"

NS_ASSUME_NONNULL_BEGIN

@interface INUserZones : INBaseObject


@property (nonatomic, strong, nullable) NSNumber *Editor;
@property (nonatomic, strong, nullable) NSNumber *Zone NS_SWIFT_NAME(zoneId);
@property (nonatomic, strong, nullable) NSNumber *User;

@property (nonatomic, strong, nullable) NSArray<INUserZoneBusinessHours *> *userZoneBusinessHours;
@property (nonatomic, strong, nullable) INMapZone *mapZone;


@end


NS_ASSUME_NONNULL_END

#endif /* INUserZones_h */
