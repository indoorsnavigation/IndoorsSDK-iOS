//
//  INFavourite.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFavourite_
#define _INFavourite_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about some favorite object.
@interface INFavourite : INBaseObject

/// User Id that have this object in favorite.
@property (nonatomic, strong) NSNumber *UserId;

@end

NS_ASSUME_NONNULL_END

#endif
