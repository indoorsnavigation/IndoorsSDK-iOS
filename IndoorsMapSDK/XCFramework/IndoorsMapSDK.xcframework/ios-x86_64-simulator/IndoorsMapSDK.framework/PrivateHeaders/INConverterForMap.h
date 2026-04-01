//
//  INConverterForMap.h
//  IndoorsMapSDK
//
//  Created by Indoors on 16.05.2025.
//

#ifndef INConverterForMap_h
#define INConverterForMap_h

#import <Foundation/Foundation.h>
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
//#import "RTCSessionDescription.h"
#import <MapLibre/MLNPolygon.h>

NS_ASSUME_NONNULL_BEGIN

/**
 `INConverter`
 */
@interface INConverterForMap : NSObject


+ (INConverterForMap *)sharedInstance;

- (NSMutableArray*)convertLocalPointsToPolygons:(INBuilding*)building
                                               :(NSArray*)points;
- (MLNMultiPolygon*)convertStringToMultiPolygon:(NSString*)string;


@end

NS_ASSUME_NONNULL_END



#endif /* INConverterForMap_h */
