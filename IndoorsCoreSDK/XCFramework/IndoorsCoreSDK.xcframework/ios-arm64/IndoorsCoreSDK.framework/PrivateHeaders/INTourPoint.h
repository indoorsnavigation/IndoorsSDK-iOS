//
//  INTourPoint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INTourPoint_
#define _INTourPoint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INTour.h"
#import "INMediaPoint.h"

@class INMediaPoint;

NS_ASSUME_NONNULL_BEGIN
/**
 Stores data about point of an `INTour` object.
 */
@interface INTourPoint : INBaseObject

/**
 Identifier of the 'INMediaPoint' object.
 @see 'INMediaPoint'
 */
@property (nonatomic, strong) NSNumber *MediaPointId;

/**
 Identifier of the 'INTour' object.
 @see 'INTour'
 */
@property (nonatomic, strong) NSNumber *TourId;


/// Serial number of tour point.
@property (nonatomic, strong) NSNumber *Number;

/**
 Reference to 'INTour' object.
 @see 'INTour'
 */
@property (nonatomic, weak) INTour *Tour;

/**
 Reference to 'INMediaPoint' object.
 @see 'INMediaPoint'
 */
@property (nonatomic, weak) INMediaPoint *MediaPoint;

@end

NS_ASSUME_NONNULL_END

#endif
