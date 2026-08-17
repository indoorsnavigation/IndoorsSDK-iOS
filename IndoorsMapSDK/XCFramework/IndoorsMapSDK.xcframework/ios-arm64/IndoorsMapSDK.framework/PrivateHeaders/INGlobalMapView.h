////
////  INGlobalMapView.h
////  IndoorsMapSDK
////
////  Created by Indoors on 27.10.2025.
////
//
#ifndef INGlobalMapView_h
#define INGlobalMapView_h

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <UIKit/UIKit.h>
#import "INBaseMapView.h"
#import "INConverterForMap.h"

#import "INRouteSearchView.h"
#import "INGridMenu.h"
#import "INTourPickerView.h"
#import "INBaseMapViewDelegate.h"
#import "INMinewBeaconAdminDelegate.h"
#import "INGlobalInternalMapTapDelegate.h"
#import "INGlobalMapViewBackButtonDelegate.h"



NS_ASSUME_NONNULL_BEGIN


/**
 The `INGlobalMapView` is a 3D Global Map interface that provides an API for navigation within buildings and other in-building functionalities.

    The API allows to access the full range of mapping and navigation functionalities, including the ability to navigate to building from current user location,  zoom to map objects like Buildings and Rooms, making route with choosen routable objects and interact with different map objects, making it a powerful tool for navigating indoor environments.

 */

/// - Note:
@interface INGlobalMapView : INBaseMapView

/**
 Delegate processing to handle display events related to beacons.
 */
@property (nonatomic, weak) id<INMinewBeaconAdminDelegate> minewBeaconAdminDelegate;

/**
 Sets the delegate for internal map tap events.

 @param delegate The delegate object conforming to `INGlobalInternalMapTapDelegate`.
 */
- (void)setInternalMapTapDelegate:(id<INGlobalInternalMapTapDelegate>)delegate;


/**
 A delegate for processing clicks on the "Back" button.
 
 */
@property (nonatomic, weak, nullable) id<INGlobalMapViewBackButtonDelegate> backButtonDelegate;

/**
 Designated initializer.

 @param frame The frame rectangle for the view, measured in points.
 @return An initialized map view object.
 */
- (instancetype)initWithFrame:(CGRect)frame;







/**
 Property that determines if the tour route is building from point to point serially.
 If false, the route will be built from the first to the last point.
 */
@property (nonatomic) BOOL isTourMultipleRoutesActive;

/**
 Property that controls the map buttons corner radius.
 By default, it fetches this value from the current INApplication.
 */
@property (nonatomic, nullable) NSNumber *buttonsCornerRadius;


/**
 Sets the array of buildings on the map.

 @param buildings Array of `INBuilding` objects to be set.
 */
- (void)setBuildings:(nullable NSMutableArray*)buildings;

/**
 Map will show the layer of the specified floor.

 @param floor Floor to select.
 */
- (void)selectFloor:(INFloor*)floor;

/**
 Selects multiple rooms on the map.

 @param rooms Array of rooms to select.
 */
- (void)selectRooms:(nullable NSMutableArray*)rooms;


/**
 Map will zoom to the specified room.

 @param room `INRoom` object to zoom to.
 */
- (void)zoomToRoom:(INRoom*)room;


/**
 Map view will zoom to the icon, set it selected, and display the Icon Info View.

 @param icon `INIcon` object to select.
 */
- (void)selectIcon:(nullable INIcon*)icon;

/**
 Map view will zoom to the specified icon.

 @param icon `INIcon` object to zoom to.
 */
- (void)zoomToIcon:(INIcon*)icon;



/**
 Map view will show `INTourPickerView` that will display `INTour` objects.
 */
- (void)showTours;

/**
 Starts a tour event.

 @param tour `INTour` object.
 @note This method will reset the current route and draw a new route for the tour.
 */
- (void)selectTour:(nullable INTour*)tour;

/**
 Sets map routable objects and calculates the route.

 @param startObject Starting routable object that must conform to the `INRoutableProtocol` protocol.
 @param finishObject Finishing routable object that must conform to the `INRoutableProtocol` protocol.
 */
