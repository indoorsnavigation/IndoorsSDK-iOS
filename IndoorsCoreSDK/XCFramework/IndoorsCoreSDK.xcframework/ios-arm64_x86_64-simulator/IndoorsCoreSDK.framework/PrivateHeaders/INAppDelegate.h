//
//  INAppDelegate.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INAppDelegate_
#define _INAppDelegate_

#import <UIKit/UIKit.h>
#import "INSessionDescription.h"
#import "INVideoCallViewControllerDelegate.h"
#import "INService.h"

/// `INAppDelegate` - An app Delegate your app must inherit from.
///
/// It handles work with remote notifications, video calls and background tasks.
///
/// - Warning: - If your AppDelegate not inherit from `INAppDelegate`there may be problems with SDK functionality.
@interface INAppDelegate : UIResponder <UIApplicationDelegate, INVideoCallViewControllerDelegate, INVideoCallServiceDelegate>


/// Starts a video call.
///
/// Method will create and use new window for call.
/// After call ends, method will make previous window visible again.
/// - Parameter sessionDescription: Session description.
/// - Parameter contact: Contact for call.
- (void)startVideoCall:(INSessionDescription*)sessionDescription forContact:(INContact*)contact;

@property (nonatomic, strong) id videoCallViewController;
@property (nonatomic, strong) UIWindow *videoCallWindow;


@end

#endif
