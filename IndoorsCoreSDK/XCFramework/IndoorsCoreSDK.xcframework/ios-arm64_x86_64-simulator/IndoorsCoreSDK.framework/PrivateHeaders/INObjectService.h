//
//  INObjectService.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INObjectService_
#define _INObjectService_

#import <Foundation/Foundation.h>
#import "INCoreConfiguration.h"
#import "INService.h"

@class INAppDatabase;
/**
 `INObjectService` used for operations with objects. Carries their preparation, validation, storage and conversion.
 */
@interface INObjectService : NSObject

NS_ASSUME_NONNULL_BEGIN

/// Initializes the service.
///
/// - Parameter configuration: SDK configuration.
/// - Parameter authService: Authorization / authentication service.
/// - Parameter modelClass: An accepted model class.
/// - Parameter database: Database.
/// - Parameter reachability: Reachability.
- (instancetype)initWithConfiguration:(INCoreConfiguration*)configuration
                              service:(INService*)service
                          authService:(INAuthService*)authService
                                model:(Class)modelClass
                             database:(INAppDatabase*)inAppDatabase
                      andReachability:(INReachability*)reachability;

/// Downloads and stores objects.
///
/// - Parameter filter: Dictionary with filters.
/// - Parameter completionBlock: Completion block.
- (void)fetchObjectsWithFilter:(nullable NSMutableDictionary*)filter
             usingBackendCache:(BOOL)useBackendCache
            andCompletionBlock:(void (^)(NSMutableArray *dbObjects, int remoteCount, int localCount, NSError * error))completionBlock;

/// Downloads and stores objects with force.
///
/// - Parameter filter: Dictionary with filters.
/// - Parameter forced: Force flag.
/// - Parameter completionBlock: Completion block.
- (void)fetchObjectsWithFilter:(nullable NSMutableDictionary*)filter
               usingLocalCache:(BOOL)useLocalCache
             usingBackendCache:(BOOL)useBackendCache
                   verifyToken:(BOOL)verifyToken
            andCompletionBlock:(void (^)(NSMutableArray *dbObjects, int remoteCount, int localCount, NSError * error))completionBlock;

/// Loads objects.
///
/// - Parameter filter: Dictionary with filters.
/// - Parameter completionBlock: Completion block.
- (void)getObjectsWithFilter:(NSMutableDictionary*)filter
           usingBackendCache:(BOOL)useBackendCache
                 verifyToken:(BOOL)verifyToken
          andCompletionBlock:(void (^)(NSMutableArray *objects, int remoteCount, NSError * error))completionBlock;

/// Creates an object on the service.
///
/// - Parameter object: The object that we store.
/// - Parameter completionBlock: Completion block.
- (void)postObject:(id)object withCompletionBlock:(void (^)(id object, NSError * error))completionBlock;

/// Creates objects on the service.
///
/// - Parameter objects: The objects that we store.
/// - Parameter progressBlock: Progress block.
/// - Parameter completionBlock: Completion block.
- (void)postObjects:(NSMutableArray *)objects
  withProgressBlock:(nullable void (^)(float))progressBlock
 andCompletionBlock:(void (^)(NSMutableArray *objects, NSError * error))completionBlock;

/// Updates object on the service.
///
/// - Parameter object: Object.
/// - Parameter completionBlock: Completion block.
- (void)putObject:(id)object withCompletionBlock:(void (^)(id object, NSError * error))completionBlock;

/// Cancels all requests.
- (void)cancelAllRequests;

/// Deletes update time.
- (void)deleteUpdateTime;

/// Loads objects from the local database.
///
/// - Parameter filter: Dictionary with filters.
/// - Parameter completionBlock: Completion block.
- (void)loadObjectsFromDatabaseWithFilter:(nullable NSDictionary*)filter
                       andCompletionBlock:(void (^)(NSMutableArray *dbObjects, int count, NSError * error))completionBlock;

/// Saves the object in the local database.
///
/// - Parameter object: Object to be saved.
/// - Parameter filter: Dictionary with filters.
/// - Parameter completionBlock: Completion block.
- (void)saveObjectToDatabase:(id)object
                  withFilter:(nullable NSDictionary*)filter
          andCompletionBlock:(void (^)(int64_t index, NSError * error))completionBlock;

/// Saves objects in the local database.
///
/// - Parameter objects: An array of objects to be saved.
/// - Parameter filter: Dictionary with filters.
/// - Parameter completionBlock: Completion block.
- (void)saveObjectsToDatabase:(NSMutableArray*)objects
                   withFilter:(nullable NSDictionary*)filter
           andCompletionBlock:(void (^)(NSError * error))completionBlock;

/// Removes objects from the local database.
///
/// - Parameter filter: Dictionary with filters.
/// - Parameter completionBlock: A block to be executed after removing the objects, with error as parameter.
- (void)deleteObjectsFromDatabaseWithFilter:(nullable NSMutableDictionary*)filter
                         andCompletionBlock:(nullable void (^)(NSError * error))completionBlock;

/// Deletes an object from the local database.
///
/// - Parameter object: Object to be deleted.
/// - Parameter completionBlock: Completion block.
- (void)deleteObject:(id)object withCompletionBlock:(void (^)(NSError *error))completionBlock;



- (void)setNewPassword:(INCreateNewPassword *)newPasswordModel
    andCompletionBlock:(void (^)(INProfile * _Nullable responseObject, NSError  * _Nullable error))completionBlock;

NS_ASSUME_NONNULL_END

@end

#endif
