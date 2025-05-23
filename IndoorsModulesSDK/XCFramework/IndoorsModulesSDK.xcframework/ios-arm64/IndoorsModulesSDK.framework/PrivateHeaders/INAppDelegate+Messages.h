//
//  INAppDelegate+Messages.h
//  IndoorsModulesSDK
//
//  Created by Indoors on 19.05.2025.
//

#ifndef INAppDelegate_Messages_h
#define INAppDelegate_Messages_h


#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <IndoorsMapSDK/IndoorsMapSDK.h>


//#import "INAppDelegate.h"

@interface INAppDelegate (Messages)

- (void)startVideoCall:(INSessionDescription*)sessionDescription forContact:(INContact*)contact;

@end


#endif /* INAppDelegate_Messages_h */
