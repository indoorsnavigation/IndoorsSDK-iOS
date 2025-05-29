//
//  INDNNPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INDNNPoint_
#define _INDNNPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INDNNAsset.h"
#import "INFloor.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about augmented reality point on the map.
 */
@interface INDNNPoint : INBaseObject

/**
 Identifier of the 'INMediaAsset' object.
 @see 'INDNNAsset'
 */
@property (nonatomic, strong) NSNumber *DNNAssetId;

/**
 X-coordinate of the media asset on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of the beacon on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
 Z-coordinate of the beacon on the map.
 */
@property (nonatomic, strong) NSNumber *Z;

/**
 Floor identifier.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 Floor identifier.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Range of this point on the map for asset downloader.
 */
@property (nonatomic, strong) NSNumber *Range;

/**
 Reference to 'INMediaAsset' object.
 @see 'INMediaAsset'
 */
@property (nonatomic, weak) INDNNAsset *DNNAsset;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor *Floor;

@end

NS_ASSUME_NONNULL_END

#endif
