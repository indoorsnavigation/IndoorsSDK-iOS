////
////  INNearestPointsService.h
////  IndoorsSDK
////
////  Created by Mac on 10.05.2023.
////  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
////
//
#ifndef INNearestPointsService_h
#define INNearestPointsService_h

#import "INMediaPoint.h"

NS_ASSUME_NONNULL_BEGIN

@interface INNearestPointsService : NSObject
- (INMediaPoint *_Nullable)getNearestMediaPointFromPosition:(INPosition2 *)position forTour:(INTour *_Nullable)tour;
- (void)setMediaPoints:(NSMutableArray<INMediaPoint *> *)mediaPoints;
@end

NS_ASSUME_NONNULL_END

#endif /* INNearestPointsService_h */
