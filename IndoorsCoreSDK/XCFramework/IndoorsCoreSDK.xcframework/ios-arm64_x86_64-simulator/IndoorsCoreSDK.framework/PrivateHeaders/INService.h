//
//  INService.h
//  IndoorsServiceSDK
//
//  Created by Indoors on 19.03.2025.
//

#ifndef _INService_
#define _INService_

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

#import "INServiceMessage.h"
#import "INVideoCallViewControllerDelegate.h"

#import "JSQMessageData.h"
#import "JSQMessageMediaData.h"

#import "UIViewController + KeyboardLifting.h"
#import "UIColor + Random.h"


#import "INLocalizable.h"

#import "INAuthService.h"
#import "INAppDatabase.h"

#import "INProfile.h"

#import "INApplication.h"
#import "INBuilding.h"
#import "INBuildingType.h"
#import "INCategory.h"
#import "INTrackPoint.h"
#import "INUserTrackPoint.h"
#import "INPosition2.h"

#import "INBuildingEvent.h"
#import "INRoomEvent.h"
#import "INOwnerEvent.h"

#import "INRoomEventSchedule.h"
#import "INOwnerEventSchedule.h"
#import "INBuildingEventSchedule.h"

#import "INBuildingNews.h"
#import "INRoomNews.h"
#import "INOwnerNews.h"

#import "INFavouriteBuilding.h"
#import "INFavouriteRoom.h"
#import "INFavouriteOwner.h"

#import "INRoomFeedback.h"
#import "INOwnerFeedback.h"
#import "INBuildingFeedback.h"
#import "INFeedbackType.h"

#import "INImageAsset.h"

#import "INBuildingNavigationSettings.h"

#import "INInfomat.h"

#import "INBeaconNotificationStamp.h"
#import "INLocalNotificationStamp.h"

#import "INDirectionService.h"
#import "INProcedure.h"
#import "INUtilities.h"

#import "INCoreConfiguration.h"
#import "INReachability.h"

#import "INProfile.h"
#import "INGhostProfile.h"
#import "INConversation.h"
#import "INMessage.h"
#import "INZoneVisitStamp.h"
#import "INContact.h"
#import "INConversationMember.h"
#import "INSessionDescription.h"
//#import "RTCSessionDescription.h"
#import "INIceCandidate.h"
//#import "RTCICECandidate.h"

#import "INBuildingBusinessHours.h"
#import "INOwnerBusinessHours.h"
#import "INMobileBannerSchedule.h"

#import "INAlarmPoint.h"
#import "INMapZone.h"

#import "INBeaconDevice.h"
#import "INMTTracker.h"
#import "INWIFIRadar.h"
#import "INControlModule.h"
#import "INAOAGateway.h"
#import "INAOALocator.h"
#import "INAOATag.h"
#import "INAOATagModel.h"
#import "INRadioMap.h"
#import "INRadioMapTrack.h"

#import "INBookingModel.h"
#import "INTasksModel.h"
#import "INGhostProfile.h"
#import "INTaskUsers.h"
#import "INTaskReviews.h"
#import "INUserSubscription.h"
#import "INUserSubscriptionPackage.h"

#import "INTaskResponseModel.h"

//#import "INMessengerConversationViewController.h"

#import "INCountry.h"
#import "INCreateNewPassword.h"

#import "INQuizzes.h"
#import "INQuizQuestions.h"
#import "INQuizQuestionAnswers.h"
#import "INCompletedQuizzes.h"


#import "INStories.h"
#import "INStoryGroups.h"
#import "INWatchedStories.h"

#import "INUserGroups.h"
#import "INUsersGroups.h"

#import "INUserZones.h"
#import "INUserZoneBusinessHours.h"

#import "INAccountPersonalData.h"

#import "INArticles.h"

#import "INConverter.h"

#import "INWall.h"
#import "INBarrier.h"
#import "INMediaPoint.h"
#import "INPanoramaPoint.h"
#import "INPanoramaEdge.h"
#import "INInfomatPoint.h"
#import "INDNNPoint.h"
#import "INMTTrackerPoint.h"

#import "INGraph.h"
#import "INGraphEdgeGraph.h"

#import "INAuthService.h"
#import "INAppDatabase.h"

#import "INObjectService.h"


#import "INProfile.h"

#import "INApplication.h"
#import "INBuilding.h"
#import "INBuildingType.h"
#import "INCategory.h"
#import "INTrackPoint.h"
#import "INUserTrackPoint.h"
#import "INPosition2.h"

#import "INBuildingEvent.h"
#import "INRoomEvent.h"
#import "INOwnerEvent.h"

#import "INRoomEventSchedule.h"
#import "INOwnerEventSchedule.h"
#import "INBuildingEventSchedule.h"

#import "INBuildingNews.h"
#import "INRoomNews.h"
#import "INOwnerNews.h"

#import "INFavouriteBuilding.h"
#import "INFavouriteRoom.h"
#import "INFavouriteOwner.h"

#import "INRoomFeedback.h"
#import "INOwnerFeedback.h"
#import "INBuildingFeedback.h"
#import "INFeedbackType.h"

#import "INImageAsset.h"

#import "INBuildingNavigationSettings.h"

#import "INInfomat.h"

#import "INBeaconNotificationStamp.h"
#import "INLocalNotificationStamp.h"

#import "INDirectionService.h"
#import "INProcedure.h"
#import "INUtilities.h"

#import "INCoreConfiguration.h"
#import "INReachability.h"

#import "INProfile.h"
#import "INGhostProfile.h"
#import "INConversation.h"
#import "INMessage.h"
#import "INZoneVisitStamp.h"
#import "INContact.h"
#import "INConversationMember.h"
#import "INSessionDescription.h"
//#import "RTCSessionDescription.h"
#import "INIceCandidate.h"
//#import "RTCICECandidate.h"

#import "INBuildingBusinessHours.h"
#import "INOwnerBusinessHours.h"
#import "INMobileBannerSchedule.h"

#import "INAlarmPoint.h"
#import "INMapZone.h"

#import "INBeaconDevice.h"
#import "INMTTracker.h"
#import "INWIFIRadar.h"
#import "INControlModule.h"
#import "INAOAGateway.h"
#import "INAOALocator.h"
#import "INAOATag.h"
#import "INAOATagModel.h"
#import "INRadioMap.h"
#import "INRadioMapTrack.h"

#import "INBookingModel.h"
#import "INTasksModel.h"
#import "INGhostProfile.h"
#import "INTaskUsers.h"
#import "INTaskReviews.h"
#import "INUserSubscription.h"
#import "INUserSubscriptionPackage.h"

#import "INTaskResponseModel.h"

//#import "INMessengerConversationViewController.h"


#import "INAOATag.h"
#import "INAOALocation.h"
#import "INBLETag.h"
#import "INBLELocation.h"
#import "INUWBTag.h"
#import "INUWBLocation.h"
#import "INLidarDevice.h"
#import "INLidarLocation.h"
#import "INTrackedMapObject.h"
#import "INImage.h"
#import "INPanoramaTour.h"
#import "INWaypoint.h"
#import "INParser.h"
#import "INLocalizable.h"
#import "INPath.h"
#import "INMapARPointTarget.h"
#import "INPanoramaTourPoint.h"
#import "INColorScheme.h"
#import "INMapStyle.h"
#import "INRouteViewStyle.h"
#import "INBuildingSearchViewStyle.h"
#import "INReuseIDProtocol.h"
#import "INDispatch.h"
#import "INSpeech.h"
#import "INDrawUserPositionProcedureParams.h"
#import "INMessengerButton.h"
#import "INTextField.h"
#import "INGlobalPositionEstimator.h"
#import "INNavigation.h"
#import "INAlertManager.h"
#import "INXYParticle.h"
#import "INTemporarySet.h"
#import "INCoordinateBounds.h"
#import "INNearestPointsService.h"
#import "INLogger.h"
#import "INRawMeasurementProcessor.h"
#import "INRawMapTrackMeasurementProcessor.h"
#import "INBezierBaseGeometry.h"
#import "INRawBeacon.h"
#import "AcceleromenrGraphModel.h"
#import "UIImage + Scaled.h"
#import "INTrackingMapInternalView.h"
//#import "INMessengerViewControllerNew.h"

@class INRawBeacon;

@class INBuildingModel3D;

@class INTrackingService;
@class INUsersService;
@class INTagService;

NS_ASSUME_NONNULL_BEGIN


/// Delegate for handling events related to messages or conversation.
///
/// Can be used from `INCore.sharedInstance().service.messengerServiceDelegate`
/// SDK Messenger implimentations are using this delegate.
@protocol INMessengerServiceDelegate <NSObject>

@required

/// Called when a new message is received
/// - Parameter message: Recieved message
- (void)didGetNewMessage:(INMessage*)message;

/// Called when a new message is updated
/// - Parameter message: Updated message
- (void)didUpdateMessage:(INMessage*)message;

/// Called when a new message is deleted
/// - Parameter message: Deleted message
- (void)didDeleteMessage:(INMessage*)message;

/// Called when a new conversation member is received.
/// - Parameter conversationMember: Received member.
- (void)didGetNewConversationMember:(INConversationMember*)conversationMember;

/// Called when a new conversation member is updated.
/// - Parameter conversationMember: Updated member.
- (void)didUpdateConversationMember:(INConversationMember*)conversationMember;

/// Called when a new conversation member is deleted.
/// - Parameter conversationMember: Deleted member.
- (void)didDeleteConversationMember:(INConversationMember*)conversationMember;

