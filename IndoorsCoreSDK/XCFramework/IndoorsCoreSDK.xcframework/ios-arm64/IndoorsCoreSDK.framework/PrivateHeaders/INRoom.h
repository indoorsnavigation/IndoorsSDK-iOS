//
//  INRoom.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRoom_
#define _INRoom_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import <UIKit/UIKit.h>
#import "INBaseObject.h"
#import "INOwner.h"
#import "INMapARPoint.h"
#import "INFloor.h"


@class INFloor;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about room.
 */
@interface INRoom : INBaseObject <INRoutableProtocol, INCategoryProtocol>

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
 Owner identifier in the database.
 @see 'INOwner'
 */
@property (nonatomic, strong) NSNumber *OwnerId;

/**
 SVG-path of room on the map.
 */
@property (nonatomic, strong) NSString *Svg;

/**
 Color of the selected room.
 */
@property (nonatomic, strong) NSString *SelectedColor;

/**
 Color of the unselected room.
 */
@property (nonatomic, strong) NSString *UnSelectedColor;

/**
 Color of the owner label.
 */
@property (nonatomic, strong) NSString *LabelColor;

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

/**
Boolean value specifies if it needed to show info view on map.
 */
@property (nonatomic, strong) NSNumber *ShowInfoView;

/**
 Average rating of room.
 */
@property (nonatomic, strong) NSNumber *AverageRating;

/**
 Feedback count of room.
 */
@property (nonatomic, strong) NSNumber  *FeedbackCount;

/**
 Base.
 */
@property (nonatomic, strong) NSNumber *Base;

/**
 Elevation.
 */
@property (nonatomic, strong) NSNumber *Elevation;

/**
 Reference to 'INOwner' object.
 @see 'INOwner'
 */
@property (nonatomic, weak) INOwner          *Owner;

/**
 An array of the `INMapARPoint` objects.
 */
@property (nonatomic, strong) NSMutableArray *ArPoints;

/**
 Associated `INCategory` object.
 */
@property (strong, nonatomic) INCategory *Category;

/**
 Associated `INFloor` object where room is placed.
 */
@property (nonatomic, weak) INFloor        *Floor;

/**
 An array of the `INRoomBusinessHours` objects.
 */
@property (nonatomic, strong) NSMutableArray *RoomBusinessHours;

@property (nonatomic, strong) NSString *Polygon;


/**
 UIBezierPath of the room.
 */
@property (nonatomic, strong, nullable) UIBezierPath *SvgBezierPath;

/**
 BookingEnabled.
*/
@property (nonatomic, strong) NSNumber *BookingEnabled;

@property (nonatomic, strong) NSNumber *IconVisible;

@end

NS_ASSUME_NONNULL_END

#endif
