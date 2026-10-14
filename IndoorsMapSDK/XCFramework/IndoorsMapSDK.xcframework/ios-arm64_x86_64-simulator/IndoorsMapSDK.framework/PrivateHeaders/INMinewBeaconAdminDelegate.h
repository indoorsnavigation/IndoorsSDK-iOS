//
//  INMinewBeaconAdminDelegate.h
//  IndoorsSDK
//
//  Created by Indoors on 03.07.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INMinewBeaconAdminDelegate_h
#define INMinewBeaconAdminDelegate_h


NS_ASSUME_NONNULL_BEGIN

@protocol INMinewBeaconAdminDelegate <NSObject>

@optional

/**
 Called when the user's position is updated.
 */
- (void)mapView:(INBaseMapView*)mapView;


- (void)startScanInMinewBeacon;
- (void)stopScanInMinewBeacon;


@end

NS_ASSUME_NONNULL_END



#endif /* INMinewBeaconAdminDelegate_h */
