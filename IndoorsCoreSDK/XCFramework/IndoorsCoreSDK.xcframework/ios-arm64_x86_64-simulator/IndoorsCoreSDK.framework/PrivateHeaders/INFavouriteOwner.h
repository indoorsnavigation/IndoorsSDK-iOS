//
//  INFavouriteOwner.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFavouriteOwner_
#define _INFavouriteOwner_

#import <Foundation/Foundation.h>
#import "INFavourite.h"
#import "INOwner.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about favorite owner.
@interface INFavouriteOwner : INFavourite

/**
 Associated `INOwner` Id.
*/
@property (nonatomic, strong) NSNumber *OwnerId;

/**
 Associated `INOwner` object.
*/
@property (nonatomic, strong) INOwner *Owner;

/**
  Associated`INBuilding` identifier.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

@end

NS_ASSUME_NONNULL_END

#endif
