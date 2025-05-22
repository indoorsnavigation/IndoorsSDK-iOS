//
//  INCoreConfiguration.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INCoreConfiguration_
#define _INCoreConfiguration_

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// `INCoreConfiguration` - Object for configuring and initalazing INCore.
@interface INCoreConfiguration : NSObject

/**
 Main Server URL.
 */
@property (nonatomic, readonly, nonnull) NSString *server;

/**
 Count of attempts to retry Network Connection.
 */
@property (nonatomic, assign, readonly) NSUInteger networkRetryAttempts;

/// API URL
@property (nonatomic, readonly, nonnull) NSString *apiUrl;
/// Map style URL
@property (nonatomic, readonly, nonnull) NSString *mapStyleURL;
/// Web Socket URL
@property (nonatomic, readonly, nonnull) NSString *webSocketUrl;
/// Media URL
@property (nonatomic, readonly, nonnull) NSString *mediaUrl;
/// 3D Models URL
@property (nonatomic, readonly, nonnull) NSString *modelsUrl;
/// Assets URL
@property (nonatomic, readonly, nonnull) NSString *arassetsUrl;
/// AR Assets URL
@property (nonatomic, readonly, nonnull) NSString *arAssetImagesUrl;
/// Target images URL
@property (nonatomic, readonly, nonnull) NSString *targetImagesUrl;
/// Global Map Style URL
@property (nonatomic, readonly, nonnull) NSString *globalMapStylesUrl;
/// Mobile banner URL
@property (nonatomic, readonly, nonnull) NSString *mobileBannerAssetsUrl;
/// Measurements URL
@property (nonatomic, readonly, nonnull) NSString *measurementsFileUrl;
/// Raw Measurements URL
@property (nonatomic, readonly, nonnull) NSString *rawMeasurementsFileUrl;
/// Database name
@property (nonatomic, readonly, nonnull) NSString *databaseName;
/// Is encrypted
@property (atomic, assign) BOOL isEncrypted;

/**
 Default configuration.
 */
+ (nonnull INCoreConfiguration *)defaultConfiguration;

/**
 Default configuration.
 */
+ (nonnull INCoreConfiguration *)customConfiguration;

/**
	Custom initializer, if default configuration is not enough.
 */
- (nonnull instancetype)initWithServer:(NSString *)server
                           mapStyleUrl:(NSString *)mapStyleUrl
                  networkRetryAttempts:(NSUInteger)networkRetryAttempts
                          databaseName:(NSString *)databaseName
                             encrypted:(BOOL)isEncrypted;



@end

NS_ASSUME_NONNULL_END

#endif
