//
//  INGraph.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGraph_
#define _INGraph_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INBuilding.h"

NS_ASSUME_NONNULL_BEGIN

@class INBuilding;

/**
 Stores data about graph route.
 */
@interface INGraph : INBaseObject

/**
 Name of the graph
 */
@property (nonatomic, strong) NSString *Name;

/**
 Description of the graph
 */
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/**
 Graph Image URL.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Graph hex string.
 */
@property (nonatomic, strong) NSString *Color;

/**
 Graph Building id.
 @see 'INBuilding'
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Serial order of graph.
 */
@property (nonatomic, strong) NSNumber *NumericalOrder;

/**
 Boolean flag specifies if voice assistand is enabled for this graph.
 */
@property (nonatomic, strong) NSNumber *VoiceAssistantEnabled;

/**
 Boolean flag specifies if Use weights enabled.
 */
@property (nonatomic, strong) NSNumber *UseWeights;

/**
 Graph `INBuilding` object.
 */
@property (nonatomic, weak) INBuilding *Building;

/**
 An array of the `INGraphEdge` objects.
 */
@property (nonatomic, strong, nullable) NSMutableArray *GraphEdges;

/**
 An array of the `INGraphEdgeGraph` objects.
 */
@property (nonatomic, strong, nullable) NSMutableArray *GraphEdgeGraphs;

/**
 An array of the `INGraphPoint` objects.
 */
@property (nonatomic, strong, nullable) NSMutableArray *GraphPoints;

/**
 */
@property (nonatomic, strong, nullable) NSArray *AdjacencyMatrix;

/**
 Graph image.
 */
@property (nonatomic, strong) UIImage *GraphImage;

/**
 Graph type: 0 regular, 1 fire.
 */
@property (nonatomic, strong) NSNumber *GraphType;

/// Is graph valid method.
- (BOOL)isValid;

@end

NS_ASSUME_NONNULL_END

#endif