- (void)loadConversationsWithCompletionBlock:(void (^)(NSMutableArray<INConversation *> *objects, NSError *_Nullable error))completionBlock;

@end


/// Delegate receiving updates about changes in track points in a zone
@protocol INZoneIntersectionServiceDelegate <NSObject>

@required

/// Called when a new track point is received.
/// - Parameter trackPoint: Received trackpoint.
- (void)didGetNewTrackPoint:(INTrackPoint *)trackPoint;

/// Called when a new user track point is received.
/// - Parameter trackPoint: Received trackpoint.
- (void)didGetNewUserTrackPoint:(INUserTrackPoint *)trackPoint;

@end

/// Delegate receiving important events related to a video call service
@protocol INVideoCallServiceDelegate <NSObject>

@required

/// Called when the video call service receives an offer
/// - Parameter sessionDescription: Session description
- (void)didGetOffer:(INSessionDescription*)sessionDescription;

/// Called when the video call service receives an answer
/// - Parameter sessionDescription: Session description
- (void)didGetAnswer:(INSessionDescription*)sessionDescription;

/// Called when the video call service receives an ICE Candidate
/// - Parameter iceCandidate: ICE Candidate
- (void)didGetIceCandidate:(INIceCandidate*)iceCandidate;

@end

/// `INService` used for authorization, authentication  and other service operations.
@interface INService : NSObject

- (INTrackingService *)trackingService;
- (INUsersService *)usersService;
- (INTagService *)tagService;
- (INTagService *)tagServiceWithoutCurrentBuilding;
- (NSString *)getCurrentProfileUUID;

/// The line in which the push-token is stored for subsequent registration in the `registerForPushNotificationsWithApplication` method.
@property (nonatomic, strong) NSData *pushDeviceToken;

/// Array of loaded `INApplication` objects.
///
/// By default sets as first loaded application,
/// also changed when `loadBuildingsOfApplication:withCompletionBlock:` called.
@property (nonatomic, strong) NSMutableArray    *applications;

/// Current `INApplication` object.
@property (nonatomic, strong) INApplication     *currentApplication;

/// Current `INProfile` object.
///
/// By default sets after `loadProfileWithCompletionBlock:` called.
@property (nonatomic, strong, nullable) INProfile         *currentProfile;

/// Service for handling network reachability status.
///
/// Inits at INService initialization.
@property (nonatomic, strong) INReachability    *reachability;


/// `INMessengerServiceDelegate` delegate
@property (nonatomic, weak) id <INMessengerServiceDelegate> messengerServiceDelegate;

/// `INZoneIntersectionServiceDelegate` delegate
@property (nonatomic, weak) id <INZoneIntersectionServiceDelegate> zoneIntersectionTrackingServiceDelegate;

/// `INVideoCallServiceDelegate` delegate
@property (nonatomic, strong) id <INVideoCallServiceDelegate> videoCallDelegate;

- (instancetype)initWithConfiguration:(INCoreConfiguration*)configuration;


/**
 Role In Tasks & Requests 0 - admin, 1 - Assignee,  2 - user
 */
@property (nonatomic, strong) NSString *RoleInTasksRequests;

#pragma mark - Authentication and authorization

/// Authenticates user via email and password.
///
///
///    - Parameter email: User email
///    - Parameter password: User password
///    - Parameter completionBlock: completionBlock
- (void)authenticateWithEmail:(NSString*)email
                  andPassword:(NSString*)password
          withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Links facebook account for future authentication through Facebook.
///
///
///    - Parameter accessToken: Facebook token.
///    - Parameter completionBlock: completionBlock.
- (void)linkFacebookAccountWithAccessToken:(NSString*)accessToken
                        andCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Authenticates the developer via email and password in specific application.
///
///
///    - Parameter application: Application.
///    - Parameter email: Email of the developer account.
///    - Parameter password: The password for the account on the service.
///    - Parameter completionBlock: Completion block.
- (void) authenticateInApplication:(INApplication*)application
                         withEmail:(NSString*)email
                       andPassword:(NSString*)password
               withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;


- (void) authenticateInApplicationWith:(NSString*)applicationId
                         withEmail:(NSString*)email
                       andPassword:(NSString*)password
               withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;


/// Checks the validity of the token. Runs after `authorizeApplicationWithClientId: andClientSecret: withCompletionBlock` with each request to the service
///
/// - Parameter completionBlock: Completion block.
- (void)verifyAccessTokenWithCompletionBlock:(void (^)(BOOL success, INProfile *_Nullable profile))completionBlock;


/// Authorizes application.
///
///
///    - Parameter clientId: Client id of the application.
///    - Parameter clientSecret: Secret of the application.
///    - Parameter completionBlock: Completion block.
- (void)authorizeApplicationWithClientId:(NSString*)clientId
                         andClientSecret:(NSString*)clientSecret
                     withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Registers new user with email and password.
///
///    - Parameter email: Email of the new user account.
///    - Parameter password: The password.
///    - Parameter confirmation: The confirmation of the password.
///    - Parameter firstName: First name of the new user.
///    - Parameter lastName: Last name of the new user.
///    - Parameter completionBlock: Completion block.
- (void)registerWithEmail:(NSString*)email
                 password:(NSString*)password
             confirmation:(NSString*)confirmation
                firstName:(NSString*)firstName
                 lastName:(NSString*)lastName
      withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Closes the session, invalidates the token
/// - Parameter completionBlock: Completion block.
- (void)closeSessionWithCompletionBlock:(void (^)( NSError *_Nullable error))completionBlock;

/// Closes the session, invalidates the token.
///
/// - Parameter completionBlock: Completion block.
- (void)closeSessionAndResetWithCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;


- (void)setNewPassword:(INCreateNewPassword *)newPasswordModel
    andCompletionBlock:(void (^)(INProfile * _Nullable responseObject, NSError  * _Nullable error))completionBlock;

#pragma mark - Profile

/// Loads `INProfile` object.
///
/// - Parameter completionBlock Completion block.
- (void)loadProfileWithCompletionBlock:(void (^)(INProfile *_Nullable profile, NSError *_Nullable error))completionBlock;


/// Edits `INProfile` object.
///
/// - Parameter completionBlock: Completion block.
- (void)updateProfileWithCompletionBlock:(void (^)(INProfile *_Nullable profile, NSError *_Nullable error))completionBlock;

/// - Parameter completionBlock: Completion block.
- (void)updateProfileWithNewImage:(UIImage *)image
               andProcessBlock:(void (^)(INProfile *_Nullable profile, NSError *_Nullable error))processBlock
               andCompletionBlock:(void (^)(INProfile *_Nullable profile, NSMutableArray<NSError*> *_Nullable error))completionBlock;

- (void)loadProfilesWithIds:(NSMutableArray<NSNumber *> *)identifiers
         andCompletionBlock:(void (^)(NSArray<INProfile *> *_Nullable profiles, NSError *_Nullable error))completionBlock;

- (void)loadProfilesWithCompletionBlock:(void (^)(NSArray<INProfile *> *_Nullable profiles, NSError *_Nullable error))completionBlock;


#pragma mark - Ghosts

/// Loads array of `INGhostProfile` objects.
///
/// - Parameter identifiers: Array of identifiers, can be taken from `INProfile` Id.
/// - Parameter completionBlock: Completion block.
- (void)loadGhostProfilesWithIds:(NSMutableArray<NSString *> *)identifiers
              andCompletionBlock:(void (^)(NSMutableArray<INGhostProfile *> *_Nullable ghosts, NSError *_Nullable error))completionBlock;

/// Loads array of `INGhostProfile` objects.
///
/// - Parameter identifiers: Array of identifiers, can be taken from `INProfile` uuid.
/// - Parameter completionBlock: Completion block.
- (void)loadGhostProfilesWithUUIDs:(NSMutableArray<NSString *> *)identifiers
                andCompletionBlock:(void (^)(NSMutableArray<INGhostProfile *> * _Nullable, NSError * _Nullable))completionBlock;

#pragma mark - INMapZones

/// Loads array of `INMapZone` objects.
///
/// - Parameter building: Building from which will be downloaded zones.
/// - Parameter completionBlock: Completion block.
- (void)loadMapZonesForBuilding:(INBuilding *)building
             andCompletionBlock:(void (^)(NSMutableArray<INMapZone *> *_Nullable zones, NSError *_Nullable error))completionBlock;

#pragma mark - Zone visit stamps

/// Loads array of `INZoneVisitSpamp` objects.
///
/// - Parameter building: Building from which will be downloaded visit stamps.
/// - Parameter startDate: Start date used for filtering visit stamps.
/// - Parameter endDate: End date used for filtering visit stamps.
/// - Parameter completionBlock: Completion block.
- (void)loadZoneVisitStampsForBuilding:(INBuilding *)building
                         withStartDate:(NSDate *_Nullable)startDate
                               endDate:(NSDate *_Nullable)endDate
                    andCompletionBlock:(void (^)(NSMutableArray<INZoneVisitStamp *> *stamps, NSError *_Nullable error))completionBlock;

#pragma mark - Applications

/// Load applications in the form of an array of `INApplication` objects for later use in the UI and fetching buildings.
///
/// - Parameter completionBlock: Completion block.
- (void)loadApplicationsWithCompletionBlock:(void (^)(NSMutableArray<INApplication *> *applications, NSError *_Nullable error))completionBlock;
- (void)loadApplicationsUserUUID:(NSString *)UUID
                          withCompletionBlock:(void (^)(NSMutableArray<INApplication *> *applications, NSError *_Nullable error))completionBlock;

