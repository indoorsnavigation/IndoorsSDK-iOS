//
//  SpeechController.h
//  IndoorsSDK
//
//  Created by Timofey on 9/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef SpeechController_h
#define SpeechController_h

#import <Speech/Speech.h>
#import "INRecordable.h"

@interface INSpeechController : NSObject<INRecordable, SFSpeechRecognizerDelegate>
-(instancetype)initWithLocale:(NSLocale *)locale;
-(instancetype)init;
@end

#endif /* SpeechController_h */
