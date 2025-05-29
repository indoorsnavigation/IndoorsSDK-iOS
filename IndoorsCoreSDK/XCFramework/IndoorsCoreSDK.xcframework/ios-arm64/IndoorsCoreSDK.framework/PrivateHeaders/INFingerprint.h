//
//  INFingerprint.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INFingerprint_
#define _INFingerprint_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Device fingerprint.
 */
@interface INFingerprint : INBaseObject

@property (nonatomic, strong) NSString *Cookie;
@property (nonatomic, strong) NSNumber *Jailbreak;
@property (nonatomic, strong) NSString *IOSVersion;
@property (nonatomic, strong) NSNumber *VoIPAllowed;
@property (nonatomic, strong) NSString *CarrierName;
@property (nonatomic, strong) NSNumber *MonoAudio;
@property (nonatomic, strong) NSString *Name;
@property (nonatomic, strong) NSNumber *CanSendTweet;
@property (nonatomic, strong) NSNumber *CanMakePayments;
@property (nonatomic, strong) NSNumber *InvertedColors;
@property (nonatomic, strong) NSNumber *VoiceOver;
@property (nonatomic, strong) NSNumber *GuidedAccess;
@property (nonatomic, strong) NSNumber *ClosedCaptioning;
@property (nonatomic, strong) NSNumber *TrackingEnabled;
@property (nonatomic, strong) NSString *Model;
@property (nonatomic, strong) NSString *Country;
@property (nonatomic, strong) NSString *Language;

@property (nonatomic, strong) NSNumber *Diff;
@property (nonatomic, strong) NSString *IdentifierForVendor;
@property (nonatomic, strong) NSString *Reachability;
@property (nonatomic, strong) NSString *WifiSSID;
@property (nonatomic, strong) NSString *ISP;
@property (nonatomic, strong) NSString *PublicIP;
@property (nonatomic, strong) NSString *Keyboards;
@property (nonatomic, strong) NSString *Apps;
@property (nonatomic, strong) NSString *Top50Songs;

@property (nonatomic, strong) NSString *Assets;
@property (nonatomic, strong) NSString *Twitter;
@property (nonatomic, strong) NSString *Contacts;
@property (nonatomic, strong) NSString *Reminders;
@property (nonatomic, strong) NSString *Calendars;

@property (nonatomic, strong) NSNumber *PlistBattery;
@property (nonatomic, strong) NSString *PlistDisksize;
@property (nonatomic, strong) NSString *PlistAppleID;
@property (nonatomic, strong) NSString *PlistPlayerID;
@property (nonatomic, strong) NSString *PlistRingtone;
@property (nonatomic, strong) NSString *PlistSmstone;
@property (nonatomic, strong) NSString *PlistCallVibration;
@property (nonatomic, strong) NSString *PlistSmsVibration;
@property (nonatomic, strong) NSString *PlistItunesHosts;
@property (nonatomic, strong) NSString *PlistApps;
@property (nonatomic, strong) NSString *PlistCodeSigningIdentities;

@property (nonatomic, strong) NSString *Timezone;
@property (nonatomic, strong) NSString *PushDeviceToken;
@property (nonatomic, strong) NSNumber *AccountId;

+(INFingerprint*)generate;

@end

NS_ASSUME_NONNULL_END

#endif
