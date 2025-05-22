//
//  INTrackPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INTrackPoint_
#define _INTrackPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about device position.
 */
@interface INTrackPoint : INBaseObject

/**
 Tag.
 */
@property (nonatomic, strong) NSString *Tag;

/**
 Floor identifier.
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 X-coordinate of the device.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of the device.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Magnetic heading.
 */
@property (nonatomic, strong) NSNumber *Heading;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor  *Floor;

/**
 Unix timestamp of the trackpoint.
 */
@property (nonatomic, weak) NSNumber  *ClientTimestamp;

/**
 Dictionary representation of this class.
 */
- (NSMutableDictionary *)toNSDictionary;

@end

NS_ASSUME_NONNULL_END

#endif
