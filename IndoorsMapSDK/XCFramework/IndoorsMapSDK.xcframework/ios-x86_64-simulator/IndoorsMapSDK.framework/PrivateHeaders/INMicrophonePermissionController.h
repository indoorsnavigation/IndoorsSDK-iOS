//
//  INMicrophonePermissionController.h
//  IndoorsSDK
//
//  Created by Timofey on 7/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INMicrophonePermissionController_h
#define INMicrophonePermissionController_h

#import "INPermissionController.h"

@interface INMicrophonePermissionController: NSObject<INPermissionController>
+ (instancetype)sharedInstance;
@end

#endif /* INMicrophonePermissionController_h */
