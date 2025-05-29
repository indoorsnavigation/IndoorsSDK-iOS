//
//  INAppDatabase.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INAppDatabase_
#define _INAppDatabase_

#import <Foundation/Foundation.h>
#import "INCoreConfiguration.h"

@class INService;

NS_ASSUME_NONNULL_BEGIN

/**
 'INAppDatabase' initializes and stores the reference to the local database.
 */
@interface INAppDatabase : NSObject 

/**
 Queue to perform queries and updates in database.
 */
@property (nonatomic, strong) id queue;
/**
  Is dump used flag.
 */
@property (nonatomic) BOOL isDumpUsed;

/// Initialize database with `INCoreConfiguration`.
/// - Parameter configuration: `INCoreConfiguration` object.
- (instancetype)initWithConfiguration:(INCoreConfiguration*)configuration andService:(INService *)service;

/// Access key for database.
- (NSString*)getKey;


-(void)close;


- (void)clearCache;
-(void)delete;

@end

NS_ASSUME_NONNULL_END

#endif
