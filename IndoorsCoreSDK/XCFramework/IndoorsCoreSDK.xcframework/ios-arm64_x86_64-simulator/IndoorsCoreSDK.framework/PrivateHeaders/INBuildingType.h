//
//  INBuildingType.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBuildingType_
#define _INBuildingType_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INApplication.h"

@class INApplication;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores information about a type of building.
 */
@interface INBuildingType : INBaseObject

/**
 Name of the type of the building.
 */
@property (nonatomic, strong) NSString *Name;

/**
 Icon of the type of the building.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Image gallery.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 Associated `INAplpication` object.
 */
@property (nonatomic, weak)   INApplication  *Application;

/**
 Associated  array of `INBuilding` objects.
 */
@property (nonatomic, strong) NSMutableArray *Buildings;

/**
 Associated `INImageGallery` object.
 */
@property (nonatomic, strong) INImageGallery *ImageGallery;

@end

NS_ASSUME_NONNULL_END

#endif
