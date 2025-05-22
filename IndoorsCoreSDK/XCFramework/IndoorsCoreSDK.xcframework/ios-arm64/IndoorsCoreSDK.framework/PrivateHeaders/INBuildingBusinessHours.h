//
//  INBuildingBuisinessHours.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBuildingBuisinessHours_
#define _INBuildingBuisinessHours_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN
/**
 Store data about building buisness hours.
 */
@interface INBuildingBusinessHours : INBaseObject

/**
 Identifier of the 'INBuilding' object.
 @see 'INBuilding'
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Day number.
 */
@property (nonatomic, strong) NSNumber *Day;

/**
 Open time string.
 */
@property (nonatomic, strong) NSString *OpenTime;

/**
 Close time string.
 */
@property (nonatomic, strong) NSString *CloseTime;

/**
 Boolean flag specifies if building buisness hours is active.
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Note string.
 */
@property (nonatomic, strong) NSString *Note;


@end

NS_ASSUME_NONNULL_END

#endif
