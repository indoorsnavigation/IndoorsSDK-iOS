//
//  INBLELocation.h
//  IndoorsSDK
//
//  Created by Indoors on 14.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INBLELocation_h
#define INBLELocation_h

#import "INBaseObject.h"
#import "INBaseTagLocation.h"

/**
 Stores data about BLE Tag Location.
 */
@interface INBLELocation : INBaseObject<INBaseTagLocation>

/**
 BLE Tag value.
 */
@property (strong, nonatomic) NSNumber *Tag;

/**
 BLE Tag floor id
 */
@property (strong, nonatomic) NSNumber *FloorId;

/**
 BLE Tag x axis position
 */
@property (strong, nonatomic) NSNumber *X;

/**
 BLE Tag y axis position
 */
@property (strong, nonatomic) NSNumber *Y;

/**
 BLE Tag UUID.
 */
@property (strong, nonatomic) NSString *UUID;

@end

#endif /* INBLELocation_h */
