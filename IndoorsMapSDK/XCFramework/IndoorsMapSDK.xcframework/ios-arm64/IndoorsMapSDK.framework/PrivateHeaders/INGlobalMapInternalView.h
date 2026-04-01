//
//  INGlobalMapInternalView.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGlobalMapInternalView_
#define _INGlobalMapInternalView_

#import <UIKit/UIKit.h>
#import "INGlobalMapView.h"
#import "INBaseMapInternalView.h"
#import "INBaseMapInternalViewDelegate.h"
#import <MapLibre/MLNPolygon.h>
#import "INGlobalInternalMapTapDelegate.h"
//#import "INTerritory.h"

NS_ASSUME_NONNULL_BEGIN

@interface INGlobalMapInternalView : INBaseMapInternalView<INTrackingMapInternalView>

@property (nonatomic,strong) NSMutableArray *buildings;

@property (nonatomic, weak) id<INBaseMapInternalViewDelegate> delegate;
@property (nonatomic, weak) id<INGlobalInternalMapTapDelegate> tapPositionDelegate;

@property (nonatomic) BOOL hideBuildingCalloutView;
@property (nonatomic) BOOL preventOutOfZoomBounds;

@property (nonatomic) MLNCoordinateBounds maxVisibleBuildingBounds;

@property (nonatomic) INCameraPosition initalCamera;

@property (nonatomic) BOOL isBookingApplicaton;

- (instancetype)initWithFrame:(CGRect)frame;

-(void)setNewStyleMapUrl;

- (void)setCurrentBuilding:(nullable INBuilding *)building;
- (void)setFocusedBuilding:(INBuilding *)building;

- (void)zoomToUserLocation:(CLLocation*)location;
- (void)moveForward:(double)meters;
- (void)zoom:(BOOL)zoomIn;
- (void)markBuildingMarkers:(NSMutableArray*)buildings withFocus:(BOOL)focus;

- (void)drawFloors:(INBuilding *)building;
- (void)showFloor:(INFloor*)floor building:(INBuilding *)building;

- (void)drawPolygons:(INBuilding *)building;
- (void)drawWalls:(INBuilding *)building;

- (void)drawRooms:(INBuilding *)building;
- (void)selectRooms:(nullable NSMutableArray*)rooms building:(INBuilding *)building;
- (void)zoomToRoom:(INRoom*)room building:(INBuilding *)building;

- (void)drawOwners:(INBuilding *)building;
- (void)drawOwnersWithSplitTextAndImage:(INBuilding *)building;


- (void)drawIcons:(INBuilding *)building;
- (void)selectIcon:(nullable INIcon*)icon building:(INBuilding *)building;
- (void)zoomToIcon:(INIcon*)icon building:(INBuilding *)building;

- (void)drawElevators:(INBuilding *)building;
- (void)selectElevator:(nullable INElevator*)elevator building:(INBuilding *)building;
- (void)zoomToElevator:(INElevator*)elevator building:(INBuilding *)building;

- (void)drawParkingPlaces:(INBuilding *)building;
- (void)selectParkingPlace:(nullable INParkingPlace*)parkingPlace building:(INBuilding *)building;
- (void)zoomToParkingPlace:(INParkingPlace*)parkingPlace building:(INBuilding *)building;

- (void)drawBeaconPoints:(INBuilding *)building;
- (void)updateBeaconPoints:(INBuilding *)building;
- (void)removeBeaconsFromView:(INBuilding *)building;

- (void)drawDoors:(INBuilding *)building;
- (void)selectDoor:(nullable INDoor*)door building:(INBuilding *)building;
- (void)zoomToDoor:(INDoor*)door building:(INBuilding *)building;

- (void)drawEntrances:(INBuilding *)building;
- (void)selectEntrance:(nullable INEntrance*)entrance building:(INBuilding *)building;
- (void)zoomToEntrance:(INEntrance*)entrance building:(INBuilding *)building;

