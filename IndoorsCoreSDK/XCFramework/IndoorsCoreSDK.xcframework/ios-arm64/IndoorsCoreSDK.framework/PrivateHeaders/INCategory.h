//
//  INCategory.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INCategory_
#define _INCategory_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INImageGallery.h"

@class INCategoryType;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about category of 'INOwner'.
 Example: 'Kids Café' (type of category - 'Cafe'), 'Women's Shoes' (type of category - 'shops') and so on.
 */
@interface INCategory : INBaseObject

/**
 The name of the category.
 */
@property (nonatomic, strong) NSString          *Name;

/**
 Icon file name of the category.
 */
@property (nonatomic, strong) NSString          *Image;

/**
 Keywords names сategory, for search.
 */
@property (nonatomic, strong) NSString          *Keywords;

/**
 Parent `INCategory` object id.
 */
@property (nonatomic, strong) NSNumber          *ParentId;

/**
 Image gallery.
 */
@property (nonatomic, strong) NSNumber          *GalleryId;

@property (nonatomic, strong) NSNumber          *Priority;

/**
 Boolean value specifies if category should be visible.
 */
@property (nonatomic, strong) NSNumber          *Visible;

/**
 Parent `INCategory` object.
 */
@property (nonatomic, weak, nullable)       INCategory        *Parent;

/**
 Array of `INCategory` children objects.
 */
@property (nonatomic, strong, nullable)     NSMutableArray    *Children;

/**
 Array of `INOwner` objects.
 */
@property (nonatomic, strong, nullable)     NSMutableArray    *Owners;

/**
 `INImageGallery` object.
 */
@property (nonatomic, strong, nullable)     INImageGallery    *ImageGallery;

/**
 Property that determines if owner images that are that category, will show its images.
 */
@property (nonatomic, strong) NSNumber *IconVisible;

/// Initializer for objects that dont have category object yet.
/// - Note: Only works for INCategory, INElevatorShaft, INParkingPlace, INDoor, INEntrance, INOwner, INRoom and INIcon.
- (nullable instancetype)categoryForINCategoryObject:(id<INCategoryProtocol>)object;
+ (NSMutableArray<INCategory *> *)templateCategoriesForObjectsWihtoutInitialCategory;
@end

NS_ASSUME_NONNULL_END

#endif
