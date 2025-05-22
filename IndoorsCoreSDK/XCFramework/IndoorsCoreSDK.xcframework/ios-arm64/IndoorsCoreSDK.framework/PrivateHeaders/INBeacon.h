//
//  INBeacon.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBeacon_
#define _INBeacon_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about iBeacon device.
 */
@interface INBeacon : INBaseObject<NSCopying>

/**
 128-bit unique identifier.
 */
@property (nonatomic, strong) NSString *UUID;

/**
  Name
 */
@property (nonatomic, strong) NSString *Name;
/**
 16-bit unsigned integer.
 */
@property (nonatomic, strong) NSNumber *Major;

/**
 16-bit unsigned integer.
 */
@property (nonatomic, strong) NSNumber *Minor;

/**
 8-bit unsigned integer.
 */
@property (nonatomic, strong) NSNumber *Power;

/**
 8-bit unsigned integer.
 */
@property (nonatomic, strong) NSNumber *Battery;

/**
 8-bit unsigned integer.
 */
@property (nonatomic, strong) NSNumber *ConstA;

/**
 8-bit unsigned integer.
 */
@property (nonatomic, strong) NSNumber *ConstB;

/**
 8-bit unsigned integer.
 */
@property (nonatomic, strong) NSNumber *Deviation;

/**
 8-bit unsigned integer.
 */
@property (nonatomic, strong) NSNumber *Threshold;

/**
 */
@property (nonatomic, strong) NSNumber *Model;

/**
  Associated`INBuilding` identifier.
 */
@property (nonatomic, strong) NSNumber *BuildingId;


/**
 LastSeen
 */
@property (nonatomic, strong) NSNumber *LastSeen;


@end

NS_ASSUME_NONNULL_END

#endif
