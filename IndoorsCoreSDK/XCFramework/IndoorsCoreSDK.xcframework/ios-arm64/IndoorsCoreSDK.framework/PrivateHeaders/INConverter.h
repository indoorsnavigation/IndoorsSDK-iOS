//
//  INConverter.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INConverter_
#define _INConverter_

#import <Foundation/Foundation.h>
#import "INBuilding.h"
//#import "RTCSessionDescription.h"

NS_ASSUME_NONNULL_BEGIN

/**
 `INConverter`
 */
@interface INConverter : NSObject

/**

 */
+ (INConverter *)sharedInstance;

/**

 */
- (float)getDistanceFromRSSI:(float)rssi A:(float)a andB:(float)b;


- (CLLocationCoordinate2D)convertLocalPointToLocation:(INBuilding*)building
                                       :(CGPoint)point;

- (CGPoint)convertLocationToLocalPoint:(INBuilding*)building
                                      :(CLLocationCoordinate2D)coordinate;

- (NSArray*)getCoordinateBoundsForLocationCoordinate:(CLLocationCoordinate2D)coordinate
                                            forRange:(double)range;



@end

NS_ASSUME_NONNULL_END

#endif