/// Load Category Tree of the application.
/// - Parameter application:  `INApplication` object.
/// - Parameter completionBlock: Completion block.
- (void)loadCategoryTreeForApplication:(INApplication*)application
                   withCompletionBlock:(void (^)(NSMutableArray *categoryTree, NSError *error))completionBlock;

#pragma mark - Buildings

/// Loads all buildings of the application.
///
/// - Parameter application:  `INApplication` object.
/// - Parameter completionBlock: Completion block.
- (void)loadBuildingsOfApplication:(INApplication*)application
               withCompletionBlock:(void (^)(NSMutableArray<INBuilding *> *buildings, NSError *_Nullable error))completionBlock;

#pragma mark - Building

/// Loads building with all objects required for rendering maps in `INMapView`, navigation, notifications, and so on.
///
/// - Parameter building `INBuilding` object.
/// - Parameter progressBlock  Progress block, will be called every time an layer download completed.
/// - Parameter completionBlock Completion block.
- (void)loadBuilding:(INBuilding*)building
   withProgressBlock:(void (^)(Class layerClass, NSMutableArray *objects))progressBlock
  andCompletionBlock:(void (^)(INBuilding *building, NSError *_Nullable error))completionBlock;
 
/// Loads building with all objects required for navigation and pathfinding only.
///
/// - Parameter building: `INBuilding` object.
/// - Parameter progressBlock: Progress block, will be called every time an layer download completed.
/// - Parameter completionBlock: completionBlock Completion block.
- (void)loadBuildingForNavigationOnly:(INBuilding*)building
                    withProgressBlock:(void (^)(Class layerClass, NSMutableArray *objects))progressBlock
                   andCompletionBlock:(void (^)(INBuilding *building, NSError *_Nullable error))completionBlock;

#pragma mark - Beacon Points

/// Loads building with all objects required for navigation and pathfinding only.
///
///   - Parameter application: `INApplication` object.
///   - Parameter completionBlock: Completion block.
- (void)loadBeaconPointsOfApplication:(INApplication*)application
                  withCompletionBlock:(void (^)(NSMutableArray<INBeaconPoint *> *beaconPoints, NSError *_Nullable error))completionBlock;

- (void)updateBeacon:(INBeacon*)beacon
      withParameterA:(NSNumber*)A
                andB:(NSNumber*)B
 withCompletionBlock:(void (^)(INBeacon *beacon, NSError *_Nullable error))completionBlock;

#pragma mark - Raw Beacon

/// Load array of `INBeaconDevice` objects.
///
/// - Parameter buildings: Array of `INBuilding` objects, that will be used as filter for load.
/// - Parameter completionBlock: Completion block.
- (void)loadBeaconDevicesOfBuildings:(NSMutableArray<INBuilding *> *)buildings
                  withCompletionBlock:(void (^)(NSMutableArray<INBeaconDevice *> *_Nullable rawBeacons, NSError *_Nullable error))completionBlock;

/// Load array of `INBeaconDevice` objects.
///
/// - Parameter application: `INApplication` object used as filter for load.
/// - Parameter completionBlock: Completion block.
- (void)loadBeaconDevicesOfApplication:(INApplication *)application
                  withCompletionBlock:(void (^)(NSMutableArray<INBeaconDevice *> *_Nullable beaconDevices, NSError *_Nullable error))completionBlock;

#pragma mark - Owners and their buildings

/// Loads owners of the rooms of the entire category.
///
/// - Parameter category `INCategory` object.
/// - Parameter completionBlock Completion block.
- (void)loadOwnersWithCategory:(INCategory*)category
           withCompletionBlock:(void (^)(NSMutableArray<INOwner *> *owners, NSError *_Nullable error))completionBlock;

/// Loads owners of the rooms of all categories.
///
/// - Parameter categories `Array of INCategory` objects.
/// - Parameter completionBlock Completion block.
- (void)loadOwnersWithCategories:(NSMutableArray<INCategory *>*)categories
           withCompletionBlock:(void (^)(NSMutableArray<INOwner *> *owners, NSError *_Nullable error))completionBlock;

/// Loads buildings in which the owner is represented.
///
/// - Parameter owner: `INOwner` object.
/// - Parameter completionBlock:
- (void)loadBuildingsOfOwner:(INOwner*)owner
         withCompletionBlock:(void (^)(NSMutableArray<INBuilding *> *buildings, NSError *_Nullable error))completionBlock;


/// Loads owners.
///
/// - Parameter name: Name of owner to load.
/// - Parameter completionBlock: Completion block.
- (void)loadOwnersByName:(NSString*)name
     withCompletionBlock:(void (^)(NSMutableArray<INOwner *> *owners, NSError *_Nullable error))completionBlock;

#pragma mark - Room Business Hours

/// Loads room business hours by owner.
///
/// - Parameter owner: `INOwner` object.
/// - Parameter completionBlock: Completion block.
- (void)loadRoomBusinessHours:(INOwner*)owner
          withCompletionBlock:(void (^)(NSMutableArray<INOwnerBusinessHours *> *roomBusinessHours, NSError *_Nullable error))completionBlock;

#pragma mark - Navigation settings

/// Loads all navigation settings of building
///
/// -Parameter building: Building from which settings will be downloaded
/// -Parameter completionBlock: Completion block.
- (void)loadNavigationSettingsOfBuilding:(INBuilding*)building
                     withCompletionBlock:(void (^)(NSMutableArray<INBuildingNavigationSettings *> *allNavigationSettings, NSError *_Nullable error))completionBlock;

/// Update existing navigation settings.
///
/// -Parameter navigationSettings: Navigation settings to update.
/// -Parameter completionBlock: Completion block.
- (void)saveNavigationSettings:(INBuildingNavigationSettings *)navigationSettings
                     withCompletionBlock:(void (^)(INBuildingNavigationSettings *_Nullable updatedSettings, NSError *_Nullable error))completionBlock;


/// Add new navigation settings
///
/// -Parameter navigationSettings: Navigation settings to update.
/// -Parameter completionBlock: Completion block.
- (void)addNewNavigationSettings:(INBuildingNavigationSettings *)navigationSettings
             withCompletionBlock:(void (^)(INBuildingNavigationSettings * _Nullable, NSError * _Nullable))completionBlock;

#pragma mark - Events

/// Loads building events for current application.
///
/// - Parameter startDate      `NSDate` object.
/// - Parameter endDate        `NSDate` object.
/// - Parameter completionBlock Completion block.
- (void)loadBuildingEventsSchedulesWithStartDate:(NSDate*)startDate
                                         endDate:(NSDate*)endDate
                              andCompletionBlock:(void (^)(NSMutableArray<INBuildingEventSchedule *> *buildingEventsSchedules, NSError *_Nullable error))completionBlock;

/// Loads building events for current application.
///
/// - Parameter building       `INBuilding` object.
/// - Parameter startDate      `NSDate` object.
/// - Parameter endDate        `NSDate` object.
/// - Parameter completionBlock Completion block.
- (void)loadBuildingEventsSchedules:(INBuilding*)building
                      withStartDate:(NSDate*)startDate
                            endDate:(NSDate*)endDate
                 andCompletionBlock:(void (^)(NSMutableArray<INBuildingEventSchedule *> *buildingEventsSchedules, NSError *_Nullable error))completionBlock;

/// Loads room events.
///
/// - Parameter startDate      `NSDate` object.
/// - Parameter endDate        `NSDate` object.
/// - Parameter completionBlock Completion block.
- (void)loadRoomEventsSchedulesWithStartDate:(NSDate*)startDate
                                     endDate:(NSDate*)endDate
                          andCompletionBlock:(void (^)(NSMutableArray<INRoomEventSchedule *> *roomEventsSchedules, NSError *_Nullable error))completionBlock;

/// Loads room events.
///
/// - Parameter room           `INRoom` object.
/// - Parameter startDate      `NSDate` object.
/// - Parameter endDate        `NSDate` object.
/// - Parameter completionBlock Completion block.
- (void)loadRoomEventsSchedules:(INRoom*)room
                  withStartDate:(NSDate*)startDate
                        endDate:(NSDate*)endDate
             andCompletionBlock:(void (^)(NSMutableArray<INRoomEventSchedule *> *roomEventsSchedules, NSError *_Nullable error))completionBlock;


/// Loads room events for building.
///
/// - Parameter building       `INBuilding` object.
/// - Parameter startDate      `NSDate` object.
/// - Parameter endDate        `NSDate` object.
/// - Parameter completionBlock Completion block.
- (void)loadRoomEventsSchedulesForBuilding:(INBuilding*)building
                             withStartDate:(NSDate*)startDate
                                   endDate:(NSDate*)endDate
                        andCompletionBlock:(void (^)(NSMutableArray<INRoomEventSchedule *> *roomEventsSchedules, NSError *_Nullable error))completionBlock;

/// Loads room events for owner.
///
/// - Parameter owner          `INOwner` object.
/// - Parameter startDate      `NSDate` object.
/// - Parameter endDate        `NSDate` object.
/// - Parameter completionBlock Completion block.
- (void)loadRoomEventsSchedulesForOwner:(INOwner*)owner
                          withStartDate:(NSDate*)startDate
                                endDate:(NSDate*)endDate
                     andCompletionBlock:(void (^)(NSMutableArray<INRoomEventSchedule *> *roomEventsSchedules, NSError *_Nullable error))completionBlock;

/// Loads owner events for current application.
///
/// - Parameter startDate      `NSDate` object.
/// - Parameter endDate        `NSDate` object.
/// - Parameter completionBlock Completion block.
- (void)loadOwnerEventsSchedulesWithStartDate:(NSDate*)startDate
                                      endDate:(NSDate*)endDate
                           andCompletionBlock:(void (^)(NSMutableArray<INOwnerEventSchedule *> *ownerEventsSchedules, NSError *_Nullable error))completionBlock;

