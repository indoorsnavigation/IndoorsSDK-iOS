//
//  INRawMeasurementProcessor.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRawMeasurementProcessor_
#define _INRawMeasurementProcessor_

#import <Foundation/Foundation.h>
#import "INRawMeasurement.h"
#import "INBuilding.h"

NS_ASSUME_NONNULL_BEGIN

/**
 */
@interface INRawMeasurementProcessor : NSObject

+ (INRawMeasurementProcessor *)sharedInstance;

-(void)startInBuilding:(INBuilding*)building;
-(void)setCurrentPosition:(INPosition2*)position;
-(void)stop;
-(void)save;

@end

NS_ASSUME_NONNULL_END

#endif
