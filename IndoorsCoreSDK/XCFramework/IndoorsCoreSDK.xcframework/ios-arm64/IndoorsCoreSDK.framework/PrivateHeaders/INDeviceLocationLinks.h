//
//  INDeviceLocationLinks.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 17.04.2026.
//

#ifndef INDeviceLocationLinks_h
#define INDeviceLocationLinks_h

#import "INBaseObject.h"
#import <Foundation/Foundation.h>

@interface INDeviceLocationLinks : INBaseObject


@property (nonatomic, strong, nullable) NSNumber *Application;
@property (nonatomic, strong, nullable) NSString *UserUUID;
@property (nonatomic, strong, nullable) NSString *DeviceUUID;
@property (nonatomic, strong, nullable) NSString *LinkUUID;

@end

#endif /* INDeviceLocationLinks_h */
