//
//  INCore.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INCore_
#define _INCore_

#import <Foundation/Foundation.h>
#import "INService.h"
#import "INNotifier.h"
#import "INNavigation.h"
#import "INCoreConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

/// `INCore` - main class.
///  Singleton for getting access for `INService`, `INService` and `INNavigation`.
@interface INCore : NSObject

/// Initialize `INCore` singleton with configuration.
/// - Parameter configuration: Core Configiration.
+ (void)initializeWithConfiguration:(INCoreConfiguration*)configuration;

/// set new Service Url and Map Url
/// - Parameter configuration: Core Configiration.
+ (void)setNewServiceUrlAndMapUrlWithNewConfiguration:(INCoreConfiguration*)configuration;

/// Singleton access
/// Must initialize before usage.
+ (INCore *)sharedInstance;

/**
 Reference to `INService` object.
 @see `INService`
 */
@property (strong, nonatomic, readonly) INService *service;

/**
 Reference to `INNavigation` object.
 @see `INNavigation`
 */
@property (strong, nonatomic, readonly) INNavigation *navigation;

/**
 Reference to `INNotifier` object.
 @see `INNotifier`
 */
@property (strong, nonatomic, readonly) INNotifier *notifier;

@end

NS_ASSUME_NONNULL_END

#endif
