//
//  INAOATagModel.h
//  IndoorsSDK
//
//  Created by Mac on 23.01.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INAOATagModel_h
#define INAOATagModel_h

#import "INBaseObject.h"

/**
 Stores data about AOA Tag Model.
 */
@interface INAOATagModel : INBaseObject

/**
 Tag model name.
 */
@property (strong, nonatomic) NSString *Name;

/**
 Tag model vendor.
 */
@property (strong, nonatomic) NSNumber *Vendor;

@end

#endif /* INAOATagModel_h */

