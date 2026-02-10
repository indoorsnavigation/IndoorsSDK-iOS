//
//  EarcutBridge.h
//  IndoorsMapSDK
//
//  Created by Indoors on 31.07.2025.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INEarcutWrapper : NSObject

+ (NSArray<NSNumber *> *)triangulateWithFloatArray:(NSArray<NSNumber *> *)coordinates;

@end

NS_ASSUME_NONNULL_END
