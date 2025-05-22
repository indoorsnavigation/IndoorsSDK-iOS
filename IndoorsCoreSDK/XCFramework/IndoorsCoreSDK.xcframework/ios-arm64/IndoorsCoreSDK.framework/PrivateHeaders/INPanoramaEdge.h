//
//  INPanoramaEdge.h
//  IndoorsSDK
//
//  Created by Резвых Тимофей on 17.11.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INPanoramaEdge_h
#define INPanoramaEdge_h

#import "INBaseObject.h"
#import "INPanoramaPoint.h"

/**
 .
 */
@interface INPanoramaEdge : INBaseObject

/**
 1 Panorama point.
 */
@property (weak, nonatomic) INPanoramaPoint *FirstPanoramaPoint;

/**
 2 Panorama point.
 */
@property (weak, nonatomic) INPanoramaPoint *SecondPanoramaPoint;

/**
 1 Panorama point id.
 */
@property (strong, nonatomic) NSNumber *FirstPanoramaPointId;

/**
 2 Panorama point id.
 */
@property (strong, nonatomic) NSNumber *SecondPanoramaPointId;

/**
 Associated `INApplication` object Id.
 */
@property (strong, nonatomic) NSNumber *Applcation;

/**
 Associated `INBuilding` object Id.
 */
@property (strong, nonatomic) NSNumber *BuildingId;


@end

#endif /* INPanoramaEdge_h */
