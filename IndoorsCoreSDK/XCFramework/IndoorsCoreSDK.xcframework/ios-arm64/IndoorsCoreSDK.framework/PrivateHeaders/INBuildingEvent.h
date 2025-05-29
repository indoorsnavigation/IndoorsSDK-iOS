//
//  INBuildingEvent.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBuildingEvent_
#define _INBuildingEvent_

#import "INEvent.h"
#import "INBuilding.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about building event.
@interface INBuildingEvent : INEvent

/// Associated `INBuilding` object Id.
@property (nonatomic, strong) NSNumber *BuildingId;

/// Associated `INBuilding` object.
@property (nonatomic, weak) INBuilding *Building;

@end

NS_ASSUME_NONNULL_END

#endif
