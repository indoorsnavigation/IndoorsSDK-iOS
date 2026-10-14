//
//  INPermissionController.h
//  IndoorsSDK
//
//  Created by Timofey on 8/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INPermissionController_h
#define INPermissionController_h


#endif /* PermissionController_h */


typedef enum {
    INPermissionStatusGranted,
    INPermissionStatusDenied,
    INPermissionStatusUndetermined
} INPermissionStatus;


@protocol INPermissionController <NSObject>
@property (nonatomic, readonly) INPermissionStatus status;
- (void)requestPermission:(void (^)(INPermissionStatus status))completion;
@end


