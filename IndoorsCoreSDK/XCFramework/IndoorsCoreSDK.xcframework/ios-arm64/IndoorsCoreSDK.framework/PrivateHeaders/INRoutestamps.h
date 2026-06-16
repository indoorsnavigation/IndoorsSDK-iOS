//
//  INRoutestamps.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 13.04.2026.
//

#ifndef INRoutestamps_h
#define INRoutestamps_h

#import "INBaseObject.h"
#import <Foundation/Foundation.h>

@protocol INLocalStorable;

@interface INRoutestamps : INBaseObject<INLocalStorable>


@property (nonatomic, strong, nullable) NSNumber *Application;
@property (nonatomic, strong, nullable) NSNumber *Building;
@property (nonatomic, strong, nullable) NSNumber *StartPointId;
@property (nonatomic, strong, nullable) NSNumber *EndPointId;
@property (nonatomic, strong, nullable) NSNumber *StartPointContentTypeId;
@property (nonatomic, strong, nullable) NSNumber *EndPointContentTypeId;
@property (nonatomic, strong, nullable) NSString *OsType;
@property (nonatomic, strong, nullable) NSString *Source;


@end

#endif /* INRoutestamps_h */
