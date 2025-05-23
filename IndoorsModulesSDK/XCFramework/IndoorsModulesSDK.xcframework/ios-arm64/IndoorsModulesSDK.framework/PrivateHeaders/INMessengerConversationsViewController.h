//
//  INMessengerConversationsViewController.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMessengerConversationsViewController_
#define _INMessengerConversationsViewController_

#import <UIKit/UIKit.h>
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
//#import <IndoorsMapSDK/IndoorsMapSDK.h>
#import "INMessengerContactsViewController.h"
#import "INContactsAndConversationsBridge.h"
#import "INMessengerCoordinator.h"
NS_ASSUME_NONNULL_BEGIN

@interface INMessengerConversationsViewController : UIViewController<INConversationsInput>
@property BOOL shouldReloadConversations;
@property (nonatomic) BOOL shouldAddBackBarButtonItem;
@property (weak, nonatomic) INMessengerCoordinator *coordinator;
@end

NS_ASSUME_NONNULL_END

#endif
