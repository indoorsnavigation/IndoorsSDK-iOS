//
//  MessengerStyle.h
//  IndoorsSDK
//
//  Created by Timofey on 21/10/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef MessengerStyle_h
#define MessengerStyle_h

#import "INMapStyle.h"

@interface INColorScheme : NSObject

@property CGFloat cellCornerRaduis;
@property CGFloat cellSpacing;
@property (strong, nonatomic) UIColor *mainBackground;
@property (strong, nonatomic) UIColor *mainBG;
@property (strong, nonatomic) UIColor *subBG;
@property (strong, nonatomic) UIColor *cell;
@property (strong, nonatomic) UIColor *cellMessagesCountBackground;
@property (strong, nonatomic) UIColor *cellMessagesCountText;
@property (strong, nonatomic) UIColor *cellTitle;
@property (strong, nonatomic) UIColor *cellSubtitle;
@property (strong, nonatomic) UIColor *cellButton;
@property (strong, nonatomic) UIColor *mainAppTint;
@property (strong, nonatomic) INMapStyle *mapStyle;
@property UIEdgeInsets collectionViewInsets;
+(instancetype)sharedInstance;

@property (strong, nonatomic) UIColor *onTheWayButtonColor;


// Booking
@property (strong, nonatomic) UIColor *BookingMainBG;
@property (strong, nonatomic) UIColor *BookingMainCellBG;
@property (strong, nonatomic) UIColor *BookingTextFieldBG;
@property (strong, nonatomic) UIColor *BookingGrayTextColor;
@property (strong, nonatomic) UIColor *BookingBackgroungCountOfRooms;
@property (strong, nonatomic) UIColor *BookingBlackDayWhiteNight;
@property (strong, nonatomic) UIColor *BookingCustomOrangeColor;
@property (strong, nonatomic) UIColor *BookingCustomGreenColor;
@property (strong, nonatomic) UIColor *BookingActiveButton;
@property (strong, nonatomic) UIColor *BookingInactiveButton;
@property (strong, nonatomic) UIColor *BookingBlueButton;
@property (strong, nonatomic) UIColor *BookingBackgroungCalendar;
@property (strong, nonatomic) UIColor *BookingForegroungCalendar;
@property (strong, nonatomic) UIColor *BookingLogoutButton;
@property (strong, nonatomic) UIColor *BookingProfileCells;
@property (strong, nonatomic) UIColor *BookingSubBG;
@property (strong, nonatomic) UIColor *BookingRedCellColor;

@end

#endif /* MessengerStyle_h */
