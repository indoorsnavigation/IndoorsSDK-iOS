//
//  INBaseMapView.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBaseMapView_
#define _INBaseMapView_

#import <UIKit/UIKit.h>
#import "IndoorsCoreSDK/IndoorsCoreSDK.h"
#import "INBaseMapViewDelegate.h"
//#import "INDrawUserPositionProcedureParams.h"

@class INBaseMapViewDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface INBaseMapView : UIView


/// An array of buildings to display on a map.
@property (nonatomic,weak) NSMutableArray *buildings;

/// Current displaying building map.
///
/// Change this property to trigger map to zoom and start drawing process for given building.
@property (nonatomic,weak) INBuilding *currentBuilding;

/// Current focused building map.
///
/// Change this property to trigger map to zoom on given building.
@property (nonatomic,weak) INBuilding *focusedBuilding;

/// Delegate for handling map events.
@property (nonatomic, assign, nullable) id<INBaseMapViewDelegate> delegate;

/// Tint color for control elements on a map.
@property (nonatomic,strong) UIColor *tintColor;

/// Tint color for control buttons on a map.
@property (nonatomic,strong) UIColor *buttonsTintColor;

/// Flag that tells is pathfinder ready.
@property BOOL isPathfinderReady;

/// Draws shared user position.
/// - Parameter drawUserPositionProcedureParams: `INDrawUserPositionProcedureParams` object.
- (void)drawSharedUserPosition:(INDrawUserPositionProcedureParams*)drawUserPositionProcedureParams;

/// Clean all of focused building data, remove all building associated views, stop navigation in building, cancel all INService requests and clean all building layers.
- (void)cleanup;

@end

NS_ASSUME_NONNULL_END

#endif
