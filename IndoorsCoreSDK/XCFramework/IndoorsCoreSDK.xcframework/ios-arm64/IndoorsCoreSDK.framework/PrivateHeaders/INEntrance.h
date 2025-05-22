//
//  INEntrance.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INEntrance_
#define _INEntrance_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import <UIKit/UIKit.h>
#import "INBaseObject.h"
#import "INMapARPoint.h"
#import "INFloor.h"


@class INFloor;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about entrance.
 */
@interface INEntrance : INBaseObject <INRoutableProtocol, INCategoryProtocol>

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSString *Name;

/**

 */
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);
/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Associated`INBuilding` identifier.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 SVG String path.
 */
@property (nonatomic, strong) NSString *Svg;

/**
Polygon string.
 */
@property (nonatomic, strong) NSString *Polygon;

/**
 Color of the selected entrance.
 */
@property (nonatomic, strong) NSString *SelectedColor;

/**
 Color of the unselected entrance.
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
Base value.
 */
@property (nonatomic, strong) NSNumber *Base;

/**
Elevation value.
 */
@property (nonatomic, strong) NSNumber *Elevation;

/**
Entrance status.
 */
@property (nonatomic, strong) NSNumber *Status;

/**
 Icon image URL.
 */
@property (nonatomic, strong) NSString *Icon;

/**
 Image URL.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Associated `INImageGallery` object identifier.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 Associated `INFloor` object.
 */
@property (nonatomic, weak) INFloor    *Floor;

/**
 UIBezierPath of the entrance.
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
