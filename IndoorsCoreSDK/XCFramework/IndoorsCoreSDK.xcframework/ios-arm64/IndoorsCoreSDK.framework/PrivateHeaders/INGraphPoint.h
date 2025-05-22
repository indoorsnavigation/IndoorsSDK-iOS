//
//  INGraphPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGraphPoint_
#define _INGraphPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"

@class INFloor;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about route point.
 */
@interface INGraphPoint : INBaseObject

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Floor identifier in the database.
 @see 'INBuilding'
 */
@property (nonatomic, strong) NSNumber *BuildingId;


/**
 X-coordinate of the point on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of the point on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Voice Message.
 */
@property (nonatomic, strong) NSString *VoiceMessage;

/**
 Range
 */
@property (nonatomic, strong) NSNumber *VoiceMessageRange;

/**
 An array that stores neighbor points.
 */
@property (nonatomic, strong, nullable) NSMutableArray *Neighbors;

/**
 Distance.
 */
@property (nonatomic, strong) NSNumber *Distance;

/**
 Associated `INFloor` current floor object.
 */
@property (nonatomic, weak) INFloor *Floor;

/**
 Boolean flag specifies if voice message fired.
 */
@property (nonatomic) BOOL VoiceMessageFired;

@end

NS_ASSUME_NONNULL_END

#endif
