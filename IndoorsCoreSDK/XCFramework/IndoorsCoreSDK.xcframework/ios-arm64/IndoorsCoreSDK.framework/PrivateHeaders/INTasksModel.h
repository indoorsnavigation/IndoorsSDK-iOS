//
//  INTasksModel.h
//  IndoorsSDK
//
//  Created by Indoors on 23.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INTasksModel_h
#define INTasksModel_h


#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INTaskType.h"
#import "INTaskStatus.h"
#import "INGhostProfile.h"
#import "INTaskUsers.h"
#import "INRoom.h"
#import "INFloor.h"
/**
 Stores data about the BookingModel.
 */
@interface INTasksModel : INBaseObject



@property (nonatomic, strong, nullable) NSString *Title;
@property (nonatomic, strong, nullable) NSString *Description NS_SWIFT_NAME(Description);;


@property (nonatomic, strong, nullable) NSNumber *X;
@property (nonatomic, strong, nullable) NSNumber *Y;

@property (nonatomic, strong, nullable) NSNumber *Editor;

@property (nonatomic, strong, nullable) NSNumber *Conversation;

@property (nonatomic, strong, nullable) NSNumber *Status;

@property (nonatomic, strong, nullable) NSNumber *Type;

@property (nonatomic, strong, nullable) NSNumber *TargetId;
@property (nonatomic, strong, nullable) NSNumber *TargetContentTypeId;


@property (nonatomic, strong, nullable) NSNumber *FloorId;

@property (strong, nonatomic, nullable) NSNumber *StartedTime;
@property (strong, nonatomic, nullable) NSNumber *FinishedTime;

/*
Associated `INBuilding` object Id.
*/
@property (strong, nonatomic, nullable) NSNumber *BuildingId;






@property (nonatomic, strong, nullable) INTaskType *TaskType;
@property (nonatomic, strong, nullable) INTaskStatus *TaskStatus;

// @property (nonatomic, strong) INGhostProfile *EditorProfile;




@property (strong, nonatomic, nullable) INTaskUsers *CreatorTask;
@property (strong, nonatomic, nullable) INGhostProfile *CreatorTaskProfile;


@property (strong, nonatomic, nullable) INTaskUsers *AssigneeTask;
@property (strong, nonatomic, nullable) INGhostProfile *AssigneeTaskProfile;

@property (strong, nonatomic, nullable) INTaskUsers *AdminTask;
@property (strong, nonatomic, nullable) INGhostProfile *AdminTaskProfile;

@property (strong, nonatomic, nullable) NSMutableArray *TaskReviews;

@property (strong, nonatomic, nullable) INRoom *room;
@property (strong, nonatomic, nullable) INFloor *floor;

@end




#endif /* INTasksModel_h */
