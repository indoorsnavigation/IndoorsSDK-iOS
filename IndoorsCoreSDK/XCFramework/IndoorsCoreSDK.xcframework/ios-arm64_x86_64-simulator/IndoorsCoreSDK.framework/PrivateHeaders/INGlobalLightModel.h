//
//  INGlobalLightModel.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 04.08.2026.
//

#import "INBaseObject.h"
#import <Foundation/Foundation.h>

@protocol INLocalStorable;

@interface INGlobalLightModel : INBaseObject<INLocalStorable>



@property (nonatomic, strong, nullable) NSString *territoryId;
@property (nonatomic, strong, nullable) NSNumber *posLat;
@property (nonatomic, strong, nullable) NSNumber *posLon;
@property (nonatomic, strong, nullable) NSNumber *posAlt;
@property (nonatomic, strong, nullable) NSNumber *lookLat;
@property (nonatomic, strong, nullable) NSNumber *lookLon;
@property (nonatomic, strong, nullable) NSNumber *lookAlt;
@property (nonatomic, strong, nullable) NSNumber *windowLightWidth;
@property (nonatomic, strong, nullable) NSNumber *windowLightHeight;
@property (nonatomic, strong, nullable) NSNumber *minLight;
@property (nonatomic, strong, nullable) NSNumber *maxLight;
@property (nonatomic, strong, nullable) NSNumber *mapShadowRes;
@property (nonatomic, strong, nullable) NSNumber *shading3DModelIntensity;
@property (nonatomic, strong, nullable) NSNumber *shadowBrightness3DModel;
@property (nonatomic, strong, nullable) NSNumber *shadowBrightnessExtrusionPolygon;
@property (nonatomic, strong, nullable) NSNumber *minBiasShadow;
@property (nonatomic, strong, nullable) NSNumber *maxBiasShadow;
@property (nonatomic, strong, nullable) NSMutableArray *ambientColor;
@property (nonatomic, strong, nullable) NSNumber *isShadowMappingEnabled;
@property (nonatomic, strong, nullable) NSString *drawShadowOnCanvasBuildingId;


+ (INGlobalLightModel *)getDefaultGlobalLightOfTerritoryId:(NSString *)territoryId territoryBuilding:(INBuilding *)territoryBuilding;


@end
