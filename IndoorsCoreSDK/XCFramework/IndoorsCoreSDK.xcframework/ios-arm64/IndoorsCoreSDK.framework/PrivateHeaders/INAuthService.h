//
//  INAuthService.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INAuthService_
#define _INAuthService_

#import <Foundation/Foundation.h>
#import "INReachability.h"
#import "INApplication.h"

/**
 `INAuthService` used for authorization, authentication.
 */
@interface INAuthService: NSObject

NS_ASSUME_NONNULL_BEGIN

/// Initializes the service with a given configuration and reachability object.
///
/// - Parameter configuration: The configuration to use.
/// - Parameter reachability: The reachability object to use.
///
/// - Returns: An instance of the service.
- (instancetype)initWithConfiguration:(INCoreConfiguration*)configuration
                      andReachability:(INReachability *) reachability;

/// Authenticates a developer using email and password.
///
/// - Parameter email: The email of the developer account.
/// - Parameter password: The password for the account.
/// - Parameter completionBlock: The completion block to call when authentication is completed.
- (void)authenticateWithEmail:(NSString*)email
                andPassword:(NSString*)password
        withCompletionBlock:(void (^)(NSError *error))completionBlock;

/// Authenticates a developer using email and password for a specific application.
///
/// - Parameter application: The application to use.
/// - Parameter email: The email of the developer account.
/// - Parameter password: The password for the account.
/// - Parameter completionBlock: The completion block to call when authentication is completed.
- (void) authenticateInApplication:(INApplication*)application
                         withEmail:(NSString*)email
                       andPassword:(NSString*)password
               withCompletionBlock:(void (^)(NSError *error))completionBlock;

- (void) authenticateInApplicationWith:(NSString*)application
                         withEmail:(NSString*)email
                       andPassword:(NSString*)password
                   withCompletionBlock:(void (^)(NSError *error))completionBlock;


/// Verifies the validity of the access token. Runs after `authenticateDeveloperWithEmail: andPassword: withCompletionBlock` with each request to the service.
///
/// - Parameter completionBlock: Сompletion block.
- (void)verifyAccessTokenWithCompletionBlock:(void (^)(BOOL success))completionBlock;

/// Authorizes an application for a developer.
///
/// - Parameter clientId: The client ID of the application.
/// - Parameter clientSecret: The secret of the application.
/// - Parameter completionBlock: The completion block to call when authorization is completed.
- (void)authorizeWithClientId:(NSString*)clientId
              andClientSecret:(NSString*)clientSecret
          withCompletionBlock:(void (^)(NSError *error))completionBlock;

/// Registers a new user with email and password.
///
/// - Parameter email: The email of the new user account.
/// - Parameter password: The password for the new account.
/// - Parameter confirmation: The confirmation of the password.
/// - Parameter firstName: The first name of the new user.
/// - Parameter lastName: The last name of the new user.
/// - Parameter completionBlock: Сompletion block.
- (void)registerWithEmail:(NSString*)email
                 password:(NSString*)password
             confirmation:(NSString*)confirmation
                firstName:(NSString*)firstName
                 lastName:(NSString*)lastName
      withCompletionBlock:(void (^)(NSError *error))completionBlock;

/// Links a Facebook account with an Indoor Navigation Platform account in an application.
///
/// - Parameter accessToken: The Facebook access token.
/// - Parameter application: The application to use.
/// - Parameter completionBlock: Сompletion block.
- (void)linkFacebookAccountWithAccessToken:(NSString*)accessToken
                             inApplication:(INApplication*)application
                        andCompletionBlock:(void (^)(NSError *error))completionBlock;


- (void)setNewPassword:(NSString *)newPassword
       confirmPassword:(NSString *)confirmPassword
           oldPassword:(NSString *)oldPassword
    andCompletionBlock:(void (^)(id _Nullable responseObject, NSError  * _Nullable error))completionBlock;
/**
 Closes the session, invalidates the token.
 */
- (void)closeSession;

/// The token obtained after login or application authentication.
///
/// - Returns token
- (NSString*)getAuthorizationToken;

/**
 Returns Trimmed Authorization Token.
 */
- (NSString*)getTrimmedAuthorizationToken;

NS_ASSUME_NONNULL_END

@end
#endif
