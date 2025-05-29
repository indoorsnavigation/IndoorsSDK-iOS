//
//  INWall.h
//  IndoorsSDK
//
//  Created by Timofey on 22/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INWall_h
#define INWall_h


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "INBaseObject.h"
#import "INPolygon.h"


@class INFloor;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about wall.
 */
@interface INWall : INBaseObject

/**
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 SVG-path of room on the map.
 */
@property (nonatomic, strong) NSString *Svg;

/**
 Color of wall.
 */
@property (nonatomic, strong) NSString *Color;

/**
 z.
 */
@property (nonatomic, strong) NSNumber *Z;

/**
 Base.
 */
@property (nonatomic, strong) NSNumber *Base;

/**
 Elevation.
 */
@property (nonatomic, strong) NSNumber *Elevation;

/**
 UIBezierPath of the wall.
 */
@property (nonatomic, strong, nullable) UIBezierPath *SvgBezierPath;

/**
 Associated `INFloor` object where wall is placed.
 */
@property (nonatomic, weak) INFloor *Floor;

@end


NS_ASSUME_NONNULL_END

#endif /* INWall_h */
