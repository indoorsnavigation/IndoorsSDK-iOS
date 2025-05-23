//
//  INTourPickerView.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INTourPickerView_
#define _INTourPickerView_

#import <UIKit/UIKit.h>

@class INTourPickerView;

@protocol INTourPickerViewDataSource <NSObject>

@required

- (NSInteger)numberOfRowsInTourPickerView:(INTourPickerView *_Nullable)pickerView;

@optional

- (NSString *_Nullable)tourPickerView:(INTourPickerView *_Nullable)pickerView titleForRow:(NSInteger)row;
- (NSString *_Nullable)tourPickerView:(INTourPickerView *_Nullable)pickerView pointsForRow:(NSInteger)row;
- (NSString *_Nullable)tourPickerView:(INTourPickerView *_Nullable)pickerView durationForRow:(NSInteger)row;
- (NSAttributedString *_Nullable)tourPickerView:(INTourPickerView *_Nullable)pickerView attributedTitleForRow:(NSInteger)row;
- (void)tourPickerView:(INTourPickerView *_Nullable)pickerView imageForRow:(NSInteger)row withCompletionBlick:(void (^_Nullable)(UIImage * _Nullable image))completionBlock;;

@end

@protocol INTourPickerViewDelegate <NSObject>

@optional

- (void)tourPickerView:(INTourPickerView *_Nullable)pickerView didConfirmWithItemAtRow:(NSInteger)row;
- (void)tourPickerView:(INTourPickerView *_Nullable)pickerView didConfirmWithItemsAtRows:(NSArray *_Nullable)rows;
- (void)tourPickerViewDidClickCancelButton:(INTourPickerView *_Nullable)pickerView;

@end

@interface INTourPickerView : UIView<UITableViewDataSource, UITableViewDelegate>

- (instancetype _Nullable )initWithView:(UIView*_Nullable)view
                              headerTitle:(NSString *_Nullable)headerTitle
                             cancelButtonTitle:(NSString *_Nullable)cancelButtonTitle
                            confirmButtonTitle:(NSString *_Nullable)confirmButtonTitle;

- (void)show;

- (NSArray *_Nullable)selectedRows;
- (void)setSelectedRows: (NSArray *_Nullable)rows;

@property (nonatomic, assign, nullable) id<INTourPickerViewDelegate>      delegate;
@property (nonatomic, assign, nullable) id<INTourPickerViewDataSource>    dataSource;

@property BOOL needFooterView;
@property BOOL tapBackgroundToDismiss;
@property BOOL allowMultipleSelection;

@property (nonatomic, strong) UIColor * _Nullable headerBackgroundColor;
@property (nonatomic, strong) UIFont  * _Nullable headerTitleFont;
@property (nonatomic, strong) UIColor * _Nullable headerTitleColor;
@property (nonatomic, strong) UIColor * _Nullable cancelButtonBackgroundColor;
@property (nonatomic, strong) UIColor * _Nullable cancelButtonNormalColor;
@property (nonatomic, strong) UIColor * _Nullable cancelButtonHighlightedColor;
@property (nonatomic, strong) UIColor * _Nullable confirmButtonBackgroundColor;
@property (nonatomic, strong) UIColor * _Nullable confirmButtonNormalColor;
@property (nonatomic, strong) UIColor * _Nullable confirmButtonHighlightedColor;
@property (nonatomic, strong) UIColor * _Nullable checkmarkColor;

@property CGFloat animationDuration;
@property CGFloat pickerWidth;

@end

#endif
