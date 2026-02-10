//
//  INEmptyModelForNavigation.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 10.10.2025.
//

#ifndef INEmptyModelForNavigation_h
#define INEmptyModelForNavigation_h

#import "INBaseObject.h"
#import "INBuilding.h"

NS_ASSUME_NONNULL_BEGIN

@interface INEmptyModelForNavigation : INBaseObject <INRoutableProtocol, INCategoryProtocol>

/**
 Floor identifier in the database.
 @see 'INFloor'
 */
@property (nonatomic, strong) NSString *Name;


/**
 Cx.
 */
@property (nonatomic, strong) NSNumber *X;

/**
 Cy.
 */
@property (nonatomic, strong) NSNumber *Y;

/**
Floor identifier in the database.
@see 'INFloor'
*/
@property (nonatomic, strong) NSNumber *FloorId;


/**
Floor identifier in the database.
@see 'INFloor'
*/
@property (nonatomic, weak) INBuilding *building;

@end

NS_ASSUME_NONNULL_END


#endif /* INEmptyModelForNavigation_h */
