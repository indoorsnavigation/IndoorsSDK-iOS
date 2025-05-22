//
//  INUtilities.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INUtilities_
#define _INUtilities_

#import <Foundation/Foundation.h>
#import "INService.h"
#import "INNotifier.h"

NS_ASSUME_NONNULL_BEGIN

/**
 `INUtilities`
 */
@interface INUtilities : NSObject

/**

 */
+ (INUtilities *)sharedInstance;

/**

 */
- (BOOL)isTool;
- (BOOL)isExample;
- (bool)isSameAppVersion;
- (BOOL)isTwoCollectionsWithSameObjects:(NSMutableArray*)list1 :(NSMutableArray*)list2;
- (UIImage *)imageWithView:(UIView *)view;
- (UIImage *)snapshotWithView:(UIView *)view;
- (UIImage *)imageByCroppingImage:(UIImage *)image toSize:(CGSize)size;
- (UIImage *)imageByCroppingImage:(UIImage *)image withOrientation:(UIImageOrientation)imageOrientation;
- (UIImage *)imageWithImage:(UIImage *)image scaledToFillSize:(CGSize)size;
- (NSString*)saveImage:(UIImage*)image withFileName:(NSString*)fileName;
- (UIImage*)loadCachedImage:(NSString*)fileName;
- (float)getDistanceFromWaypoints:(NSMutableArray*)waypoints;
- (NSString *)stringWithDeviceToken:(NSData *)deviceToken;
- (BOOL)lineSegmentsIntersect:(CGPoint)L1P1 :(CGPoint)L1P2 :(CGPoint)L2P1 :(CGPoint)L2P2;
- (NSNumber*)getBeaconKeyFromMajor:(int)major andMinor:(int)minor;

@end

NS_ASSUME_NONNULL_END

CGFloat ScaleToAspectFitRectInRect(CGRect rfit, CGRect rtarget);
CGRect AspectFitRectInRect(CGRect rfit, CGRect rtarget);
CGFloat ScaleToAspectFitRectAroundRect(CGRect rfit, CGRect rtarget);
CGRect AspectFitRectAroundRect(CGRect rfit, CGRect rtarget);

#endif
