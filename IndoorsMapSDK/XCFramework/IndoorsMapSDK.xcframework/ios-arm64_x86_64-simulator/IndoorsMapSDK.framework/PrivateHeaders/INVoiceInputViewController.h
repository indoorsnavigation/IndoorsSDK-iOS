//
//  INVoiceInputViewController.h
//  IndoorsSDK
//
//  Created by Timofey on 8/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INVoiceInputViewController_h
#define INVoiceInputViewController_h

#import "INRecordable.h"
#import "INVoiceOverlayDelegate.h"
#import "INRecordConstants.h"

@interface INVoiceInputViewController : UIViewController
@property (nullable, strong, nonatomic) id<INRecordable> speechController;
@property (nullable, strong, nonatomic) SpeechTextHandler speechTextHandler;
@property (nullable, strong, nonatomic) SpeechErrorHandler speechErrorHandler;
@property (nullable, weak, nonatomic) id<INVoiceOverlayDelegate> delegate;
@property (nullable, nonatomic) void (^dismissHandler)(Boolean);
@property (nonnull, strong, nonatomic) INRecordConstants *constants;
@end

#endif /* INVoiceInputViewController_h */
