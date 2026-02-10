//
//  INModel3DData.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 19.08.2025.
//

#ifndef INModel3DData_h
#define INModel3DData_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface INModel3DData : NSObject

// Содержимое OBJ-файла
@property (nonatomic, strong) NSString *objContent;
@property (nonatomic, strong) NSString *mtlContent;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSData *> *textures;
@property (nonatomic, strong) NSString *basePath;

@end

#endif /* INModel3DData_h */
