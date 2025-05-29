//
//  INDateFormatter.h
//  IndoorsSDK
//
//  Created by Георгий Глухов on 19.06.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//


#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, INDateFormatterStyle) {
    INDateFormatterStyleTimeOnly,                        // HH:mm
    INDateFormatterStyleFullDate,                        // dd.MM.yyyy HH:mm
    INDateFormatterStyleTimeAndDate,                     // HH:mm dd.MM.yyyy
    INDateFormatterStyleShortDateWithDots,               // dd.MM.yyyy
    INDateFormatterStyleDateWithMonthName,               // dd MMM yyyy
    INDateFormatterStyleDayMonth,                        // dd MMM      ru_RU
    INDateFormatterStyleWeekdayDate,                     // EE dd.MM    ru_RU
    INDateFormatterStyleWeekdayOnly,                     // EE          ru_RU
    INDateFormatterStyleShortDateWithDotsWithoutYear,    // dd.MM
    INDateFormatterStyleDayMonthShort                    // d MMM       ru_RU

};

typedef NS_ENUM(NSInteger, INDateFormatterLocaleStyle) {
    INDateFormatterLocaleStyleRu,       // ru_RU
    INDateFormatterLocaleStyleEnUS,     // en_US
    INDateFormatterLocaleStyleEnGB      // en_GB

};

@interface INDateFormatter : NSObject

+ (instancetype)sharedFormatter;

- (NSString *)formatTimeIntervalWithTotalTime:(NSTimeInterval)totalTime
                                   timeRemains:(NSTimeInterval)timeRemains
                                         style:(INDateFormatterStyle)style;

- (NSString *)formatStringWthDate:(NSDate *)date
                          style:(INDateFormatterStyle)style
                         locale:(INDateFormatterLocaleStyle)locale;

- (NSDate *)formatDateWthDate:(NSDate *)date
                          style:(INDateFormatterStyle)style
                         locale:(INDateFormatterLocaleStyle)locale;

- (NSDate *)formatDateWthString:(NSString *)dateString
                          style:(INDateFormatterStyle)style
                         locale:(INDateFormatterLocaleStyle)locale;
@end
