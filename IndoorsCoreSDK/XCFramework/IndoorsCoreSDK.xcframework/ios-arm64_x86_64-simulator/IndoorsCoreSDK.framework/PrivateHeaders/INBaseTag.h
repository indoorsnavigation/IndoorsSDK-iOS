//
//  INBaseTag.h
//  IndoorsSDK
//
//  Created by Indoors on 15.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INBaseTag_h
#define INBaseTag_h

@protocol INBaseTag <NSObject>

/**
Tag UUID.
 */
@property (nonnull, strong, nonatomic) NSString *UUID;

/**
 Associated user Id.
 */
@property (nullable, strong, nonatomic) NSNumber *User;

/**
 Tag image.
 */
@property (nullable, strong, nonatomic) NSString *Image;

/**
 Tag enabled state. 1 is enabled, 0 is disabled.
 */
@property (nullable, strong, nonatomic) NSNumber *Enabled;

/**
 Tag enabled state. 1 is enabled, 0 is disabled.
 */
@property (nullable, strong, nonatomic) NSString *Name;

/**
 Unix-timestamp.
 */
@property (nullable, nonatomic, strong) NSNumber *UpdatedAt;

/**
 Tag description.
 */
@property (nullable, strong, nonatomic) NSString *Description;



@end

#endif /* INBaseTag_h */