- (void)setRouteStartObject:(nullable id<INRoutableProtocol>)startObject
            andFinishObject:(nullable id<INRoutableProtocol>)finishObject;

/**
 Sets the map finish object and displays it in the Route View.

 @param finishObject Object that conforms to the `INRoutableProtocol` protocol.
 @note This method will reset the current route.
 */
- (void)makeRouteWithFinalObject:(nullable id<INRoutableProtocol>)finishObject;




/**
 Restarts navigation and location services in the building.

 @note Use this when location and navigation were previously stopped.
 */
- (void)restartNavigationAndLocationInBuilding;

/**
 Stops navigation in the building.
 */
- (void)stopNavigationInBuilding;

/**
 Stops both navigation and location services in the building.
 */
- (void)stopNavigationAndLocationInBuilding;



/**
 Indicates whether it is a booking application.
 */
@property (nonatomic) BOOL isBookingApplicaton;



/**
 Redraws rooms.
 */
-(void)redrawingRooms;

/**
 Sets scanned beacons along with their power levels.

 @param beacons Array of scanned beacons.
 */
-(void)setScanBeaconsWithPower:(NSArray *)beacons;

/**
 Updates map constraints for the internal map view.

 @param frame The new frame for the constraints.
 */
- (void)updateMapConstraintsMapInternalView:(CGRect)frame;

/**
 Enables point selecting on the map.
 */
- (void)enablePointSelecting;

/**
 Adds a point marker on a specific floor.

 @param floorId The ID of the floor.
 @param point The coordinates of the point.
 */
- (void)addPointMarkerOnFloor:(NSNumber *)floorId andPoint:(CGPoint)point;



/**
 Returns the current floor.

 @return The current `INFloor` object, or nil if none.
 */
- (nullable INFloor *)currentFloor;

/**
 Returns the tracking internal map view.

 @return An object conforming to `INTrackingMapInternalView`.
 */
- (id<INTrackingMapInternalView>)getTrackingInternalMap;




/**
 Zooms the map to specific coordinates on a given floor.

 @param x The X coordinate.
 @param y The Y coordinate.
 @param floorId The ID of the floor.
 */
- (void)zoomToCoordinateX:(double)x y:(double)y floorId:(double) floorId;

/**
 Zooms the map to specific coordinates on a given floor and adds a marker.

 @param x The X coordinate.
 @param y The Y coordinate.
 @param floorId The ID of the floor.
 */
- (void)zoomToCoordinateXAndAddMarker:(double)x y:(double)y floorId:(double) floorId;



/**
 Shows or hides the back button.

 @param isShow Boolean flag indicating whether to show the back button.
 */
-(void)showBackButton:(BOOL)isShow;

/**
 Sets the top offset for map buttons.

 @param offset Top offset value in points.
 */
-(void)setTopOffsetForButtons:(float)offset;

/**
 Sets the bottom offset for map buttons.

 @param offset Bottom offset value in points.
 */
-(void)setBottomOffsetForButtons:(float)offset;


/**
 Sets the bottom offset for map Views.

 @param offset Bottom offset value in points.
 */
-(void)setBottomOffsetForViews:(float)offset;



/**
 Zoom to building and open info

 @param buildingId  building id.
 @param completion A completion block called when the operation finishes, passing a boolean indicating success.
 */
- (void)setPositionMapCameraToBuilding:(NSNumber *)buildingId  completion:(void (^_Nullable)(BOOL answer))completion;

/**
 Zoom to room and open info

 @param roomId  room id.
 @param buildingId  building id.
 @param completion A completion block called when the operation finishes, passing a boolean indicating success.
 */
- (void)setPositionMapCameraToRoom:(NSNumber *)roomId buildingId:(NSNumber *)buildingId completion:(void (^_Nullable)(BOOL answer))completion;



/**
 Positions the map camera to a location retrieved from a specific integration.

 @param integrationName The name of the integration to query.
 @param fieldName The name of the field used to identify the location.
 @param fieldValue The value of the field to match.
 @param completion A completion block called when the operation finishes, passing a boolean indicating success.
 */
