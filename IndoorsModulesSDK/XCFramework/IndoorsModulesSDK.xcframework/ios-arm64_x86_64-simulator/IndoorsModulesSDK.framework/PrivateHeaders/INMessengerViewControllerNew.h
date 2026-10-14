//
//  INMessengerViewControllerNew.h
//  IndoorsSDK
//
//  Created by Timofey on 5/12/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INMessengerViewControllerNew_h
#define INMessengerViewControllerNew_h


#endif /* INMessengerViewControllerNew_h */
//#import "INApplication.h"
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
//#import <IndoorsMapSDK/IndoorsMapSDK.h>

/// Protocol designed for recieving events from MessengerViewController.
@protocol INMessengerViewControllerNewDelegate <NSObject>

@optional

/// Called when messenger top
- (void)backButtonTouched;

@end

NS_ASSUME_NONNULL_BEGIN

/// MessengerViewController refactored version, also this version have ability to display back navigation bar button and delegate to react to this button.
@interface INMessengerViewControllerNew: UIViewController

/// Application, that will be used for accessing messenger data.
@property (strong, nonatomic) INApplication *application;
/// Change this property if you want to display or hide back bar navigation button item.
@property (nonatomic) BOOL shouldAddBackBarButtonItem;

/// Delegate for recieving messenger related events.
@property (weak, nullable, nonatomic) id<INMessengerViewControllerNewDelegate> delegate;

/// Method that use inner hidden API for displaying messenger controllers.
- (void)add:(UIViewController*)viewController;
/// Method that use inner hidden API for displaying messenger controllers.
- (void)remove:(UIViewController*)viewController;

/// Trigger messenger controller to open Contacts View.
- (void)openContacts;
/// Trigger messenger controller to open Conversation View.
- (void)openConversations;

/// Tells delegate that back button touched.
- (void)backTouched;

@end

NS_ASSUME_NONNULL_END
