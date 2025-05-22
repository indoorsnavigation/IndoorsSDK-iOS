//
//  INAOALocation.h
//  IndoorsSDK
//
//  Created by Indoors on 27.12.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INAOALocation_h
#define INAOALocation_h

#import "INBaseObject.h"
#import "INBaseTagLocation.h"

/**
 Stores data about AOA Tag Location.
 */
@interface INAOALocation : INBaseObject<INBaseTagLocation>

/**
 AOA Tag value.
 */
@property (strong, nonatomic) NSNumber *Tag;

/**
 AOA Tag floor id
 */
@property (strong, nonatomic) NSNumber *FloorId;

/**
 AOA Tag x axis position
 */
@property (strong, nonatomic) NSNumber *X;

/**
 AOA Tag y axis position
 */
@property (strong, nonatomic) NSNumber *Y;

/**
 AOA Tag UUID.
 */
@property (strong, nonatomic) NSString *UUID;

@end

#endif /* INAOALocation_h */


