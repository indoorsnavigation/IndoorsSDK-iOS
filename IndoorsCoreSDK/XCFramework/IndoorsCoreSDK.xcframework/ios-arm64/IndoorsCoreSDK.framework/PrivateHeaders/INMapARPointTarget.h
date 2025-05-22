//
//  INMapARPointTarget.h
//  IndoorsSDK
//
//  Created by Georgy on 11.03.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INMapARPointTarget_h
#define INMapARPointTarget_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"

NS_ASSUME_NONNULL_BEGIN

@interface INMapARPointTarget : INBaseObject

/**

 */
@property (nonatomic, strong) NSNumber *Id;

/**
 AR marker identifier.
 @see 'INMapARPointt'
 */
@property (nonatomic, strong) NSNumber *MapARPointId;

/**
 X-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Y-coordinate of this point on the map.
 */
@property (nonatomic, strong) NSNumber *Y;

/**

 */
@property (nonatomic, strong) NSNumber *FloorId;

/**

 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**

 */
@property (nonatomic, strong) NSNumber *ApplicationId;

/**

 */
@property (nonatomic, strong) NSNumber *CreatedAt;

/**

 */
@property (nonatomic, strong) NSNumber *UpdatedAt;

/**

 */
@property (nonatomic, strong) NSNumber *Deleted;

/**
 Reference to 'INFloor' object.
 @see 'INFloor'
 */
@property (nonatomic, weak) INFloor *Floor;

@property (nonatomic, weak) INRoom *Room;

@end

NS_ASSUME_NONNULL_END

#endif

