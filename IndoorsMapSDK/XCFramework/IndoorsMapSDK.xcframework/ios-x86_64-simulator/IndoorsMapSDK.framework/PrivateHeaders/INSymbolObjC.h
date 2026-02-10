//
//  INSymbolObjC.h
//  IndoorsMapSDK
//
//  Created by Indoors on 09.09.2025.
//

#ifndef INSymbolObjC_h
#define INSymbolObjC_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface INSymbolObjC : NSObject

// Содержимое OBJ-файла
@property (nonatomic, strong) NSString *nameId;
@property (nonatomic, strong, nullable) NSString *imageName;
@property (nonatomic, strong, nullable) NSString *imageName2;
@property (nonatomic, strong) NSString *layerName;

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;

@property (nonatomic) float scale;
@property (nonatomic) BOOL isVisible;

@property (nonatomic) float offsetX;
@property (nonatomic) float offsetY;

@end


#endif /* INSymbolObjC_h */
