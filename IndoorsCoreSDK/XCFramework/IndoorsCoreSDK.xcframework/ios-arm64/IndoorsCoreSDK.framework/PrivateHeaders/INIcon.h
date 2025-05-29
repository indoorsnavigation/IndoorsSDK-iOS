//
//  INIcon.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INIcon_
#define _INIcon_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INIconDescription.h"

@class INFloor;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the icon on the map.
 */
@interface INIcon : INBaseObject <INRoutableProtocol, INCategoryProtocol>

/**
 Floor identifier.
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Building identifier.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 X-coordinate of the icon on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of the icon on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Scale of the icon.
 */
@property (nonatomic, strong) NSNumber *Scale;

/**
 Identifier of the icon description object.
 */
@property (nonatomic, strong) NSNumber *IconDescriptionId;

/**
 Reference to 'INIconDescription' object.
 @see 'INIconDescription'
 */
@property (nonatomic, weak) INIconDescription *IconDescription;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor *Floor;

/**
 Reference to 'INCategory' object.
 @see 'INCategory'
 */
@property (strong, nonatomic) INCategory *Category;

@end

NS_ASSUME_NONNULL_END

#endif
