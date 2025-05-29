//
//  INFeedback.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFeedback_
#define _INFeedback_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INFeedback : INBaseObject

/**
 Associated `INProfile` Id.
*/
@property (nonatomic, strong) NSNumber *UserId;

/**
 Associated `INFeedbackType` Id.
*/
@property (nonatomic, strong) NSNumber *FeedbackTypeId;

/**
 Feedback message.
*/
@property (nonatomic, strong) NSString *Message;

/**
 Rating.
*/
@property (nonatomic, strong) NSNumber *Rating;

@end

NS_ASSUME_NONNULL_END

#endif
