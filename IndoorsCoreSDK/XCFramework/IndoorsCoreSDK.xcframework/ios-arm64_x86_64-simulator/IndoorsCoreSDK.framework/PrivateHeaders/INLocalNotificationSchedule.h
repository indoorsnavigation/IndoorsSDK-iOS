//
//  INLocalNotificationSchedule.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INLocalNotificationSchedule_
#define _INLocalNotificationSchedule_

#import "INBaseObject.h"
#import "INLocalNotification.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about schedule for a local notification
@interface INLocalNotificationSchedule : INBaseObject

/**
 Number representing the start time of the schedule
 */
@property (nonatomic, strong) NSNumber *Start;

/**
 Number representing the end time of the schedule.
 */
@property (nonatomic, strong) NSNumber *End;

/**
 Number representing the ID of the campaign associated with this schedule
 */
@property (nonatomic, strong) NSNumber *CampaignId;

/**
 ID of the associated `INLocalNotification` object.
 */
@property (nonatomic, strong) NSNumber *LocalNotificationId;

/**
 Boolean flag specifies if local notification schelude active.
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Associated `INLocalNotification` object.
 */
@property (nonatomic, strong) INLocalNotification *LocalNotification;

@end

NS_ASSUME_NONNULL_END

#endif
