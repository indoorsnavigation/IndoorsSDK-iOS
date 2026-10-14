//
//  INDebuggingMapView.h
//  IndoorsSDK
//
//  Created by Indoors on 11.12.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INDebuggingMapView_h
#define INDebuggingMapView_h

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
#import "INRadioMapView.h"
/**

 */
//typedef enum: int
//{
//    RadioD2 = 0,
//    RadioD25
//} INRadioMapInternalViewMode;

NS_ASSUME_NONNULL_BEGIN
@class INDebuggingMapView;
 

/// The `INMapView` is a 2D/3D Map interface that provides an API for viewing and navigation in building map.
///
/// The API allows to access the in-building range of mapping and navigation functionalities, including the ability to zoom to in-building objects like Rooms, making route with choosen routable objects, making it a powerful tool for navigating indoor environments.
@interface INDebuggingMapView : INBaseMapView

/// Designated initializer
/// - Parameter containerView: Container view that will contain `INMapView` view. When adding map view to its container view as subview, container view must have non zero size.
- (instancetype)initWithView:(nonnull UIView*)containerView;

@property (strong, nonatomic) NSMutableArray<INRadioMapTrack *> *radioTracks;

@property (strong, nonatomic) NSNumber *_selectedRadioMapId;
@property (strong, nonatomic) INRadioMap *radioMap;
@end

NS_ASSUME_NONNULL_END

#endif /* INDebuggingMapView_h */
