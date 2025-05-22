//
//  INBeaconNotification.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBeaconNotification_
#define _INBeaconNotification_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "INBaseObject.h"
#import "INBeacon.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about notification from iBeacon device.
 */
@interface INBeaconNotification : INBaseObject

/**
 Building identifier.
 @see 'INBuilding'
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Beacon identifier.
 */
@property (nonatomic, strong) NSNumber *BeaconId;

/**
 The identifier of the owner of the beacon.
 @see 'INOwner'
 */
@property (nonatomic, strong) NSNumber *OwnerId;

/**
 Notification image.
 */
@property (nonatomic, strong) NSString *Image;

/**
 The title of the notification that fires when the device has entered in beacon coverage area.
 */
@property (nonatomic, strong) NSString *EnterTitle;

/**
 The message of the notification that fires when the device has entered in beacon coverage area.
 */
@property (nonatomic, strong) NSString *EnterMessage;

/**
 The title of the notification that fires when the device has exited beacon coverage area.
 */
@property (nonatomic, strong) NSString *ExitTitle;

/**
 The message of the notification that fires when the device has exited beacon coverage area.
 */
@property (nonatomic, strong) NSString *ExitMessage;

/**
 
 */
@property (nonatomic, strong) NSNumber *CampaignId;

/**
 Notification distance.
 @see 'INOwner'
 */
@property (nonatomic, strong) NSNumber *Distance;

/**
 Reference to 'INBeacon' object.
 @see 'INBeacon'
 */
@property (nonatomic, strong) INBeacon *Beacon;

/**
 Reference to 'CLBeaconRegion' object.
 @see 'CLBeaconRegion'
 */
@property (nonatomic, strong) CLBeaconRegion *beaconRegion;

@end

NS_ASSUME_NONNULL_END

#endif
