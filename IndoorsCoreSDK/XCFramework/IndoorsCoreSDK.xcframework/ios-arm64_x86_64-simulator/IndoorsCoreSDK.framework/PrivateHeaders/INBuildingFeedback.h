//
//  INBuildingFeedback.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBuildingFeedback_
#define _INBuildingFeedback_

#import <Foundation/Foundation.h>
#import "INFeedback.h"

NS_ASSUME_NONNULL_BEGIN


/// This class was designed for creating feedback for `INBuilding`.
@interface INBuildingFeedback : INFeedback

/**
 Associated `INBuilding` Id.
*/
@property (nonatomic, strong) NSNumber *BuildingId;

@end

NS_ASSUME_NONNULL_END

#endif
