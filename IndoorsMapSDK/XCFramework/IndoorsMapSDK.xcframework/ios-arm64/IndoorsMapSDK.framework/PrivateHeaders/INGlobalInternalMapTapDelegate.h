//
//  INGlobalMapTapDelegate.h
//  IndoorsSDK
//
//  Created by Александр Плешаков on 21.02.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

@protocol INGlobalInternalMapTapDelegate <NSObject>

- (void)globalMapWasTappedOnPoint:(CGPoint)point andFloor:(nonnull NSNumber *)floorId;

@end
