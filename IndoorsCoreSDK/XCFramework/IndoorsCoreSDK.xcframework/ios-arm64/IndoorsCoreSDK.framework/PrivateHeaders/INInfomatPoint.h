//
//  INInfomatPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INInfomatPoint_
#define _INInfomatPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"
#import "INInfomat.h"

NS_ASSUME_NONNULL_BEGIN
/**
 Stores data about Informat point.
 */
@interface INInfomatPoint : INBaseObject

/**
 Identifier of the 'INMediaPoint' object.
 @see 'INMediaPoint'
 */
@property (nonatomic, strong) NSNumber *InfomatId;

/**
 X-coordinate of the infomat on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of the infomat on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Floor identifier.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Reference to 'INInfomat' object.
 @see 'INInfomat'
 */
@property (nonatomic, weak) INInfomat *Infomat;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor *Floor;

@end

NS_ASSUME_NONNULL_END

#endif
