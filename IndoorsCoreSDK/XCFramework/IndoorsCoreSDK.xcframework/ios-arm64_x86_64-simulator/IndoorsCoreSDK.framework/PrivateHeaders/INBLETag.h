//
//  INBLETag.h
//  IndoorsSDK
//
//  Created by Indoors on 14.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INBLETag_h
#define INBLETag_h

#import "INBaseObject.h"
#import "INBaseTag.h"

/**
 Stores data about BLE Tag.
 */
@interface INBLETag : INBaseObject<INBaseTag>

/**
 BLE Tag name.
 */
@property (nullable, strong, nonatomic) NSString *Name;

/**
 BLE Tag image.
 */
@property (nullable, strong, nonatomic) NSString *Image;

/**
 Associated model object Id.
 */
@property (nonnull, strong, nonatomic) NSNumber *ModelId;

/**
 Associated user Id.
 */
@property (nullable, strong, nonatomic) NSNumber *User;

/**
 BLE Tag mac address.
 */
@property (nonnull, strong, nonatomic) NSString *MacAddress;

/**
 BLE Tag description.
 */
@property (nullable, strong, nonatomic) NSString *Description;

/**
 BLE Tag UUID.
 */
@property (nonnull, strong, nonatomic) NSString *UUID;

/**
 BLE Tag enabled state. 1 is enabled, 0 is disabled.
 */
@property (nonnull, strong, nonatomic) NSNumber *Enabled;

@end


#endif /* INBLETag_h */
