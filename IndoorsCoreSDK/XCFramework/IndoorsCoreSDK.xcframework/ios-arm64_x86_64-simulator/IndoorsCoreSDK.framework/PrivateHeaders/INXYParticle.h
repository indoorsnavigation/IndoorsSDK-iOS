//
//  INXYParticle.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

/**
 This is the base class from which particles for the INXYParticleFilter should
 inherit. It represents a 2-dimensional (X-Y) state space.
 */
@interface INXYParticle : NSObject

/**
 The particle's x value in the state space
 */
@property (nonatomic) double x;

/**
 The particle's y value in the state space
 */
@property (nonatomic) double y;

/*
 angle
*/
@property (nonatomic) double angle;

/*
 weight
*/
@property (nonatomic) double weight;


@end
