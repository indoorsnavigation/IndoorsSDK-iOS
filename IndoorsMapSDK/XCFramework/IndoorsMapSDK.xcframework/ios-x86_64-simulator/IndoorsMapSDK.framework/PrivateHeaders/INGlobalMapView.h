//
//  INGlobalMapView.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGlobalMapView_
#define _INGlobalMapView_

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <UIKit/UIKit.h>
#import "INBaseMapView.h"

#import "INRouteSearchView.h"
#import "INGridMenu.h"
#import "INTourPickerView.h"
#import "INBaseMapViewDelegate.h"
#import "INMinewBeaconAdminDelegate.h"
#import "INGlobalInternalMapTapDelegate.h"

NS_ASSUME_NONNULL_BEGIN



/// The `INGlobalMapView` is a 3D Global Map interface that provides an API for navigation within buildings and other in-building functionalities.
///
///	The API allows to access the full range of mapping and navigation functionalities, including the ability to navigate to building from current user location,  zoom to map objects like Buildings and Rooms, making route with choosen routable objects and interact with different map objects, making it a powerful tool for navigating indoor environments.
///
///
/// - Note:
@interface INGlobalMapView : INBaseMapView

/// Delegate for handling map events.
@property (nonatomic, assign, nullable) id<INMinewBeaconAdminDelegate> minewBeaconAdminDelegate;

/// Property that determines if building view hidden.
@property (nonatomic) BOOL hideBuildingCalloutView;
/// Property that determines if search view hidden.
@property (nonatomic) BOOL searchViewHidden;
/// Property that determines if tour route building from point to point serially, if true.
/// If falst, route will be building from first to last point.
@property (nonatomic) BOOL isTourMultipleRoutesActive;
/// Property that determines if map will prevent user camera to go out of custom bounds.
/// Look for @property `INCoordinateBounds` maxVisibleBuildingBounds.
@property (nonatomic) BOOL preventOutOfZoomBounds;
/// Property that determines if adjective button hidden.
/// Observe touches on this button in map delegate.
@property (nonatomic) BOOL isNeedToAddAdjectiveButton;
/// Property that determines if map must start with inital camera position.
/// Look for @property `INCameraPosition` initialCameraPostion.
@property (nonatomic) BOOL isInitialCameraPositionExists;
/// Property that determines if map FloorForegroundThinExtrusionLayer use lighten FloorBackgroundColor.
@property (nonatomic) BOOL isFloorLightenFloorBackgroundColor;

/// Property that determines if map will hide owner icon images, for owners that title contains only from digits.
@property (nonatomic) BOOL isDigitsOnlyTitleIconsHideImage;


//_shareButton

/// Property that controls map buttons corner radius.
/// By default its fetching this value from current INApplication.
@property (nonatomic, nullable) NSNumber *buttonsCornerRadius;

@property (nonatomic) INCoordinateBounds maxVisibleBuildingBounds;
@property (nonatomic) INCameraPosition initialCameraPostion;

+ (BOOL)isFloorLightenFloorBackgroundColor;
+ (BOOL)isDigitsOnlyTitleIconsHideImage;

/// Designated initializer
/// - Parameter containerView: Container view that will contain `INMapView` view. When adding map view to its container view as subview, container view must have non zero size.
- (instancetype)initWithFrame:(CGRect)frame;
- (instancetype)initWithFrame:(CGRect)frame andConfiguration:(INMapViewsConfiguration *)configuration;

- (void)moveForward:(double)meters;

- (void)setBuildings:(nullable NSMutableArray*)buildings;

/// Map will show layer of that specified floor,
/// - Parameter floor: Floor to select.
- (void)selectFloor:(INFloor*)floor;

- (void)selectRooms:(nullable NSMutableArray*)rooms;
/// Map will zoom to room.
/// - Parameter room: `INRoom` object.
- (void)zoomToRoom:(INRoom*)room;


/// Map view will zoom to icon, set it selected and display Room Info View.
/// - Parameter icon: `INIcon` object.
- (void)selectIcon:(nullable INIcon*)icon;

/// Map view will zoom to icon.
/// - Parameter icon: `INIcon` object.
- (void)zoomToIcon:(INIcon*)icon;

/// Map view will zoom to elevator, set it selected and display Elevator Info View.
/// - Parameter elevator: `INElevator` object.
- (void)selectElevator:(nullable INElevator*)elevator;
/// Map view will zoom to elevator.
/// - Parameter elevator: `INIcon` object.
- (void)zoomToElevator:(INElevator*)elevator;

/// Map view will zoom to parking place, set it selected and display Parking Place Info View.
/// - Parameter parkingPlace: `INParkingPlace` object.
- (void)selectParkingPlace:(nullable INParkingPlace*)parkingPlace;

/// Map view will zoom to parking place.
/// - Parameter parkingPlace: `INParkingPlace` object.
- (void)zoomToParkingPlace:(INParkingPlace*)parkingPlace;

