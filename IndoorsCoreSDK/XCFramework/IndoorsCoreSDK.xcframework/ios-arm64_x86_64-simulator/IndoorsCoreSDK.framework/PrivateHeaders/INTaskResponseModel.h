//
//  INTaskResponseModel.h
//  IndoorsSDK
//
//  Created by Indoors on 12.02.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INTaskResponseModel_h
#define INTaskResponseModel_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface INTaskResponseModel : INBaseObject


@property (nonatomic, strong, nullable) NSString *Datetime;

@property (nonatomic, strong, nullable) NSNumber *Timestamp;

@property (nonatomic, strong, nullable) NSNumber *TaskId;

@property (nonatomic, strong, nullable) NSNumber *Status;


@end

NS_ASSUME_NONNULL_END


#endif /* INTaskResponseModel_h */