/// Loads owner events.
///
/// - Parameter owner: `INOwner` object.
/// - Parameter startDate: `NSDate` object.
/// - Parameter endDate: `NSDate` object.
/// - Parameter completionBlock: Completion block.
- (void)loadOwnerEventsSchedules:(INOwner*)owner
                   withStartDate:(NSDate*)startDate
                         endDate:(NSDate*)endDate
              andCompletionBlock:(void (^)(NSMutableArray<INOwnerEventSchedule *> *ownerEventsSchedules, NSError *_Nullable error))completionBlock;

/// Loads owner events and schedules for building with time interval.
///
/// - Parameter building: `INBuilding` object.
/// - Parameter startDate: `NSDate` object.
/// - Parameter endDate: `NSDate` object.
/// - Parameter completionBlock: Completion block.
- (void)loadOwnersEventsSchedulesForBuilding:(INBuilding*)building
                               withStartDate:(NSDate*)startDate
                                     endDate:(NSDate*)endDate
                          andCompletionBlock:(void (^)(NSMutableArray<INOwnerEventSchedule *> *ownersEventsSchedules, NSError *_Nullable error))completionBlock;

#pragma mark - News

/// Loads building news.
///
/// - Parameter building: `INBuilding` object.
/// - Parameter completionBlock: Completion block.
- (void)loadBuildingNews:(INBuilding*)building
     withCompletionBlock:(void (^)(NSMutableArray<INBuildingNews *> *buildingNews, NSError *_Nullable error))completionBlock;

/// Loads all buildings news.
///
/// - Parameter completionBlock: Completion block.
- (void)loadBuildingNewsWithCompletionBlock:(void (^)(NSMutableArray<INBuildingNews *> *buildingNews, NSError *_Nullable error))completionBlock;

/// Loads room news.
///
/// - Parameter room: `INRoom` object.
/// - Parameter completionBlock: Completion block.
- (void)loadRoomNews:(INRoom*)room
 withCompletionBlock:(void (^)(NSMutableArray<INRoomNews *> *roomNews, NSError *_Nullable error))completionBlock;

/// Loads all rooms news.
///
/// - Parameter completionBlock: Completion block.
- (void)loadRoomNewsWithCompletionBlock:(void (^)(NSMutableArray<INRoomNews *> *roomNews, NSError *_Nullable error))completionBlock;

/// Loads owner news.
///
/// - Parameter owner: `INOwner` object.
/// - Parameter completionBlock: Completion block.
- (void)loadOwnerNews:(INOwner*)owner
  withCompletionBlock:(void (^)(NSMutableArray<INOwnerNews *> *_Nullable ownerNews, NSError *_Nullable error))completionBlock;

/// Loads all owners news.
- (void)loadOwnerNewsWithCompletionBlock:(void (^)(NSMutableArray<INOwnerNews *> *ownerNews, NSError *_Nullable error))completionBlock;

#pragma mark - Favourite Buildings
/// Loads all favourite buildings and returns the result in a completion block.
///
/// - Parameter completionBlock: Completion block.
- (void)loadFavouriteBuildingsWithCompletionBlock:(void (^)(NSMutableArray<INFavouriteBuilding *> *favouriteBuildings, NSError *_Nullable error))completionBlock;

/// Adds a building to favourites and returns the result in a completion block.
///
/// - Parameter building: An `INBuilding` object.
/// - Parameter completionBlock: Completion block.
- (void)addBuildingToFavorites:(INBuilding*)building
           withCompletionBlock:(void (^)(NSMutableArray<INFavouriteBuilding *> *_Nullable favouriteBuildings, NSError *_Nullable error))completionBlock;

/// Removes a building from favourites and returns the result in a completion block.
///
/// - Parameter building: An `INBuilding` object.
/// - Parameter completionBlock: Completion block.
- (void)removeBuildingFromFavourites:(INBuilding*)building
                 withCompletionBlock:(void (^)(NSMutableArray<INFavouriteBuilding *> *_Nullable favouriteBuildings, NSError *_Nullable error))completionBlock;

#pragma mark - Favourite Owners

/// Loads all favourite owners and returns the result in a completion block.
///
/// - Parameter completionBlock: Completion block.
- (void)loadFavouriteOwnersWithCompletionBlock:(void (^)(NSMutableArray<INFavouriteOwner *> *favouriteOwners, NSError *_Nullable error))completionBlock;

/// Adds an owner to favourites and returns the result in a completion block.
///
/// - Parameter owner: An `INOwner` object.
/// - Parameter completionBlock: Completion block.
- (void)addOwnerToFavorites:(INOwner *)owner
        withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Removes an owner from favourites and returns the result in a completion block.
///
/// - Parameter owner: An `INOwner` object.
/// - Parameter completionBlock: Completion block.
- (void)removeOwnerFromFavourites:(INOwner*)owner
              withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Favourite Rooms
/// Loads the favourite rooms.
///
/// - Parameter completionBlock: Completion block.
- (void)loadFavouriteRoomsWithCompletionBlock:(void (^)(NSMutableArray<INFavouriteRoom *> *favouriteRooms, NSError *_Nullable error))completionBlock;

/// Adds a room to the list of favorite rooms.
///
/// - Parameter room: The room to be added to favorites.
/// - Parameter completionBlock: Completion block.
- (void)addRoomToFavorites:(INRoom *)room
       withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Removes a room from the list of favorite rooms.
///
/// - Parameter room: The room to be removed from favorites.
/// - Parameter completionBlock: Completion block.
- (void)removeRoomFromFavourites:(INRoom*)room
             withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Feedback

/// Loads all available feedback types.
///
/// - Parameter completionBlock: Completion block.
- (void)loadFeedbackTypesWithCompletionBlock:(void (^)(NSMutableArray<INFeedbackType *> *feedbackTypes, NSError *_Nullable error))completionBlock;

#pragma mark - Feedback Building

/// Loads all feedback for a given building.
///
/// - Parameter building: The building for which feedback should be loaded.
/// - Parameter completionBlock: Completion block.
- (void)loadBuildingFeedbacks:(INBuilding *)building
          withCompletionBlock:(void (^)(NSMutableArray<INBuildingFeedback *> *buildingFeedbacks, NSError *_Nullable error))completionBlock;

/// Summary:
/// Sends a feedback for a given building.
///
/// - Parameter buildingFeedback: The feedback to be sent for the building.
/// - Parameter completionBlock: Completion block.
- (void)sendBuildingFeedback:(INBuildingFeedback *)buildingFeedback
         withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Deletes a feedback for a given building.
///
/// - Parameter buildingFeedback: The feedback to be deleted for the building.
/// - Parameter completionBlock: Completion block.
- (void)deleteBuildingFeedback:(INBuildingFeedback *)buildingFeedback
           withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Feedback Owner

/// Loads all feedback for a given owner.
///
/// - Parameter owner: The owner for which feedback should be loaded.
/// - Parameter completionBlock: Completion block.
- (void)loadOwnerFeedbacks:(INOwner *)owner
       withCompletionBlock:(void (^)(NSMutableArray<INOwnerFeedback *> *ownersFeedbacks, NSError *_Nullable error))completionBlock;

/// Sends a feedback for a given owner.
///
/// - Parameter ownerFeedback: The feedback to be sent for the owner.
/// - Parameter completionBlock: Completion block.
- (void)sendOwnerFeedback:(INOwnerFeedback *)ownerFeedback
      withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Deletes an owner feedback.
///
/// - Parameter ownerFeedback: The feedback to be deleted.
/// - Parameter completionBlock: Completion block.
- (void)deleteOwnerFeedback:(INOwnerFeedback *)ownerFeedback
        withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Feedback Room

/// Loads feedbacks of a room.
///
/// - Parameter room: The room whose feedbacks are to be loaded.
/// - Parameter completionBlock: Completion block.
- (void)loadRoomFeedbacks:(INRoom *)room
      withCompletionBlock:(void (^)(NSMutableArray<INRoomFeedback *> *roomFeedbacks, NSError *_Nullable error))completionBlock;

/// Sends feedback for a room.
///
/// - Parameter feedback: Feedback to be sent.
/// - Parameter completionBlock: Completion block.
- (void)sendRoomFeedback:(INRoomFeedback *)feedback
     withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Deletes feedback for a room.
///
/// - Parameter roomFeedback: The feedback to be deleted.
/// - Parameter completionBlock: Completion block.
- (void)deleteRoomFeedback:(INRoomFeedback *)roomFeedback
       withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Media files

/// Loads and caches necessary images.
///
/// - Parameter imageName: Image filename.
/// - Parameter progressBlock: Optional callback for handling the progress of loading the image. Returns the received size and expected size of the image.
/// - Parameter completionBlock: Completion block.
-(void)loadImageNamed:(NSString *)imageName
    withProgressBlock:(nullable void (^)(NSInteger receivedSize, NSInteger expectedSize))progressBlock
   andCompletionBlock:(void (^)(UIImage *_Nullable image, NSError *_Nullable error))completionBlock;

/// Loads and caches an image to an imageView.
///
/// - Parameter imageUrl: Image full URL.
/// - Parameter progressBlock: Optional callback for handling the progress of loading the image. Returns the received size and expected size of the image.
/// - Parameter completionBlock: Completion block.
-(void)loadImageWithURL:(nonnull NSString *)imageUrl
      withProgressBlock:(nullable void (^)(NSInteger receivedSize, NSInteger expectedSize))progressBlock
     andCompletionBlock:(void (^)(UIImage *_Nullable image, NSError *_Nullable error))completionBlock;

