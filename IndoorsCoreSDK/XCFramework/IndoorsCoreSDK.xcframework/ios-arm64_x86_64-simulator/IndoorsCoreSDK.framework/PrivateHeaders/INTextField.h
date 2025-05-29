//
//  INTextField.h
//  IndoorsSDK
//
//  Created by Timofey on 21/10/2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef INTextField_h
#define INTextField_h

#import <UIKit/UIKit.h>

@protocol INSearchTextDelegate
-(void)textDidChange:(NSString *_Nonnull)text;
@end

@interface INTextField : UITextField<UITextFieldDelegate>
@property (nullable, weak, nonatomic, readonly) UIButton *rightItem;
@property (weak, nonatomic, nullable) id<INSearchTextDelegate> textDelegate;

-(id _Nonnull)initWithLeftImage
:(UIImage *_Nullable)leftImage
:(UIImage *_Nullable)rightImage
:(NSString *_Nullable)placeHolder
:(NSString *_Nullable)subtitle;
- (void)clearText;
- (void)setRightItemInsets:(UIEdgeInsets)insets;
- (void)setAdditionalTextRectInsets:(UIEdgeInsets)insets;
- (void)addToolbarWithDoneButton;
@end

#endif /* INTextField_h */
