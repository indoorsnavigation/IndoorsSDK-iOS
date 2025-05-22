//
//  INOwnerNews.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INOwnerNews_
#define _INOwnerNews_

#import "INNews.h"
#import "INOwner.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about owner news.
@interface INOwnerNews : INNews

/**
 Associated `INOwner` object Id.
 */
@property (nonatomic, strong) NSNumber *OwnerId;

/**
 Associated `INOwner` object.
 */
@property (nonatomic, weak)   INOwner *Owner;

@end

NS_ASSUME_NONNULL_END

#endif
