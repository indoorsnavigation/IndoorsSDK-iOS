//
//  INGlobalRadioMapView.h
//  InApp
//
//  Created by Mac on 07.07.2023.
//

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <UIKit/UIKit.h>
#import "INBaseMapView.h"

#import "INRouteSearchView.h"
#import "INGridMenu.h"
//#import "INBuilding.h"
//#import "INNavigation.h"
//#import "INIndoorPositionEstimator.h"
//#import "INMediaPoint.h"
//#import "INPanoramaPoint.h"
//#import "INInfomatPoint.h"
#import "INBaseMapViewDelegate.h"
//#import "INDrawUserPositionProcedureParams.h"
//#import "INRadioMapTrack.h"

@interface INGlobalRadioMapView : INBaseMapView
- (instancetype)initWithFrame:(CGRect)frame;

@property (strong, nonatomic) NSMutableArray<INRadioMapTrack *> *radioTracks;
@property (strong, nonatomic) INBuilding *building;


@end

