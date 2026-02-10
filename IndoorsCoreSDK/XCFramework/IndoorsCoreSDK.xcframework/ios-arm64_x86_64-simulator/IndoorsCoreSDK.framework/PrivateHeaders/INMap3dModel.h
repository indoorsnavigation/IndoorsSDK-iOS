//
//  InMap3dModel.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 19.08.2025.
//

#ifndef InMap3dModel_h
#define InMap3dModel_h



#import "INBaseObject.h"
#import <Foundation/Foundation.h>
#import "INMap3dMobileModel.h"
#import "INModel3DData.h"


@interface INMap3dModel : INBaseObject

@property (nonatomic, strong, nullable) NSNumber *X;
@property (nonatomic, strong, nullable) NSNumber *Y;
@property (nonatomic, strong, nullable) NSNumber *Base;
@property (nonatomic, strong, nullable) NSNumber *Roll;
@property (nonatomic, strong, nullable) NSNumber *Pitch;
@property (nonatomic, strong, nullable) NSNumber *Yaw;
@property (nonatomic, strong, nullable) NSNumber *Scale;
@property (nonatomic, strong, nullable) NSNumber *Editor;
@property (nonatomic, strong, nullable) NSNumber *Building;
@property (nonatomic, strong, nullable) NSNumber *Floor;

@property (nonatomic, strong, nullable) INMap3dMobileModel *BuildingModel3d;
@property (nonatomic, strong, nullable) INModel3DData *model3DData; // Новое свойство для данных 3D-модели


+ (instancetype)fromDictionary:(NSDictionary *)dict;

@end

#endif /* InMap3dModel_h */
