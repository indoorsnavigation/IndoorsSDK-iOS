//
//  INBuilding.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBuilding_
#define _INBuilding_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INBuildingNavigationSettings.h"
#import "INFloor.h"
#import "INGraphPoint.h"
#import "INGraphEdge.h"
#import "INBeacon.h"
#import "INBeaconNotification.h"
#import "INBuildingType.h"
#import "INCity.h"


@class INFloor;
@class INBuildingType;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores information about building.
 */
@interface INBuilding :  INBaseObject<NSCopying>

/**
 Building name.
 */
@property (nonatomic, strong) NSString *Name;

/**
 Building type.
 */
@property (nonatomic, strong) NSNumber *BtypeId;

/**
 Short description of the building.
 */
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/**
 Logo of the building.
 */
@property (nonatomic, strong) NSString *Logo;

/**
 Main photo of the building.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Image gallery.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 Identifier of the city where the building.
 @see 'INCity'
 */
@property (nonatomic, strong) NSNumber *CityId;

/**
 Identifier of the building owner.
 @see 'INOwner'
 */
@property (nonatomic, strong) NSNumber *OwnerId;

/**
 Text description of how to get to the building.
 */
@property (nonatomic, strong) NSString *Route;

/**
 Building mode.
 */
@property (nonatomic, strong) NSString *Time;

/**
 Latitude.
 */
@property (nonatomic, strong) NSNumber *Lat;

/**
 Longitude.
 */
@property (nonatomic, strong) NSNumber *Lon;

/**
 Building address.
 */
@property (nonatomic, strong) NSString *Address;

/**
 Parking description.
 A number of parking spaces and so on.
 */
@property (nonatomic, strong) NSString *Parking;

/**
 The area of ​​the building.
 */
@property (nonatomic, strong) NSNumber *Area;

/**
 Email.
 */
@property (nonatomic, strong) NSString *Email;

/**
 Phone.
 */
@property (nonatomic, strong) NSString *Phone;

/**
 Website.
 */
@property (nonatomic, strong) NSString *Website;

/**
 URL of the Facebook page.
 */
@property (nonatomic, strong) NSString *Fb;

/**
 URL of the Vkontakte page.
 */
@property (nonatomic, strong) NSString *Vk;

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

/**
 Beacons UUID.
 */
@property (nonatomic, strong) NSString *BeaconUUID;

/**
 Background color of the map (#ffffff).
 */
@property (nonatomic, strong) NSString *MapInterfaceTintColor;

/**
 Background color of the map (#ffffff).
 */
@property (nonatomic, strong) NSString *MapBackgroundColor;

/**
 Floor color (#ffffff).
 */
@property (nonatomic, strong) NSString *FloorForegroundColor;

/**
 Walls color (#ffffff).
 */
@property (nonatomic, strong) NSString *FloorBackgroundColor;

/**
 The color of the selected room (#ffffff).
 */
@property (nonatomic, strong) NSString *RoomSelectedColor;

/**
 The color of the unselected room (#ffffff).
 */
@property (nonatomic, strong) NSString *RoomUnSelectedColor;

/**
 Fill color of the room title (#ffffff).
 */
@property (nonatomic, strong) NSString *RoomLabelColor;

/**
 The color of the route line (#ffffff).
 */
@property (nonatomic, strong) NSString *PathLineColor;

/**
 The color of the route line (#ffffff).
 */
@property (nonatomic, strong) NSString *OverlayPathLineColor;

/**
 The color of the route line (#ffffff).
 */
@property (nonatomic, strong) NSString *InfoPathLineColor;

/**
 The color of the route point (#ffffff).
 */
@property (nonatomic, strong) NSString *PathPointColor;

/**
 The color of the user point (#ffffff).
 */
@property (nonatomic, strong) NSString *UserPointColor;

/**
 The thickness of the route line (#ffffff).
 */
@property (nonatomic, strong) NSNumber *PathLineThickness;

/**
 The flag that enables 3d map drawing.
 */
