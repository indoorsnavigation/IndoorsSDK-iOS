//
//  INBaseMapViewDelegate.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBaseMapViewDelegate_
#define _INBaseMapViewDelegate_

#import <Foundation/Foundation.h>
#import "INBaseMapView.h"
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import "INViewState.h"
//#import "INPanoramaPoint.h"
//#import "INPosition2.h"

@class INBaseMapView;

NS_ASSUME_NONNULL_BEGIN


/**
 Protocol used to handle events and state changes related to a map view. The protocol defines optional methods for handling events such as when a building marker is tapped, map objects selected, and more. Additionally, it defines methods for handling the state changes of various views such as room information view, tour points table view, and media point view.
*/
@protocol INBaseMapViewDelegate <NSObject>

@optional

/**
 Called when the user's position is updated.
 */
- (void)mapView:(INBaseMapView*)mapView didUpdateUserPosition:(INPosition2*)position;

/**
 Called when a building marker is tapped on the map.
 */
- (void)mapView:(INBaseMapView*)mapView didTapBuildingMarker:(nullable INBuilding*)building;

/**
 Called when the callout for a building marker is tapped on the map.
 */
- (void)mapView:(INBaseMapView*)mapView didTapOnCalloutForBuildingMarker:(nullable INBuilding*)building;

/**
 Called before a building is drawn on the map.
 */
- (void)mapView:(INBaseMapView*)mapView willDrawBuilding:(nullable INBuilding*)building;

/**
 Called after a building is drawn on the map
 */
- (void)mapView:(INBaseMapView*)mapView didDrawBuilding:(nullable INBuilding*)building;

/**
 Called after a some layer of a building is drawn on the map.
 */
- (void)mapView:(INBaseMapView*)mapView didDrawBuildingLayer:(Class)layerClass;

/**
 Called when a floor is selected on the map
 */
- (void)mapView:(INBaseMapView*)mapView didSelectFloor:(nullable INFloor*)floor;

/**
 Invokes when this or that room on the map is chosen.
 */
- (void)mapView:(INBaseMapView*)mapView didSelectRoom:(nullable INRoom*)room;

/**
 Invokes when media point on the map is chosen.
 */
- (void)mapView:(INBaseMapView*)mapView didSelectMediaPoint:(nullable INMediaPoint*)mediaPoint;

/**
 Invokes when media point on the map is chosen.
 */
- (void)mapView:(INBaseMapView*)mapView didSelectTour:(nullable INTour*)tour;

/**
 Invokes when this or that icon on the map is chosen.
 */
- (void)mapView:(INBaseMapView*)mapView didSelectIcon:(nullable INIcon*)icon;

/**
 Called when an elevator is selected on the map.
 */
- (void)mapView:(INBaseMapView*)mapView didSelectElevator:(nullable INElevator*)elevator;

/**
 Called when an elevator is selected on the map.
 */
- (void)mapView:(INBaseMapView*)mapView didSelectParkingPlace:(nullable INParkingPlace*)parkingPlace;

/**
 Called when a door is selected on the map
 */
- (void)mapView:(INBaseMapView*)mapView didSelectDoor:(nullable INDoor*)door;


/**
 Called when an entrance is selected on the map
 */
- (void)mapView:(INBaseMapView*)mapView didSelectEntrance:(nullable INEntrance*)entrance;

/**
 Called when a tour point is selected on the map.
 */
- (void)mapView:(INBaseMapView*)mapView didSelectTourPoint:(nullable INTourPoint*)tourPoint;

/**
 Invokes when panorama on the map is chosen.
 */
- (void)mapView:(INBaseMapView*)mapView didSelectPanoramaPoint:(nullable INPanoramaPoint*)panoramaPoint;

/**
 Invokes when media panorama view closed.
 */

- (void)mapView:(INBaseMapView*)mapView didClosePanorama:(nullable INPanoramaPoint*)panoramaPoint;;

/**
 Invokes when user touch empty space on map.
 */
- (void)mapViewDidSelectNothing:(INBaseMapView*)mapView;

/**
 Called when the state of a media point view changes.
 */
- (void)mapView:(INBaseMapView*)mapView mediaPointView:(UIView*)mediaPointView didChangeState:(INViewState)state;

/**
 Called when the state of a room information view changes.
 */
- (void)mapView:(INBaseMapView*)mapView roomInfoView:(UIView*)roomInfoView didChangeState:(INViewState)state;

/**
 Called when the state of a tour points table view changes.
 */
- (void)mapView:(INBaseMapView*)mapView tourPointsTableView:(UIView*)roomInfoView didChangeState:(INViewState)state;

/**
 Called when the user shares their position with a title, image, and URL.
 */
- (void)mapView:(INBaseMapView*)mapView didSharePositionWithTitle:(NSString*)title image:(UIImage*)image andUrl:(NSURL*)url;

/**
 Called before drawing a global route to a building.
 */
- (void)mapView:(INBaseMapView*)mapView willDrawGlobalRouteToBuilding:(INBuilding*)building;

/**
 Called after a global route to a building is drawn
 */
- (void)mapView:(INBaseMapView*)mapView didDrawGlobalRouteToBuilding:(INBuilding*)building;

/**
 Called before starting a search on the map.
 */
- (void)mapViewWillStartSearch:(UIView*)view;

/**
 Called after finishing a search on the map.
 */
- (void)mapViewDidFinishSearch:(UIView*)view;

/**
 Called when search results are retrieved.
 */
- (void)mapView:(INBaseMapView*)mapView didGetSearchResults:(NSMutableArray*)buildings;

/**
 Called when a search is finished with results.
 */
- (void)mapView:(INBaseMapView*)mapView didFinishSearchWithResults:(NSMutableArray*)buildings;

/**
 Called when the global route on the map is cleared.
 */
- (void)mapViewDidClearGlobalRoute:(INBaseMapView*)mapView;

/**
 
 */
- (void)mapView:(INBaseMapView *)mapView didLoadedBuilding:(INBuilding *)building withSeconds:(NSTimeInterval)seconds;

/**
 
 */
- (void)mapViewDidTouchAdjectiveButton:(INBaseMapView *)mapView;

/**
 Called when route is caclulated in - (void)calculateRoute method
 */
- (void)mapView:(INBaseMapView *)mapView didCalculateWaypoints:(NSMutableArray *)waypoints withGraph:(INGraph*)graph;

/**
 Called when the route is canceled by the user (on tap on cancel button in waypointView)
 */
- (void)mapViewUserDidCancelRoute:(INBaseMapView *)mapView;

@end

NS_ASSUME_NONNULL_END

#endif
