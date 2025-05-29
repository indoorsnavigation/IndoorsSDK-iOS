//
//  INBookingModel.h
//  IndoorsSDK
//
//  Created by Indoors on 27.02.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INBookingModel_h
#define INBookingModel_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

/**
 Stores data about the BookingModel.
 */
@interface INBookingModel : INBaseObject


@property (nonatomic, strong) NSString *UUID;

@property (nonatomic, strong) NSNumber *Status;



@property (nonatomic, strong) NSNumber *End;

@property (nonatomic, strong) NSNumber *Creator;

@property (nonatomic, strong) NSNumber *Start;


@property (nonatomic, strong) NSString *Reason;

@property (nonatomic, strong) NSNumber *Room;

@property (nonatomic, strong) NSNumber *Editor;


/*
Associated `INBuilding` object Id.
*/
@property (strong, nonatomic) NSNumber *BuildingId;


@end

#endif
