//
//  INFeedbackType.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFeedbackType_
#define _INFeedbackType_

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about feedback type.
@interface INFeedbackType : INBaseObject

/// Feedback type name.
@property (nonatomic, strong) NSString *Name;

/// Feedback type description.
@property (nonatomic, strong) NSString *Description;

@end

NS_ASSUME_NONNULL_END

#endif