/// Caches images assets from a folder.
///
/// - Parameter folderPath: Full path of the folder.
/// - Parameter completionBlock: Completion block.
-(void)cacheImagesFromFolder:(nonnull NSString *)folderPath
         withCompletionBlock:(void (^)(NSError * _Nullable error))completionBlock;

/// Loads and caches the necessary media assets.
///
/// - Parameter mediaFileName: The media filename.
/// - Parameter completionBlock: Completion block.
- (void)loadMediaFileNamed:(NSString*)mediaFileName
       withCompletionBlock:(void (^)(AVPlayerItem *_Nullable item, NSError *_Nullable error))completionBlock;

/// Loads and caches the image gallery.
///
/// - Parameter imageGallery: The image gallery.
/// - Parameter completionBlock: Completion block.
-(void)loadImageGallery:(INImageGallery*)imageGallery
    withCompletionBlock:(void (^)(NSMutableArray<INImageAsset *> *imageAssets, NSError *_Nullable error))completionBlock;

/// Loads and caches the image synchronously specified by image name.
///
/// - Parameter imageName: The image file name.
-(UIImage *)loadImageSynchronouslyNamed:(NSString *)imageName;


-(void)postImageAsset:(INImageAsset*)asset withCompletionBlock:(void (^)(INImageAsset *_Nullable imageAssets, NSError *_Nullable error))completionBlock;
-(void)loadImageGalleryWithId:(NSNumber *) galleryId
          withCompletionBlock:(void (^)(INImageGallery *_Nullable gallery, NSError *_Nullable error))completionBlock;

#pragma mark - Infomats and infomat points

/// Binds infomat with license key and scanned code.
///
/// - Parameter infomat: The infomat to bind.
/// - Parameter code: The scanned code.
/// - Parameter completionBlock: Completion block.
- (void)bindInfomat:(INInfomat*)infomat
           withCode:(NSString*)code
 andCompletionBlock:(void (^_Nullable)(NSError *_Nullable error))completionBlock;

#pragma mark - Trackpoints

/// Saves the devices position on the service for further processing and use in the marketing section.
///
/// - Parameter trackPoint: The INTrackPoint object.
/// - Parameter completionBlock: Completion block.
- (void)saveTrackpoint:(INTrackPoint*)trackPoint
   withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Provides remote navigation mechanism.
///
/// - Parameter beaconPoints: Array of INBeaconPoint objects.
/// - Parameter completionBlock: Completion block.
- (void)getPositionWithBeacons:(NSMutableArray*)beaconPoints
           withCompletionBlock:(void (^)(INPosition2 *_Nullable position, NSError *_Nullable error))completionBlock;

#pragma mark - Speech recognition methods

/// Records and sends audio for analysis.
///
/// - Parameter building: The building.
/// - Parameter progressBlock: Progress block.
/// - Parameter completionBlock: Completion block.
- (void)sendVoiceForBuilding:(INBuilding *)building
           withProgressBlock:(void (^)(float))progressBlock
          andCompletionBlock:(void (^)(NSMutableArray<INOwner *> *_Nullable owners, NSMutableArray<INIconDescription *> *_Nullable iconDescriptions, NSError *_Nullable error))completionBlock;

#pragma mark - Augmented reality methods

/// Loads markers for trackpoint.
///
/// - Parameter building        `INBuilding` object.
/// - Parameter graphPoint      `INGraphPoint` object.
/// - Parameter completionBlock Completion block.
- (void)loadMapARPoints:(INBuilding*)building
          forGraphPoint:(INGraphPoint*)graphPoint
    withCompletionBlock:(void (^)(NSMutableArray<INMapARPoint *> *mapARPoints, NSError *_Nullable error))completionBlock;


/// Loads and caches 3D models.
///
/// - Parameter building: The building.
/// - Parameter completionBlock: Completion block.
- (void)loadBuildingModel3D:(INBuilding*)building
        withCompletionBlock:(void (^)(NSMutableArray<INBuildingModel3D *> *model))completionBlock;

/// Loads and caches .scn 3D models.
///
/// - Parameter model3D: The `INBuildingModel3D` object.
/// - Parameter progressBlock: Progress block.
/// - Parameter completionBlock: Completion block.
- (void)load3DModel:(INBuildingModel3D *)model3D
  withProgressBlock:(void (^)(int64_t receivedSize, int64_t expectedSize))progressBlock
 andCompletionBlock:(void (^)(NSString *_Nullable pathModel))completionBlock;

/// Loads an array of `INGeoARPoint` objects from the current application using latitude and longitude limitations.
///
/// - Parameter latitude: The maximum latitude.
/// - Parameter longitude: The maximum longitude.
/// - Parameter range: The range for latitude and longitude.
/// - Parameter completionBlock: The completion block that returns an array of `INGeoARPoint` objects if successful or an error otherwise.
- (void)loadGeoARPointsWithLatitude:(double)latitude
                          longitude:(double)longitude
                              range:(double)range
                 andCompletionBlock:(void (^)(NSMutableArray *geoARPoints, NSError *_Nullable error))completionBlock;

/// Loads an array of `INGeoARPoint` objects from the current application.
///
/// - Parameter geoARPoints: The existing GeoPoints that may be merged with new ones.
/// - Parameter completionBlock: The completion block that returns an array of `INGeoARPoint` objects if successful or an error otherwise.
- (void)downloadGeoARPoints:(NSMutableArray*)geoARPoints
        withCompletionBlock:(void (^)(NSMutableArray *geoARPoints, NSError *_Nullable error))completionBlock;

/// Loads and caches an image from assets specified by the image name.
///
/// - Parameter imageName: Image filename.
/// - Parameter progressBlock: Optional callback for handling the progress of loading the image. Returns the received size and expected size of the image.
/// - Parameter completionBlock: Completion block.
-(void)loadARTargetImageNamed:(NSString *)imageName
    withProgressBlock:(nullable void (^)(NSInteger receivedSize, NSInteger expectedSize))progressBlock
   andCompletionBlock:(void (^)(UIImage *_Nullable image, NSError *_Nullable error))completionBlock;

- (void)downloadCompressed3DModelForAsset:(INARAsset *)asset completion:(void (^)(NSString * _Nullable filePath))completion;
- (void)loadArAssetWithId:(NSNumber *)applicationId
      withCompletionBlock:(void (^)(INARAsset* _Nullable articles,  NSError*  _Nullable errors))completionBlock;
#pragma mark - Local and Beacon notifications

/// Updates an array of `INBeaconNotification` bojects.
///
/// - Parameter completionBlock: Completion block that returns an array of `INBeaconNotification` and array of `INLocalNotificationSchedule` objects or error else.
- (void)updateNotificationsOfApplicationsWithCompletionBlock:(void (^)(NSMutableArray<INBeaconNotification *> *beaconNotifications, NSMutableArray *localNotificationsSchedules, NSError *_Nullable error))completionBlock;


/// Saves a beacon notification stamp.
///
/// - Parameter beaconNotificationStamp: The `INBeaconNotificationStamp` object to save.
/// - Parameter completionBlock: Completion block that returns an error if one occurs.
- (void)saveBeaconNotificationStamp:(INBeaconNotificationStamp*)beaconNotificationStamp
                withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Saves a local notification stamp.
///
/// - Parameter localNotificationStamp: The `INLocalNotificationStamp` to save.
/// - Parameter completionBlock: Completion block that returns an error if one occurs.
- (void)saveLocalNotificationStamp:(INLocalNotificationStamp*)localNotificationStamp
               withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Tasks

/// Loads tasks for an application.
///
/// - Parameter application: The `INApplication` object.
/// - Parameter completionBlock: Completion block that returns an array of `INTask` objects or an error.
//- (void)loadTasksOfApplication:(INApplication*)application
//           withCompletionBlock:(void (^)(NSMutableArray *tasks, NSError *_Nullable error))completionBlock;

#pragma mark - Action

/// Saves an action stamp.
///
/// - Parameter actionName: The `INAction` object.
/// - Parameter completionBlock: Completion block.
- (void)saveActionStamp:(NSString*)actionName
    withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Sends raw beacons.
///
/// - Parameter rawBeacon: Array of `INRawBeacon` objects.
/// - Parameter completionBlock: Completion block.
- (void)sendBeacons:(INRawBeacon *)rawBeacon
withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Procedure

/// Saves a procedure.
///
/// - Parameter procedure: The `INProcedure` object to save.
/// - Parameter completionBlock: Completion block.
- (void)saveProcedure:(INProcedure*)procedure
  withCompletionBlock:(void (^)(INProcedure *_Nullable procedure, NSError *_Nullable error))completionBlock;


/// Loads a procedure by its UUID.
///
/// - Parameter completionBlock: Completion block that returns the `INProcedure` object if successful or an error.
- (void)loadSharedProcedure:(NSString*)uuid
        withCompletionBlock:(void (^)(INProcedure *_Nullable procedure, NSError *_Nullable error))completionBlock;

#pragma mark - Mobile Banners

/// Loads an INMobileBannerSchedule object.
///
/// - Parameter building: The building to load `INMobileBannerSchedule` for.
/// - Parameter completionBlock: Completion block.
- (void)loadMobileBannerSchedule:(INBuilding*)building
             withCompletionBlock:(void (^)(INMobileBannerSchedule *_Nullable mobileBannerSchedule, NSError *_Nullable error))completionBlock;

