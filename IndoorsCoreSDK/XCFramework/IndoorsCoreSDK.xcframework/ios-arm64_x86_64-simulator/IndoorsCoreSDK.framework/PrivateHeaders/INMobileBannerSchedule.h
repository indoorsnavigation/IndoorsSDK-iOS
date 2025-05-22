//
//  INMobileBannerSchedule.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2020 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMobileBannerSchedule_
#define _INMobileBannerSchedule_

#import "INBaseObject.h"
#import "INMobileBannerAsset.h"

NS_ASSUME_NONNULL_BEGIN

/**
Stores data about mobile banner schelude.
*/
@interface INMobileBannerSchedule : INBaseObject

/**
The start time of the mobile banner schedule.
*/
@property (nonatomic, strong) NSNumber *Start;

/**
The end time of the mobile banner schedule.
*/
@property (nonatomic, strong) NSNumber *End;

/**
The identifier of the `INMobileBannerAsset` associated with the schedule.
*/
@property (nonatomic, strong) NSNumber *MobileBannerAssetId;

/**
A boolean value wrapped in NSNumber indicating whether the schedule is active or not.
*/
@property (nonatomic, strong) NSNumber *Active;

/**
 Associated `INBuilding` Id.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Associated `INRoom` Id.
 */
@property (nonatomic, strong) NSNumber *RoomId;

/**
The identifier of the campaign associated with the schedule.
*/
@property (nonatomic, strong) NSNumber *CampaignId;

/**
A boolean value wrapped in NSNumber indicating whether the mobile banner should be displayed on the map.
*/
@property (nonatomic, strong) NSNumber *ShowOnMap;

/**
The delay time before the mobile banner is displayed.
*/
@property (nonatomic, strong) NSNumber *Delay;

/**
The duration of time that the mobile banner is displayed.
*/
@property (nonatomic, strong) NSNumber *Duration;

/**
The number of times the mobile banner should be displayed.
*/
@property (nonatomic, strong) NSNumber *DisplayCount;

/**
The `INMobileBannerAsset` associated with the schedule.
*/
@property (nonatomic, strong) INMobileBannerAsset *MobileBannerAsset;

@end

NS_ASSUME_NONNULL_END

#endif
