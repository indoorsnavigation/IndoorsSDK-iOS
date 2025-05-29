//
//  INBarrier.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBarrier_
#define _INBarrier_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import <UIKit/UIKit.h>
#import "INBaseObject.h"
#import "INOwner.h"
#import "INMapARPoint.h"
#import "INFloor.h"


@class INFloor;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about barrier.
 */
@interface INBarrier : INBaseObject

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Associated `INBuilding` object Id.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 SVG-path of barrier on the map.
 */
@property (nonatomic, strong) NSString *Svg;

/**
 Polygon of barrier on the map.
 */
@property (nonatomic, strong) NSString *Polygon;

/**
 Associated `INFloor` object where barrier is placed.
 */
@property (nonatomic, weak) INFloor    *Floor;

@end

NS_ASSUME_NONNULL_END

#endif
