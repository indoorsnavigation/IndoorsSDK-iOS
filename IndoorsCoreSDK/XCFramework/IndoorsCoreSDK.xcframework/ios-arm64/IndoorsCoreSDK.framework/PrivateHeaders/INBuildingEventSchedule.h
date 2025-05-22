//
//  INBuildingEventSchedule.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBuildingEventSchedule_
#define _INBuildingEventSchedule_

#import "INBaseObject.h"
#import "INBuildingEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface INBuildingEventSchedule : INBaseObject

/**
 Number representing the start time of the schedule
 */
@property (nonatomic, strong) NSNumber *Start;

/**
 Number representing the end time of the schedule.
 */
@property (nonatomic, strong) NSNumber *End;

/**
 Associated `INBuildingEvent` object Id.
 */
@property (nonatomic, strong) NSNumber *EventId;

/**
 Associated `INBuilding` object Id.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Boolean flag specifies if building event schelude is active.
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Associated `INBuilding` object.
 */
@property (nonatomic, weak) INBuilding *Building;

/**
 Associated `INBuildingEvent` object.
 */
@property (nonatomic, strong) INBuildingEvent *BuildingEvent;

@end

NS_ASSUME_NONNULL_END

#endif