/// Loads an INMobileBannerAsset object from given INMobileBannerAsset.
///
/// - Parameter mobileBannerAsset: The `INMobileBannerAsset` to load.
/// - Parameter completionBlock: Completion block.
- (void)loadMobileBannerAssetImage:(INMobileBannerAsset*)mobileBannerAsset
                andCompletionBlock:(void (^)(UIImage *_Nullable image, NSError *_Nullable error))completionBlock;

/// Saves an `INMobileBannerAsset` object.
///
/// - Parameter mobileBannerAsset: The `INMobileBannerAsset` to save.
/// - Parameter completionBlock: Completion block.
- (void)saveMobileBannerStamp:(INMobileBannerAsset*)mobileBannerAsset
           andCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Contacts

/// Adds a contact to the current `INProfile` by contact email.
///
/// - Parameter email: The email of the contact to add.
/// - Parameter completionBlock: Completion block.
- (void)addContact:(NSString*)email withCompletionBlock:(void (^)(INContact *_Nullable contact, NSError *_Nullable error))completionBlock;

/// Loads an array of contacts from the current `INProfile`.
///
/// - Parameter completionBlock: Completion block that returns an array of `INContact` objects if success and error else.
- (void)loadContactsWithCompletionBlock:(void (^)(NSMutableArray *objects, NSError *_Nullable error))completionBlock;

/// Removes a contact from the contacts list of INProfile.
///
/// - Parameter contact: The contact to remove.
/// - Parameter completionBlock: Completion block.
- (void)removeContact:(INContact*)contact withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Conversations

/// Loads an array of conversations from the current `INProfile`.
///
/// - Parameter completionBlock: Completion block that returns an array of `INConversation` objects if success and error else.
- (void)loadConversationsWithCompletionBlock:(void (^)(NSMutableArray<INConversation *> *objects, NSError *_Nullable error))completionBlock;

/// Creates and saves a conversation.
///
/// - Parameter conversationName: The name of the conversation.
/// - Parameter image: The image of the conversation.
/// - Parameter contacts: The list of selected contacts.
/// - Parameter completionBlock: Completion block.
- (void)createConversationWithTitle:(NSString*)conversationName
                              image:(UIImage*)image
                           contacts:(NSMutableArray*)contacts
                 andCompletionBlock:(void (^)(INConversation *_Nullable conversation, NSError *_Nullable error))completionBlock;

/// Updates conversation.
///
/// - Parameter conversation: Conversation to update.
/// - Parameter string: Updated title.
/// - Parameter image: Updated image.
/// - Parameter completionBlock: Completion block.
-(void)updateConversation:(INConversation*)conversation
                withTitle:(NSString*)string
                    image:(UIImage*)image
       andCompletionBlock:(void (^)(INConversation *_Nullable conversation, NSError *_Nullable error))completionBlock;

/// Removes conversation from conversations list of `INProfile`.
///
/// - Parameter conversation: Conversation to remove.
/// - Parameter completionBlock: Completion block.
- (void)deleteConversation:(INConversation*)conversation
       withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Messages

/// Loads messages from `INConversation` object.
///
/// - Parameter conversation: Conversation to remove.
/// - Parameter pageSize: Number of messages in one page.
/// - Parameter page: Index of page.
/// - Parameter completionBlock: Completion block that returns an array of `INMessage` objects or error else.
- (void)loadMessages:(INConversation*)conversation
        withPageSize:(NSNumber*)pageSize
               page :(NSString*)page
  andCompletionBlock:(void (^)(NSMutableArray *objects,int remoteCount, int localCount, NSError *_Nullable error))completionBlock;

/// Creates `INMessage` object and push it.
///
/// - Parameter text: Message text.
/// - Parameter conversation: Conversation where to create message.
/// - Parameter completionBlock: Completion block.
- (void)createMessage:(NSString*)text
      forConversation:(INConversation*)conversation
  withCompletionBlock:(void (^)(INMessage *_Nullable message, NSError *_Nullable error))completionBlock;

/// Edits messages from `INConversation` object.
///
/// - Parameter message: Message to edit.
/// - Parameter text: Edited message text.
/// - Parameter completionBlock: ComplCompletion block.
- (void)editMessage:(INMessage*)message
           withText:(NSString*)text
 andCompletionBlock:(void (^)(INMessage *_Nullable message, NSError *_Nullable error))completionBlock;

/// Deletes messages.
///
/// - Parameter message: Message to delete.
/// - Parameter completionBlock: Completion block.
- (void)deleteMessage:(INMessage*) message withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Conversation member

/// Adds a conversation members to `INConversation`.
///
/// - Parameter contacts: Array of `INContact`.
/// - Parameter conversation: Conversation to add members.
/// - Parameter completionBlock: Completion block.
- (void)addConversationMembers:(NSMutableSet*)contacts
                toConversation:(INConversation*)conversation
           withCompletionBlock:(void (^)(INConversation *_Nullable conversation, NSError *_Nullable error))completionBlock;

/// Removes a conversation member from the linked `INConversation`.
///
/// - Parameter conversationMember: The member to remove.
/// - Parameter completionBlock: Completion block.
- (void)removeConversationMember:(INConversationMember*)conversationMember
             withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - Video Call

/// Posts an `INSessionDescription` object that was made from the given `RTCSessionDescription`.
///
/// - Parameter sessionDescription: The session description.
/// - Parameter contact: The recipient contact.
/// - Parameter completionBlock: Completion block.
- (void)sendSessionDescriptionWithType:(NSString*)type
                               andDate:(NSString*)date
                    forContact:(INContact*)contact
           withCompletionBlock:(void (^)(INSessionDescription *_Nullable remoteSessionDescription, NSError *_Nullable error))completionBlock;
//- (void)sendSessionDescription:(RTCSessionDescription*)sessionDescription
//                    forContact:(INContact*)contact
//           withCompletionBlock:(void (^)(INSessionDescription *_Nullable remoteSessionDescription, NSError *_Nullable error))completionBlock;

/// Loads an `INSessionDescription` object using.
///
/// - Parameter sessionDescription: The session description to load.
/// - Parameter completionBlock: Completion block.
- (void)loadSessionDescription:(INSessionDescription*)sessionDescription
           withCompletionBlock:(void (^)(INSessionDescription *_Nullable sessionDescription, NSError *_Nullable error))completionBlock;

/// Posts an `RTCICECandidate` object using the contact as the recipient.
///
/// - Parameter iceCandidate: The `RTCICECandidate` to post.
/// - Parameter contact: The contact that will be used as the recipient.
/// - Parameter completionBlock: Completion block.
- (void)sendIceCandidateWithSdpMid:(NSString*)sdpMid
                     withSdp:(NSString*)sdp
                 withSdpMLineIndex:(NSNumber *)sdpMLineIndex
              forContact:(INContact*)contact
     withCompletionBlock:(void (^)(INIceCandidate *_Nullable iceCandidate, NSError *_Nullable error))completionBlock;

//- (void)sendIceCandidate:(RTCICECandidate*)iceCandidate
//              forContact:(INContact*)contact
//     withCompletionBlock:(void (^)(INIceCandidate *_Nullable iceCandidate, NSError *_Nullable error))completionBlock;

#pragma mark - MTTrackers

/// Loads an array of `INMTTracker` objects.
///
/// - Parameter building: Building from which will be downloaded Trackers.
/// - Parameter completionBlock: Completion block that returns an array of `INMTTracker` object if success or error else.
- (void)loadMTTrackersOfBuilding:(INBuilding *)building
             withCompletionBlock:(void (^)(NSMutableArray<INMTTracker *> *_Nullable trackers, NSError *_Nullable error))completionBlock;

/// Loads an array of `INMTTracker` objects from given array of `INBuilding`.
///
/// - Parameter buildings Buidlings from which will be downloaded Trackers.
/// - Parameter completionBlock Completion block that returns an array of `INMTTracker` object if success or error else.
- (void)loadMTTrackersOfBuildings:(NSMutableArray<INBuilding *> *)buildings
             withCompletionBlock:(void (^)(NSMutableArray<INMTTracker *> *_Nullable trackers, NSError *_Nullable error))completionBlock;

/// Loads an array of `INMTTracker` objects from  `INApplication`.
///
/// - Parameter application: Application from which will be downloaded Trackers.
/// - Parameter completionBlock: Completion block that returns an array of `INMTTracker` object if success or error else.
- (void)loadMTTrackersOfApplication:(INApplication *)application
             withCompletionBlock:(void (^)(NSMutableArray<INMTTracker *> *_Nullable trackers, NSError *_Nullable error))completionBlock;

#pragma mark - Messenger Web socket

/// Starts Messenger Web Socket connect that listens for messages and conversation members.
///
/// - Note: See INMessengerServiceDelegate protocol.
- (void)messengerWebSocketConnect;

/// Stops Messenger Web Socket connect that listens for messages and conversation members.
///
/// - Note: See INMessengerServiceDelegate protocol.
- (void)messengerWebSocketClose;

#pragma mark - Tracking zone intersection web socket

/// Starts Tracking Web Socket connect that listens for `INUserTrackPoint` and `INTrackPoint`.
///
/// - Note: See INZoneIntersectionServiceDelegate protocol.
- (void)trackingNotificationsWebSocketConnectWithBuilding:(INBuilding *)building;

/// Stops Tracking Web Socket connect that listens for `INUserTrackPoint` and `INTrackPoint`.
///
/// - Note: See INZoneIntersectionServiceDelegate protocol.
- (void)trackingNotificationsWebSocketClose;

#pragma mark - Google Maps

/// Calculates the route on Google Map.
///
/// - Parameter query: Query parameters.
/// - Parameter completionBlock: Completion block.
- (void)fetchPolylineWithQuery:(NSDictionary *)query
            andCompletionBlock:(void (^)(id _Nullable responseObject, NSError *_Nullable error))completionBlock;

