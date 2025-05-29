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

- (void)navigation:(INNavigation*)navigation didUpdateAccelerometrGraphData:(NSMutableArray *)mobileAccelerometr andINNavigationAccelerometr:(NSMutableArray *)navigationAccelerometr;

- (void)navigation:(INNavigation*)navigation  andArrayPointsForCalculateAB:(NSMutableArray *)ArrayPoints;

- (void)navigation:(INNavigation*)navigation updateGraphRadioMap:(NSMutableArray *)beacons;

/**
 Invoked when the process of calculating the position of the device is stopped.
 */
- (void)navigationDidStopNavigation:(INNavigation*)navigation;

/// Invoked when navigation should request permission for the navigation.
- (void)navigationShouldRequestPermission:(INNavigation*)navigation;

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
@property (nonatomic, assign, nullable) id <INNavigationDelegate>  delegate;

/**
 Location delegate.
 */
@property (nonatomic, assign, nullable) id <INLocationDelegate>  locationDelegate;

/**
 Is navigation enabled flag.
 */
@property BOOL isNavigationEnabled;

/**
 Is user position flag.
 */
@property (nonatomic) BOOL isUserPositionFound;

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

@end

NS_ASSUME_NONNULL_END

#endif






//- (void)locationManager:(CLLocationManager*)manager didRangeBeacons:(NSArray*)beacons inRegion:(CLBeaconRegion*)region
//{
//    if (![region.identifier isEqualToString:@"pro.indoorsnavi.indoors"])
//        return;
//    
//    if(!_isNavigationEnabled)
//        return;
//    
//    if ([beacons count] < 1)
//        return;
//    
//    if (_currentBuilding == nil)
//        return;
//    
//    if ([_currentBuilding Floors] == nil || [[_currentBuilding Floors] count] <= 0)
//        return;
//    
//    if([[_currentBuilding EnableNewNavigation] intValue] == 1)
//    {
//
//        NSMutableArray<INBeaconPoint*> *myBeacons =  [[NSMutableArray<INBeaconPoint*> alloc] init];
//        for(CLBeacon *beacon in beacons)
//        {
//            for(INBeaconPoint *beacob in _currentBuilding.BeaconPoints)
//            {
//                if ((beacob.Beacon.Major.doubleValue == beacon.major.doubleValue) && (beacob.Beacon.Minor.doubleValue == beacon.minor.doubleValue))
//                {
//                    if(beacon.rssi < 0)
//                    {
////                        long long timeStamp = [[NSDate date] timeIntervalSince1970] * 1000;
////                        INTransmitterMeasurement transmitterMeasurement = {};
////                        transmitterMeasurement.type = TransmitterType::BEACON;
////                        transmitterMeasurement.id = makeBeaconId([[[_currentBuilding BeaconUUID] lowercaseString] UTF8String], [[beacon major] intValue], [[beacon minor] intValue]);
////                        transmitterMeasurement.rssi = beacon.rssi;
////                        transmitterMeasurement.timestamp = getTimestamp(timeStamp);
//                        
//                        
//                        INBeaconPoint *myBeacon = [[INBeaconPoint alloc] init];
//                        myBeacon.RSSI = [NSNumber numberWithInteger: beacon.rssi];
//                        myBeacon.X = beacob.X;
//                        myBeacon.Y = beacob.Y;
//                        myBeacon.VirtualX = beacob.VirtualX;
//                        myBeacon.VirtualY = beacob.VirtualY;
//                        
//                        INBeacon *minBeac = [[INBeacon alloc] init];
//                        minBeac.Major = [beacon major];
//                        minBeac.Minor = [beacon minor];
//   
//                        myBeacon.Beacon = minBeac;
//                        
//                        
//                        [myBeacons addObject:myBeacon];
//                        
//
//                        
//                   //     _transmitterMeasurements.push_back(transmitterMeasurement);
//                    }
//                }
//            }
//            if (_savedBeaconPoints.count > 0)
//            {
//                long long timeStamp = [[NSDate date] timeIntervalSince1970] * 1000;
//                
//                _transmitterMeasurements.clear();
//                
//                NSMutableArray<INBeaconPoint *> *newBeacons = [NSMutableArray array];
//
//                for (INBeaconPoint *myBeacon in myBeacons) {
//                    BOOL isFound = NO;
//
//
//                    for (INBeaconPoint *savedBeacon in _savedBeaconPoints) {
//                        if (((savedBeacon.Beacon.Major.doubleValue == myBeacon.Beacon.Major.doubleValue) &&
//                             (savedBeacon.Beacon.Minor.doubleValue == myBeacon.Beacon.Minor.doubleValue))) {
//                            isFound = YES;
//                            break;
//                        }
//                    }
//                    if (!isFound) {
//                        [newBeacons addObject:myBeacon];
//                    }
//                }
//                
//                [_savedBeaconPoints addObjectsFromArray:newBeacons];
//
//
//                for (INBeaconPoint *myBeacon in myBeacons) {
//                    for (INBeaconPoint *savedBeacon in _savedBeaconPoints) {
//                        
//
//                        if (((savedBeacon.Beacon.Major.doubleValue == myBeacon.Beacon.Major.doubleValue) &&
//                             (savedBeacon.Beacon.Minor.doubleValue == myBeacon.Beacon.Minor.doubleValue))) {
//                            
//
//                            NSInteger currentRSSI = [savedBeacon.RSSI integerValue];
//                            NSInteger newRSSI = [myBeacon.RSSI integerValue];
//                            
//           
//                            NSInteger averagedRSSI = (currentRSSI + newRSSI) / 2;
//                            
//        
//                            savedBeacon.RSSI = @(averagedRSSI);
//                            
//                            INTransmitterMeasurement transmitterMeasurement = {};
//                            transmitterMeasurement.type = TransmitterType::BEACON;
//                            transmitterMeasurement.id = makeBeaconId([[[_currentBuilding BeaconUUID] lowercaseString] UTF8String], [[savedBeacon.Beacon Major] intValue], [[savedBeacon.Beacon Minor] intValue]);
//                            transmitterMeasurement.rssi = [savedBeacon.RSSI integerValue];
//                            transmitterMeasurement.timestamp = getTimestamp(timeStamp);
//                            
//                            _transmitterMeasurements.push_back(transmitterMeasurement);
//                            
//                            break;
//                        }
//                    }
//                }
//                
//                
//            }
//            else
//            {
//                _transmitterMeasurements.clear();
//                _savedBeaconPoints = myBeacons;
//                long long timeStamp = [[NSDate date] timeIntervalSince1970] * 1000;
//                for (INBeaconPoint *beacon in _savedBeaconPoints)
//                {
//                    INTransmitterMeasurement transmitterMeasurement = {};
//                    transmitterMeasurement.type = TransmitterType::BEACON;
//                    transmitterMeasurement.id = makeBeaconId([[[_currentBuilding BeaconUUID] lowercaseString] UTF8String], [[beacon.Beacon Major] intValue], [[beacon.Beacon Minor] intValue]);
//                    transmitterMeasurement.rssi = [beacon.RSSI integerValue];
//                    transmitterMeasurement.timestamp = getTimestamp(timeStamp);
//                    
//                    _transmitterMeasurements.push_back(transmitterMeasurement);
//                }
//                
//            }
//            if([[INUtilities sharedInstance] isTool] || [[INUtilities sharedInstance] isExample])
//            {
//                dispatch_run_on_main_queue(^{
//                    if ([delegate respondsToSelector:@selector(navigation:didUpdateCircleAroundBeacons:)])
//                        [delegate navigation:self didUpdateCircleAroundBeacons:myBeacons];
//                });
//            }
//
//        }
//    }
//    else
//    {
//        _currentBeaconPoints = [[INBeaconPreprocessor sharedInstance] getBeaconPoints:[beacons mutableCopy]
//                                                                    inCurrentPosition:_indoorPosition
//                                                                          forBuilding:_currentBuilding];
//    }
//}
