//
//  INBaseTagLocation.h
//  IndoorsSDK
//
//  Created by Indoors on 15.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INBaseTagLocation_h
#define INBaseTagLocation_h

@protocol INBaseTagLocation <NSObject>

/**
 UWB Tag floor id
 */
@property (nonnull, strong, nonatomic) NSNumber *FloorId;

/**
 UWB Tag x axis position
 */
@property (nonnull, strong, nonatomic) NSNumber *X;

/**
 UWB Tag y axis position
 */
@property (nonnull, strong, nonatomic) NSNumber *Y;

/**
 UWB Tag UUID.
 */
@property (nonnull, strong, nonatomic) NSString *UUID;

@end

#endif /* INBaseTagLocation_h */
