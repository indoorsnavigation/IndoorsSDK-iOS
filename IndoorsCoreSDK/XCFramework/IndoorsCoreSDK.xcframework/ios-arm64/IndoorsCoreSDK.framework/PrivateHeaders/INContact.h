//
//  INContact.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INContact_
#define _INContact_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INProfiles.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about user contact.
 */
@interface INContact : INBaseObject

/**
 Associated `INProfile` - (profile that have this contact) object Id.
 */
@property (nonatomic, strong) NSNumber *AccountId;

/**
 Contact Id.
 */
@property (nonatomic, strong) NSNumber *ContactId;

/**
 Associated `INProfile` contact object.
 */
@property (nonatomic, weak) INProfiles *Profile;

@end

NS_ASSUME_NONNULL_END

#endif
