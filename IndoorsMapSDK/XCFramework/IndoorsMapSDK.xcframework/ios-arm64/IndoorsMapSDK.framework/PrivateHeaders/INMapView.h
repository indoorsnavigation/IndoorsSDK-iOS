//
//  INMapView.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMapView_
#define _INMapView_

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>

#import <UIKit/UIKit.h>
#import "INBaseMapView.h"

#import <ARKit/ARKit.h>
#import "IN2DShapeLayer.h"
#import "INRouteSearchView.h"
#import "INGridMenu.h"
#import "INTourPickerView.h"
//#import "INBuilding.h"
//#import "INNavigation.h"
//#import "INMediaPoint.h"
//#import "INPanoramaPoint.h"
//#import "INInfomatPoint.h"
#import "INBaseMapViewDelegate.h"
#import "INMapViewsConfiguration.h"

/**

 */
typedef enum: int
{
    D2 = 0,
    D25
} INMapInternalViewMode;

NS_ASSUME_NONNULL_BEGIN
@class INBaseMapView;
 

/// The `INMapView` is a 2D/3D Map interface that provides an API for viewing and navigation in building map.
///
/// The API allows to access the in-building range of mapping and navigation functionalities, including the ability to zoom to in-building objects like Rooms, making route with choosen routable objects, making it a powerful tool for navigating indoor environments.
@interface INMapView : INBaseMapView

/// Property that controls map buttons corner radius.
/// By default its fetching this value from current INApplication.
@property (nonatomic, nullable) NSNumber *buttonsCornerRadius;

/// Designated initializer
/// - Parameter containerView: Container view that will contain `INMapView` view. When adding map view to its container view as subview, container view must have non zero size.
- (instancetype)initWithView:(nonnull UIView*)containerView;

/// - Init for Tracking Map without some map elements
- (instancetype)initWithView:(nonnull UIView*)containerView andConfiguration:(INMapViewsConfiguration *)configuration;

/// Map will show layer of that specified floor,
/// - Parameter floor: Floor to select.
- (void)selectFloor:(INFloor*)floor;

/// Map will select floor of that room, zoom to specified room and show RoomInfoVIew.
/// - Parameter room: Room to select.
- (void)selectRoom:(nullable INRoom*)room;

/// Map will select object floor and zoom to it.
/// - Parameter routeObject: Object that confirms `INRoutableProtocol` protocol.
- (void)zoomToRoutableObject:(id<INRoutableProtocol>)routeObject;

/// Mark rooms selected.
/// - Parameter rooms: Array of `INRoom` objects.
- (void)markRooms:(nullable NSMutableArray*)rooms;

/// Map view will show `INTourPickerView` that will display `INTour` objects.
- (void)showTours;

- (void)changeFloor:(NSInteger)floorIndex;

/// Starts a tour event.
///
///  - Parameter tour: `INTour` object.
///  - Note: Method will reset current route and draw new route for the tour.
- (void)selectTour:(nullable INTour*)tour;

/// Change map routable objects and calculates the route.
/// - Parameters:
///   - startRoom: Starting routable object that must conform to `INRoutableProtocol` protocol.
///   - finishRoom: Finishing routable object that must conform to `INRoutableProtocol` protocol.
- (void)setRouteStartObject:(nullable id<INRoutableProtocol>)startRoom
            andFinishObject:(nullable id<INRoutableProtocol>)finishRoom;

/// Draws shared user position.
/// - Parameter drawUserPositionProcedureParams: `INDrawUserPositionProcedureParams` object.
- (void)drawSharedUserPosition:(nullable INDrawUserPositionProcedureParams*)drawUserPositionProcedureParams;

@end

NS_ASSUME_NONNULL_END

#endif
