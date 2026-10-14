//
//  INRecordable.h
//  IndoorsSDK
//
//  Created by Timofey on 8/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INRecordable_h
#define INRecordable_h

typedef void (^SpeechTextHandler)(NSString *, Boolean, id);
typedef void (^SpeechErrorHandler)(NSError*);

@protocol INRecordable <NSObject>
- (void)startRecordingWith:(SpeechTextHandler)textHandler andErrorHandler:(SpeechErrorHandler)errorHandler;
- (void)stopRecording;
- (Boolean)isRecording;
- (void)requestAuthorization:(void (^)(Boolean status))statusHandler;
@end

#endif /* INRecordable_h */
