//
//  INAPNSDevice.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INAPNSDevice_
#define _INAPNSDevice_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about registration in apns.
 */
@interface INAPNSDevice : INBaseObject

/**
 Device name.
 */
@property (nonatomic, strong) NSString *Name;
@property (nonatomic, strong) NSNumber *Active;

/**
 Timezone
 */
@property (nonatomic, strong) NSString *Timezone;

/**
 Device identifier.
 */
@property (nonatomic, strong) NSString *RegistrationId;

/**
 Identifier of associated `INProfile` object.
 */
@property (nonatomic, strong) NSNumber *AccountId;

@end

NS_ASSUME_NONNULL_END

#endif
