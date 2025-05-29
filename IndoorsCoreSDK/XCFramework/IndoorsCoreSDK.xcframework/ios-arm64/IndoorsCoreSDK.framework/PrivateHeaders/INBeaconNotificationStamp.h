//
//  INBeaconNotification.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBeaconNotificationStamp_
#define _INBeaconNotificationStamp_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about Beacon Notification Stamp
@interface INBeaconNotificationStamp : INBaseObject

/// Associated user Id.
@property (nonatomic, strong) NSNumber *UserId;
/// Associated Beacon Notification Id.
@property (nonatomic, strong) NSNumber *BeaconNotificationId;
/// Beacon Notification Stamp timestamp.
@property (nonatomic, strong) NSNumber *Timestamp;
/// Beacon Notification Stamp Device UUID.
@property (nonatomic, strong) NSString *Device;

@end

NS_ASSUME_NONNULL_END

#endif
