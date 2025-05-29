//
//  INRouteViewStyle.h
//  IndoorsSDK
//
//  Created by Mac on 11.04.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INRouteViewStyle_h
#define INRouteViewStyle_h

@interface INRouteViewStyle : NSObject
@property (strong, nonatomic) UIColor *makeRouteButtonTextColor;
@property (strong, nonatomic) UIColor *makeRouteButtonBackgroundColor;
@property (strong, nonatomic) UIColor *showOnMapButtonTextColor;
@property (strong, nonatomic) UIColor *showOnMapButtonBackgroundColor;
@property (strong, nonatomic) UIColor *cancelButtonTextColor;
@property (strong, nonatomic) UIColor *cancelButtonBackgroundColor;
@property (strong, nonatomic) UIColor *startFieldTintColor;
@property (strong, nonatomic) UIColor *finishFieldTintColor;
@property (strong, nonatomic) UIColor *navigateButtonColor;
@property (strong, nonatomic) UIColor *floorButtonArrowColor;
@end

#endif /* INRouteViewStyle_h */
