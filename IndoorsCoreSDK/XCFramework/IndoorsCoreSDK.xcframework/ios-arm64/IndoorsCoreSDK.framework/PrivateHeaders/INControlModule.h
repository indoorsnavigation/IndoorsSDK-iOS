//
//  INControlModule.h
//  IndoorsSDK
//
//  Created by Mac on 09.01.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INContolModule_h
#define INContolModule_h

#import "INBaseObject.h"

/// Stores data about control module.
@interface INControlModule : INBaseObject

/**
 Control module name.
 */
@property (nonatomic, strong) NSString *Name;

/**
 Control module username.
 */
@property (nonatomic, strong) NSString *Username;


/**
 Control module URL.
 */
@property (nonatomic, strong) NSString *URL;

/**
 Control module building Id.
 */
@property (nonatomic, strong) NSNumber *BuildingId;

/**
 Control module password.
 */
@property (nonatomic, strong) NSString *Password;

/**
 Control module Rele 1 Name.
 */
@property (nonatomic, strong) NSString *Rele1Name;

/**
 Control module Rele 1 boolean value wrapped in NSNumber.
 */
@property (nonatomic, strong) NSNumber *Rele1;

/**
 Control module Rele 2 Name.
 */
@property (nonatomic, strong) NSString *Rele2Name;

/**
 Control module Rele 2 boolean value wrapped in NSNumber.
 */
@property (nonatomic, strong) NSNumber *Rele2;

/**
 Control module Rele 3 Name.
 */
@property (nonatomic, strong) NSString *Rele3Name;

/**
 Control module Rele 3 boolean value wrapped in NSNumber.
 */
@property (nonatomic, strong) NSNumber *Rele3;

/**
 Control module Rele 4 Name.
 */
@property (nonatomic, strong) NSString *Rele4Name;

/**
 Control module Rele 4 boolean value wrapped in NSNumber.
 */
@property (nonatomic, strong) NSNumber *Rele4;

/**
 Control module Out 1 boolean value wrapped in NSNumber.
 */
@property (nonatomic, strong) NSNumber *Out1;

/**
 Control module Out 1 Name.
 */
@property (nonatomic, strong) NSString *OutName1;

/**
Control module Out 2 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out2;

/**
Control module Out 2 Name.
*/
@property (nonatomic, strong) NSString *OutName2;

/**
Control module Out 3 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out3;

/**
Control module Out 3 Name.
*/
@property (nonatomic, strong) NSString *OutName3;

/**
Control module Out 4 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out4;

/**
Control module Out 4 Name.
*/
@property (nonatomic, strong) NSString *OutName4;

/**
Control module Out 5 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out5;

/**
Control module Out 5 Name.
*/
@property (nonatomic, strong) NSString *OutName5;

/**
Control module Out 6 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out6;

/**
Control module Out 6 Name.
*/
@property (nonatomic, strong) NSString *OutName6;

/**
Control module Out 7 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out7;

/**
Control module Out 7 Name.
*/
@property (nonatomic, strong) NSString *OutName7;

/**
Control module Out 8 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out8;

/**
Control module Out 8 Name.
*/
@property (nonatomic, strong) NSString *OutName8;

/**
Control module Out 9 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out9;

/**
Control module Out 9 Name.
*/
@property (nonatomic, strong) NSString *OutName9;

/**
Control module Out 10 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out10;

/**
Control module Out 10 Name.
*/
@property (nonatomic, strong) NSString *OutName10;

/**
Control module Out 11 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out11;

/**
Control module Out 11 Name.
*/
@property (nonatomic, strong) NSString *OutName11;

/**
Control module Out 12 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *Out12;

/**
Control module Out 12 Name.
*/
@property (nonatomic, strong) NSString *OutName12;

@property (nonatomic, strong) NSNumber *IN1;

@property (nonatomic, strong) NSString *INName1;

/**
Control module IN 2 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *IN2;

/**
Control module IN 2 Name.
*/
@property (nonatomic, strong) NSString *INName2;

/**
Control module IN 3 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *IN3;

/**
Control module IN 3 Name.
*/
@property (nonatomic, strong) NSString *INName3;

/**
Control module IN 4 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *IN4;

/**
Control module IN 4 Name.
*/
@property (nonatomic, strong) NSString *INName4;

/**
Control module IN 5 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *IN5;

/**
Control module IN 5 Name.
*/
@property (nonatomic, strong) NSString *INName5;

/**
Control module IN 6 boolean value wrapped in NSNumber.
*/
@property (nonatomic, strong) NSNumber *IN6;

/**
Control module IN 6 Name.
*/
@property (nonatomic, strong) NSString *INName6;


/**
 PWM level.
 
 From 0 to 100.
*/
@property (nonatomic, strong) NSNumber *PWM;

/**
 Control module temperature.
*/
@property (nonatomic, strong) NSNumber *Temperature;

/**
 Control module ADC 0 value.
*/
@property (nonatomic, strong) NSNumber *ADC0;

/**
 Control module ADC 1 value.
*/
@property (nonatomic, strong) NSNumber *ADC1;

/**
 Control module Pulse counter 0 value.
*/
@property (nonatomic, strong) NSNumber *COUNT0;

/**
 Control module Pulse counter 1 value.
*/
@property (nonatomic, strong) NSNumber *COUNT1;

/**
 Control module Pulse counter 2 value.
*/
@property (nonatomic, strong) NSNumber *COUNT2;

/**
 Control module Pulse counter 3 value.
*/
@property (nonatomic, strong) NSNumber *COUNT3;



@end

#endif /* INControlModule_h */