- (void)drawMapARPoints:(INBuilding *)building;
- (void)selectMapARPoints:(nullable NSMutableArray*)mapARPoints building:(INBuilding *)building;

- (void)drawFireSafetyImagePoints:(INBuilding *)building;
- (void)selectFireSafetyImagePoints:(INFireSafetyImagePoints *)fireSafetyImagePoint building:(INBuilding *)building;

#pragma mark - 3dModels
- (void)drawMap3dModelFromBuilding:(NSArray<INMap3dModel *>  *)models building:(INBuilding *)building;

- (void)drawMediaPoints:(INBuilding *)building;
- (void)selectMediaPoint:(nullable INMediaPoint*)mediaPoint building:(INBuilding *)building;

- (void)drawTourPoints:(nullable NSMutableArray*)tourPoints building:(INBuilding *)building;
- (void)selectTourPoint:(nullable INTourPoint*)tourPoint building:(INBuilding *)building;

- (void)drawPanoramaTourPoints:(nullable NSMutableArray*)panoramaTourPoints building:(INBuilding *)building;
- (void)selectPanoramaTourPoint:(nullable INPanoramaTourPoint*)panoramaTourPoint building:(INBuilding *)building;
- (void)zoomToPanoramaTourPoint:(INPanoramaTourPoint *)point building:(INBuilding *)building;
- (void)didClosePanoramaTour:(INBuilding *)building;

- (void)drawPanoramaPoints:(INBuilding *)building;
- (void)selectPanoramaPoint:(nullable INPanoramaPoint*)panoramaPoint building:(INBuilding *)building;
- (void)deselectAllPanoramaPoints:(INBuilding *)building;
- (void)zoomToPanoramaPoint:(INPanoramaPoint *)point building:(INBuilding *)building;

- (void)drawInfomatPoints:(INBuilding *)building;
- (void)selectInfomatPoint:(nullable INInfomatPoint*)infomatPoint building:(INBuilding *)building;

- (void)prepareRoute:(INBuilding *)building;
- (void)drawRoute:(nullable NSMutableArray*)graphPoints withGraph:(nullable INGraph*)graph isDrawStartPoint:(BOOL)isDrawStartPoint isDrawEndPoint:(BOOL)isDrawEndPoint building:(INBuilding *)building;
- (void)zoomToRouteWithCurrnetRoute :(NSMutableArray *)currnetRoute building:(INBuilding *)building andCompletionBlock:(void (^)())completionBlock;
- (void)prepareWaypoints:(nullable NSMutableArray*)waypoints building:(INBuilding *)building;
- (void)drawWaypoints:(nullable NSMutableArray*)waypoints building:(INBuilding *)building;

- (void)drawRadioTrack:(NSMutableArray*)graphPoints withGraph:(INGraph*)graph building:(INBuilding *)building;
- (void)zoomToTrackWithCompletionBlock:(void (^)())completionBlock;

- (void)drawMultipleRoute:(NSMutableArray<INGraphPoint *> *_Nullable)route andGraph:(INGraph *_Nullable)graph building:(INBuilding *)building;;
- (void)clearMultipleRoute:(INBuilding *)building;

//- (void)drawGlobalRoute:(CLLocationCoordinate2D)origin
//                      :(CLLocationCoordinate2D)destination
//                      :(NSString *)profile
//                      :(NSString *)color
//                       :(INBuilding *)building
//    withCompletionBlock:(void (^)(NSMutableArray * _Nullable globalRouteWaypoints, NSError * _Nullable error))completionBlock;


- (void)drawGlobalRoute:(CLLocationCoordinate2D)origin
                       :(CLLocationCoordinate2D)destination
                       :(NSString *)profile
                       :(NSString *)color
                       :(INBuilding *)building
                       :(BOOL)isDrawStartCircle  // 1. Рисовать ли старт
                       :(BOOL)isDrawFinishCircle // 2. Рисовать ли финиш
                       :(float)circleRadius      // 3. Радиус кругов
    withCompletionBlock:(void (^)(NSMutableArray * _Nullable coordinates, NSMutableArray * _Nullable globalRouteWaypoints, NSError * _Nullable error))completionBlock;

