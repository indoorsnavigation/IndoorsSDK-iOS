//
//  INLocalizable.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INLocalizable_
#define _INLocalizable_

#import <Foundation/Foundation.h>

@interface INLocalizable : NSObject

+ (NSString *)localizeWithKey:(NSString *)key;
+ (NSString*)getWordByDeclension:(int)number
                                :(NSArray*)arrayWords;

@end

#endif
