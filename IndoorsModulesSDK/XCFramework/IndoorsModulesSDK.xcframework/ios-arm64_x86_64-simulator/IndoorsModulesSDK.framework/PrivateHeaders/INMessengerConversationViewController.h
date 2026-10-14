//
//  INMessengerConversationViewController.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMessengerConversationViewController_
#define _INMessengerConversationViewController_

#import <UIKit/UIKit.h>
//#import "INConversation.h"

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>

//#import <IndoorsMapSDK/IndoorsMapSDK.h>


#import "JSQMessagesViewController.h"
#import "JSQMessagesCollectionView.h"
#import "JSQMessagesCollectionViewFlowLayout.h"
#import "JSQMessagesInputToolbar.h"


NS_ASSUME_NONNULL_BEGIN

@protocol INMessengerConversationsReloadDelegate <NSObject>

@required
- (void)reloadConversation;

@end

@interface INMessengerConversationViewController : JSQMessagesViewController 

@property (strong, nonatomic) INConversation *conversation;
@property (weak, nullable, nonatomic) id<INMessengerConversationsReloadDelegate> reloadConversationDelegate;

- (void)setBackgroundColor:(UIColor *)color;
- (void)setCollectionViewBackgroundColor:(UIColor *)color;
- (void)setinputToolbarBackgroundColor:(UIColor *)color;
- (void)setinputToolbarContentViewBackgroundColor:(UIColor *)color;
- (void)setinputToolbarContentViewTextViewBackgroundColor:(UIColor *)color;
- (void)setinputToolbarContentViewTextViewLayerBorderColor:(UIColor *)color;



@end


NS_ASSUME_NONNULL_END

#endif