- (void)updateGlobalRouteWithCoordinates:(NSMutableArray<NSValue *> *)coords
                                   color:(NSString *)color
                            circleRadius:(float)circleRadius
                       isDrawStartCircle:(BOOL)isDrawStartCircle
                      isDrawFinishCircle:(BOOL)isDrawFinishCircle;

//-(void)checkAndRemoveRouteIfReachedLocation:(CLLocationCoordinate2D)location;

- (void)clearGlobalRoute:(INBuilding *)building;
- (void)removeGlobalRoute;

- (void)setHideLocationPointInBuilding;


//-(void)getCoordinateForDrawGlobalRoute:(CLLocationCoordinate2D)origin
//                                      :(CLLocationCoordinate2D)destination
//                                      :(NSString*)profile
//                                      :(NSString*)color
//                                      :(INBuilding *)building
//                   withCompletionBlock:(void (^)( NSArray<NSValue *> * coordinate))completionBlock;

//- (void)zoomToPosition:(CGPoint)position withCompletionBlock:(void (^)())completionBlock;
- (void)zoomToPosition:(CGPoint)position floorId:(double)floorId withCompletionBlock:( void (^)(void))completionBlock;

- (void)updateUserPosition:(CGPoint)position building:(INBuilding *)building;
- (void)updateUserRotation:(float)heading;
- (void)updateAccuracyIn:(NSNumber*)accuracy;
- (void)updateAccuracyOut:(NSNumber*)accuracy;
- (void)updateRoutePointAPosition:(CGPoint)position building:(INBuilding *)building;
- (void)updateRoutePointBPosition:(CGPoint)position building:(INBuilding *)building;

- (void)updateUserLocation:(CLLocation*)location building:(INBuilding *)building;

- (void)drawSharedUserPosition:(INDrawUserPositionProcedureParams*)drawUserPositionProcedureParams;

//- (void)hideBuildingFeaturesForBuilding:(INBuilding*)building;
//- (void)hideBuildingFeaturesInPolygon:(MLNMultiPolygon*)polygon forBuilding:(INBuilding*)building;

- (INRouteDirection)mapDirectionFromType:(NSString *)type andModifier:(NSString *)modifier;


- (void)cleanup;

- (void)hideBuildingAnnotationViewForBuilding:(id)territory;
- (void)showBuildingAnnotations:(INBuilding *)building;

- (UIImage*)takeCenterSnapshot;

- (void)zoomToCameraPostion:(INCameraPosition)cameraPosition;

- (void)updateMapConstraints:(CGRect)frame;


- (void)zoomToCoordinateX:(double)x y:(double)y floorId:(double) floorId building:(INBuilding *)building withCompletionBlock:( void (^)(void))completionBlock;
- (void)zoomToCoordinateXAndAddMarker:(double)x y:(double)y floorId:(double) floorId building:(INBuilding *)building;
- (void)enablePointSelecting:(INBuilding *)building;
- (void)addPointMarkerOnFloor:(NSNumber *)floorId andPoint:(CGPoint)point building:(INBuilding *)building;

- (void)unselectAllOnMap:(INBuilding *)building;

- (void)setSelectedObjectWith:(id)selectedObject building:(INBuilding *)building;

- (void)needShowFloorWithNumber2:(NSNumber *)number buildingId:(NSNumber *)buildingId;

-(id)getCurrentTerritory;
-(id)getAllTerritories;
-(INBuilding *)getCurrentBuilding;

- (void)zoomOutToEntraceFromTabWaypointCoordinateX:(NSNumber *)x y:(NSNumber *)y floorId:(NSNumber *) floorId buildingId:(NSNumber *)buildingId withCompletionBlock:( void (^)(void))completionBlock;

@end

NS_ASSUME_NONNULL_END

#endif
