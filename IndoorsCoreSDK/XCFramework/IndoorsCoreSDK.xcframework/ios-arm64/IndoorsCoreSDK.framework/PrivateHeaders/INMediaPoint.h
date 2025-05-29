//
//  INMediaPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMediaPoint_
#define _INMediaPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INTour.h"
#import "INTourPoint.h"
#import "INMediaAsset.h"
#import "INFloor.h"

@class INTourPoint;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the position of the media asset.
 */
@interface INMediaPoint : INBaseObject

/**
 Identifier of the 'INMediaAsset' object.
 @see 'INMediaAsset'
 */
@property (nonatomic, strong) NSNumber *MediaAssetId;

/**
 X-coordinate of the media asset on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of the beacon on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Floor identifier.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Range of this point on the map for asset downloader.
 */
@property (nonatomic, strong) NSNumber *Range;

/**
 Boolean value, specify if media point should show on map if user came in media point range.
 */
@property (nonatomic, strong) NSNumber *Autoshow;

/**
 Boolean value, specify if media point should autoplay when media point selected.
 */
@property (nonatomic, strong) NSNumber *Autoplay;

/**
 Reference to 'INMediaAsset' object.
 @see 'INMediaAsset'
 */
@property (nonatomic, weak) INMediaAsset *MediaAsset;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor *Floor;

/**
 Reference to 'INTourPoint' object.
 @see 'INTourPoint'
 */
@property (nonatomic, weak) INTourPoint *TourPoint;

@end

NS_ASSUME_NONNULL_END

#endif