#pragma mark - OSRM
/// Sends a request to the cloud to calculate the global outdoor route.
///
/// - Parameter origin: origin point.
/// - Parameter destination: destination point.
/// - Parameter profile: Type of route to calculate - driving, bike etc.
/// - Parameter completionBlock: Completion block that returns a JSON routes object, that uses for initializing `MBRoute`.
///
/// - Note: See MBRoute class.
- (void)fetchDirections:(CLLocationCoordinate2D)origin
                       :(CLLocationCoordinate2D)destination
                       :(NSString*)profile
     andCompletionBlock:(void (^)(id _Nullable responseObject, NSError *_Nullable error))completionBlock;

#pragma mark - Raw measurements

/// Uploads Raw Measurement files for Building.
///
/// - Parameter building: building for which Raw Measurement files will be uploaded.
/// - Parameter completionBlock: Completion block that returns optional error.
- (void)uploadRawMeasurementFilesForBuilding:(INBuilding*)building
                       withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

/// Uploads RadioMapTrack Measurement files for Building.
///
/// - Parameter building: building for which Raw Measurement files will be uploaded.
/// - Parameter track: track for which Raw Measurement files will be uploaded.
/// - Parameter completionBlock: Completion block that returns optional error.
- (void)uploadRadioMapTrackMeasurementFilesForBuilding:(INBuilding*)building
                                             withTrack:(INRadioMapTrack *)track
                                   withCompletionBlock:(void (^)(INRadioMapTrack *_Nullable radioTrack , NSError *_Nullable error))completionBlock;

#pragma mark - Alarm points

/// Sends `INAlarmPoint` object.
///
/// - Parameter alarmPoint: alarm object.
/// - Parameter completionBlock: Completion block that returns optional error.
- (void)sendAlarmPoint:(INAlarmPoint*)alarmPoint
   withCompletionBlock:(void (^)(NSError *_Nullable error))completionBlock;

#pragma mark - WIFI Radar

/// Fetchs an array of `INWIFIRadar` objects from an application.
///
/// - Parameter application: application from which wifi radars will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of `INWIFIRadar` objects or error.
- (void)fetchWifiRadarsFromApplication:(INApplication *)application
                   withCompletionBlock:(void (^)(NSMutableArray<INWIFIRadar *> *radars, NSError *_Nullable error))completionBlock;

/// Fetchs an array of `INWIFIRadar` objects from an array of buildings.
///
/// - Parameter buildings: array of buildings from which wifi radars will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of `INWIFIRadar` objects or error.
- (void)loadWifiRadarsFromBuildings:(NSMutableArray<INBuilding *> *)buildings
                   withCompletionBlock:(void (^)(NSMutableArray<INWIFIRadar *> *_Nullable radars, NSError *_Nullable error))completionBlock;

#pragma mark - Control Module

/// Fetchs an array of `INControlModule` objects using `INApplication` as filter.
///
/// - Parameter application: application from which control modules will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of `INControlModule` objects or error.
- (void)fetchControlModulesFromApplication:(INApplication *)application
                   withCompletionBlock:(void (^)(NSMutableArray<INControlModule *> *_Nullable controlModules, NSError *_Nullable error))completionBlock;

/// Fetchs an array of `INControlModule` objects using `INBuilding` as filter.
///
/// - Parameter buildings: array of buildings from which control modules will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of `INControlModule` objects or error.
- (void)fetchControlModulesWithBuildings:(NSMutableArray<INBuilding *> *)buildings
                   withCompletionBlock:(void (^)(NSMutableArray<INControlModule *> *_Nullable controlModules, NSError *_Nullable error))completionBlock;

/// Fetchs an array of `INControlModule` objects using `INControlModule` Id as filter.
///
/// - Parameter identifier: identifier of `INControlModule`.
/// - Parameter application: INApplication object.
/// - Parameter completionBlock: Completion block that returns an array of `INControlModule` objects or error.
- (void)fetchControlModuleWithId:(NSNumber *)identifier
                     application:(INApplication *)application
             withCompletionBlock:(void (^)(NSMutableArray<INControlModule *> *_Nullable controlModules, NSError *_Nullable error))completionBlock;

/// Post an `INControlModule` object.
///
/// - Parameter controlModule: edited/newly created Control Module.
/// - Parameter completionBlock: Completion block that returns an `INControlModule` object or error.
- (void)updateControlModule:(INControlModule *)controlModule
        withCompletionBlock:(void (^)(INControlModule *_Nullable updatedModule, NSError *_Nullable error))completionBlock;

#pragma mark - AOA Locator

/// Fetchs an array of `INAOALocator` objects using `INApplication` as filter.
///
/// - Parameter application: application from which control modules will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of `INAOALocator` objects or error.
- (void)fetchAOALocatorsFromApplication:(INApplication *)application
                   withCompletionBlock:(void (^)(NSMutableArray<INAOALocator *> *AOALocators, NSError *_Nullable error))completionBlock;

#pragma mark - AOA Gateway

/// Fetchs an array of `INAOAGateway` objects using `INApplication` as filter.
///
/// - Parameter application: application from which gateways will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of `INAOAGateway` objects or error.
- (void)fetchAOAGatewaysFromApplication:(INApplication *)application
                   withCompletionBlock:(void (^)(NSMutableArray<INAOAGateway *> *AOAGateways, NSError *_Nullable error))completionBlock;

#pragma mark - INAOATagModel

/// Fetchs an array of 'INAOATagModel' objects using 'INApplication' as filter.
///
/// - Parameter application: application from which gateways will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of 'INAOATagModel' objects or error.
- (void)fetchAOATagModelsFromApplication:(INApplication *)application
                     withCompletionBlock:(void (^)(NSMutableArray<INAOATagModel *> *_Nullable tagModels, NSError *_Nullable error))completionBlock;

#pragma mark - INAOATag

/// Fetchs an array of 'INAOATag' objects using 'INApplication' as filter.
///
/// - Parameter application: application from which gateways will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of 'INAOATag' objects or error.
- (void)fetchAOATagsFromApplication:(INApplication *)application
                withCompletionBlock:(void (^)(NSMutableArray<INAOATag *> *aoaTags, NSError *_Nullable error))completionBlock;


#pragma mark - INRadioMap

/// Fetchs an array of 'INRadioMap' objects using 'INBuilding' as filter.
///
/// - Parameter application: building from which radiomaps will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of 'INRadioMap' objects or error.
- (void)fetchRadioMapsFromBuilding:(INBuilding *)building
                withCompletionBlock:(void (^)(NSMutableArray<INRadioMap *> *radioMaps, NSError *_Nullable error))completionBlock;

/// Fetchs an array of 'INRadioMapTrack' objects using 'INBuilding' as filter.
///
/// - Parameter application: building from which radiomaps will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of 'INRadioMap' objects or error.
- (void)fetchRadioMapTracksFromBuilding:(INBuilding *)building
                withCompletionBlock:(void (^)(NSMutableArray<INRadioMapTrack *> *radioMaps, NSError *_Nullable error))completionBlock;

- (void)fetchRadioMapTracksFromBuilding:(INBuilding *)building andRadioMap:(INRadioMap *)radioMap
                withCompletionBlock:(void (^)(NSMutableArray<INRadioMapTrack *> *radioMaps, NSError *_Nullable error))completionBlock;

/// Puts an `INRadioMapTrack` object.
///
/// - Parameter radioTrack: edited/newly created RadioMapTrack.
/// - Parameter completionBlock: Completion block that returns an `INRadioMapTrack` object or error.
- (void)updateRadioTrack:(INRadioMapTrack *)radioTrack
        withCompletionBlock:(void (^)(INRadioMapTrack *_Nullable updatedTrack, NSError *_Nullable error))completionBlock;

/// Puts  an `INRadioMapTrack` object.
///
/// - Parameter radioTrack: edited/newly created RadioMapTrack.
/// - Parameter completionBlock: Completion block that returns an `INRadioMapTrack` object or error.
- (void)postRadioTrack:(INRadioMapTrack *)radioTrack
        withCompletionBlock:(void (^)(INRadioMapTrack *_Nullable updatedTrack, NSError *_Nullable error))completionBlock;

#pragma mark - Online route calculation
/// Fetchs an array of 'INRadioMap' objects using 'INBuilding' as filter.
///
/// - Parameter building:
/// - Parameter graph:
/// - Parameter startGraphPoint:
/// - Parameter endGraphPoint:
/// - Parameter completionBlock:
- (void)loadRouteInBuilding:(INBuilding*)building
                  withGraph:(INGraph*)graph
             fromGraphPoint:(INGraphPoint*)startGraphPoint
               toGraphPoint:(INGraphPoint*)endGraphPoint
        withCompletionBlock:(void (^)(NSMutableArray *routePoints, NSError *error))completionBlock;

- (void)loadRoomsOfBuilding:(INBuilding*)building
        withCompletionBlock:(void (^)(NSMutableArray *rooms, NSError *error))completionBlock;

- (void)loadOwnersOfBuilding:(INBuilding*)building
         withCompletionBlock:(void (^)(NSMutableArray *owners, NSError *error))completionBlock;
- (void)loadFloorsOfBuilding:(INBuilding*)building
         withCompletionBlock:(void (^)(NSMutableArray *floors, NSError *error))completionBlock;


/// saveLastSeenBeacon
 /// - Parameter INBeacon:

- (void)saveLastSeenBeacon:(INBeacon *)beacon;


/// in development
-(void) cleanDB;

