//
//  INTour.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INTour_
#define _INTour_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INImageGallery.h"

NS_ASSUME_NONNULL_BEGIN
/**
 Stores data about building tour.
 */
@interface INTour : INBaseObject

@property (nonatomic, strong) NSString *Image;

/**
 Image gallery Id.
 */
@property (nonatomic, strong) NSNumber *GalleryId;


/// Tour title
@property (nonatomic, strong) NSString *Title;

/// Tour description
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/// Tour duration in seconds
@property (nonatomic, strong) NSNumber *Duration;
/**
 Reference to 'INTourPoint' object.
 @see 'INTourPoint'
 */
@property (nonatomic, strong) NSMutableArray *TourPoints;

/**
 Image gallery.
 */
@property (nonatomic, strong) INImageGallery *ImageGallery;

@end

NS_ASSUME_NONNULL_END

#endif
