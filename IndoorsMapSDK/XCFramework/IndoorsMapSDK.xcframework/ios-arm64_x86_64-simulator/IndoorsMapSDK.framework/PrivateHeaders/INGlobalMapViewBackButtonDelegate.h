//
//  INGlobalMapViewBackButtonDelegate.h
//  IndoorsMapSDK
//
//  Created by Indoors on 22.04.2026.
//

#ifndef INGlobalMapViewBackButtonDelegate_h
#define INGlobalMapViewBackButtonDelegate_h


#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <UIKit/UIKit.h>

@class INGlobalMapView;

/**
 Протокол для обработки событий нажатия на кнопку "Назад" внутри INGlobalMapView.
 */
NS_SWIFT_NAME(GlobalMapViewBackButtonDelegate)
@protocol INGlobalMapViewBackButtonDelegate <NSObject>

@required
/**
 Вызывается, когда пользователь нажимает на кнопку "Назад" на карте.
 
 @param mapView Экземпляр карты INGlobalMapView, инициировавший событие.
 */
- (void)globalMapViewDidTapBackButton:(nonnull INGlobalMapView *)mapView;

@end


#endif /* INGlobalMapViewBackButtonDelegate_h */
