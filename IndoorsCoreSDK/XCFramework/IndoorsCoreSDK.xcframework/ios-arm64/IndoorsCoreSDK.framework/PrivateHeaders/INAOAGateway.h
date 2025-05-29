//
//  INAOAGateway.h
//  IndoorsSDK
//
//  Created by Mac on 20.01.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INAOAGateway_h
#define INAOAGateway_h

#import "INBaseObject.h"

/**
 Stores datat about AOA Gateway.
 */
@interface INAOAGateway : INBaseObject

/**
 AOA Gateway name.
 */
@property (strong, nonatomic) NSString *Name;

/**
 AOA Gateway mac address.
 */
@property (strong, nonatomic) NSString *MacAddress;

/**
 AOA Gateway UUID.
 */
@property (strong, nonatomic) NSString *UUID;

@end


#endif /* INAOAGateway_h */
