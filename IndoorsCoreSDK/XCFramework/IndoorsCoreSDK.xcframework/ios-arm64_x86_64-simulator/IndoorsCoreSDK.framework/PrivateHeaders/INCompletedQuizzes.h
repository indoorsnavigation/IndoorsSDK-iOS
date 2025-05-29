//
//  INCompletedQuizzes.h
//  IndoorsSDK
//
//  Created by Indoors on 15.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INCompletedQuizzes_h
#define INCompletedQuizzes_h

#import "INBaseObject.h"

@interface INCompletedQuizzes : INBaseObject


@property (nonatomic, strong) NSNumber *Quiz;
@property (nonatomic, strong) NSNumber *Question;
@property (nonatomic, strong) NSNumber *Answer;


@end

#endif



