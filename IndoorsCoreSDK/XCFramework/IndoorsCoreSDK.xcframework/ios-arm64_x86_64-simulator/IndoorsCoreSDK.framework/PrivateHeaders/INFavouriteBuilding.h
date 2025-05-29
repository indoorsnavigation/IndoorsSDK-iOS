//
//  INFavouriteBuilding.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFavouriteBuilding_
#define _INFavouriteBuilding_

#import "INFavourite.h"

NS_ASSUME_NONNULL_BEGIN

@interface INFavouriteBuilding : INFavourite

/// `INBuilding` Id.
@property (nonatomic, strong) NSNumber *BuildingId;

@end

NS_ASSUME_NONNULL_END

#endif
