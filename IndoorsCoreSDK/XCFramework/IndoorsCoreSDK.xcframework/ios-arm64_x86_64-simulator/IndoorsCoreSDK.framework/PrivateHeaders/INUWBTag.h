//
//  INUWBTag.h
//  IndoorsSDK
//
//  Created by Indoors on 14.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUWBTag_h
#define INUWBTag_h

#import "INBaseObject.h"
#import "INBaseTag.h"

/**
 Stores data about UWB Tag.
 */
@interface INUWBTag : INBaseObject<INBaseTag>

/**
 UWB Tag name.
 */
@property (nullable, strong, nonatomic) NSString *Name;

/**
 UWB Tag image.
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
 UWB Tag UUID.
 */
@property (nonnull, strong, nonatomic) NSString *UUID;

/**
 BLE Tag description.
 */
@property (nullable, strong, nonatomic) NSString *Description;


/**
 UWB Tag enabled state. 1 is enabled, 0 is disabled.
 */
@property (nonnull, strong, nonatomic) NSNumber *Enabled;

@end


#endif /* INUWBTag_h */
