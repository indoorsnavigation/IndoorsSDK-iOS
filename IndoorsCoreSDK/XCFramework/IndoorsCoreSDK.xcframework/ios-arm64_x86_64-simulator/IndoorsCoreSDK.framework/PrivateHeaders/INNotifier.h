//
//  INNotifier.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INNotifier_
#define _INNotifier_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "INApplication.h"
#import "INBuilding.h"

NS_ASSUME_NONNULL_BEGIN

/**
 'INNotifier' is for operations with different notifications types.
 */
@interface INNotifier : NSObject

/// Updates local notifications.
///
/// - Parameter beaconNotifications: An array of the objects of 'INBeaconNotification' type received from the service.
- (void)scheduleBeaconNotifications:(NSMutableArray*)beaconNotifications;
/// Updates local notifications.
///
/// - Parameter localNotificationSchedules: An array of the objects of 'INLocalNotification' type received from the service.
- (void)scheduleLocalNotifications:(NSMutableArray*)localNotificationSchedules;
- (void)didReceiveLocalNotificationWithUserInfo:(NSDictionary *)userInfo;
- (void)didReceiveLocalNotification:(UILocalNotification *)notification;

@end

NS_ASSUME_NONNULL_END

#endif
