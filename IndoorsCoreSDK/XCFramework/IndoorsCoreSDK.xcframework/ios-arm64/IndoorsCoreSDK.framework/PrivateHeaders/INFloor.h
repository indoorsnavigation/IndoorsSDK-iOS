//
//  INFloor.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFloor_
#define _INFloor_

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "INBaseObject.h"
#import "INBuilding.h"
#import "INPolygon.h"
#import "INRoom.h"
#import "INIcon.h"
#import "INBeaconPoint.h"
#import "INElevator.h"
#import "INParkingPlace.h"
#import "INDoor.h"
#import "INEntrance.h"

#import "INGPSZone.h"

#import "INFireSafetyImagePoints.h"

@class INBuilding;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the floor.
 */
@interface INFloor : INBaseObject

/**
Boolean flag specifies if floot is active.
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Boolean flag specifies if floot is initial in building.
 */
@property (nonatomic, strong) NSNumber *Initial;

/**
 Boolean flag specifies if floot is visible.
 */
@property (nonatomic, strong) NSNumber *Visible;

/**
 Building identifier in the service database.
 @see 'INBuilding'
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Floor title.
 */
@property (nonatomic, strong) NSString *Name;

/**
 A number of the floor.
 */
@property (nonatomic, strong) NSNumber *Number;

/**
 A one more number of the floor.
 */
@property (nonatomic, strong) NSNumber *Number2;

/**
 Z-coordinate of the floor in pixels.
 */
@property (nonatomic, strong) NSNumber *Z;

/**
 Height of the floor in meters.
 */
@property (nonatomic, strong) NSNumber *Height;

/**
 Base of the floor in meters.
 */
@property (nonatomic, strong) NSNumber *Base;

/**
 SVG-path of the floor.
 */
@property (nonatomic, strong) NSString *SvgBackground;

/**
 SVG-path of the walls.
 */
@property (nonatomic, strong) NSString *SvgForeground;

@property (nonatomic, strong) NSString *Image;
@property (nonatomic, strong) NSNumber *ImageX;
@property (nonatomic, strong) NSNumber *ImageY;
@property (nonatomic, strong) NSNumber *ImageWidth;
@property (nonatomic, strong) NSNumber *ImageHeight;
@property (nonatomic, strong) NSNumber *ImageAlpha;
@property (nonatomic, strong) NSNumber *ImagePreserve;

@property (nonatomic, strong) NSString *AssetBundleIOS;
@property (nonatomic, strong) NSString *AssetBundleIOSPath;


/**
 An array of the 'INPolygon' objects.
 @see 'INPolygon'
 */
@property (nonatomic, strong) NSMutableArray *Polygons;

/**
 An array of the 'INWall' objects.
 @see 'INWall'
 */
@property (nonatomic, strong) NSMutableArray *Walls;

/**
 An array of the 'INBarrier' objects.
 @see 'INBarrier'
 */
@property (nonatomic, strong) NSMutableArray *Barriers;

/**
 An array of the 'INRoom' objects.
 @see 'INRoom'
 */
@property (nonatomic, strong) NSMutableArray *Rooms;

/**
 An array of the 'INIcon' objects.
 @see 'INIcon'
 */
@property (nonatomic, strong) NSMutableArray *Icons;

/**
 An array of the 'INGraphPoint' objects.
 @see 'INGraphPoint'
 */
@property (nonatomic, strong) NSMutableArray *GraphPoints;

/**
 An array of the 'INBeaconPoint' objects.
 @see 'INBeaconPoint'
 */
@property (nonatomic, strong) NSMutableArray *BeaconPoints;

/**
An array of the 'INFireSafetyImagePoints' objects.
@see 'INFireSafetyImagePoints'
*/
@property (nonatomic, strong) NSMutableArray *FireSafetyImagePoints;

/**
 An array of the 'INBeaconPoint' objects.
 @see 'INBookingModel'
 */
@property (nonatomic, strong) NSMutableArray *Bookings;


/**
 An array of the 'INARPoint' objects.
 @see 'INARPoint'
 */
@property (nonatomic, strong) NSMutableArray *MapARPoints;

/**
 An array of the 'INMediaPoint' objects.
 @see 'INMediaPoint'
 */
@property (nonatomic, strong) NSMutableArray *MediaPoints;

/**
 An array of the 'INPanoramaPoint' objects.
 @see 'INPanoramaPoint'
 */
@property (nonatomic, strong) NSMutableArray *PanoramaPoints;

/**
 An array of the 'INInfomatPoint' objects.
 @see 'INInfomatPoint'
 */
@property (nonatomic, strong) NSMutableArray *InfomatPoints;

/**
 An array of the 'INDNNPoint' objects.
 @see 'INDNNPoint'
 */
@property (nonatomic, strong) NSMutableArray *DNNPoints;

/**
 An array of the 'INDoor' objects.
 */
@property (nonatomic, strong) NSMutableArray *Doors;

/**
 An array of the 'INParkingPlace' objects.
 */
@property (nonatomic, strong) NSMutableArray *ParkingPlaces;

/**
 An array of the 'INElevator' objects.
 */
@property (nonatomic, strong) NSMutableArray *Elevators;

/**
 An array of the 'INElevatorShaft' objects.
 */
@property (nonatomic, strong) NSMutableArray *ElevatorShafts;

/**
 An array of the 'INEntrance' objects.
 */
@property (nonatomic, strong) NSMutableArray *Entrances;

/**
 An array of the 'INGPSZone' objects.
 */
@property (nonatomic, strong) NSMutableArray *GPSZones;

/**
 An array of the 'INMTTrackerPoint' objects.
 @see 'INMTTrackerPoint'
 */
@property (nonatomic, strong) NSMutableArray *MTTrackerPoints;

/**
 Reference to 'INBuilding' object.
 @see 'INBuilding'
 */
@property (nonatomic, weak) INBuilding *Building;

/**
 Reference to 'UIImage' object.
 */
@property (nonatomic, strong) UIImage *ImagePreserved;

/**
 UIBezierPath of the floor.
 */
@property (nonatomic, strong, nullable) UIBezierPath *SvgBackgroundBezierPath;

/**
 */
@property (nonatomic, strong, nullable) NSArray *SvgBackgroundPoints;

/**
 UIBezierPath of the walls.
 */
@property (nonatomic, strong, nullable) UIBezierPath *SvgForegroundBezierPath;

/**
 */
@property (nonatomic, strong, nullable) NSArray *SvgForegroundPoints;


/**
 */
@property (nonatomic, strong, nullable) NSMutableArray *GEOBackgroundMultiPolygons;

/**
 */
@property (nonatomic, strong, nullable) NSMutableArray *GEOForegroundMultiPolygons;

/**
 */
@property (nonatomic, strong, nullable) NSArray *BarriersPoints;

@end

NS_ASSUME_NONNULL_END

#endif
