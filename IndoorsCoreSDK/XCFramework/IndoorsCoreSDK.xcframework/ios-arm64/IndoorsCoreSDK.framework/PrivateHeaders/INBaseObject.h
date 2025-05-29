//
//  INBaseObject.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBaseObject_
#define _INBaseObject_

#import "MTLModel.h"
#import "Mantle.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class INGraphPoint;
@class INGraph;
@class INFloor;
@class INPosition2;
@class INCategory;

/**
 Category Protocol.
 */
@protocol INCategoryProtocol <NSObject>
@property (strong, nonatomic) INCategory *Category;
- (nullable NSString *)getName;
- (nullable NSString *)getImage;
@end

/**
 Protocol.
 */
@protocol INRoutableProtocol <NSObject>

@required

- (nullable NSString*)getName;
- (nullable NSString*)getImage;
- (nullable INFloor*)getFloor;
- (INGraphPoint*)getGraphPointWithGraph:(INGraph *)graph fromPosition:(nullable INPosition2*)position;
- (float)getDistanceFromPoint:(INGraphPoint*)graphPoint;
- (float)getDistance;

@end

/**
 Protocol.
 */
@protocol INObjectProtocol <NSObject>

@optional

+ (NSString*)URL;
+ (NSDictionary *)databaseColumnsByPropertyKeys;
+ (NSString *)databaseTableName;
+ (NSMutableArray*)equalityFields;
+ (NSDictionary*)filterKeysByPropertyKeys;
+ (NSString*)lookupField;
+ (NSString*)slug;

- (NSValueTransformer *)FMDBTransformerForKey:(NSString *)key;

@end

/**
 Parent for all classes in web app.
 */
@interface INBaseObject : MTLModel <MTLJSONSerializing, INObjectProtocol, NSSecureCoding>

/**
 Object identifier.
 */
@property (nonatomic, strong) NSNumber *Id;

/**
 Unix-timestamp.
 */
@property (nonatomic, strong) NSNumber *CreatedAt;

/**
 Unix-timestamp.
 */
@property (nonatomic, strong) NSNumber *UpdatedAt;

/**
 Application identifier.
 */
@property (nonatomic, strong) NSNumber *ApplicationId;

/**
 Flag.
 */
@property (nonatomic, strong) NSNumber *Deleted;

- (void)copyJsonValuesFromObject:(id<MTLModel>)model;

- (NSMutableDictionary *)toNSDictionary;

+ (void)mergeArray:(NSMutableArray*)sourceArray
         withArray:(NSMutableArray*)destinationArray
     andCopyFields:(BOOL)copy;

@end

NS_ASSUME_NONNULL_END

#endif
