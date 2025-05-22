//
//  INOwner.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INOwner_
#define _INOwner_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INImageGallery.h"

@class INCategory;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores information about 'owner' of the room/building.
 */
@interface INOwner : INBaseObject<INCategoryProtocol>

/**
 The name of the 'owner' of the room/building.
 */
@property (nonatomic, strong) NSString *Name;

/**
 The names of the 'owner' of the room/building with a comma.
 Used for more accurate voice recognition.
 */
@property (nonatomic, strong) NSString *Names;

/**
 The description of the 'owner' of the room/building.
 */
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/**
 Category identifier of the 'owner' of the room/building in the Indoors Navigation Platform database.
 @see 'INCategory'
 */
@property (nonatomic, strong) NSNumber *CategoryId;

/**
 The address of the 'owner' of the room/building.
 */
@property (nonatomic, strong) NSString *Address;

/**
 Owner logo image URL.
 */
@property (nonatomic, strong) NSString *Logo;

/**
 Owner image URL.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Image gallery identifier.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 E-mail address of the 'owner' company.
 */
@property (nonatomic, strong) NSString *Email;

/**
 The phone number of the owner of the room/building.
 */
@property (nonatomic, strong) NSString *Phone;

/**
 The website url of the owner of the room/building.
 */
@property (nonatomic, strong) NSString *Website;

/**
 The facebook url of the owner of the room/building.
 */
@property (nonatomic, strong) NSString *Fb;
@property (nonatomic, strong) NSString *FbOgObjectId;

/**
 The vkontakte url of the owner of the room/building.
 */
@property (nonatomic, strong) NSString *Vk;

/**
 
 */
@property (nonatomic, strong) NSString *WorkingTime;

/**
 Keywords names owner, for search.
 */
@property (nonatomic, strong) NSString *Keywords;

/**
 Tag.
 */
@property (nonatomic, strong) NSString *CustomTag;

/**
 'INFloor' object identifier.
 @see 'INFloor'
 */
@property (strong, nonatomic) NSNumber  *FloorIndex;

/**
 'INRoom' object identifier.
 @see 'INRoom'
 */
@property (strong, nonatomic) NSNumber  *RoomIndex;

/**
 'INPoint' object identifier.
 @see 'INPoint'
 */
@property (strong, nonatomic) NSNumber  *PointIndex;

/**
 Average rating for owner.
 */
@property (nonatomic, strong) NSNumber  *AverageRating;

/**
 Feedback count for owner.
 */
@property (nonatomic, strong) NSNumber  *FeedbackCount;

/**
 Boolean value specifies if INOwner is in favorite list.
 */
@property (nonatomic) BOOL                      IsInFavouritesList;

/**
 Associated `INCategory` object.
 */
@property (nonatomic, strong) INCategory        *Category;

/**
 Array of `INRoom` objects of owner.
 */
@property (nonatomic, strong) NSMutableArray    *Rooms;

/**
 `ImageGallery` object.
 */
@property (nonatomic, strong) INImageGallery    *ImageGallery;

/**
  Associated`INBuilding` identifier.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Map icon text color.
 */
@property (nonatomic, strong) NSString *MapIconTextColor;

/*
An array of the `INRoomBusinessHours` objects.
*/
@property (nonatomic, strong) NSMutableArray *OwnerBusinessHours;

@end

NS_ASSUME_NONNULL_END

#endif