@property (nonatomic, strong) NSNumber *Enable3D;

/**
 The flag that enables augmented reality feature.
 */
@property (nonatomic, strong) NSNumber *EnableAR;

/**
 The flag that enables augmented reality feature.
 */
@property (nonatomic, strong) NSString *Model3D;

/**
 Measurements file.
 */
@property (nonatomic, strong) NSString *MeasurementsFile;

/**

 */
@property (nonatomic, strong) NSNumber *SnapUserToGraph;

/**
 The color of the building icon (#ffffff).
 */
@property (nonatomic, strong) NSString *GlobalMapIconColor;

@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingCenterCoordinateLatitude;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingCenterCoordinateLongitude;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingDistance;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingPitch;
@property (nonatomic, strong) NSNumber *GlobalMapCameraLookingHeading;

@property (nonatomic, strong) NSNumber *GlobalMapIOSAltitude;

@property (nonatomic, strong) NSNumber *GPSAccuracyThreshold;

@property (nonatomic, strong) NSNumber *RerouteThreshold;

/**
 Flag that specifies if voice assistant enabled in this building.
 */
@property (nonatomic, strong) NSNumber *VoiceAssistantEnabled;

/**
 */
@property (nonatomic, strong) NSNumber *MinRadioRSSIValue;

/**
 */
@property (nonatomic, strong) NSNumber *MaxNearestCells;

/**
 */
@property (nonatomic, strong) NSNumber *NumberOfBeaconsInMeasurements;

/**
 Max Beacon Distance.
 */
@property (nonatomic, strong) NSNumber *MaxBeaconDistance;

/**
 */
@property (nonatomic, strong) NSNumber *SimpleNavigationMode;

/**
 JSON string that contains custom information about building.
 */
@property (nonatomic, strong) NSString *CustomTag;

/**
 Array of string feature identifiers in JSON string to exclude.
 */
@property (nonatomic, strong) NSString *FeaturesToExclude;

/**
 Array of feature identifiers to hide.
 */
@property (nonatomic, strong) NSMutableArray *FeaturesToHide;

/**
 Contribution.
 */
@property (nonatomic, strong) NSNumber *Contribution;

/**
 Average rating of building.
 */
@property (nonatomic, strong) NSNumber *AverageRating;

/**
 Feedback count of building.
 */
@property (nonatomic, strong) NSNumber *FeedbackCount;

/**
 Image gallery.
 */
@property (nonatomic, strong) NSNumber *DefaultFloorId;

/**
 Associated `INBuildingType` object.
 */
@property (nonatomic, weak) INBuildingType *BuildingType;

/**
 Associated `INCity` object.
 */
@property (nonatomic, weak) INCity *City;

/**
 Multidimensional Array of `INCategory` objects.
 */
@property (nonatomic, strong) NSMutableArray *CategoryTree;

/**
 Default building floor.
 */
@property (nonatomic, strong) INFloor *DefaultFloor;

@property (nonatomic, strong) NSNumber *ScanTimeout;
@property (nonatomic, strong) NSNumber *ScanTail;

/**
 Flag that specifies if voice search enabled in this building.
 */
@property (nonatomic, strong) NSNumber *VoiceSearchEnabled;

/**
Machine learning X filename.
 */
@property (nonatomic, strong) NSString *IOSMLXFile;

/**
Machine learning Y filename.
 */
@property (nonatomic, strong) NSString *IOSMLYFile;

/**
 */
@property (nonatomic, strong) NSNumber *ConstA;
/**
 */
@property (nonatomic, strong) NSNumber *ConstB;
/**
 */
@property (nonatomic, strong) NSNumber *ConstC;

/**
 Duration for animation when zooming in user position.
 */
@property (nonatomic, strong) NSNumber *DotAnimationDuration;

/**
 Moving Average period for position.
 */
@property (nonatomic, strong) NSNumber *PositionMovingAveragePeriod;

/**
 Maximum number of beacon points in building.
 */
@property (nonatomic, strong) NSNumber *MaxNumberOfBeaconPoints;

