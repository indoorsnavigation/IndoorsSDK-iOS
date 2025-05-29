//
//  INUserTrackPoint.h
//  IndoorsSDK
//
//  Created by Timofey on 8/12/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUserTrackPoint_h
#define INUserTrackPoint_h


#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about user, its device and its position.
 */
@interface INUserTrackPoint : INBaseObject

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
 Device UUID.
 */
@property (nonatomic, strong) NSString  *Device;

/**
 User UUID.
 */
@property (nonatomic, strong) NSString  *User;

/**
 ?.
 */
@property (nonatomic, strong) NSNumber  *ZoneChanged;

/**
 ?.
 */
@property (nonatomic, strong) NSDictionary  *ZoneVisitStamp;

/**
 Dictionary representation of this class.
 */
- (NSMutableDictionary *)toNSDictionary;

@end

NS_ASSUME_NONNULL_END

#endif
