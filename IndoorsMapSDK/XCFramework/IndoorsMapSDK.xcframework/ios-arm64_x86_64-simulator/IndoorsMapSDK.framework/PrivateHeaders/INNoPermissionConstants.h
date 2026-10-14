//
//  NoPermissionConstants.h
//  IndoorsSDK
//
//  Created by Timofey on 10/11/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef NoPermissionConstants_h
#define NoPermissionConstants_h

@interface INNoPermissionConstants: NSObject
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *subtitle;
@property (strong, nonatomic) NSString *givePermission;
@property (strong, nonatomic) NSString *done;
@property (strong, nonatomic) UIColor *background;
@property CFTimeInterval autoStopTimeout;
@end

#endif /* NoPermissionConstants_h */

