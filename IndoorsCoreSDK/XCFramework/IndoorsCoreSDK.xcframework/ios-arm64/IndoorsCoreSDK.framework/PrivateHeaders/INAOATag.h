//
//  INAOATag.h
//  IndoorsSDK
//
//  Created by Mac on 23.01.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INAOATag_h
#define INAOATag_h

#import "INBaseTag.h"
#import "INBaseObject.h"
#import "INAOATagModel.h"

/**
 Stores data about AOA Tag.
 */
@interface INAOATag : INBaseObject<INBaseTag>

/**
 AOA Tag name.
 */
@property (nullable, strong, nonatomic) NSString *Name;

/**
 AOA Tag image.
 */
@property (nullable, strong, nonatomic) NSString *Image;

/**
 Associated `INAOATagModel` object Id.
 */
@property (nonnull, strong, nonatomic) NSNumber *ModelId;

/**
 Associated user Id.
 */
@property (nullable, strong, nonatomic) NSNumber *User;

/**
 AOA Tag mac address.
 */
@property (nonnull, strong, nonatomic) NSString *MacAddress;

/**
 Associated `INAOATagModel` object.
 */
@property (nullable, strong, nonatomic) INAOATagModel *ModelTag;

/**
 AOA Tag UUID.
 */
@property (nonnull, strong, nonatomic) NSString *UUID;

/**
 AOA Tag description.
 */
@property (nullable, strong, nonatomic) NSString *Description;

/**
 AOA Tag enabled state. 1 is enabled, 0 is disabled.
 */
@property (nonnull, strong, nonatomic) NSNumber *Enabled;

@end

#endif /* INAOATag_h */

