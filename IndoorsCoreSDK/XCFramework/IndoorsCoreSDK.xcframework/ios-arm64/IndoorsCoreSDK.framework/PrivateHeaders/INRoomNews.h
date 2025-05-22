//
//  INRoomNews.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRoomNews_
#define _INRoomNews_

#import "INNews.h"
#import "INRoom.h"

NS_ASSUME_NONNULL_BEGIN

@interface INRoomNews : INNews

/**
 ID of the associated `INBuilding` object.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

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