- (void)setPositionMapCameraToLocationWithIntegration:(nonnull NSString *)integrationName
                                            fieldName:(nonnull NSString *)fieldName
                                           fieldValue:(nonnull id)fieldValue
                                           completion:(void (^_Nullable)(BOOL answer))completion
NS_SWIFT_NAME(positionMapCamera(withIntegration:fieldName:value:completion:));




// in develop

/**
 The maximum visible bounds for the building.
 
 This property defines the geographical limits (South-West and North-East coordinates)
 that restrict how far the user can pan the map camera.
 */
@property (nonatomic) INCoordinateBounds maxVisibleBuildingBounds;

/**
 The initial camera position when the map loads.
 
 This configuration sets the starting center coordinate, viewing distance, pitch, heading,
 and applies any necessary constraints to the camera's movement.
 */
@property (nonatomic) INCameraPosition initialCameraPostion;





/**
 Initializes and returns a newly allocated map view object with the specified frame and configuration.

 @param frame The frame rectangle for the view, measured in points.
 @param configuration Configuration object for the map view.
 @return An initialized map view object.
 */
- (instancetype)initWithFrame:(CGRect)frame andConfiguration:(INMapViewsConfiguration *)configuration;



/**
 Initializes and returns a newly allocated map view object configured for Auto Layout.
 */
- (instancetype)init;

- (instancetype)initWithConfiguration:(INMapViewsConfiguration *)configuration;



- (void)setFloorIndex:(NSNumber*)index building:(INBuilding *)building;

/**
 Is need delete building after remove map

 @param isNeedDelete The flag

 */
- (void)isNeedDeleteBuildingAfterRemoveMap:(BOOL)isNeedDelete;

/**
 Applies a custom visual style and predefined text configurations to the map.
 
 You can use this method to customize map colors, button styles, and specific text messages
 (like routing errors). Any property in the provided `INMapStyle` object that is left as `nil`
 will be ignored, and the SDK will fall back to its local default values or the configuration
 downloaded from the backend.
 
 @param style An `INMapStyle` object containing the desired customization properties.
 */
- (void)setStyle:(INMapStyle *)style;

/**
 Overrides a default SDK localized string with custom text.
 
 You can use this method to dynamically change any text in the SDK (buttons, messages, alerts)
 by providing its localization key.
 
 Note: To find out the exact localization key for a specific text or UI element, please contact the development team.
 
 @param key The internal localization key used by the SDK (e.g., "tour_list", "search", etc.).
 @param text Custom localized text. Pass `nil` to keep the default SDK text.
 */
- (void)setCustomTranslationForKey:(nonnull NSString *)key text:(nullable NSString *)text;

// Mark:: old metods to remove

+ (BOOL)isFloorLightenFloorBackgroundColor;
+ (BOOL)isDigitsOnlyTitleIconsHideImage;

-(void)setUserPositionReceivedFirstTime:(BOOL) value;


// Clean all of focused building data, remove all building associated views, stop navigation in building, cancel all INService requests and clean all building layers.
- (void)cleanup;

// updateMapConstraints if need
-(void)updateMapConstraints:(CGRect)frame;


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

// Removes global route from your location to building.
 - (void)clearGlobalRoute;

/// Show building Annotations views.
/// - Parameter buildings: Array of `INBuilding` objects.
/// - Parameter focus: Flag that determenies if building need to be focused.
/// - Note: If buildings consist of only one building and focus = true, map will set focused building instead.
- (void)markBuildingMarkers:(NSMutableArray*)buildings withFocus:(BOOL)focus;

// Display Building Search View
- (void)startSearchingInSearchView;
/// Do nothing
- (void)finishEditingInSearchView;
/// Do nothing
- (void)finishSearchingInSearchView;
/// Update navigation by restarting navigation in building
///
/// - Note: Uses when building navigation setting changed.
- (void)restartNavigationInBuilding;

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

@end

NS_ASSUME_NONNULL_END



#endif /* INGlobalMapView_h */
