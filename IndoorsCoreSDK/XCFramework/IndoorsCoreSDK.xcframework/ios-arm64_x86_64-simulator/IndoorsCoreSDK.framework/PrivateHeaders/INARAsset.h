//
//  INARAsset.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INARAsset_
#define _INARAsset_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores information about AR Asset.
 */
@interface INARAsset : INBaseObject

/**
 Name of the AR asset.
 */
@property (nonatomic, strong) NSString *Name;

/**
 UUID of the AR asset.
 */
@property (nonatomic, strong) NSString *UUID;

/**
 Image URL of the AR asset.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Target Image URL of the AR asset.
 */
@property (nonatomic, strong) NSString *TargetImage;

/**
 Target Image width.
 */
@property (nonatomic, strong) NSNumber *TargetImageWidth;

/**
 Target Image height.
 */
@property (nonatomic, strong) NSNumber *TargetImageHeight;

/**
 SceneKit file of the AR asset.
 */
@property (nonatomic, strong) NSString *SCN;

/**
 Scene Form Binary file of the AR asset.
 */
@property (nonatomic, strong) NSString *SFB;

/**
 iOS asset bundle of the AR asset.
 */
@property (nonatomic, strong) NSString *AssetBundleIOS;

/**
 Android asset bundle of the AR asset.
 */
@property (nonatomic, strong) NSString *AssetBundleAndroid;

/**
 iOS compressed 3d model.
 */
@property (nonatomic, strong) NSString *Compressed3DModelIOS;

/**
 Video URL for AR Asset.
 */
@property (nonatomic, strong) NSString *VideoURL;


/**
 iOS asset bundle of the AR asset.
 */
@property (nonatomic, strong, nullable) NSString *ImagePath;

/**
 Path to the image of the AR asset.
 */
@property (nonatomic, strong, nullable) NSString *TargetImagePath;

/**
 Path to the target image of the AR asset..
 */
@property (nonatomic, strong, nullable) NSString *SFBPath;

/**
 Path to the SFB file of the AR asset.
 */
@property (nonatomic, strong, nullable) NSString *SCNPath;

/**
 iOS asset bundle of the AR asset.
 */
@property (nonatomic, strong, nullable) NSString *AssetBundlePath;
/**
 Path to the iOS compressed 3D model of the AR asset.
 */
@property (nonatomic, strong, nullable) NSString *Compressed3DModelIOSPath;

@end

NS_ASSUME_NONNULL_END

#endif
