//
//  INPanoramaPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INPanoramaPoint_
#define _INPanoramaPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"
#import "INPanoramaAsset.h"

NS_ASSUME_NONNULL_BEGIN

@class INPanoramaEdge;

/**
 Stores data about augmented reality point on the map.
 */
@interface INPanoramaPoint : INBaseObject

/**
 Panorama asset identifier.
 @see 'INPanoramaAsset'
 */
@property (nonatomic, strong) NSNumber *PanoramaAssetId;

/**
 X-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Floor identifier.
 @see 'Floor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Point angle.
 */
@property (nonatomic, strong) NSNumber *Angle;

/**
 Associated `INFloor` object for panorama.
 */
@property (nonatomic, weak) INFloor *Floor;

/**
 Associated `INRoom` object for panorama.
 */
@property (nonatomic, weak) INRoom *Room;

/**
 `INPanoramaAsset` object.
 */
@property (nonatomic, weak) INPanoramaAsset *PanoramaAsset;

/**
 `Array of panorama edges containing this point` object.
 */
@property (nonatomic, strong) NSMutableArray<INPanoramaEdge *> *PanoramaEdges;

/**
 `INPanoramaEdge` object which has first point as it point.
 */
@property (nonatomic, weak)  INPanoramaEdge* FirstPointPanoramaEdge;

/**
 `INPanoramaEdge` object which has second point as it point.
 */
@property (nonatomic, weak)  INPanoramaEdge* SecondPointPanoramaEdge;

@end

NS_ASSUME_NONNULL_END

#endif
