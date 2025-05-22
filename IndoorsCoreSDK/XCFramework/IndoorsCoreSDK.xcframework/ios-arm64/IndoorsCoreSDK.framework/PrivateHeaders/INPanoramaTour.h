//
//  PanoramaTour.h
//  IndoorsSDK
//
//  Created by Георгий Глухов on 19.07.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INPanoramaTour_h
#define INPanoramaTour_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INImageGallery.h"

NS_ASSUME_NONNULL_BEGIN
/**
 Stores data about building tour.
 */
@interface INPanoramaTour : INBaseObject

@property (nonatomic, strong, nullable) NSString *Image;

/**
 Image gallery Id.
 */
@property (nonatomic, strong, nullable) NSNumber *GalleryId;


/// Panorama Tour title
@property (nonatomic, strong) NSString *Title;

/// Panorama Tour description
@property (nonatomic, strong, nullable) NSString *Description NS_SWIFT_NAME(Description);

/// Panorama Tour duration in seconds
@property (nonatomic, strong, nullable) NSNumber *Duration;
/**
 Reference to 'INPanoramaTourPoint' object.
 @see 'INPanoramaTourPoint'
 */
@property (nonatomic, strong, nullable) NSMutableArray *PanoramaTourPoints;

/**
 Image gallery.
 */
@property (nonatomic, strong, nullable) INImageGallery *ImageGallery;

@end

NS_ASSUME_NONNULL_END

#endif /* INPanoramaTour_h */
