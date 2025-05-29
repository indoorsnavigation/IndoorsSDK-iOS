//
//  INLocalNotificationStamp.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INLocalNotificationStamp_
#define _INLocalNotificationStamp_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INLocalNotificationStamp : INBaseObject

/// Associated user Id.
@property (nonatomic, strong) NSNumber *UserId;
/// Associated Local Notification Id.
@property (nonatomic, strong) NSNumber *LocalNotificationId;
/// Beacon Notification Stamp timestamp.
@property (nonatomic, strong) NSNumber *Timestamp;
/// Beacon Notification Stamp Device UUID.
@property (nonatomic, strong) NSString *Device;

@end

NS_ASSUME_NONNULL_END

#endif
