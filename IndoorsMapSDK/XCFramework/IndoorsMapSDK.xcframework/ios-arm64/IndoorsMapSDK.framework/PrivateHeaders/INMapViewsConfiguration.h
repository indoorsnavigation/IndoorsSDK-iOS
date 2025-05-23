//
//  MapViewsConfiguration.h
//  IndoorsSDK
//
//  Created by Indoors on 05.12.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//
#ifndef INMapViewsConfiguration_h
#define INMapViewsConfiguration_h

@interface INMapViewsConfiguration : NSObject

@property (nonatomic, assign) BOOL showVoiceSearchButton;
@property (nonatomic, assign) BOOL showSearchRouteButton;
@property (nonatomic, assign) BOOL showRouteButton;
@property (nonatomic, assign) BOOL showParticleButton;
@property (nonatomic, assign) BOOL showARButton;
@property (nonatomic, assign) BOOL showNavigationSwitchButton;
@property (nonatomic, assign) BOOL showSelectGraphButton;
@property (nonatomic, assign) BOOL showTourButton;
@property (nonatomic, assign) BOOL showShareButton;
@property (nonatomic, assign) BOOL showBeaconButton;

@property (nonatomic, assign) BOOL showBeaconPoints;
@property (nonatomic, assign) BOOL showGraphs;
@property (nonatomic, assign) BOOL showMediaPoints;
@property (nonatomic, assign) BOOL showTours;
@property (nonatomic, assign) BOOL showPanoramaPoints;
@property (nonatomic, assign) BOOL showInfomatPoints;
@property (nonatomic, assign) BOOL showARPoints;
@property (nonatomic, assign) BOOL showDNNPoints;
@property (nonatomic, assign) BOOL showElevatorShafts;
@property (nonatomic, assign) BOOL showParkingPlaces;
@property (nonatomic, assign) BOOL showEntrances;
@property (nonatomic, assign) BOOL showWalls;
@property (nonatomic, assign) BOOL showGPSZones;
@property (nonatomic, assign) BOOL showFireSafetyImagePoints;
@property (nonatomic, assign) BOOL showOwners;
@property (nonatomic, assign) BOOL showRooms;

@property (nonatomic, assign) BOOL allowSelectRooms;
@property (nonatomic, assign) BOOL allowSelectIcons;

@property (nonatomic, assign) BOOL isNavigationEnabled;

@end

#endif
