//
//  UIViewController + KeyboardLifting.h
//  IndoorsSDK
//
//  Created by Timofey on 2/12/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef UIViewController___KeyboardLifting_h
#define UIViewController___KeyboardLifting_h


#endif /* UIViewController___KeyboardLifting_h */


@interface UIViewController (KB_Show_Hide)
- (void)liftKbWhenNeeded;
- (void)disableKbLifting;
@end


@interface UIResponder (CurrentFirst)
+(id)currentFirstResponder;
@end
