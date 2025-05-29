//
//  INMapStyle.h
//  IndoorsSDK
//
//  Created by Mac on 11.04.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INMapStyle_h
#define INMapStyle_h
#import "INRouteViewStyle.h"
#import "INBuildingSearchViewStyle.h"

@interface INMapStyle : NSObject
@property (strong, nonatomic) INRouteViewStyle *routeViewStyle;
@property (strong, nonatomic) INBuildingSearchViewStyle *buildingSearchViewStyle;
@end

#endif /* INMapStyle_h */
