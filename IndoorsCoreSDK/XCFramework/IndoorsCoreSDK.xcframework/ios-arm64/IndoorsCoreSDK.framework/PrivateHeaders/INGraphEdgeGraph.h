//
//  INGraphEdgeGraph.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGraphEdgeGraph_
#define _INGraphEdgeGraph_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INGraphEdge.h"
#import "INGraph.h"
#import "INBuilding.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the edge of the route.
 */
@interface INGraphEdgeGraph : INBaseObject

/**
 Associated `INGraph` object Id.
 */
@property (nonatomic, strong) NSNumber *GraphId;

/**
 Associated `INGraphEdge` object Id.
 */
@property (nonatomic, strong) NSNumber *GraphEdgeId;

/**
 Associated `INBuilding` object Id.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Weight of graph edge.
 */
@property (nonatomic, strong) NSNumber *Weight;

/**
 Associated `INGraph` object.
 */
@property (nonatomic, weak) INGraph *Graph;

/**
 Associated `INGraphEdge` object.
 */
@property (nonatomic, weak) INGraphEdge *GraphEdge;

/**
 Associated `INBuilding` object.
 */
@property (nonatomic, weak) INBuilding *Building;

@end

NS_ASSUME_NONNULL_END

#endif
