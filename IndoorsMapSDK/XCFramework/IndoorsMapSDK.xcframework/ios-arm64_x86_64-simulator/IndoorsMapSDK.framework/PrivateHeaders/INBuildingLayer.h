//
//  INBuildingLayer.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBuildingLayer_
#define _INBuildingLayer_

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>

#import <UIKit/UIKit.h>
//#import "INBuilding.h"
#import "INGlobalMapInternalView.h"
//#import "INPanoramaTourPoint.h"

#import <MapLibre/MLNMapView.h>
#import <MapLibre/MLNStyle.h>
//#import "INTrackedMapObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INBuildingLayer : NSObject

- (instancetype)initWithStyle:(MLNStyle*)style
                      mapView:(MLNMapView*)mapView
             buildingRenderer:(id)buildingRenderer
     andGlobalMapInternalView:(INGlobalMapInternalView*)globalMapInternalView;


@property (nonatomic,weak) INBuilding *building;
- (void)setBuildingEmptyBuilding:(INBuilding*)building;


- (void)setBuilding:(INBuilding*)building;

- (void)drawFloors;
- (void)showFloor:(INFloor*)floor currentBuildingId:(NSNumber *)currentBuildingId;
- (void)showFloorOnlyFor3DBuildingModel:(INFloor*)floor;

- (void)drawRooms:(BOOL)isBooking;
- (void)selectRooms:(NSMutableArray*)rooms;
- (void)zoomToRoom:(INRoom*)room;

- (void)drawPolygons;
- (void)drawWalls;

// Tracking
- (void)addTrackedObject:(id<INTrackedMapObject>)object andOpacity:(nullable NSNumber *)opacity;
- (void)updateTrackedObject:(id<INTrackedMapObject>)object;
- (void)removeTrackingPointWithUUID:(NSString *)uuid;
// ----

- (void)drawOwners;
- (void)drawOwnersWithSplitTextAndImage;

- (void)drawIcons;
- (void)selectIcon:(INIcon*)icon;
- (void)zoomToIcon:(INIcon*)icon;

//- (void)drawElevators;
//- (void)selectElevator:(INElevator*)elevator;
//- (void)zoomToElevator:(INElevator*)elevator;

//- (void)drawParkingPlaces;
//- (void)selectParkingPlace:(INParkingPlace*)parkingPlace;
//- (void)zoomToParkingPlace:(INParkingPlace*)parkingPlace;

//- (void)drawDoors;
//- (void)selectDoor:(INDoor*)door;
//- (void)zoomToDoor:(INDoor*)door;
//
- (void)drawEntrances;
- (void)selectEntrance:(INEntrance*)entrance;
- (void)zoomToEntrance:(INEntrance*)entrance;

- (void)drawBeaconPoints;
- (void)updateBeaconPoints;
- (void)removeBeaconsFromView;

- (void)drawMediaPoints;
- (void)selectMediaPoint:(INMediaPoint*)mediaPoint;

- (void)drawTourPoints:(NSMutableArray*)tourPoints;
- (void)selectTourPoint:(INTourPoint*)tourPoint;

- (void)drawPanoramaTourPoints:(NSMutableArray*)panoramaTourPoints;
- (void)selectPanoramaTourPoint:(INPanoramaTourPoint*)panoramaTourPoint;
- (void)zoomToPanoramaTourPoint:(INPanoramaTourPoint *)point;
- (void)didClosePanoramaTour;

- (void)drawPanoramaPoints;
- (void)selectPanoramaPoint:(INPanoramaPoint*)panoramaPoint;
- (void)deselectAllPanoramaPoints;
- (void)zoomToPanoramaPoint:(INPanoramaPoint *)point;

- (void)drawInfomatPoints;
- (void)selectInfomatPoint:(INInfomatPoint*)infomatPoint;

- (void)drawMapARPoints;
- (void)selectMapARPoints:(NSMutableArray*)mapARPoints;

#pragma mark - 3dModels
- (void)drawMap3dModelFromBuilding:(NSArray<INMap3dModel *>  *)models;
- (void)drawBuildigModelOnMap:(INMap3dModel *)model;
- (void)hideBuildingModelOnMap:(BOOL)hide;

- (void)prepareRoute;
- (void)drawRoute:(NSMutableArray*)graphPoints withGraph:(INGraph*)graph isDrawStartPoint:(BOOL)isDrawStartPoint  isDrawEndPoint:(BOOL)isDrawEndPoint;
- (void)zoomToRouteWithCurrnetRoute :(NSMutableArray *)currnetRoute andCompletionBlock:(void (^)())completionBlock;

- (void)drawRadioTrack:(NSMutableArray*)graphPoints withGraph:(INGraph*)graph;
- (void)zoomToTrackWithCompletionBlock:(void (^)())completionBlock;
- (void)drawMultipleRoute:(NSMutableArray<INGraphPoint *> *_Nullable)route andGraph:(INGraph *_Nullable)graph;
- (void) clearMultipleRoute;

//- (void)drawFireSafetyImagePoints;
//- (void)selectFireSafetyImagePoints:(INFireSafetyImagePoints *)fireSafetyImagePoint;

- (void)prepareWaypoints:(NSMutableArray*)waypoints;
- (void)drawWaypoint:(NSMutableArray*)waypoints;

- (void)drawSharedUserPosition:(INDrawUserPositionProcedureParams*)drawUserPositionProcedureParams;

- (void)processTouchPoint:(CGPoint)touchPoint;
- (void)setSelectedObjectWith:(id)selectedObject;

- (void)setLocationPoint:(CGPoint)point heading:(float) heading  isNeedHide:(BOOL)isNeedHide;

- (void)showFloorWithFloorId:(double)floor currentBuildingId:(NSNumber *)currentBuildingId;
- (void)hideAllFloors;
- (void)zoomToCoordinateX:(double)x y:(double)y floorId:(double) floorId withCompletionBlock:( void (^)(void))completionBlock;
- (void)zoomToCoordinateX:(double)x y:(double)y floorId:(double) floorId heading:(double)heading withCompletionBlock:( void (^)(void))completionBlock;
- (void)zoomToCoordinateXAndAddMarker:(double)x y:(double)y floorId:(double) floorId;
- (void)handleMapTap:(CLLocationCoordinate2D)coordinate floorId:(NSNumber *)floorId;
- (void)deleteTapPointMarkers;
- (void)setupTapPointLayer;

- (void)setDelegateINBuildingLayerRendererToINFloorLayer;

- (void)unselectAllOnMap;

- (void)needShowFloorWithNumber2:(NSNumber *)number buildingId:(NSNumber *)buildingId;

- (void)setTerritorryDelegate;

- (void)drawAnnotation;
- (void)showAnnotation;
- (void)hideAnnotation;
- (BOOL)selectAnnotation;
- (void)unSelectAnnotation;

- (void)updateStyle:(MLNStyle *)style andRenderer:(id)renderer;


- (void)zoomOutToEntraceFromTabWaypointCoordinateX:(NSNumber *)x y:(NSNumber *)y floorId:(NSNumber *) floorId buildingId:(NSNumber *)buildingId withCompletionBlock:( void (^)(void))completionBlock;

-(NSNumber *)getCurrentFloorId;

- (void)cleanup;
- (void)remove;

@end

NS_ASSUME_NONNULL_END

#endif
