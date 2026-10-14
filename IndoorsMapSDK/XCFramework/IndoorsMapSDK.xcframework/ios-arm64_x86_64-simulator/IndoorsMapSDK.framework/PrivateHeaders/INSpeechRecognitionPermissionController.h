//
//  INSpeechRecognitionPermissionController.h
//  IndoorsSDK
//
//  Created by Timofey on 7/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INSpeechRecognitionPermissionController_h
#define INSpeechRecognitionPermissionController_h

#import "INPermissionController.h"


@interface INSpeechRecognitionPermissionController: NSObject<INPermissionController>
+ (instancetype)sharedInstance;
@end

#endif /* INSpeechRecognitionPermissionController_h */
