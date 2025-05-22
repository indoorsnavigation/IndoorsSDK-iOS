//
//  INLidarLocation.h
//  IndoorsSDK
//
//  Created by Indoors on 14.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INLidarLocation_h
#define INLidarLocation_h

#import "INBaseObject.h"
#import "INBaseTagLocation.h"

/**
 Stores data about Laser Tag Location.
 */
@interface INLidarLocation: INBaseObject<INBaseTagLocation>

/**
 Object floor id
 */
@property (nonnull, strong, nonatomic) NSNumber *FloorId;

/**
 Object x axis position
 */
@property (nonnull, strong, nonatomic) NSNumber *X;

/**
 Object y axis position
 */
@property (nonnull, strong, nonatomic) NSNumber *Y;

/**
 Object UUID.
 */
@property (nonnull, strong, nonatomic) NSString *UUID;

@end

#endif /* INLidarLocation_h */
