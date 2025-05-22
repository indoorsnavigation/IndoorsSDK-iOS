//
//  INRoomEventSchedule.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRoomEventSchedule_
#define _INRoomEventSchedule_

#import "INBaseObject.h"
#import "INRoomEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface INRoomEventSchedule : INBaseObject

/**
 Number representing the start time of the schedule
 */
@property (nonatomic, strong) NSNumber *Start;

/**
 Number representing the end time of the schedule.
 */
@property (nonatomic, strong) NSNumber *End;

/**
 Associated `INRoomEvent` object Id.
 */
@property (nonatomic, strong) NSNumber *EventId;

/**
 Associated `INRoom` object Id.
 */
@property (nonatomic, strong) NSNumber *RoomId;

/**
 Associated `INBuilding` object Id.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Boolean flag specifies if room event schelude is active
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Associated `INRoomEvent` object.
 */
@property (nonatomic, strong) INRoomEvent *RoomEvent;

@end

NS_ASSUME_NONNULL_END

#endif
