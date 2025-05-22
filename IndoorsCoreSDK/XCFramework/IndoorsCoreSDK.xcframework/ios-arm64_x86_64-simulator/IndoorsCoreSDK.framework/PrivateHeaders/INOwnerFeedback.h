//
//  INOwnerFeedback.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INOwnerFeedback_
#define _INOwnerFeedback_

#import <Foundation/Foundation.h>
#import "INFeedback.h"

NS_ASSUME_NONNULL_BEGIN

/// This class was designed for creating feedback for `INOwner`.
@interface INOwnerFeedback : INFeedback

/**
 Associated `INOwner` Id.
*/
@property (nonatomic, strong) NSNumber *OwnerId;

@end

NS_ASSUME_NONNULL_END

#endif
