//
//  INMTTracker.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMTTracker_
#define _INMTTracker_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about MTTracker device.
 */
@interface INMTTracker : INBaseObject

/**
 MTTracker name.
 */
@property (nonatomic, strong) NSString *Name;

/**
 MTTracker mac address.
 */
@property (nonatomic, strong) NSString *MacAddress;

/**
 MTTracker battery level.
 */
@property (nonatomic, strong) NSNumber *Battery;

/**
 MTTracker model number.
 */
@property (nonatomic, strong) NSNumber *Model;

@end

NS_ASSUME_NONNULL_END

#endif
