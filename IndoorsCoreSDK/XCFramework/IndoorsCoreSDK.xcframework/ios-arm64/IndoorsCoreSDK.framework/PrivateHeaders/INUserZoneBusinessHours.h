//
//  INUserZoneBusinessHours.h
//  IndoorsSDK
//
//  Created by Indoors on 17.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUserZoneBusinessHours_h
#define INUserZoneBusinessHours_h

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INUserZoneBusinessHours : INBaseObject


@property (nonatomic, strong, nullable) NSNumber *Day;
@property (nonatomic, strong, nullable) NSString *OpenTime;
@property (nonatomic, strong, nullable) NSString *CloseTime;

@property (nonatomic, strong, nullable) NSNumber *Active;
@property (nonatomic, strong, nullable) NSNumber *Editor;
@property (nonatomic, strong, nullable) NSNumber *UserZone;
@property (nonatomic, strong, nullable) NSString *Note;
@property (nonatomic, strong, nullable) NSString *LanguageCode;


@end


NS_ASSUME_NONNULL_END

#endif /* INUserZoneBusinessHours_h */
