//
//  BookingStartEndHelper.h
//  IndoorsSDK
//
//  Created by Indoors on 24.05.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef BookingStartEndHelper_h
#define BookingStartEndHelper_h

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <IndoorsMapSDK/IndoorsMapSDK.h>

#import <UIKit/UIKit.h>
//#import "INBookingModel.h"


@interface BookingStartEndHelper : NSObject<NSCopying>

@property (nonatomic, strong) NSNumber *start;
@property (nonatomic, strong) NSNumber *end;
@property (nonatomic, strong) NSNumber *countSec;
@property (nonatomic) BOOL isBooking;
@property (nonatomic) INBookingModel* bookingModel;

@end

#endif /* BookingStartEndHelper_h */
