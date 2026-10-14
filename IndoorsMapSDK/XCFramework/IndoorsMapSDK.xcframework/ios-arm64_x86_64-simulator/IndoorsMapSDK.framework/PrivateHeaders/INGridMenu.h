//
//  INGridMenu.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGridMenu_
#define _INGridMenu_

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, INGridMenuStyle)
{
    INGridMenuStyleGrid,
    INGridMenuStyleList,
    INGridMenuStyleIndoors,
    INGridMenuStyleIndoorsMeasurement

};

#pragma mark - RNMenuItemView

@interface RNMenuItemView : UIView

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, assign) NSInteger itemIndex;
@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) UIView *rightView;
@property (nonatomic, strong) UIView *bottomView;
@property (nonatomic, strong) UIButton *actionButton;

@end

@class INGridMenu;

@interface INGridMenuItem : NSObject

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *title;
@property BOOL isDrowItem;

@property (nonatomic, copy) dispatch_block_t action;

+ (instancetype)emptyItem;

- (instancetype)initWithImage:(UIImage *)image
                        title:(NSString *)title
                       action:(dispatch_block_t)action;
- (instancetype)initWithImage:(UIImage *)image
                        title:(NSString *)title;
- (instancetype)initWithImage:(UIImage *)image;
- (instancetype)initWithTitle:(NSString *)title;

- (BOOL)isEmpty;

@end

@protocol INGridMenuDelegate <NSObject>
@optional

- (void)gridMenu:(INGridMenu *)gridMenu willDismissWithSelectedItem:(INGridMenuItem *)item
         atIndex:(NSInteger)itemIndex;
- (void)gridMenuWillDismiss:(INGridMenu *)gridMenu;
- (void)gridMenuDismissWithItems:(NSMutableArray*)gridMenuItems;

@end

@interface INGridMenu : UIViewController

+ (instancetype)visibleGridMenu;

@property (nonatomic, readonly) UIView *menuView;

@property (nonatomic, readonly) NSArray             *items;
@property (nonatomic, weak) id<INGridMenuDelegate>  delegate;
@property (nonatomic, strong) UIColor               *highlightColor;
@property (nonatomic, strong) UIColor               *backgroundColor;
@property (nonatomic, strong) UIBezierPath          *backgroundPath;
@property (nonatomic, assign) CGFloat               cornerRadius;
@property (nonatomic, assign) CGSize                itemSize;
@property (nonatomic, assign) CGFloat               blurLevel;
@property (nonatomic, strong) UIBezierPath          *blurExclusionPath;
@property (nonatomic, assign) CGFloat               animationDuration;
@property (nonatomic, strong) UIColor               *itemTextColor;
@property (nonatomic, strong) UIFont                *itemFont;
@property (nonatomic, assign) NSTextAlignment       itemTextAlignment;
@property (nonatomic, assign) INGridMenuStyle       menuStyle;
@property (nonatomic, strong) UIView                *headerView;
@property (nonatomic, copy) dispatch_block_t        dismissAction;
@property (nonatomic, assign) BOOL                  bounces;

- (instancetype)initWithItems:(NSArray *)items;
- (instancetype)initWithImages:(NSArray *)images;
- (instancetype)initWithTitles:(NSArray *)titles;

- (void)showInViewController:(UIViewController *)parentViewController
                      center:(CGPoint)center;
- (void)dismissAnimated:(BOOL)animated;

@end

@interface INLongPressGestureRecognizer : UILongPressGestureRecognizer

@end

#endif
