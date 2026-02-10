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
#import "INMessageFiles.h"

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
 CREATED = 0
 SENDED = 1
 RECEIVED = 2
 READED = 3
 PENDING = 4
 */
@property (nonatomic, strong) NSNumber *Status;


/// Associated `INProfile` sender object.
@property (nonatomic, weak) INProfiles        *Account;

/// Associated `INProfile` recipient object.
@property (nonatomic, weak) INProfiles        *Recipient;


@property (nonatomic, strong, nullable) NSString *FileToSendName;
@property (nonatomic, strong, nullable) NSString *FileToSend;

@property (nonatomic, strong, nullable) NSMutableArray<INMessageFiles *> *files;



@property (nonatomic, strong, nullable) NSString *extension;

@end

NS_ASSUME_NONNULL_END

#endif
