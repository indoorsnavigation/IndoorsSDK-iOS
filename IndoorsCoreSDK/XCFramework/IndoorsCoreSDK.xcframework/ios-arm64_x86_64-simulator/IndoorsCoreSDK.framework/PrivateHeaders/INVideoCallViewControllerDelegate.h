//
//  INVideoCallViewControllerDelegate.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 19.05.2025.
//

#ifndef INVideoCallViewControllerDelegate_h
#define INVideoCallViewControllerDelegate_h


@protocol INVideoCallViewControllerDelegate <NSObject>

@required

//- (void)videoCallViewControllerDidTapHangoutButton:(INVideoCallViewController*)controller;

- (void)videoCallViewControllerDidTapHangoutButton:(id)controller;

@end

#endif /* INVideoCallViewControllerDelegate_h */
