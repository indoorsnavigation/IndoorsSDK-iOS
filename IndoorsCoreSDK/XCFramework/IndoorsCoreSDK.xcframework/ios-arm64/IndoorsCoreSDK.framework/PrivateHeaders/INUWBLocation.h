//
//  INUWBLocation.h
//  IndoorsSDK
//
//  Created by Indoors on 14.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUWBLocation_h
#define INUWBLocation_h

#import "INBaseObject.h"
#import "INBaseTagLocation.h"

/**
 Stores data about UWB Tag Location.
 */
@interface INUWBLocation: INBaseObject<INBaseTagLocation>

/**
 UWB Tag value.
 */
@property (nullable, strong, nonatomic) NSNumber *Tag;

/**
 UWB Tag floor id
 */
@property (nonnull, strong, nonatomic) NSNumber *FloorId;

/**
 UWB Tag x axis position
 */
@property (nonnull, strong, nonatomic) NSNumber *X;

/**
 UWB Tag y axis position
 */
@property (nonnull, strong, nonatomic) NSNumber *Y;

/**
 UWB Tag UUID.
 */
@property (nonnull, strong, nonatomic) NSString *UUID;

@end

#endif /* INUWBLocation_h */
