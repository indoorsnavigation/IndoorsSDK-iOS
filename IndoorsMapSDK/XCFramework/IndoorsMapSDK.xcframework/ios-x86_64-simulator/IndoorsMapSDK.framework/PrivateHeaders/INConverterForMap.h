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
#import <Mapbox/MGLPolygon.h>

NS_ASSUME_NONNULL_BEGIN

/**
 `INConverter`
 */
@interface INConverterForMap : NSObject

/**

 */
+ (INConverterForMap *)sharedInstance;

/**

 */
//- (float)getDistanceFromRSSI:(float)rssi A:(float)a andB:(float)b;


- (NSMutableArray*)convertLocalPointsToPolygons:(INBuilding*)building
                                               :(NSArray*)points;

- (MGLMultiPolygon*)convertStringToMultiPolygon:(NSString*)string;

//- (CLLocationCoordinate2D)convertLocalPointToLocation:(INBuilding*)building
//                                       :(CGPoint)point;
//
//- (CGPoint)convertLocationToLocalPoint:(INBuilding*)building
//                                      :(CLLocationCoordinate2D)coordinate;
//
//- (NSArray*)getCoordinateBoundsForLocationCoordinate:(CLLocationCoordinate2D)coordinate
//                                            forRange:(double)range;
//
//+ (RTCSessionDescription *)descriptionForDescription:(RTCSessionDescription *)description
//                                 preferredVideoCodec:(NSString *)codec;

@end

NS_ASSUME_NONNULL_END



#endif /* INConverterForMap_h */
