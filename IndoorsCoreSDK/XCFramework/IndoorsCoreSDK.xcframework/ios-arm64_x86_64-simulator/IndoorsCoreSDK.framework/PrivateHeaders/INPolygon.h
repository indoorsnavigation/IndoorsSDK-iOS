//
//  INPolygon.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INPolygon_
#define _INPolygon_

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "INBaseObject.h"

@class INFloor;


NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about colored polygon.
 */
@interface INPolygon : INBaseObject

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSString *Name;

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Associated `INBuilding` object Id.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 SVG-path of polygon on the map.
 */
@property (nonatomic, strong) NSString *Svg;

/**
Base.
 */
@property (nonatomic, strong) NSNumber *Base;

/**
 Elevation.
 */
@property (nonatomic, strong) NSNumber *Elevation;



/**
 Color of the selected polygon.
 */
@property (nonatomic, strong) NSString *Color;

/**
 Associated `INFloor` object.
 */
@property (nonatomic, weak) INFloor *Floor;

/**
 UIBezierPath of the polygon.
 */
@property (nonatomic, strong, nullable) UIBezierPath *SvgBezierPath;


@end

NS_ASSUME_NONNULL_END

#endif
