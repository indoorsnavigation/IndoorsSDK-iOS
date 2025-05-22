//
//  INEmail.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INEmail_
#define _INEmail_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**

 */
@interface INEmail : MTLModel <MTLJSONSerializing, INObjectProtocol>

/**
 
 */
@property (nonatomic, strong) NSNumber          *Id;

/**
 
 */
@property (nonatomic, strong) NSString          *Email;

@end

NS_ASSUME_NONNULL_END

#endif
