//
//  INCreateNewPassword.h
//  IndoorsSDK
//
//  Created by Indoors on 01.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INCreateNewPassword_h
#define INCreateNewPassword_h

#import "INBaseObject.h"

@interface INCreateNewPassword : INBaseObject


@property (nonatomic, strong) NSString *NewPassword;
@property (nonatomic, strong) NSString *ConfirmPassword;
@property (nonatomic, strong) NSString *OldPassword;

     

@end


#endif /* INCreateNewPassword_h */
