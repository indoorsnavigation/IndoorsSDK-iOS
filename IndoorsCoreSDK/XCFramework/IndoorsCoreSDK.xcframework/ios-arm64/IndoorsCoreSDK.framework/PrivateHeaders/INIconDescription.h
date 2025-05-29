//
//  INIconDescription.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INIconDescription_
#define _INIconDescription_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INIconType.h"
#import "INImageGallery.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the description of the icon.
 */
@interface INIconDescription : INBaseObject

/**
 Icon type identifier.
 */
@property (nonatomic, strong) NSNumber *IconTypeId;

/**
 The name of the 'owner' of the room/building.
 */
@property (nonatomic, strong) NSString *Name;

/**
 Used for more accurate voice recognition.
 */
@property (nonatomic, strong) NSString *Names;

/**
 Short description of the icon.
 */
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/**
 Icon Description address.
 */
@property (nonatomic, strong) NSString *Address;

/**
 IconDescription logo image URL string.
 */
@property (nonatomic, strong) NSString *Logo;

/**
 Icon Description image URL string.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Icon Description Image gallery identifier.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 Icon Description E-mail address.
 */
@property (nonatomic, strong) NSString *Email;

/**
 The phone number of the icon
 */
@property (nonatomic, strong) NSString *Phone;

/**
 The website url.
 */
@property (nonatomic, strong) NSString *Website;

/**
 The facebook url.
 */
@property (nonatomic, strong) NSString *Fb;
@property (nonatomic, strong) NSString *FbOgObjectId;

/**
 The vkontakte url.
 */
@property (nonatomic, strong) NSString *Vk;

/**
 
 */
@property (nonatomic, strong) NSString *WorkingTime;

/**
 Keywords names сategory, for search.
 */
@property (nonatomic, strong) NSString *Keywords;

/**
 Tag.
 */
@property (nonatomic, strong) NSString *CustomTag;

/**
 Map icon text color.
 */
@property (nonatomic, strong) NSString *MapIconTextColor;

/**
 Reference to 'INIconType' object.
 @see 'INIconType'
 */
@property (nonatomic, weak) INIconType *IconType;

@property (nonatomic, strong) INImageGallery    *ImageGallery;

@end

NS_ASSUME_NONNULL_END

#endif
