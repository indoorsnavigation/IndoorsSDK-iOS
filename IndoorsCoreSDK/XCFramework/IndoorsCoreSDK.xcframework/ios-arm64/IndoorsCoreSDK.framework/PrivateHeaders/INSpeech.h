//
//  INSpeech.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INSpeech_
#define _INSpeech_

#import <Foundation/Foundation.h>
#import "INWaypoint.h"

NS_ASSUME_NONNULL_BEGIN
/**
 `INSpeech`
 */
@interface INSpeech : NSObject
/**
 
 */
+ (INSpeech *)sharedInstance;

- (void)enqueueString:(NSString*)speechString;

- (void)enqueueWaypoint:(INWaypoint*)waypoint;
- (void)enqueueWaypointDirection:(INWaypoint*)waypoint;

- (void)finish;

- (void)reroute;

- (void)test:(INFloor*)floor;

@end

NS_ASSUME_NONNULL_END

#endif
