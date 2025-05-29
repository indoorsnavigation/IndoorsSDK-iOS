//
//  INTrackingMapInternalView.h
//  IndoorsSDK
//
//  Created by Indoors on 26.12.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#import "INTrackedMapObject.h"

/// This protocol allows you to receive tracked objects from web socket
@protocol INTrackingMapInternalView <NSObject>

/// It's necessary to add an received object from the internal map layer
- (void)addTrackedObject:(nonnull id<INTrackedMapObject>)object andOpacity:(nullable NSNumber *)opacity;

/// It's necessary to update some data of received object from the internal map layer
- (void)updateTrackingPoint:(nonnull id<INTrackedMapObject>)object;

/// It's necessary to remove an object that has not been tracked for 5 seconds from the internal map.
- (void)removeTrackingPointWithUUID:(nonnull NSString *)uuid;

@end
