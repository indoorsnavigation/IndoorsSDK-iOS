//
//  INNavigation.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INNavigation_
#define _INNavigation_

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "INService.h"
#import "INBuilding.h"
#import "INPathfinder.h"

#import <CoreMotion/CoreMotion.h>

NS_ASSUME_NONNULL_BEGIN


@class INNavigation;

/**
 `INNavigationDelegate` protocol.
 */
@protocol INNavigationDelegate <NSObject>

@optional

/**
 Invoked when the process of calculating the position of the device is started.
 */
- (void)navigationDidStartNavigation:(INNavigation*)navigation;

/**
 Invoked when the exact position of the device is calculated.
 */
- (void)navigation:(INNavigation*)navigation didUpdateUserPosition:(INPosition2*)position;

/**
 Invoked when a new heading is available.
 */
- (void)navigation:(INNavigation*)navigation didUpdateHeading:(float)heading;

/**
 Invoked when the exact position of the device is calculated.
 */
- (void)navigation:(INNavigation*)navigation didUpdateParticles:(NSArray*)particles;

- (void)navigation:(INNavigation*)navigation didUpdateCircleAroundBeacons:(NSArray*)beacons;

- (void)navigation:(INNavigation*)navigation didUpdateBeaconsForScanSession:(NSArray*)beacons;

- (void)navigation:(INNavigation*)navigation didUpdateAccelerometrGraphData:(NSMutableArray *)mobileAccelerometr andINNavigationAccelerometr:(NSMutableArray *)navigationAccelerometr;

- (void)navigation:(INNavigation*)navigation  andArrayPointsForCalculateAB:(NSMutableArray *)ArrayPoints;

- (void)navigation:(INNavigation*)navigation updateGraphRadioMap:(NSMutableArray *)beacons;

/**
 Invoked when the process of calculating the position of the device is stopped.
 */
- (void)navigationDidStopNavigation:(INNavigation*)navigation;

/// Invoked when navigation should request permission for the navigation.
- (void)navigationShouldRequestPermission:(INNavigation*)navigation;

- (void)navigation:(INNavigation*)navigation startCulculateWithCountBicons:(int)count;
- (void)navigationWithCoordinatesNULL:(INNavigation*)navigation;
- (void)navigationWithCoordinatesINFINITY:(INNavigation*)navigation;
- (void)navigation:(INNavigation*)navigation ERRORWithText:(NSString *)text;
- (void)navigation:(INNavigation*)navigation textUnder:(NSString *)text;

@end

/**
 `INLocationDelegate` protocol.
 
  Designed to inform the delegate about updates to location and related data during a navigation session
 */
@protocol INLocationDelegate <NSObject>

@optional
/// Called whenever the navigation session updates the location of the device.
/// - Parameter navigation: `INNavigation` instance.
/// - Parameter location: `CLLocation` object.
- (void)location:(INNavigation*)navigation didUpdateLocation:(CLLocation*)location;
/// Called whenever the navigation session updates the information about the nearest building.
/// - Parameter navigation: `INNavigation` instance.
/// - Parameter building: `INBuilding` object.
- (void)location:(INNavigation*)navigation didUpdateNearestBuilding:(INBuilding*)building;
/// Called whenever the navigation session updates the heading of the device.
/// - Parameter navigation: `INNavigation` instance.
/// - Parameter location: `CLHeading` object.
- (void)location:(INNavigation*)navigation didUpdateHeading:(CLHeading *)heading;

@end

/**
 `INNavigation` used to determine the device location.
 */
@interface INNavigation : NSObject

/**
 Delegate.
 */
@property (nonatomic, weak, nullable) id <INNavigationDelegate>  delegate;

/**
 Location delegate.
 */
@property (nonatomic, weak, nullable) id <INLocationDelegate>  locationDelegate;

/**
 Is navigation enabled flag.
 */
@property BOOL isNavigationEnabled;

/**
 Is user position flag.
 */
@property (nonatomic) BOOL isUserPositionFound;

@property (nonatomic, assign) NSTimeInterval beaconSignalLostTimeout;

/**
 Initialization.
 
 @param service `INService` object.
 */
- (instancetype)initWithService:(INService *)service;

/**
 This method starts the process of determining the device location.
 
 @param building `INBuilding` object.
 */
- (void)startNavigationInBuilding:(INBuilding*)building
                   withPathfinder:(INPathfinder*)pathfinder;



- (void)restartNavigationWithNewSettings:(INBuildingNavigationSettings*)settings;

/**
 This method Reset Navigation
 */
- (void)resetNavigation;

/**
 This method stops the process of determining the device location.
 */
- (void)stopNavigation;
/**
 This method starts the process of determining the device location.
 */
- (void)startLocation;
/**
 This method stops updating location.
 */
- (void)stopLocation;

- (CGPoint)getPoint:(CGPoint)position;


- (void)startLocationManagerInBuildingForRadioMap:(INBuilding*)building;
- (CGPoint)stopLocationManagerForRadioMap:(CGPoint)myPoint;
- (CGPoint)calculationABForRadioMap;

- (void)startBroadcasting;
- (void)stopBroadcasting;


@end

NS_ASSUME_NONNULL_END

#endif