-(INCoreConfiguration *)getConfiguration;


#pragma mark - Icons Of Building

/// Fetchs an array of 'icons' objects using 'INBuilding' as filter.
/// - Parameter building: building from which icons will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of '[building Icons]' objects or error.

- (void)loadIconsOfBuilding:(INBuilding*)building
        withCompletionBlock:(void (^)(NSMutableArray *icons, NSError *error))completionBlock;

#pragma mark - Booking


/// Fetchs an array of 'INBookingModel' objects using 'INBuilding' as filter.
///
/// - Parameter building: building from which Booking will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of 'INBookingModel' objects or error.
- (void)loadBookingOfBuilding:(INBuilding*)building
          withCompletionBlock:(void (^)(NSMutableArray *bookingsOfBuilding, NSError *error))completionBlock;

/// Set new booking with INBookingModel.
///
/// - Parameter model: set model for post
/// - Parameter completionBlock: Completion block that returns a 'INBookingModel' object or error.
- (void)sendNewBookingWithModel:(INBookingModel*)model
            withCompletionBlock:(void (^)(INBookingModel * _Nullable, NSError * _Nullable))completionBlock;

/// Fetchs an array of 'INBookingModel' objects using 'UUID' as filter.
///
/// - Parameter uuid: downloading all the booking of current user
/// - Parameter completionBlock: Completion block that returns an array of 'INBookingModel' objects or error.
- (void)loadBookingWithCreatorUuid:(NSString*)uuid
               withCompletionBlock:(void (^)(NSMutableArray *bookingsOfBuilding, NSError *error))completionBlock;


#pragma mark - Tasks/Requests

/// Fetchs an array of 'INTasksModel' and array of 'INTaskStatus' and 'INBuilding' objects using 'INBuilding' as filter.
///
/// - Parameter building: building from which Tasks will be fetched.
/// - Parameter completionBlock: Completion block that returns an array of 'INTasksModel' and array of 'INTaskStatus'  and INBuilding  objects or error.
- (void)loadTasksWithBuilding:(INBuilding*)building
              processBlock:(void (^)(int count,NSError  * _Nullable error))processBlock
              completionBlock:(void (^)(NSMutableArray<INTasksModel *> * _Nullable tasksArray, NSMutableArray<INTaskStatus *> * _Nullable statusesArray, INBuilding* building, NSArray<NSError *> * _Nullable errors))completionBlock;

/// Fetchs an array of 'INTasksModel' objects using 'UUID' as filter.
///
/// - Parameter uuid: downloading all the tasks of current user
/// - Parameter completionBlock: Completion block that returns an array of 'INTasksModel' objects or error.
- (void)loadTaskForProfileWithFuilter: (NSMutableDictionary *)fuilter
                  withCompletionBlock:(void (^)(NSMutableArray<INTasksModel *> *tasksArray, NSError *error))completionBlock;

/// Fetchs an array of 'INTaskUsers' objects using 'INTasksModel' as filter.
///
/// - Parameter task: downloading all users  of current task
/// - Parameter completionBlock: Completion block that returns an array of 'INTaskUsers' objects or error.
- (void)loadUserOfTask: (INTasksModel *)task
  withCompletionBlock:(void (^)(NSMutableArray<INTaskUsers *> *users, NSError *error))completionBlock;

/// Create new task with images.
///
/// - Parameter task: set new task
/// - Parameter images: set images for current task
/// - Parameter completionBlock: Completion block that returns an a 'task' object or error.
- (void)createNewTask: (INTasksModel *)task
           withImages:(NSArray<UIImage *>*) images
 withProcessBlock:(void (^)(int count, NSError *_Nullable error))processBlock
 withCompletionBlock:(void (^)(INTasksModel *_Nullable task, NSError *_Nullable error))completionBlock;


/// Update task with task.
///
/// - Parameter task: set updated task
/// - Parameter completionBlock: Completion block that returns an a 'task' object or error.
- (void)updateTask: (INTasksModel *)task
withCompletionBlock:(void (^)(INTasksModel *task, NSError * _Nullable error))completionBlock;

/// Post task images for current user.
///
/// - Parameter user: the user whose images
/// - Parameter images: new images
/// - Parameter completionBlock: Completion block that returns an array of 'INImageAsset' object or error.
- (void)postImagesWithTaskUser: (INTaskUsers *)user
           withImages:(NSArray<UIImage *>*) images
          withCompletionBlock1:(void (^)(NSMutableArray<INImageAsset *> *_Nullable imageAssets, NSMutableArray<NSError *> *_Nullable errors))completionBlock;




/// Post assignee for task.
///
/// - Parameter task: the task to which the assignee is attached
/// - Parameter completionBlock: Completion block that returns a 'INTaskUsers' object or error.
- (void)setAssigneeForTask: (INTasksModel *)task
       withCompletionBlock:(void (^)(INTaskUsers *user, NSError * _Nullable error))completionBlock;

/// Fetch task history
///
/// - Parameter taskId: taskId fo sorting
/// - Parameter completionBlock: Completion block that returns an array of 'INTaskResponseModel' object or error.
- (void)taskResponseHistory:(NSNumber *)taskId
        withCompletionBlock:(void (^)(NSMutableArray<INTaskResponseModel *> *model, NSError * _Nullable error))completionBlock;

/// Fetch user subscription
///
/// - Parameter profile: need INGhostProfile fp sorting
/// - Parameter completionBlock: Completion block that returns a 'INUserSubscription' object or error.
- (void)loadUserSubscription:(INGhostProfile *)profile
         withCompletionBlock:(void (^)(INUserSubscription* _Nullable subscriptions, NSError * _Nullable error))completionBlock;


/// Fetch task reviews
///
/// - Parameter taskId: need taskId for sorting
/// - Parameter completionBlock: Completion block that returns array of 'INTaskReviews' objects or error.
- (void)loadTaskReviews:(NSMutableDictionary *)fuilter
    withCompletionBlock:(void (^)(NSMutableArray<INTaskReviews *>* _Nullable model, NSError * _Nullable error))completionBlock;

/// Fetch task Type
/// - Parameter completionBlock: Completion block that returns array of 'INTaskType' objects or error.
- (void)loadAllTaskTypeWithCompletionBlock:(void (^)(NSMutableArray<INTaskType *>* _Nullable models, NSError * _Nullable error))completionBlock;

/// Fetch rooms and owners and floors
///
/// - Parameter building: building where rooms and owners and floors
/// - Parameter completionBlock: Completion block that returns a 'INBuilding' object or error.
- (void)loadRoomsOAndOwnersAndFloors:(INBuilding*)building
   withProgressBlock:(void (^)(Class layerClass, NSMutableArray *objects))progressBlock
                  andCompletionBlock:(void (^)(INBuilding* building, NSError *_Nullable error))completionBlock;



- (void)loadAllCitysWithCompletionBlock:(void (^)(NSMutableArray<INCity *>* _Nullable model, NSError * _Nullable error))completionBlock;
- (void)searchCityWith:(NSString *)cityName
   withCompletionBlock:(void (^)(NSMutableArray<INCity *>* _Nullable model, NSError * _Nullable error))completionBlock;
- (void)loadCitysWith:(NSNumber *)Id
  withCompletionBlock:(void (^)(NSMutableArray<INCity *>* _Nullable model, NSError * _Nullable error))completionBlock;

- (void)loadAllCountrysWithCompletionBlock:(void (^)(NSMutableArray<INCountry *>* _Nullable model, NSError * _Nullable error))completionBlock;
- (void)searchCountryWith:(NSString *)countryName
      withCompletionBlock:(void (^)(NSMutableArray<INCountry *>* _Nullable model, NSError * _Nullable error))completionBlock;
- (void)loadCountrysWith:(NSNumber *)Id
     withCompletionBlock:(void (^)(NSMutableArray<INCountry *>* _Nullable model, NSError * _Nullable error))completionBlock;

- (void)loadQuizzes:(NSNumber *)applicationId WithCompletionBlock:(void (^)(NSMutableArray<INQuizzes *>* _Nullable model, NSError * _Nullable error))completionBlock;
- (void)postQuizzAnswers:(NSArray<INCompletedQuizzes *>*)answers completionBlock:(void (^)(NSArray< NSError* > * _Nullable errors))completionBlock;

- (void)loadStories:(NSNumber *)applicationId WithCompletionBlock:(void (^)(NSArray<INStories *>* _Nullable stories, NSArray<INStoryGroups *> *_Nullable storyGroups, NSArray< NSError* > * _Nullable errors))completionBlock;

- (void)usersGroupsAndUserGroupOf:(NSNumber *)applicationId
                  WithCompletionBlock:(void (^)(NSArray<INUserGroups *>* _Nullable userGroups, NSArray<INUsersGroups *>*_Nullable usersGroups, NSArray< NSError* > * _Nullable errors))completionBlock;


- (void)loadUserZoneOfApplication:(NSNumber *)applicationId
              withCompletionBlock:(void (^)(NSArray<INUserZones *>* _Nullable userGroups, NSArray< NSError* > * _Nullable errors))completionBlock;


- (void)loadArticlesOfApplication:(NSNumber *)applicationId
              withCompletionBlock:(void (^)(NSArray<INArticles *>* _Nullable articles,  NSError*  _Nullable errors))completionBlock;

#pragma mark - Cancelation and deletion



/// Delete all update times for all object services.
- (void)deleteAllUpdateTimes;

/// Cancel all requests for all object services.
- (void)cancelAllRequests;

/// Clean image cache.
- (void)cleanCachedImage;

@end

NS_ASSUME_NONNULL_END

#endif
