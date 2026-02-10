//
//  INMapButtonsColors.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 04.07.2025.
//

#ifndef INMapButtonsColors_h
#define INMapButtonsColors_h


#import "INBaseObject.h"
#import <Foundation/Foundation.h>


@interface INMapButtonsColors : INBaseObject

@property (nonatomic, strong, nullable) NSString *MapPrimaryColor;          // основной цвет
@property (nonatomic, strong, nullable) NSString *MapAccentColor;           // акцентирующий цвет
@property (nonatomic, strong, nullable) NSString *MapButtonColor1;          // цвет кнопок 1
@property (nonatomic, strong, nullable) NSString *MapButtonColor2;          // цвет кнопок 2
@property (nonatomic, strong, nullable) NSString *MapButtonTextColor1;      // цвет текста кнопок 1
@property (nonatomic, strong, nullable) NSString *MapButtonTextColor2;      // цвет текста кнопок 1

@property (nonatomic, strong, nullable) NSString *MapDarkPrimaryColor;      // основной цвет (темный)
@property (nonatomic, strong, nullable) NSString *MapDarkAccentColor;       // акцентирующий цвет (темный)
@property (nonatomic, strong, nullable) NSString *MapDarkButtonColor1;      // цвет кнопок 1 (темный)
@property (nonatomic, strong, nullable) NSString *MapDarkButtonColor2;      // цвет кнопок 2 (темный)
@property (nonatomic, strong, nullable) NSString *MapDarkButtonTextColor1;  // цвет текста кнопок 1 (темный)
@property (nonatomic, strong, nullable) NSString *MapDarkButtonTextColor2;  // цвет текста кнопок 1 (темный)



@end


#endif /* INMapButtonsColors_h */
