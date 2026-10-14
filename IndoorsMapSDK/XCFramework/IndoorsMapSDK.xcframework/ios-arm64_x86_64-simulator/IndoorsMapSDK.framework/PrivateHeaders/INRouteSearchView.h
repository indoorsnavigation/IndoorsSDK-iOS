//
//  INRouteSearchView.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRouteSearchView_
#define _INRouteSearchView_

#import <UIKit/UIKit.h>
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>

#import "INRoutableObjectSearchBar.h"
#import "INMapView.h"
//#import "INBuilding.h"
//#import "INRoom.h"

@class INMapView;
@class INRouteSearchView;

NS_ASSUME_NONNULL_BEGIN

@protocol INRouteSearchViewDelegate <NSObject>

@required
- (void)routeSearchView:(UIView*)view
      didGetStartObject:(id<INRoutableProtocol>)startObject
        andFinishObject:(id<INRoutableProtocol>)finishObject;
- (void)cancelTouched;
- (void)zoomTouchedWith:(id<INRoutableProtocol>)routeObject;
- (void)shouldExpand;
@end

@interface INRouteSearchView : UIView 

@property (nonatomic,strong) INRoutableObjectSearchBar *focusedSearchBar;

@property (nonatomic,assign, nullable) id <INRouteSearchViewDelegate>  delegate;

- (instancetype)initWithView:(UIView*)mapView
                 andBuilding:(INBuilding*)building;

- (void)updateRoutableObjects;
- (void)setStartObject:(nullable id<INRoutableProtocol>)startObject;
- (void)setFinishObject:(nullable id<INRoutableProtocol>)finishObject;

- (void)reset;

@end

NS_ASSUME_NONNULL_END

#endif
