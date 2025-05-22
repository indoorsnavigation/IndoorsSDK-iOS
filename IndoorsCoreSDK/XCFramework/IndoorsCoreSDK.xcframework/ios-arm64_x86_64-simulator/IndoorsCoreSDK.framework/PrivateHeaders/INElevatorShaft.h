//
//  INElevatorShaft.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INElevatorShaft_
#define _INElevatorShaft_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import <UIKit/UIKit.h>
#import "INBaseObject.h"
#import "INMapARPoint.h"
#import "INFloor.h"


@class INFloor;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores information about Elevator Shaft in building.
 */
@interface INElevatorShaft : INBaseObject <INRoutableProtocol, INCategoryProtocol>

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSString *Name;

/**
 The description of the 'owner' of the room/building.
 */
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/**
 */
@property (nonatomic, strong) NSNumber *FirstFloorId;

/**
 */
@property (nonatomic, strong) NSNumber *LastFloorId;

/**
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**

 */
@property (nonatomic, strong) NSString *Svg;

/**

 */
@property (nonatomic, strong) NSString *Polygon;

/**
 */
@property (nonatomic, strong) NSString *SelectedColor;

/**
 */
@property (nonatomic, strong) NSString *UnSelectedColor;

/**
 Color of the name label.
 */
@property (nonatomic, strong) NSString *LabelTextColor;

/**
 Color of the name label.
 */
@property (nonatomic, strong) NSString *LabelBackgroundColor;

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
@property (nonatomic, strong) NSNumber *Rotation;

@property (nonatomic, strong) NSNumber *ShowInfoView;

/**

 */
@property (nonatomic, strong) NSNumber *Base;

/**

 */
@property (nonatomic, strong) NSNumber *Elevation;

/**

 */
@property (nonatomic, strong) NSNumber *Status;

@property (nonatomic, weak) INFloor    *FirstFloor;
@property (nonatomic, weak) INFloor    *LastFloor;

/**
 */
@property (nonatomic, strong, nullable) UIBezierPath *SvgBezierPath;

/**
 Reference to 'INCategory' object.
 @see 'INCategory'
 */
@property (strong, nonatomic) INCategory *Category;

@end

NS_ASSUME_NONNULL_END

#endif
