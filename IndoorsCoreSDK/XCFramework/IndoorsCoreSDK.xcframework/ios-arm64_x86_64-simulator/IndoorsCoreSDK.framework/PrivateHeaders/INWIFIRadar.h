//
//  INWIFIRadar.h
//  IndoorsSDK
//
//  Created by Timofey on 29/12/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INWIFIRadar_h
#define INWIFIRadar_h

#import "INBaseObject.h"

@protocol INLocalStorable;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about wifi radar device.
 */
@interface INWIFIRadar : INBaseObject<INLocalStorable>

/**
 WIFI Radar name.
 */
@property (nonatomic, strong) NSString *Name;

/**
 WIFI Radar token.
 */
@property (nonatomic, strong) NSString *Token;

/**
 WIFI Radar RTT.
 */
@property (nonatomic, strong) NSNumber *RTT;

/**
 WIFI Radar MacAddress.
 */
@property (nonatomic, strong) NSString *MacAddress;

@end


NS_ASSUME_NONNULL_END

#endif /* INWIFIRadar_h */
