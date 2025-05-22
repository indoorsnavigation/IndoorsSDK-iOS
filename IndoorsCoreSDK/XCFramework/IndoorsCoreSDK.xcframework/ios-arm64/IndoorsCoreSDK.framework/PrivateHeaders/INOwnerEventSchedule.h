//
//  INOwnerEventSchedule.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INOwnerEventSchedule_
#define _INOwnerEventSchedule_

#import "INBaseObject.h"
#import "INOwnerEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface INOwnerEventSchedule : INBaseObject

/**
 Number representing the start time of the schedule
 */
@property (nonatomic, strong) NSNumber *Start;

/**
 Number representing the end time of the schedule.
 */
@property (nonatomic, strong) NSNumber *End;

/**
 Associated `INOwnerEvent` object Id.
 */
@property (nonatomic, strong) NSNumber *EventId;

/**
 Associated `INOwner` object Id.
 */
@property (nonatomic, strong) NSNumber *OwnerId;

/**
 Boolean flag specifies if owner event schelude is active
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Associated `INOwnerEvent` object.
 */
@property (nonatomic, strong) INOwnerEvent *OwnerEvent;

@end

NS_ASSUME_NONNULL_END

#endif
