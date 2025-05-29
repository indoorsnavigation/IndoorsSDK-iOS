//
//  INMobileBannerStamp.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2020 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMobileBannerStamp_
#define _INMobileBannerStamp_

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
Stores data about mobile banner stamp.
*/
@interface INMobileBannerStamp : INBaseObject

/**
The identifier of the `INMobileBannerAsset` associated with the schedule.
*/
@property (nonatomic, strong) NSNumber *MobileBannerAssetId;

/**
The identifier of the `INProfile` associated with stump.
*/
@property (nonatomic, strong) NSNumber *UserId;

/**
 The timestamp when the mobile banner was displayed to the user.
*/
@property (nonatomic, strong) NSNumber *Timestamp;

/**
 The device UUID string.
*/
@property (nonatomic, strong) NSString *Device;

@end

NS_ASSUME_NONNULL_END

#endif
