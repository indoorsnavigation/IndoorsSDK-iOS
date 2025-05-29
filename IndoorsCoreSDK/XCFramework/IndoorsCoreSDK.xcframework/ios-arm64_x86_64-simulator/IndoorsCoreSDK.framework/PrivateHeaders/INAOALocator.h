//
//  INAOALocator.h
//  IndoorsSDK
//
//  Created by Mac on 20.01.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INAOALocator_h
#define INAOALocator_h

#import "INBaseObject.h"
#import "INAOAGateway.h"

/**
 Stores datat about AOA Locator.
 */
@interface INAOALocator : INBaseObject

/**
 Control module name.
 */
@property (nonatomic, strong) NSString *Name;


/**
 Associated `INAOAGateway` object Id.
 */
@property (nonatomic, strong) NSNumber *GatewayId;

/**
 Serial number.
 */
@property (nonatomic, strong) NSNumber *Number;

/**
 Associated `INAOAGateway` object.
 */
@property (nonatomic, strong) INAOAGateway *Gateway;


@end


#endif /* INAOALocator_h */
