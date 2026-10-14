//
//  INBaseMapInternalViewDelegate.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBaseMapInternalViewDelegate_
#define _INBaseMapInternalViewDelegate_

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <Foundation/Foundation.h>
//#import "INWaypoint.h"
//#import "INGraph.h"
//#import "INPanoramaTourPoint.h"
#import <MapLibre/MLNUserLocation.h>
NS_ASSUME_NONNULL_BEGIN
/**
 `INBaseMapInternalViewDelegate` protocol.
 */
@protocol INBaseMapInternalViewDelegate <NSObject>

@optional


/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
textForDebuggingPosition:(NSString *)test;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
   didTapBuildingMarker:(nullable INBuilding*)building;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
   didTapOnCalloutForBuildingMarker:(nullable INBuilding*)building;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
      didSelectBuilding:(nullable INBuilding*)building;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
      didSelectBuilding:(nullable INBuilding*)building
   andSelectedTerritory:(nullable INBuilding*)territoryBuilding;


/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
      didSelectTerritory:(nullable INBuilding*)territoryBuilding;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
          didSelectRoom:(nullable INRoom*)room;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
         didSelectFloor:(nullable INFloor*)floor;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
  didSelectRoomForRoute:(nullable INRoom*)room;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
    didSelectMediaPoint:(nullable INMediaPoint*)mediaPoint;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
    didSelectTourPoint:(nullable INTourPoint*)tourPoint;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
          didSelectIcon:(nullable INIcon*)icon;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
  didSelectIconForRoute:(nullable INIcon*)icon;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
      didSelectElevator:(nullable INElevator*)elevator;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
didSelectElevatorForRoute:(nullable INElevator*)elevator;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
      didSelectParkingPlace:(nullable INParkingPlace*)parkingPlace;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
didSelectParkingPlaceForRoute:(nullable INParkingPlace*)parkingPlace;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
      didSelectDoor:(nullable INDoor*)door;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
didSelectDoorForRoute:(nullable INDoor*)door;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
      didSelectEntrance:(nullable INEntrance*)entrance;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
didSelectEntranceForRoute:(nullable INEntrance*)entrance;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
 didSelectPanoramaPoint:(nullable INPanoramaPoint*)panoramaPoint;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
 didSelectPanoramaTourPoint:(nullable INPanoramaTourPoint*)panoramaTourPoint;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
  didSelectInfomatPoint:(nullable INInfomatPoint*)infomatPoint;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
      didSelectWaypoint:(nullable INWaypoint*)waypoint;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
didSelectDrawUserPositionProcedureParams:(nullable INDrawUserPositionProcedureParams*)drawUserPositionProcedureParams;

/**
 
 */

- (void)mapInternalView:(UIView*)mapInternalView
didSelectFireSafetyImagePoint:(nullable INFireSafetyImagePoints*)selectFireSafetyImagePoint;


/**
 
 */

- (void)mapInternalView:(UIView*)mapInternalView
didSelectMapARPoint:(nullable INMapARPoint*)mapARPoint;

/**
 
 */
- (void)mapInternalViewDidSelectNothing:(UIView*)view;

/**
 
 */

- (void)drawGlobalRouteToBuildingWith:(INBuilding*)building userLocation:(CLLocation *)userLocation withCompletionBlock:(void (^)(NSMutableArray * _Nullable globalRouteWaypoints, NSError *error))completionBlock;

/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView
        didTapPositionX:(float)X positionY:(float)Y positionZ:(int)Z;

- (void)mapInternalView:(UIView*)mapInternalView
  didUpdateUserLocation:(nullable MLNUserLocation *)userLocation;

- (void)mapInternalView:(nonnull UIView*)view
         didSelectGraph:(nullable INGraph*)graph;

- (void)mapInternalViewDidFinishLoadingMap:(nonnull UIView*)view;

- (void)mapInternalView:(UIView*)mapInternalView
    didTapPositionCoordinate:(CLLocationCoordinate2D)coordinate;


/**
 
 */
- (void)mapInternalView:(UIView*)mapInternalView didUpdateUserScreenPoint:(CGPoint)userScreenPoint;



- (void)mapInternalView:(UIView*)mapInternalView pointTapOnMap:(CGPoint)point;


- (void)mapInternalView:(UIView*)mapInternalView needShowFloorWithNumber2:(NSNumber *)number buildingId:(NSNumber *)buildingId;


- (void)mapInternalView:(UIView*)mapInternalView
      didSelectBuildingForInfo:(nullable INBuilding*)building;



-(void)isLoadingAllBuildings:(BOOL)isLoading;
-(void)loadingViewStart;
-(void)loadingViewStop;

- (void)updateTerritories:(NSMutableArray *)territories;

@end

NS_ASSUME_NONNULL_END

#endif
