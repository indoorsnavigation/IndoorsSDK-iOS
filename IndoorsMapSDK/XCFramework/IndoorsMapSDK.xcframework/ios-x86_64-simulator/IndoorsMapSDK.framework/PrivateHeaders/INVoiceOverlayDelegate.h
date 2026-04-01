//
//  VoiceOverlayDelegate.h
//  IndoorsSDK
//
//  Created by Timofey on 8/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef VoiceOverlayDelegate_h
#define VoiceOverlayDelegate_h


#endif /* VoiceOverlayDelegate_h */


@protocol INVoiceOverlayDelegate <NSObject>

/// Called every time when new speech recognized.
/// - Parameter text: Recognized text
/// - Parameter isFinal: Flag indicating if that recognition callback was last.
/// - Parameter error: Optional error.
- (void)recordingWith:(NSString *_Nullable)text isFinal:(NSNumber *_Nullable)isFinal andError:(NSError *_Nullable)error;

@end
