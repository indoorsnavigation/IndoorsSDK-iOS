//
//  INApplication.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INApplication_
#define _INApplication_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INBuilding.h"
#import "INImageGallery.h"
#import "INFingerprint.h"
#import "INGlobalMapStyle.h"

@class INBuilding;
@class INImageGallery;

NS_ASSUME_NONNULL_BEGIN

/**
 Strores application data.
 */
@interface INApplication : INBaseObject

/**
 Application name.
 */
@property (nonatomic, strong) NSString *Name;

/**
 Application short description.
 */
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/**
 Application domain.
 */
@property (nonatomic, strong) NSString *Domain;

/**
 Application icon filename.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Application image gallery.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 Application 'oauth2 style' id. The first required parameter is used to authenticate a specific application created on the service.
 */
@property (nonatomic, strong) NSString *ClientId;

/**
 Application Secret. The second required parameter is used to authenticate a particular application created on the service.
 */
@property (nonatomic, strong) NSString *ClientSecret;

/**
 App Store application bundle identifier.
 */
@property (nonatomic, strong) NSString *AppleBundleIdentifier;

/**
 Google Play application bundle identifier.
 */
@property (nonatomic, strong) NSString *GoogleBundleIdentifier;
@property (nonatomic, strong) NSString *RedirectUris;
@property (nonatomic, strong) NSString *ClientType;
@property (nonatomic, strong) NSString *AuthorizationGrantType;

/// A flag that specifies if authorization is skipped.
@property (nonatomic, strong) NSNumber *SkipAuthorization;
/// Corner radius for buttons that placed on a map.
@property (nonatomic, strong) NSNumber *ButtonsCornerRadius;
/// Google Cloud Messaging Api Key
@property (nonatomic, strong) NSString *GCMApiKey;

/// Global Map Style of the application Id.
@property (nonatomic, strong) NSNumber *GlobalMapStyleId;
/// URL for GlobalMapStyleUrl of the applcation.
@property (nonatomic, strong) NSString *GlobalMapStyleUrl;
/// Array of avaliable `INGlobalMapStyle` styles.
@property (nonatomic, strong) NSMutableArray *GlobalMapStyles;
/// `INGlobalMapStyle` of the application .
@property (nonatomic, strong) INGlobalMapStyle *GlobalMapStyle;
/// Object cache timeout in seconds.
@property (nonatomic, strong) NSNumber *ObjectCacheTimeout;
/// Use backend cache.
@property (nonatomic, strong) NSNumber *UseBackendCache;
/**
 Beacons UUID.
 */
@property (nonatomic, strong) NSString *BeaconUUID;

/**
 An array of 'INLocalNotification' objects.
 */
@property (nonatomic, strong) NSMutableArray *LocalNotifications;

/**
 An array of 'INBeaconNotification' objects.
 */
@property (nonatomic, strong) NSMutableArray *BeaconNotifications;

/// Current application building
/// Sets when loadBuildings in `INService`called.
@property (nonatomic, weak)   INBuilding     *CurrentBuilding;
/// Array of `INBuildingType` objects.
@property (nonatomic, strong) NSMutableArray *BuildingTypes;
/// Array of `INBuilding` objects.
@property (nonatomic, strong) NSMutableArray *Buildings;
/// Array of `INBuildingBusinessHours` objects.
@property (nonatomic, strong) NSMutableArray *BuildingsBusinessHours;
/// Array of `INCategory` objects.
@property (nonatomic, strong) NSMutableArray *Categories;
/// Multidimensional Array of `INCategory` objects.
@property (nonatomic, strong) NSMutableArray *CategoryTree;
/// Array of `INCountry` objects.
@property (nonatomic, strong) NSMutableArray *Countries;
/// Array of `INCity` objects.
@property (nonatomic, strong) NSMutableArray *Cities;
/// Array of `INImageGallery` objects.
@property (nonatomic, strong) INImageGallery *ImageGallery;
/// Array of `INAction ` objects.
@property (nonatomic, strong) NSMutableArray *Actions;

/// Array of `INConversation` objects.
@property (nonatomic, strong) NSMutableArray *Conversations;
/// Array of `INConversationMembers` objects.
@property (nonatomic, strong) NSMutableArray *ConversationsMembers;
/// Array of `INContacts` objects.
@property (nonatomic, strong) NSMutableArray *Contacts;
/// Array of `INProfile` objects.
@property (nonatomic, strong) NSMutableArray *Profiles;
/// Array of `INMessage` objects.
@property (nonatomic, strong) NSMutableArray *Messages;

/// Array of `INDrawUserPositionProcedureParams` objects.
@property (nonatomic, strong) NSMutableArray *DrawUserPositionProcedureParams;
/// Array of `INFeedbackType` objects.
@property (nonatomic, strong) NSMutableArray *FeedbackTypes;
/// Array of `INTask` objects.
@property (nonatomic, strong) NSMutableArray *Tasks;
/// Array of `INBeaconPoint` objects.
@property (nonatomic, strong) NSMutableArray *BeaconPoints;
/// Array of `INBeacon` objects.
@property (nonatomic, strong) NSMutableArray *Beacons;
/// `INFingerprint` object.
@property (nonatomic, strong) INFingerprint *Fingerprint;

@end

NS_ASSUME_NONNULL_END

#endif
