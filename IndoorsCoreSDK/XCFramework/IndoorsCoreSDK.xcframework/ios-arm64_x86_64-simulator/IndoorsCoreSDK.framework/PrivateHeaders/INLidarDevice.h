//
//  INLidarDevice.h
//  IndoorsSDK
//
//  Created by Indoors on 14.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//


#import "INBaseObject.h"
#import "INBaseTag.h"

/**
 Stores data about Lidar Device .
 */
@interface INLidarDevice : INBaseObject<INBaseTag>

/**
 Device Tag name.
 */
@property (nullable, strong, nonatomic) NSString *Name;

/**
 Device Tag UUID.
 */
@property (nonnull, strong, nonatomic) NSString *UUID;

/**
 UWB Tag image.
 */
@property (nullable, strong, nonatomic) NSString *Image;

/**
 Associated user Id.
 */
@property (nullable, strong, nonatomic) NSNumber *User;

/**
Device description.
 */
@property (nullable, strong, nonatomic) NSString *Description;

///**
// Associated model object Id.
// */
//@property (nonnull, strong, nonatomic) NSNumber *ModelId;
//
///**
// Device ip
// */
//@property (nullable, strong, nonatomic) NSString *IP_address;
//
//
///**
// Port
// */
//@property (nullable, strong, nonatomic) NSString *Port;
//
///**
// Device agent
// */
//@property (nonnull, strong, nonatomic) NSNumber *Agent;

@end
