//
//  INConversationMember.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INConversationMember_
#define _INConversationMember_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INProfiles.h"
#import "INConversation.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about conversation member.
 */
@interface INConversationMember : INBaseObject

/**
 Associated `INConversation` object Id.
 */
@property (nonatomic, strong) NSNumber *ConversationId;

/**
 Associated `INProfile` object Id.
 */
@property (nonatomic, strong) NSNumber *AccountId;

/**
 Boolean flag specifies if conversation member have admin Rights in conversation.
 */
@property (nonatomic, strong) NSNumber *IsAdmin;

/**
 Associated `INConversation` object.
 */
@property (nonatomic, weak) INConversation *Conversation;

/**
 Associated `INProfile` object.
 */
@property (nonatomic, weak) INProfiles *Profile;

@end

NS_ASSUME_NONNULL_END

#endif
