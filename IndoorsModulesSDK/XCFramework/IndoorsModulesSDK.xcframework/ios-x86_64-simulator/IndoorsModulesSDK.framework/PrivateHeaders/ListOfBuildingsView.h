//
//  ListOfBuildingsView.h
//  IndoorsSDK
//
//  Created by Indoors on 24.05.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StartBookingCoordinator.h"

#ifndef _ListOfBuildingsView_h
#define _ListOfBuildingsView_h


NS_ASSUME_NONNULL_BEGIN

@class StartBookingCoordinator;


@interface  ListOfBuildingsView : UIViewController
- (instancetype)initWithCoordinator:(StartBookingCoordinator*)coordinator;
- (void)setBuildings:(NSArray *)buildings;
@end

NS_ASSUME_NONNULL_END
#endif /* _ListOfBuildingsView_h */