/**
 Building current 'INBuildingNavigationSettings' object identifier.
 */
@property (nonatomic, strong) NSNumber *NavigationSettingsId;

/**
 Flag that specifies if it needed to show Accuracy Layers.
 */
@property (nonatomic, strong) NSNumber *ShowAccuracyLayers;

/**
 Building current 'INBuildingNavigationSettings' object.
 */
@property (nonatomic, strong) INBuildingNavigationSettings *NavigationSettings;

/**
 An array of the 'INBuildingNavigationSettings' objects.
 */
@property (nonatomic, strong) NSMutableArray *AllNavigationSettings;

/**
 An array of the 'INFloor' objects.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSMutableArray *Floors;

/**
 An array of the 'INFloor' objects.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSMutableDictionary *FloorsDict;

/**
 An array of the 'INPolygon' objects.
 @see 'INPolygon'
 */
@property (nonatomic, strong) NSMutableArray *Polygons;

/**
 An array of the 'INRoom' objects.
 @see 'INRoom'
 */
@property (nonatomic, strong) NSMutableArray *Rooms;

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
 An array of the 'INOwner' objects.
 @see 'INOwner'
 */
@property (nonatomic, strong) NSMutableArray *Owners;

/**
 An array of the 'INIcon' objects.
 @see 'INIconType'
 */
@property (nonatomic, strong) NSMutableArray *Icons;

/**
 An array of the 'INIconType' objects.
 @see 'INIconType'
 */
@property (nonatomic, strong) NSMutableArray *IconTypes;

/**
 An array of the 'INIconDescription' objects.
 @see 'INIconDescription'
 */
@property (nonatomic, strong) NSMutableArray *IconDescriptions;

/**
 An array of the 'INBeaconPoint' objects.
 @see 'INBeaconPoint'
 */
@property (nonatomic, strong) NSMutableArray *BeaconPoints;

/*
An array of the 'INBookingModel' objects.
@see 'INBookingModel'
*/
@property (nonatomic, strong) NSMutableArray *Bookings;

/**
 An array of the 'INBeacon' objects.
 @see 'INBeacon'
 */
@property (nonatomic, strong) NSMutableArray *Beacons;

/**
 An array of the 'INMediaPoint' objects.
 @see 'INMediaPoint'
 */
@property (nonatomic, strong) NSMutableArray *MediaPoints;

/**
 An array of the 'INMediaAsset' objects.
 @see 'INMediaAsset'
 */
@property (nonatomic, strong) NSMutableArray *MediaAssets;

/**
 An array of the 'INTourPoint' objects.
 @see 'INTourPoint'
 */
@property (nonatomic, strong) NSMutableArray *TourPoints;

/**
 An array of the 'INTour' objects.
 @see 'INTour'
 */
@property (nonatomic, strong) NSMutableArray *Tours;

/**
 An array of the 'INPanoramaPoint' objects.
 @see 'INPanoramaPoint'
 */
@property (nonatomic, strong) NSMutableArray *PanoramaPoints;

/**
 An array of the 'INPanoramaEdge' objects.
 @see 'INPanoramaEdge'
 */
@property (nonatomic, strong) NSMutableArray *PanoramaEdges;

/**
 An array of the 'INPanoramaAsset' objects.
 @see 'INPanoramaAsset'
 */
@property (nonatomic, strong) NSMutableArray *PanoramaAssets;

/**
 An array of the 'INPanoramaTourPoint' objects.
 @see 'INPanoramaTourPoint'
 */
@property (nonatomic, strong) NSMutableArray *PanoramaTourPoints;

/**
 An array of the 'INPanoramaTour' objects.
 @see 'INPanoramaTour'
 */
@property (nonatomic, strong) NSMutableArray *PanoramaTours;

/**
 An array of the 'INMapARPoint' objects.
 @see 'INMapARPoint'
 */
@property (nonatomic, strong) NSMutableArray *MapARPoints;

/**
 An array of the 'INARAsset' objects.
 @see 'INARAsset'
 */
