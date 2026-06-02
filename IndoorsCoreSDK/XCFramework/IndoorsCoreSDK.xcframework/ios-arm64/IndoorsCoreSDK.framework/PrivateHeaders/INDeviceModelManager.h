//
//  INDeviceModelManager.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INDeviceModelManager : NSObject

+ (NSString*)deviceName;
+ (NSString*) deviceCode;

@end

NS_ASSUME_NONNULL_END
