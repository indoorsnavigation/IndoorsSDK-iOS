//
//  INUserWallet.h
//  IndoorsSDK
//
//  Created by Indoors on 19.02.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUserWallet_h
#define INUserWallet_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface INUserWallet : INBaseObject

@property (nonatomic, strong, nullable) NSString *Balance;

@property (nonatomic, strong, nullable) NSString *DefaultRequisite;


@end

NS_ASSUME_NONNULL_END

#endif /* INUserWallet_h */