@property (nonatomic, strong) NSMutableArray *ARAssets;

/**
 An array of the 'INInfomat' objects.
 @see 'INInfomat'
 */
@property (nonatomic, strong) NSMutableArray *Infomats;

/**
 An array of the 'InfomatPoint' objects.
 @see 'InfomatPoint'
 */
@property (nonatomic, strong) NSMutableArray *InfomatPoints;

/**
 An array of the 'DNNPoint' objects.
 @see 'DNNPoint'
 */
@property (nonatomic, strong) NSMutableArray *DNNPoints;

/**
 @see 'GPSZone'
 */
@property (nonatomic, strong) NSMutableArray *GPSZones;

/**
 An array of the 'INMTTrackerPoint' objects.
 @see 'INMTTrackerPoint'
 */
@property (nonatomic, strong) NSMutableArray *MTTrackerPoints;

/**
 An array of the 'INMTTracker' objects.
 @see 'INMTTracker'
 */
@property (nonatomic, strong) NSMutableArray *MTTrackers;

/**
 Keywords names building, for search.
 */
@property (nonatomic, strong) NSString *Keywords;

/**
 Duration for animation when zooming in user position.
 */
@property (nonatomic, strong) NSNumber *MinAccelerometerMagnitude;

/// Use backend cache.
@property (nonatomic, strong) NSNumber *UseBackendCache;

/// Use backend cache.
@property (nonatomic, strong) NSNumber *UseRemoteRouteCalculation;

/**
 An array of the 'INDNNAsset' objects.
 @see 'INDNNAsset'
 */
@property (nonatomic, strong) NSMutableArray *DNNAssets;

@property (nonatomic, strong) INImageGallery *ImageGallery;

@property (nonatomic, strong) NSMutableArray *BuildingBusinessHours;

@property (nonatomic) BOOL IsInFavouritesList;

@property (nonatomic, strong) CLLocation *Location;
@property (nonatomic, strong) CLLocation *ShiftedLocation;

@property (nonatomic, strong) NSNumber *StraightLineDistance;

@property (nonatomic, strong) NSMutableArray *Graphs;
@property (nonatomic, strong) NSMutableArray *FireGraph;

@property (nonatomic, strong) NSMutableArray *RoutableObjects;

/**
An array of the 'INFireSafetyImagePoints' objects.
@see 'INFireSafetyImagePoints'
*/
@property (nonatomic, strong) NSMutableArray *FireSafetyImagePoints;

/**
 The flag that enables augmented reality feature.
 */
@property (nonatomic, strong) NSNumber *EnableNewNavigation;
@property (nonatomic, strong) NSNumber *EnableExtendedNavigation;

@property (nonatomic, strong) NSMutableArray *Doors;
@property (nonatomic, strong) NSMutableArray *ParkingPlaces;
@property (nonatomic, strong) NSMutableArray *Elevators;
@property (nonatomic, strong) NSMutableArray *ElevatorShafts;
@property (nonatomic, strong) NSMutableArray *Entrances;


@property (nonatomic, strong) NSNumber *EnableRouting;



/**
 Method returns array of the floors ids.
 @return array of the floors ids
 */
- (NSMutableArray*)getFloorsIds;

/**
 Method returns the number of the floor by its identifier.
 
 @param floorId floor identifier
 @return number of the floor
 */
- (NSNumber*)getFloorIndexByFloorId:(NSNumber*)floorId;

- (INFloor*)getFloorByFloorId:(NSNumber*)floorId;

- (int)getGraphIndexByGraphId:(NSNumber*)graphId;

- (BOOL)isReadyForNavigationAndPathfinding;
- (BOOL)ready;
- (BOOL)loaded;
- (void)cleanup;

- (BOOL)opened;

- (CLLocation*)getShiftedLocation;

- (NSMutableDictionary *)toNSDictionary;

- (void)addRoutableObjects:(NSMutableArray*)routableObjects;

@end

NS_ASSUME_NONNULL_END

#endif
