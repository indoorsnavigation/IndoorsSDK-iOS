////
////  INMap3dModelService.h
////  IndoorsCoreSDK
////
////  Created by Indoors on 19.08.2025.
////
//
//
#ifndef INMap3dModelService_h
#define INMap3dModelService_h

#import <Foundation/Foundation.h>
#import "INCoreConfiguration.h"
#import "INService.h"
#import "INAuthService.h"
#import "INAppDatabase.h"
#import "INReachability.h"
#import "INMap3dModel.h"
#import "INModel3DData.h"

@interface INMap3dModelService : NSObject

@property (nonatomic, strong) INCoreConfiguration *configuration;
@property (nonatomic, strong) INAuthService *authService;
@property (nonatomic, strong) INAppDatabase *database;
@property (nonatomic, strong) INReachability *reachability;
@property (nonatomic, strong) INService *inService;
@property (nonatomic, strong) NSMutableDictionary<NSNumber *, INModel3DData *> *loadedModels3D;

- (instancetype)initWithConfiguration:(INCoreConfiguration *)configuration
                          authService:(INAuthService *)authService
                             database:(INAppDatabase *)database
                         reachability:(INReachability *)reachability;

- (void)fetchWithBuildingId:(NSNumber *)buildingId
                 completion:(void (^)(NSArray<INMap3dModel *> *models))completion;

- (void)downloadAndExtractModelForMobileModel:(INMap3dMobileModel *)mobileModel
                                   completion:(void (^)(INModel3DData * _Nullable modelData))completion;


- (void)fetchWithBuildingIds:(NSArray<NSNumber *> *)buildingIds
                  completion:(void (^)(NSArray<INMap3dModel *> *allModels))completion;

- (void)downloadAndExtractModelsForMobileModels:(NSArray<INMap3dMobileModel *> *)mobileModels
                                     completion:(void (^)(NSDictionary<NSString *, INModel3DData *> * _Nullable modelDataByFileUrl))completion;

- (void)clearAllCachedModelsAndDatabase;

@end

#endif /* INMap3dModelService_h */

