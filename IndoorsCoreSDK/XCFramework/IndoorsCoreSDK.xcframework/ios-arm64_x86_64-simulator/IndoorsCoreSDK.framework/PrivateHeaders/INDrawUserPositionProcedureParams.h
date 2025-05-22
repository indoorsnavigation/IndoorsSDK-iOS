//
//  INDrawUserPositionProcedureParams.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INDrawUserPositionProcedureParams_
#define _INDrawUserPositionProcedureParams_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INProfile.h"
#import "INProcedure.h"

NS_ASSUME_NONNULL_BEGIN

@class INProcedure;

/**

 */
@interface INDrawUserPositionProcedureParams : MTLModel <MTLJSONSerializing, INObjectProtocol>

/**

 */
@property (nonatomic, strong) NSString          *ClientId;

/**
 
 */
@property (nonatomic, strong) NSString          *ClientSecret;

/**
 
 */
@property (nonatomic, strong) NSNumber          *BuildingId;

/**
 
 */
@property (nonatomic, strong) NSNumber          *FloorId;

/**
 
 */
@property (nonatomic, strong) NSNumber          *X;

/**
 
 */
@property (nonatomic, strong) NSNumber          *Y;

/**
 
 */
@property (nonatomic, strong) NSString          *Params;

@property (nonatomic, strong) INProfile         *Profile;

@property (nonatomic, strong) INProcedure       *Procedure;

- (instancetype)initWithUserGraphPoint:(INGraphPoint*)graphPoint
                            andProfile:(INProfile*)profile;

-(void)generateProfile;

@end

NS_ASSUME_NONNULL_END

#endif
