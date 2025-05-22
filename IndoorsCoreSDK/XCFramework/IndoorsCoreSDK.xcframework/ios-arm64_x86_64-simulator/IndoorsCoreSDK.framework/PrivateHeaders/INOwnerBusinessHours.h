//
//  INRoomBuisinessHours.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INOwnerBusinessHours_
#define _INOwnerBusinessHours_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN
/**
 Store data about owner buisness hours.
 */
@interface INOwnerBusinessHours : INBaseObject

/**
 Identifier of the 'INOwner' object.
 @see 'INOwner'
 */
@property (nonatomic, strong) NSNumber *RoomId;

/*
 Note string.
 */
@property (nonatomic, strong) NSString *Note;

/*
 Day number.
 */
@property (nonatomic, strong) NSNumber *Day;

/*
 Open time string.
 */
@property (nonatomic, strong) NSString *OpenTime;

/*
 Close time string.
 */
@property (nonatomic, strong) NSString *CloseTime;

/*
 Boolean flag specifies if building buisness hours is active.
 */
@property (nonatomic, strong) NSNumber *Active;


/*
 Editor.
 */
@property (nonatomic, strong) NSNumber *Editor;
 

/*
 NSString LanguageCode.
 */
@property (nonatomic, strong) NSString *LanguageCode;

@end

NS_ASSUME_NONNULL_END

#endif

