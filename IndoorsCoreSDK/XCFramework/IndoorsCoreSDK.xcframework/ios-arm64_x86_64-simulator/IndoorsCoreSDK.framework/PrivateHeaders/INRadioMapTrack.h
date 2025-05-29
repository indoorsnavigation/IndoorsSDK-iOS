//
//  INRadioMapTrack.h
//  IndoorsSDK
//
//  Created by Mac on 07.07.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INRadioMapTrack_h
#define INRadioMapTrack_h

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about radio maps.
 */
@interface INRadioMapTrack : INBaseObject

/**
 The floor ID.
 */
@property (nonatomic, strong) NSNumber *FloorId;

/**
 The radiomap ID associated with the radio map.
 */
@property (nonatomic, strong) NSNumber *Radiomap;

/**
 The UUID for the radio map track.
 */
@property (nonatomic, strong) NSString *UUID;

/**
 The file associated with the radio map.
 */
@property (nonatomic, strong, nullable) NSString *File;

/**
 The path coordinates of the radio map.
 */
@property (nonatomic, strong) NSString *Path;

@end

NS_ASSUME_NONNULL_END

#endif /* INRadioMapTrack */
