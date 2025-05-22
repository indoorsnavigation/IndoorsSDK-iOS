//
//  INFBeacon.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFBeacon_
#define _INFBeacon_

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INFBeacon : NSObject

@property (nonatomic, strong) NSNumber  *Id;
@property (nonatomic, strong) NSNumber  *RSSI;
@property (nonatomic, strong) NSNumber  *Power;
@property (nonatomic, strong) NSNumber  *Variance;
@property (nonatomic, strong) NSNumber  *Difference;
@property (nonatomic, strong) NSNumber  *Weight;
@property (nonatomic, strong) NSNumber  *AngleNumber;
@property (nonatomic, strong) NSNumber  *Accuracy;
@property (nonatomic, strong) NSNumber  *TimeStamp;

@end

NS_ASSUME_NONNULL_END

#endif
