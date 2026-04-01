//
//  INRecordConstants.h
//  IndoorsSDK
//
//  Created by Timofey on 10/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INRecordConstants_h
#define INRecordConstants_h

@interface INRecordConstants: NSObject
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *subtitle;
@property (strong, nonatomic) NSString *titleInProgress;
@property (strong, nonatomic) NSString *titleError;
@property (strong, nonatomic) NSString *errorHint;
@property (strong, nonatomic) NSString *subtitleError;
@property (strong, nonatomic) NSString *closeTitle;
@property (strong, nonatomic) UIColor *background;
@property CFTimeInterval autoStopTimeout;
@end

#endif /* INRecordConstants_h */
