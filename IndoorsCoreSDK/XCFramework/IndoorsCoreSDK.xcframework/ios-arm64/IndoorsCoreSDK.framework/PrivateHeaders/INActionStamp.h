//
//  INActionStamp.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INActionStamp_
#define _INActionStamp_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INAction.h"

NS_ASSUME_NONNULL_BEGIN

/**
Stores data about action stamp.
 */
@interface INActionStamp : INBaseObject

/**
Associated `INAction` identifier.
 */
@property (nonatomic, strong) NSNumber          *ActionId;

/**
 User identifier.
 */
@property (nonatomic, strong) NSNumber          *UserId;

/**
 Device identifier.
 */
@property (nonatomic, strong) NSString          *Device;

@end

NS_ASSUME_NONNULL_END

#endif
