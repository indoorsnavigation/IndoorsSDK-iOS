//
//  INPanoramaTourPoint.h
//  IndoorsSDK
//
//  Created by Георгий Глухов on 19.07.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INPanoramaTourPoint_h
#define INPanoramaTourPoint_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INPanoramaTour.h"
#import "INPanoramaPoint.h"

@class INPanoramaPoint;

NS_ASSUME_NONNULL_BEGIN
/**
 Stores data about point of an `INPanoramaTour` object.
 */
@interface INPanoramaTourPoint : INBaseObject

/**
 Identifier of the 'INPanoramaPoint' object.
 @see 'INPanoramaPoint'
 */
@property (nonatomic, strong) NSNumber *PanoramaPointId;

/**
 Identifier of the 'INPanoramaTour' object.
 @see 'INPanoramaTour'
 */
@property (nonatomic, strong) NSNumber *PanoramaTourId;


/// Serial number of tour point.
@property (nonatomic, strong) NSNumber *Number;

/**
 Reference to 'INPanoramaTour' object.
 @see 'INPanoramaTour'
 */
@property (nonatomic, weak) INPanoramaTour *PanoramaTour;

/**
 Reference to 'INPanoramaPoint' object.
 @see 'INPanoramaPoint'
 */
@property (nonatomic, weak) INPanoramaPoint *PanoramaPoint;

@end

NS_ASSUME_NONNULL_END

#endif /* INPanoramaTourPoint_h */
