//
//  INFireSafetyImagePoints.h
//  IndoorsSDK
//
//  Created by Indoors on 15.07.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INFireSafetyImagePoints_h
#define INFireSafetyImagePoints_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFireSafetyImages.h"

NS_ASSUME_NONNULL_BEGIN

@interface INFireSafetyImagePoints: INBaseObject<INRoutableProtocol, INCategoryProtocol>

@property (nonatomic, strong) NSNumber *X;

@property (nonatomic, strong) NSNumber *Y;

@property (nonatomic, strong) NSNumber *Rotation;

@property (nonatomic, strong) NSNumber *Editor;

@property (nonatomic, strong) NSNumber *CurrentFloorId;

@property (nonatomic, strong) NSNumber *Building;

@property (nonatomic, strong) NSNumber *INFireSafetyImageId;

@property (nonatomic, strong) INFireSafetyImages *FireSafetyImage;

/**
  Associated `INFloor` object.
  */
 @property (nonatomic, weak) INFloor    *Floor;

 /**
  Reference to 'INCategory' object.
  @see 'INCategory'
  */
 @property (strong, nonatomic) INCategory *Category;

@end

NS_ASSUME_NONNULL_END

#endif /* INFireSafetyImagePoints_h */