/// Map view will zoom to door, set it selected and display Door Info View.
/// - Parameter door: `INDoor` object.
- (void)selectDoor:(nullable INDoor*)door;

/// Map view will zoom to door.
/// - Parameter door: `INDoor` object.
- (void)zoomToDoor:(INDoor*)door;

/// Map view will zoom to entrance, set it selected and display Entrance Info View.
/// - Parameter entrance: `INEntrance` object.
- (void)selectEntrance:(nullable INEntrance*)entrance;

/// Map view will zoom to entrance.
/// - Parameter entrance: `INEntrance` object.
- (void)zoomToEntrance:(INEntrance*)entrance;

/// Map view will show `INTourPickerView` that will display `INTour` objects.
- (void)showTours;

/// Starts a tour event.
///
///  - Parameter tour: `INTour` object.
///  - Note: Method will reset current route and draw new route for the tour.
- (void)selectTour:(nullable INTour*)tour;

/// Set map routable objects and calculates the route.
/// - Parameters:
///   - startRoom: Starting routable object that must conform to `INRoutableProtocol` protocol.
///   - finishRoom: Finishing routable object that must conform to `INRoutableProtocol` protocol.
- (void)setRouteStartObject:(nullable id<INRoutableProtocol>)startObject
            andFinishObject:(nullable id<INRoutableProtocol>)finishObject;

/// Set map finish object and display it in the Route View.
/// - Parameter finishObject: Object that conform to a `INRoutableProtocol` protocol.
/// - Note: Method will reset current route.
- (void)makeRouteWithFinalObject:(nullable id<INRoutableProtocol>)finishObject;

/// Set map start object and display it in the Route View.
/// - Parameter startObject: Object that conform to a `INRoutableProtocol` protocol.
/// - Note: Method will reset current route.
- (void)makeRouteWithStartObject:(nullable id<INRoutableProtocol>)startObject;


/// Draws global route from your location to building.
/// - Parameters:
///   - building: `INBuilding` object.
///   - completionBlock: Completion block.
- (void)drawGlobalRouteToBuilding:(INBuilding*)building
              withCompletionBlock:(void (^)(NSError *error))completionBlock;

/// Removes global route from your location to building.
- (void)clearGlobalRoute;

/// Show building Annotations views.
/// - Parameter buildings: Array of `INBuilding` objects.
/// - Parameter focus: Flag that determenies if building need to be focused.
/// - Note: If buildings consist of only one building and focus = true, map will set focused building instead.
- (void)markBuildingMarkers:(NSMutableArray*)buildings withFocus:(BOOL)focus;

/// Display Building Search View
- (void)startSearchingInSearchView;
/// Do nothing
- (void)finishEditingInSearchView;
/// Do nothing
- (void)finishSearchingInSearchView;
/// Update navigation by restarting navigation in building
///
/// - Note: Uses when building navigation setting changed.
- (void)restartNavigationInBuilding;


/// - Note: Uses when stoped location and navigation
- (void)restartNavigationAndLocationInBuilding;
- (void)stopNavigationAndLocationInBuilding;

/// Clean all of focused building data, remove all building associated views, stop navigation in building, cancel all INService requests and clean all building layers.
- (void)cleanup;

// updateMapConstraints if need 
-(void)updateMapConstraints:(CGRect)frame;

/// for hide buttons
@property (nonatomic) BOOL hideSearchButton;
@property (nonatomic) BOOL hideARButton;
@property (nonatomic) BOOL hideLocationButton;
@property (nonatomic) BOOL hideNavigationButton;
@property (nonatomic) BOOL hideRoomInfoView;
@property (nonatomic) BOOL hideVoiceSearchButton;
@property (nonatomic) BOOL hideRouteButton;
@property (nonatomic) BOOL hideSelectGraphButton;
@property (nonatomic) BOOL hideTourButton;
@property (nonatomic) BOOL hideBeacons;
@property (nonatomic) BOOL hideSelectFloorButton;
@property (nonatomic) BOOL hideShareButton;


/// for booking apps
@property (nonatomic) BOOL isBookingApplicaton;

-(void)setUserPositionReceivedFirstTime:(BOOL) value;

/// redrawing rooms if need
-(void)redrawingRooms;

-(void)setScanBeaconsWithPower:(NSArray *)beacons;

-(void)updateMapConstraintsMapInternalView:(CGRect)frame;

- (void)enablePointSelecting;
- (void)addPointMarkerOnFloor:(NSNumber *)floorId andPoint:(CGPoint)point;
- (void)setInternalMapTapDelegate:(id<INGlobalInternalMapTapDelegate>)delegate;

// Tracking
- (nullable INFloor *)currentFloor;
- (id<INTrackingMapInternalView>)getTrackingInternalMap;


- (void)zoomToCoordinateX:(double)x y:(double)y floorId:(double) floorId;
- (void)zoomToCoordinateXAndAddMarker:(double)x y:(double)y floorId:(double) floorId;

@end

NS_ASSUME_NONNULL_END

#endif
