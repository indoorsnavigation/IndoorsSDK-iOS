//
//  RouteSearchViewV2.h
//  IndoorsMapSDK
//
//  Created by Indoors on 18.11.2025.
//

#ifndef RouteSearchViewV2_h
#define RouteSearchViewV2_h

#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import "INViewState.h"
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
@class INRouteSearchViewV2;

NS_ASSUME_NONNULL_BEGIN

@protocol INRouteSearchViewV2Delegate <NSObject>

@required

- (void)routeSearchViewV2:(UIView*)view
      didGetStartObject:(id<INRoutableProtocol>)startObject
        andFinishObject:(id<INRoutableProtocol>)finishObject;

- (void)routeSearchViewV2:(INRouteSearchViewV2*)view didChangeState:(INViewState)state;


//- (void)openCameraInfomatView:(RouteSearchViewV2 *)infomatView infomatPoint:(INInfomatPoint *)infomatPoint;
//- (void)INInfomatView:(RouteSearchViewV2*)view didChangeState:(INViewState)state;

@end

@interface INRouteSearchViewV2 : UIView

- (instancetype _Nullable )initWithView:(UIView*_Nullable)view;

- (void)setActivateInfomatTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;

- (void)openView;
- (void)closeView;

- (BOOL)isOpen;

-(void)setBuildings:(NSMutableArray<INBuilding *> *)buildings;


@property (nonatomic, weak, nullable) id<INRouteSearchViewV2Delegate> delegate;
@property (strong, nonatomic) INInfomatPoint                     *infomatPoint;




- (void)setReadyButtonTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;
- (void)setCancelButtonTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;

@end
NS_ASSUME_NONNULL_END


#endif /* RouteSearchViewV2_h */
