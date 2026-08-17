//
//  INMapStyle.h
//  IndoorsCoreSDK
//
//  Created by Алексей Виноградов on 13.08.2026.
//

#ifndef INMapStyle_h
#define INMapStyle_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 An object for customizing the map's appearance and text messages.
 
 IMPORTANT: When applying the style, the SDK only considers properties that are not `nil`.
 All properties are initialized as `nil` by default. If you leave a property as `nil`,
 the SDK will ignore it and fall back to its local default values, or to the configuration
 downloaded from the server (if one is set).
 */
@interface INMapStyle : NSObject

#pragma mark - Map Colors

/// The primary color for map UI elements.
@property (nonatomic, strong, nullable) UIColor *MapPrimaryColor;

/// The accent color (used for highlighting important elements and active states).
@property (nonatomic, strong, nullable) UIColor *MapAccentColor;

/// The primary background color for control elements (buttons).
@property (nonatomic, strong, nullable) UIColor *MapButtonColor1;

/// The secondary background color for control elements (buttons).
@property (nonatomic, strong, nullable) UIColor *MapButtonColor2;

/// The text color for primary buttons (should contrast with MapButtonColor1).
@property (nonatomic, strong, nullable) UIColor *MapButtonTextColor1;

/// The text color for secondary buttons (should contrast with MapButtonColor2).
@property (nonatomic, strong, nullable) UIColor *MapButtonTextColor2;


#pragma mark - Custom Error Messages

/**
 Custom error text displayed when a route cannot be built .
 
 Example: "Route cannot be built due to architectural restrictions."
 If set to `nil`, the SDK's default message is used.
 */
@property (nonatomic, strong, nullable) NSString *RouteErrorMessage;


@end

#endif /* INMapStyle_h */
