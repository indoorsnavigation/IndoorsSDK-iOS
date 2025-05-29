//
//  INPanoramaAsset.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INPanoramaAsset_
#define _INPanoramaAsset_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"

NS_ASSUME_NONNULL_BEGIN

@class INPanoramaPoint;

/**
 Stores data about augmented reality point on the map.
 */
@interface INPanoramaAsset : INBaseObject

/**
 Panorama Asset title.
 */
@property (nonatomic, strong) NSString *Title;

/**
 Panorama Asset description.
 */
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/**
 Panorama Asset image URL string
 */
@property (nonatomic, strong) NSString *Image;

/**
 Panorama Asset image360 URL string
 */
@property (nonatomic, nullable) NSString *Image360;

/**
 
 Panorama Asset video360 URL string
 */
@property (nonatomic, nullable) NSString *Video360;

/**
 
 Panorama Asset thumbnail URL string.
 */
@property (nonatomic, strong) NSString *Thumbnail;

/**
 Associated Panorama Point.
 */
@property (nonatomic, weak) INPanoramaPoint *Point;

@end

NS_ASSUME_NONNULL_END

#endif
