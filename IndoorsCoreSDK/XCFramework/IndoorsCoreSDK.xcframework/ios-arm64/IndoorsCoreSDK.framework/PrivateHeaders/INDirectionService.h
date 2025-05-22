//
//  INDirectionService.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INDirectionService_
#define _INDirectionService_

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 `INDirectionService` used to calculate the route on Google Map.
 */
@interface INDirectionService : NSObject

/// Calculates the route on Google Map.
///
/// - Parameters:
///   - query: Query parameters.
///   - completionBlock: Completion block.
- (void)fetchPolylineWithQuery:(NSDictionary *)query
            andCompletionBlock:(void (^)(id responseObject, NSError *error))completionBlock;

/// Sends a request to the cloud to calculate the global outdoor route.
///
/// - Parameters:
///   - origin: The origin point.
///   - destination: The destination point.
///   - profile: Type of route to calculate - driving, biking, etc.
///   - completionBlock: Completion block that returns an json routes object, that using for initializing `MBRoute`.
- (void)fetchDirections:(CLLocationCoordinate2D)origin
                       :(CLLocationCoordinate2D)destination
                       :(NSString*)profile
     andCompletionBlock:(void (^)(id responseObject, NSError *error))completionBlock;

@end

NS_ASSUME_NONNULL_END

#endif
