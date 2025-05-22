//
//  INGhostProfile.h
//  IndoorsSDK
//
//  Created by Timofey on 9/12/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INGhostProfile_h
#define INGhostProfile_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

/// Stores data about User, without confidential information.
@interface INGhostProfile : INBaseObject
/**
 UUID.
 */
@property (nonatomic, strong) NSString *UUID;

/**
 E-mail address.
 */
@property (nonatomic, strong) NSString *Email;

/**
 Gender.
 */
@property (nonatomic, strong) NSNumber *Gender;

/**
 User avatar filename.
 */
@property (nullable, nonatomic, strong) NSString *Image;

/**
 Username.
 */
@property (nonatomic, strong) NSString *Username;

/**
 First name.
 */
@property (nonatomic, strong) NSString *FirstName;

/**
 Last name.
 */
@property (nonatomic, strong) NSString *LastName;

/**
 Company name.
 */
@property (nonatomic, strong) NSString *Company;

@end

#endif /* INGhostProfile_h */
