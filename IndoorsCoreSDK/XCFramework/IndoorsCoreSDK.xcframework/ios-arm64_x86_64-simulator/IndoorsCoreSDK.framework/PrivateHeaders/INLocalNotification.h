//
//  INLocalNotification.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INLocalNotification_
#define _INLocalNotification_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about local notification.
 */
@interface INLocalNotification : INBaseObject

/**
 The title of the notification.
 */
@property (nonatomic, strong) NSString *Title;

/**
 Notification image.
 */
@property (nonatomic, strong) NSString *Image;

/**
 The message of the notification.
 */
@property (nonatomic, strong) NSString *Message;

/**
 The message of the notification.
 */
@property (nonatomic, strong) NSString *Schedule;

@end

NS_ASSUME_NONNULL_END

#endif
