//
//  INLogger.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INLogger_
#define _INLogger_

#import <Foundation/Foundation.h>

#define INLogFormat @"%@ [LINE]: %d [FUNC]: %s [QUEU]: %s [MESS]:"

#define INLogError(fmt, ...)        [[INLogger defaultLogger] log:INLogLevelError format:(INLogFormat fmt),     [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, __PRETTY_FUNCTION__, dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL), ##__VA_ARGS__]
#define INLogWarn(fmt, ...)         [[INLogger defaultLogger] log:INLogLevelWarn format:(INLogFormat fmt),      [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, __PRETTY_FUNCTION__, dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL), ##__VA_ARGS__]
#define INLogInfo(fmt, ...)         [[INLogger defaultLogger] log:INLogLevelInfo format:(INLogFormat fmt),      [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, __PRETTY_FUNCTION__, dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL), ##__VA_ARGS__]
#define INLogDebug(fmt, ...)        [[INLogger defaultLogger] log:INLogLevelDebug format:(INLogFormat fmt),     [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, __PRETTY_FUNCTION__, dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL), ##__VA_ARGS__]
#define INLogVerbose(fmt, ...)      [[INLogger defaultLogger] log:INLogLevelVerbose format:(INLogFormat fmt),   [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, __PRETTY_FUNCTION__, dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL), ##__VA_ARGS__]


typedef NS_ENUM(NSInteger, INLogLevel) {
    INLogLevelUnknown = -1,
    INLogLevelNone = 0,
    INLogLevelError = 1,
    INLogLevelWarn = 2,
    INLogLevelInfo = 3,
    INLogLevelDebug = 4,
    INLogLevelVerbose = 5
};

NS_ASSUME_NONNULL_BEGIN

/**
 INLogger is an utility class that handles logging to the console. Changing log levels during development may make debugging easier. You can change the log level by importing `INCore.h` and calling:
 
 [INLogger defaultLogger].logLevel = INLogLevelVerbose;
 
 The following logging level options are available:
 
 INLogLevelNone
 INLogLevelError (This is the default. Only error logs are printed to the console.)
 INLogLevelWarn
 INLogLevelInfo
 INLogLevelDebug
 INLogLevelVerbose
 
 */
@interface INLogger : NSObject

/**
 The log level setting. The default is INLogLevelError.
 */
@property (atomic, assign) INLogLevel logLevel;

/// Returns the shared logger object.
///
/// - Returns The shared logger object.
+ (instancetype)defaultLogger;

/// Prints out the formatted logs to the console. You can use the following predefined shorthand methods instead:
///
///	 INLogError(fmt, ...)
///	 INLogWarn(fmt, ...)
///	 INLogInfo(fmt, ...)
///	 INLogDebug(fmt, ...)
///	 INLogVerbose(fmt, ...)
///
/// - Parameter logLevel: The level of this log.
/// - Parameter fmt: The formatted string to log.
- (void)log:(INLogLevel)logLevel
     format:(NSString *)fmt, ... NS_FORMAT_FUNCTION(2, 3);

@end

NS_ASSUME_NONNULL_END

#endif
