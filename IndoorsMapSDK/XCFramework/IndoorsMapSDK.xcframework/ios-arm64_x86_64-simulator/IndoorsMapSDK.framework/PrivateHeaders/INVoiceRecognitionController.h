//
//  INVoiceRecognitionController.h
//  IndoorsSDK
//
//  Created by Timofey on 9/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INVoiceRecognitionController_h
#define INVoiceRecognitionController_h

#import "INSpeechController.h"
#import "INVoiceInputViewController.h"

#import "INVoiceOverlayDelegate.h"

#import "INRecordConstants.h"
#import "INPermissionConstants.h"
#import "INNoPermissionConstants.h"

#import "INMicrophonePermissionController.h"
#import "INSpeechRecognitionPermissionController.h"

typedef id<INRecordable> _Nonnull (^RecordableHandler)(void);

NS_ASSUME_NONNULL_BEGIN

@interface INVoiceRecognitionController : NSObject

@property (nullable, weak, nonatomic) id<INVoiceOverlayDelegate> delegate;

/// Background color for all screens.
@property (strong, nonatomic) UIColor *backgroundColor;

/// Setup Record Screen constants like strings and colors by changing this property.
@property (strong, nonatomic) INRecordConstants       *recordScreenConstants;
/// Setup Permission Screen constants like strings and colors by changing this property.
@property (strong, nonatomic) INPermissionConstants   *permissionScreenConstants;
/// Setup NoPermission Screen constants like strings and colors by changing this property.
@property (strong, nonatomic) INNoPermissionConstants *noPermissionScreenConstants;

/// Shows voice overlay controller on given view
/// - Parameter: view: View controller on which voice recognition will be presented.
/// - Parameter: textHandler: Completion block for handling recognized text.
/// - Parameter: errorHandler:  Completion block for handling error.
- (void)startOnView:(UIViewController *)view
    withTextHandler:(nullable SpeechTextHandler)textHandler
    andErrorHandler:(nullable SpeechErrorHandler)errorHandler;


/// Initialize Voice recognition controller with  current locale
- (instancetype)init;
/// Initialize Voice recognition controller with  selected locale
- (instancetype)initWithLocale:(NSLocale *)locale;


/// Dismisses Voice Recognition view.
- (void)dismiss;

@end

NS_ASSUME_NONNULL_END

#endif
