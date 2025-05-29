//
//  INRoutableObjectSearchBar.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRoomSearchBar_
#define _INRoomSearchBar_

#import <UIKit/UIKit.h>
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface INRoutableObjectSearchBar : UISearchBar

@property (nonatomic,strong, nullable) id<INRoutableProtocol> RoutableObject;

@end

NS_ASSUME_NONNULL_END

#endif
