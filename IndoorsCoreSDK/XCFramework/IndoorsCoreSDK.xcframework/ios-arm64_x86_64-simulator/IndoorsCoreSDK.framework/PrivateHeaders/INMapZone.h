//
//  INMapZone.h
//  IndoorsSDK
//
//  Created by Timofey on 9/12/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INMapZone_h
#define INMapZone_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"


/// Stores data about map zone of the building.
@interface INMapZone : INBaseObject

/**
 The name zone.
 */
@property (nonatomic, strong) NSString          *Name;

/**
 Zone description.
 */
@property (nonatomic, strong) NSString          *Description;

/**
 Floor Id.
 */
@property (nonatomic, strong) NSNumber          *FloorId;

/**
 Building Id.
 */
@property (nonatomic, strong) NSNumber          *BuildingId;


@property (nonatomic, strong) NSNumber          *CX;
@property (nonatomic, strong) NSNumber          *CY;

@end

#endif /* INMapZone_h */
