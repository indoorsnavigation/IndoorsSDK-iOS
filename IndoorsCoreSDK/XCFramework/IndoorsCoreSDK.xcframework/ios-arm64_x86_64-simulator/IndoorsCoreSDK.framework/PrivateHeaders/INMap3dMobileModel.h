//
//  INMap3dMobileModel.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 19.08.2025.
//

#ifndef INMap3dMobileModel_h
#define INMap3dMobileModel_h


#import "INBaseObject.h"
#import <Foundation/Foundation.h>
@protocol INLocalStorable;

@interface INMap3dMobileModel : INBaseObject <INLocalStorable>


@property (nonatomic, strong, nullable) NSString *Title;
@property (nonatomic, strong, nullable) NSString *File;
@property (nonatomic, strong, nullable) NSString *DeviceType;
@property (nonatomic, strong, nullable) NSNumber *Editor;

@end

#endif /* INMap3dMobileModel_h */
