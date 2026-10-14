////
////  RouteSearchViewV2.h
////  IndoorsMapSDK
////
////  Created by Indoors on 18.11.2025.
////
//
//#ifndef RouteSearchViewV2_h
//#define RouteSearchViewV2_h
//
//#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
//#import "INViewState.h"
//#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
//@class INRouteSearchViewV2;
//
//NS_ASSUME_NONNULL_BEGIN
//
//@protocol INRouteSearchViewV2Delegate <NSObject>
//
//@required
//
//- (void)routeSearchViewV2:(UIView*)view
//      didGetStartObject:(id<INRoutableProtocol>)startObject
//        andFinishObject:(id<INRoutableProtocol>)finishObject;
//
//- (void)routeSearchViewV2:(INRouteSearchViewV2*)view didChangeState:(INViewState)state;
//
//- (void)routeSearchViewV2:(INRouteSearchViewV2*)view openQrScanForStartFieldWithBuildings:(NSMutableArray *)buildings;
//
//- (void)routeSearchViewV2:(INRouteSearchViewV2*)view needDrawFloor:(NSMutableArray *)buildings;
//
//- (void)routeSearchViewV2:(INRouteSearchViewV2*)view showAllertWithText:(NSString *)text;
//
////- (void)openCameraInfomatView:(RouteSearchViewV2 *)infomatView infomatPoint:(INInfomatPoint *)infomatPoint;
////- (void)INInfomatView:(RouteSearchViewV2*)view didChangeState:(INViewState)state;
//
//@end
//
//@interface INRouteSearchViewV2 : UIView
//
//- (instancetype _Nullable )initWithView:(UIView*_Nullable)view;
//
//- (void)setActivateInfomatTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;
//
//- (void)openView;
//- (void)closeView;
//
//- (BOOL)isOpen;
//
//-(void)setBuildings:(NSMutableArray<INBuilding *> *)buildings;
//-(void)setBuildingsWithOneCheAndLoadBuildingsIfNeeded:(NSMutableArray<INBuilding *> *)buildings;
//
//
//
//@property (nonatomic, weak, nullable) id<INRouteSearchViewV2Delegate> delegate;
//@property (strong, nonatomic) INInfomatPoint                     *infomatPoint;
//
//
//
//
//- (void)setReadyButtonTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;
//- (void)setCancelButtonTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;
//
//@end
//NS_ASSUME_NONNULL_END
//
//
//#endif /* RouteSearchViewV2_h */


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

- (void)routeSearchViewV2:(INRouteSearchViewV2*)view openQrScanForStartFieldWithBuildings:(NSMutableArray *)buildings;

- (void)routeSearchViewV2:(INRouteSearchViewV2*)view needDrawFloor:(NSMutableArray *)buildings;

- (void)routeSearchViewV2:(INRouteSearchViewV2*)view showAllertWithText:(NSString *)text;

//- (void)openCameraInfomatView:(RouteSearchViewV2 *)infomatView infomatPoint:(INInfomatPoint *)infomatPoint;
//- (void)INInfomatView:(RouteSearchViewV2*)view didChangeState:(INViewState)state;

@end

@interface INRouteSearchViewV2 : UIView

- (instancetype _Nullable )initWithView:(UIView*_Nullable)view;

- (void)setActivateInfomatTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;

- (void)openView;
- (void)halfOpenView;
- (void)closeView;

- (BOOL)isOpen;
- (BOOL)isHalfOpen;

- (void)setRoomOrIconOrEntranceFromMap:(id<INRoutableProtocol>)object;

-(void)setBuildings:(NSMutableArray<INBuilding *> *)buildings userGraphPoint:(nullable INGraphPoint *)userGraphPoint userLocation:(nullable CLLocation *)userLocation allTerritories:(nullable NSMutableArray *)territories;
-(void)setBuildingsWithOneCheAndLoadBuildingsIfNeeded:(NSMutableArray<INBuilding *> *)buildings userGraphPoint:(nullable INGraphPoint *)userGraphPoint userLocation:(nullable CLLocation *)userLocation allTerritories:(nullable NSMutableArray *)territories;



@property (nonatomic, weak, nullable) id<INRouteSearchViewV2Delegate> delegate;
@property (strong, nonatomic) INInfomatPoint                     *infomatPoint;


-(void)cleanStartFieldAndFinishField;


- (void)setReadyButtonTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;
- (void)setCancelButtonTintColor:(UIColor *)tintColor andBackgroundColor:(UIColor *)backgroundColor;

-(void)setBottomOffset:(CGFloat)bottomOffset;

@end
NS_ASSUME_NONNULL_END


#endif /* RouteSearchViewV2_h */
