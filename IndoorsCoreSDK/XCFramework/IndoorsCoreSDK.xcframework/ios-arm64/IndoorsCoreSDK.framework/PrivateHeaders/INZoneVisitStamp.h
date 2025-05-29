//
//  INZoneVisitStamp.h
//  IndoorsSDK
//
//  Created by Timofey on 12/12/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INZoneVisitStamp_h
#define INZoneVisitStamp_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

/**
 Stores data about zone visit stamp.
 */
@interface INZoneVisitStamp : INBaseObject

/**
 Zone Id.
 */
@property (nonatomic, strong) NSNumber *ZoneId;


/**
 User identifier.
 */
@property (nonatomic, strong) NSNumber *UserId;

/**
 Building identifier.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Floor identifier.
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Boolean value specified if user entered or exit zone wrapped in NSNumber.
 */
@property (nonatomic, strong) NSNumber *Entered;

@end

#endif /* INZoneVisitStamp_h */
