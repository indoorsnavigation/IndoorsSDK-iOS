//
//  BottomTabBarCoordinator.h
//  IndoorsSDK
//
//  Created by Indoors on 24.05.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <IndoorsMapSDK/IndoorsMapSDK.h>

#import <UIKit/UIKit.h>
#import "BookingModel.h"
//#import "INRoom.h"
//#import "INBuilding.h"
//#import "INGlobalMapView.h"
#import "ListOfBuildingsView.h"

NS_ASSUME_NONNULL_BEGIN

@protocol StartBookingCoordinatorDelegate <NSObject>

@required
-(void)logout;

@end

@interface StartBookingCoordinator : NSObject

- (instancetype)initWithBuildings:(NSMutableArray *)buildings withTabBar:(UITabBarController *)tabBar;

- (instancetype)initWithBuildings:(NSMutableArray *)buildings withNavigationController:(UINavigationController *)navigationController;



@property (nonatomic, assign, nullable) id<StartBookingCoordinatorDelegate> delegate;
//@property (weak, nonatomic) INBuilding *building;

- (void)goToChoosingBookingTimeDateView:(INBuilding *)building withTabBar:(UITabBarController *)tabBar ;
- (UIViewController *)getListOfBuildingController;
- (void)logoutFromBooking;

- (void)backToChooseBuilding;

@end

NS_ASSUME_NONNULL_END
