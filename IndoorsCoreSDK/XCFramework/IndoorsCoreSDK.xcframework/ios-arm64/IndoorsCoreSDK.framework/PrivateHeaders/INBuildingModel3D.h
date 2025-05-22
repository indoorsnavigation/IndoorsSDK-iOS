//
//  INBuildingModel3D.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//
#ifndef _INBuildingModel3D_
#define _INBuildingModel3D_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INBuildingModel3D : INBaseObject

/// Associated `INBuilding` object Id.
@property (nonatomic, strong) NSNumber *BuildingId;

/// Name of the 3d model used as path of downloading URL.
@property (nonatomic, strong) NSString *Model3d;

///
@property (nonatomic, strong) NSNumber *DeviceType;

/// size of the 3D model file in `NSByteCountFormatterCountStyleBinary` format.
@property (nonatomic, strong) NSString *modelSize;

@end

NS_ASSUME_NONNULL_END

#endif
