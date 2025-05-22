//
//  INFavouriteRoom.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFavouriteRoom_
#define _INFavouriteRoom_

#import <Foundation/Foundation.h>
#import "INFavourite.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about favorite room.
@interface INFavouriteRoom : INFavourite

/**
 Associated `INRoom` Id.
*/
@property (nonatomic, strong) NSNumber *RoomId;

/**
 Associated `INOwner` Id.
*/
@property (nonatomic, strong) NSNumber *OwnerId;

@end

NS_ASSUME_NONNULL_END

#endif
