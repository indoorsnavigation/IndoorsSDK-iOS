//
//  CustomDatePicker.h
//  IndoorsSDK
//
//  Created by Indoors on 24.05.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN
@protocol CustomDatePickerDelegate <NSObject>

@required
- (void)closeCalendar;
- (void)backAndCloseCalendar;
- (void)acceptAndCloseCalendar:(nullable NSDate *)startDate endDate:(nullable NSDate *)endDate;

@end

@interface CustomDatePicker : UIView

- (instancetype)initWithFrame:(CGRect)frame;

@property (nonatomic, assign, nullable) id<CustomDatePickerDelegate> delegate;

-(void)setMaximumDate:(NSDate *)maximumDate;
-(void)setMinimumDate:(NSDate *)minimumDate;

-(void)setTitle:(NSString *)title;
-(void)setContentViewColor:(UIColor *)backgroundColor;

@end


NS_ASSUME_NONNULL_END

