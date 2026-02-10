////  INFileObjectService.h
////  IndoorsCoreSDK
////
////  Created by GitHub Copilot on 16.06.2025.
////
//
//#import <Foundation/Foundation.h>
//#import "INCoreConfiguration.h"
//#import "INService.h"
//#import "INMessageFiles.h"
//
//@class INFileObject;
//
//
//typedef void(^INFileObjectServiceCompletion)(NSArray<INFileObject *> * _Nullable fileObjects, NSError * _Nullable error);
//
//@interface INFileObjectService : NSObject
//
//- (instancetype)initWithConfiguration:(INCoreConfiguration*)configuration
//                              service:(INService*)service
//                          authService:(INAuthService*)authService
//                                model:(Class)modelClass
//                             database:(INAppDatabase*)inAppDatabase
//                      andReachability:(INReachability*)reachability;
//
//- (void)fetchFileObjectsFromURL:(NSURL *)url completion:(INFileObjectServiceCompletion)completion;
//
//- (void)fetchFileObjectsWithFilter:(NSMutableDictionary*)filter
//                 usingBackendCache:(BOOL)useBackendCache
//                andCompletionBlock:(void (^)(NSMutableArray *objects, int remoteCount, NSError * error))completionBlock ;
//
//@end
