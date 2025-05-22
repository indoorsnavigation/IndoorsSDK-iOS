//
//  INRawMapTrackMeasurementProcessor.h
//  IndoorsSDK
//
//  Created by Mac on 13.07.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INRawMapTrackMeasurementProcessor_h
#define INRawMapTrackMeasurementProcessor_h

#import <Foundation/Foundation.h>
#import "INRawMeasurement.h"
#import "INRadioMapTrack.h"
#import "INBuilding.h"

NS_ASSUME_NONNULL_BEGIN

/**
 */
@interface INRawMapTrackMeasurementProcessor : NSObject

+ (INRawMapTrackMeasurementProcessor *)sharedInstance;

-(void)startInBuilding:(INBuilding*)building withTrack:(INRadioMapTrack *)track;
-(void)setCurrentPosition:(INPosition2*)position;
-(void)stop;
-(void)save;

@end

NS_ASSUME_NONNULL_END

#endif /* INRawMapTrackMeasurementProcessor_h */
