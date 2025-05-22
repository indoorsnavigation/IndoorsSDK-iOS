//
//  INEvent.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INEvent_
#define _INEvent_

#import "INBaseObject.h"
#import "INImageGallery.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about default event.
@interface INEvent : INBaseObject

/// Event title.
@property (nonatomic, strong) NSString *Title;

/// Event Description.
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/// Event Image URL string.
@property (nonatomic, strong) NSString *Image;

/**
 Image gallery id.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 Boolean flag specifies if event is active.
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Image gallery.
 */
@property (nonatomic, strong) INImageGallery *ImageGallery;

@end

NS_ASSUME_NONNULL_END

#endif
