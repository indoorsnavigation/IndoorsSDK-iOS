//
//  INSessionDescription.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INSessionDescription_
#define _INSessionDescription_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INContact.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about video call session description.
 */
@interface INSessionDescription : INBaseObject

/**
 Account Id.
 */
@property (nonatomic, strong) NSNumber *AccountId;

/**
 Contact recipient Id.
 */
@property (nonatomic, strong) NSNumber *RecipientId;

/**
 Session description type string.
 */
@property (nonatomic, strong) NSString *Type;

/**
 Session description description.
 */
@property (nonatomic, strong) NSString *Description;

@end

NS_ASSUME_NONNULL_END

#endif
