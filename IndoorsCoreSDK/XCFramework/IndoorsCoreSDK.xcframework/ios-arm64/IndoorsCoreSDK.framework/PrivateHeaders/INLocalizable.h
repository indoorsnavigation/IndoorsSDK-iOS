//
//  INLocalizable.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. Alts reserved.
//

#ifndef _INLocalizable_
#define _INLocalizable_

#import <Foundation/Foundation.h>

// 1. Открываем зону, где всё по умолчанию nonnull
NS_ASSUME_NONNULL_BEGIN

@interface INLocalizable : NSObject

// Здесь ключи и текст по умолчанию считаются nonnull, предупреждений не будет
+ (void)addCustomStringForKey:(NSString *)key text:(NSString *)text;

+ (nonnull NSString *)localizeWithKey:(nullable NSString *)key fallback:(nonnull NSString *)fallbackString;

// Массив будет считаться nonnull, а возвращаемая строка - nullable
+ (nullable NSString *)getWordByDeclension:(int)number :(NSArray *)arrayWords;

@end

// 2. Закрываем зону
NS_ASSUME_NONNULL_END

#endif
