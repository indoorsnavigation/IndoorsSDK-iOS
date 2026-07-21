//
//  INConversation.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INConversation_
#define _INConversation_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INdoorsMessage.h"
#import "JSQMessageData.h"
#import "INProfiles.h"

@protocol INLocalStorable;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about in-messenger conversations.
 */
@interface INConversation : INBaseObject<INLocalStorable>

/**
 Converastion title.
 */
@property (nonatomic, strong) NSString          *Title;

/**
 Converastion image URL string.
 */
@property (nullable, nonatomic, strong) NSString          *Image;

/**
 An array of the `INConversationMember` objects.
 */
@property (nullable, nonatomic, strong) NSMutableArray    *ConversationMembers;

/**
 An array of the `INMessage` objects.
 */
@property (nullable, nonatomic, strong) NSMutableArray    *Messages;

/**
 Converastion image.
 */
@property (nullable, nonatomic, strong) UIImage           *ConversationImage;

/**
 New messages count.
 */
@property int                                   NewMessagesCount;

/**
 Conversation Edited.
 */
@property BOOL                                   isEdited;

/// Returns lasst message time string.
- (NSString*)getLastMessageTimeString;

/// Returns lasst message string.
- (NSString*)getLastMessageString;

@end

NS_ASSUME_NONNULL_END

#endif
