//
//  BookingModel.h
//  IndoorsSDK
//
//  Created by Indoors on 24.05.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef BookingModel_h
#define BookingModel_h

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <IndoorsMapSDK/IndoorsMapSDK.h>

#import <UIKit/UIKit.h>

#import "BookingStartEndHelper.h"


@interface BookingModel : NSObject<NSCopying>

- (instancetype)init;

@property (nonatomic, strong) INRoom *room;
@property (nonatomic, strong) NSMutableArray *bookingModelArray;
@property (nonatomic, strong) NSMutableArray *bookingStartEnd;
@property (nonatomic, strong) UIImage *Image;
@property (nonatomic) NSInteger isFavourite;

@end

#endif /* BookingModel_h */
