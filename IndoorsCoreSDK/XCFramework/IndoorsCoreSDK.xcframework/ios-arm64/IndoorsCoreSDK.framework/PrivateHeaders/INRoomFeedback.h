//
//  INRoomFeedback.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRoomFeedback_
#define _INRoomFeedback_

#import <Foundation/Foundation.h>
#import "INFeedback.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 
 @class INRoomFeedback
 
 @discussion This class was designed for creating feedback for 'INRoom'.
 */
@interface INRoomFeedback : INFeedback

/// Room Id.
@property (nonatomic, strong) NSNumber *RoomId;

/// Owner id of the room.
@property (nonatomic, strong) NSNumber *OwnerId;

@end

NS_ASSUME_NONNULL_END

#endif
