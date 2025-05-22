//
//  INGPSZone.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGPSZone_
#define _INGPSZone_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import <UIKit/UIKit.h>
#import "INBaseObject.h"
#import "INOwner.h"
#import "INMapARPoint.h"
#import "INFloor.h"
#import "INPosition2.h"

@class INFloor;
@class INPosition2;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about room.
 */
@interface INGPSZone : INBaseObject

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Building identifier in the database.
 @see 'INBuilding'
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 SVG String.
 */
@property (nonatomic, strong) NSString *Svg;

/**
 Polygon String.
 */
@property (nonatomic, strong) NSString *Polygon;

/**
 Accuracy threshold.
 */
@property (nonatomic, strong) NSNumber *AccuracyThreshold;

/**
 Cx.
 */
@property (nonatomic, strong) NSNumber *Cx;

/**
 Cy.
 */
@property (nonatomic, strong) NSNumber *Cy;

/**
 Width.
 */
@property (nonatomic, strong) NSNumber *Width;

/**
 Height.
 */
@property (nonatomic, strong) NSNumber *Height;

/**
 Rotation.
 */
@property (nonatomic, strong) NSNumber  *Rotation;

/**
Associated `INFloor` object.
*/
@property (nonatomic, weak) INFloor     *Floor;

/**
 UIBezierPath of the room.
 */
@property (nonatomic, strong, nullable) UIBezierPath *SvgBezierPath;

- (BOOL)containsPosition:(INPosition2*)position;

@end

NS_ASSUME_NONNULL_END

#endif
