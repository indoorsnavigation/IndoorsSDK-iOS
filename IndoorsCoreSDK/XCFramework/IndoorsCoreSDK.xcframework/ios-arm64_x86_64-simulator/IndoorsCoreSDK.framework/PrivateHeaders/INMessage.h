//
//  INMessage.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMessage_
#define _INMessage_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INProfiles.h"
#import "INConversation.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Store data about message.
 */
@interface INMessage : INBaseObject

/**
 Sender `INProfile` object Id.
 */
@property (nonatomic, strong) NSNumber *AccountId;

/**
 `INConversation` object that contains this message Id.
 */
@property (nonatomic, strong) NSNumber *ConversationId;

/**
 Recipient `INProfile` object Id.
 */
@property (nonatomic, strong) NSNumber *RecipientId;

/**
 Message text.
 */
@property (nonatomic, strong) NSString *Message;

/**
 Message status.
 */
@property (nonatomic, strong) NSNumber *Status;


/// Associated `INProfile` sender object.
@property (nonatomic, weak) INProfiles        *Account;

/// Associated `INProfile` recipient object.
@property (nonatomic, weak) INProfiles        *Recipient;

@end

NS_ASSUME_NONNULL_END

#endif
