//
//  INRoomEvent.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRoomEvent_
#define _INRoomEvent_

#import "INEvent.h"
#import "INRoom.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about room event.
@interface INRoomEvent : INEvent

/**
 ID of the associated `INRoom` object.
 */
@property (nonatomic, strong) NSNumber *RoomId;

/**
 Associated `INRoom` object.
 */
@property (nonatomic, weak)   INRoom *Room;

@end

NS_ASSUME_NONNULL_END

#endif
