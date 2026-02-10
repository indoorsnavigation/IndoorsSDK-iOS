//
//  INTerritory.h
//  IndoorsMapSDK
//
//  Created by Indoors on 06.11.2025.
//

#ifndef INTerritory_h
#define INTerritory_h

#import <Foundation/Foundation.h>
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import "INBuildingLayer.h"



@interface INTerritory : NSObject //: INBaseObject


@property (nonatomic, strong) NSString *IdString;

@property (nonatomic, strong) NSNumber *ParentId;

/**
 Latitude.
 */
@property (nonatomic, strong) NSNumber *Lat;

/**
 Longitude.
 */
@property (nonatomic, strong) NSNumber *Lon;

/**
 Map width in pixels.
 */
@property (nonatomic, strong) NSNumber *Mwidth;

/**
 Map height in pixels.
 */
@property (nonatomic, strong) NSNumber *Mheight;

/**
 Map scale in pixels/meter.
 */
@property (nonatomic, strong) NSNumber *Mscale;

/**
 The magnetic heading of the building on the map.
 */
@property (nonatomic, strong) NSNumber *MapNorth;


@property (nonatomic, strong) CLLocation *Location;
@property (nonatomic, strong) CLLocation *ShiftedLocation;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingCenterCoordinateLatitude;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingCenterCoordinateLongitude;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingDistance;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingPitch;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingHeading;
@property (nonatomic, strong) NSNumber *GlobalMapIOSAltitude;

/**
 The color of the route line (#ffffff).
 */
@property (nonatomic, strong) NSString *PathLineColor;


@property (nonatomic, strong) NSMutableArray<INBuildingLayer *> *BuildingLayers;


@property (nonatomic, strong) INBuilding *CurrentBuilding;

@property (nonatomic, strong, nullable) NSNumber *TerritoryBuildingId;

@property (nonatomic, strong) NSMutableDictionary *Buildings;



- (CLLocation*)getShiftedLocation;

@end


#endif /* INTerritory_h */
