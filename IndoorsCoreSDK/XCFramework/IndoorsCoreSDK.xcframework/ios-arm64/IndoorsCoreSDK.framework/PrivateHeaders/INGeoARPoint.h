//
//  INGeoARPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGeoARPoint_
#define _INGeoARPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"
#import "INARAsset.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about augmented reality point on the map.
 */
@interface INGeoARPoint : INBaseObject

/**
 AR marker identifier.
 @see 'INARAsset'
 */
@property (nonatomic, strong) NSNumber *AssetId;

/**
 X-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *Lat;

/**
 Y-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *Lon;

/**
 Floor identifier.
 @see 'Floor'
 */
@property (nonatomic, strong) NSNumber *Altitude;

/**
 Heading.
 */
@property (nonatomic, strong) NSNumber *Heading;

/**
 Range of this point on the map for marker downloader.
 */
@property (nonatomic, strong) NSNumber *Range;

/**
 Point activity.
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Reference to 'INARAsset' object.
 @see 'INARAsset'
 */
@property (nonatomic, strong) INARAsset *Asset;

@end

NS_ASSUME_NONNULL_END

#endif
