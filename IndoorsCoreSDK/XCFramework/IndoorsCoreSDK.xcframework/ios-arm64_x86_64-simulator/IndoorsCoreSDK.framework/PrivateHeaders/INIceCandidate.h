//
//  INIceCandidate.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INIceCandidate_
#define _INIceCandidate_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 
 */
@interface INIceCandidate : INBaseObject

/**
 Account identifier of one of the peers in the connection
 */
@property (nonatomic, strong) NSNumber *AccountId;

/**
 Identifier of the recipient peer in the connection
 */
@property (nonatomic, strong) NSNumber *RecipientId;

/**
 Identifier of the media stream identification.
 */
@property (nonatomic, strong) NSString *SDPMID;

/**
 Indicates the index (starting at zero) of m-line in the SDP this candidate is associated with
 */
@property (nonatomic, strong) NSNumber *SDPMLineIndex;

/**
 SDP-ized form of this candidate.
 */
@property (nonatomic, strong) NSString *SDP;

/**
 URL of the server used in the establishment of the connection.
 */
@property (nonatomic, strong) NSString *ServerURL;

@end

NS_ASSUME_NONNULL_END

#endif
