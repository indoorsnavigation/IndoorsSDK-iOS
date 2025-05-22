//
//  INPathfinder.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INPathfinder_
#define _INPathfinder_

#import <Foundation/Foundation.h>
#import "INBuilding.h"
#import "INGraph.h"
#import "INPosition2.h"

NS_ASSUME_NONNULL_BEGIN

/**
 'INPathfinder' perfroms calculation of routes on the map.
 */
@interface INPathfinder : NSObject

/// An array of `INGraphPoint` objects that represent the current path.
@property (nonatomic, strong, nullable) NSMutableArray *currentPath;
/// An array of `INWaypoint` objects that represent the current path.
@property (nonatomic, strong, nullable) NSMutableArray *currentRoutes;


/// Initializes a new instance of the INPathfinder class with a building.
///
/// - Parameter building: The building.
///
/// - Returns: The new instance of the INPathfinder class.
- (nonnull instancetype)initWithBuilding:(INBuilding*)building;

/// Sets the graph with graph points and graph edges.
///
/// - Parameter graph: The graph.
/// - Parameter graphPoints: An array of `INGraphPoint` objects.
- (void)setGraph:(INGraph*)graph withGraphPoints:(NSMutableArray*)graphPoints useRemoteCalculation:(BOOL)useRemoteCalculation enableRouting:(BOOL)enableRouting;

/// Calculates the shortest path from the start point to the end point.
///
/// - Parameter startPoint: The start point.
/// - Parameter endPoint: The end point.
///
/// - Returns: An array of INGraphPoint objects that represent the shortest path.
- (NSMutableArray*)calculateShortestPathWithStartPoint:(INGraphPoint*)startPoint
                                            toEndPoint:(INGraphPoint*)endPoint;

/// Sorts the routable objects from the graph point.
///
/// - Parameter graphPoint: The graph point.
/// - Parameter completionBlock: The completion block.
- (void)sortRoutableObjectsFromPoint:(INGraphPoint*)graphPoint
                 withCompletionBlock:(void (^)(NSMutableArray* rooms))completionBlock;

/// Returns array of INWaypoint objects for INRouteSignView.
///
/// - Parameter graphPoints: An array of `INGraphPoint` objects.
///
/// - Returns: An array of `INWaypoint` objects.
- (NSMutableArray*)getWaypoints:(NSMutableArray*)graphPoints;

/// Gets the snap point from the raw point.
///
/// - Parameter rawPoint: The raw point.
///
/// - Returns: The snap point.
- (INGraphPoint*)getSnapPointFromRawPoint:(INGraphPoint*)rawPoint;


- (INGraphPoint*)getSnapPointFromRawPointNew:(INGraphPoint*)rawPoint;

/// Snaps the raw position to a graph edge.
///
/// - Parameter rawPosition: The raw position.
///
/// - Returns: The graph edge.
- (INGraphEdge*)snapPosition:(INPosition2*)rawPosition;

/**
 Calculates the total distance of the current path.
 
 - Returns: The total distance as an NSNumber.
 */
- (NSNumber *)calculateTotalPathDistance;

/// Cleans up the data.
- (void)cleanup;

@end

NS_ASSUME_NONNULL_END

#endif
