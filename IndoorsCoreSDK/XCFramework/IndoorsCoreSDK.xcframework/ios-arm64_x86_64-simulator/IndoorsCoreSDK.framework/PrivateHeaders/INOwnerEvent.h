//
//  INOwnerEvent.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INOwnerEvent_
#define _INOwnerEvent_

#import "INEvent.h"
#import "INOwner.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about owner event.
@interface INOwnerEvent : INEvent

/**
 ID of the associated `INOwner` object.
 */
@property (nonatomic, strong) NSNumber *OwnerId;


/**
 Associated `INOwner` object.
 */
@property (nonatomic, weak)   INOwner *Owner;

@end

NS_ASSUME_NONNULL_END

#endif
