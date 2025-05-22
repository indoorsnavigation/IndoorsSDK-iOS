//
//  INCoordinateBounds.h
//  IndoorsSDK
//
//  Created by Mac on 09.08.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INCoordinateBounds_h
#define INCoordinateBounds_h

#import <CoreLocation/CLLocation.h>

/** A rectangular area as measured on a two-dimensional map projection. */
typedef struct __attribute__((objc_boxable)) INCoordinateBounds {
    CLLocationCoordinate2D sw;
    CLLocationCoordinate2D ne;
} INCoordinateBounds;

typedef struct __attribute__((objc_boxable)) INCameraPosition {
    CLLocationCoordinate2D centerCoordinate;
    float mapCameraLookingDistance;
    float mapCameraLookingPitch;
    float mapCameraLookingHeading;
    float maxPitch;
    float minPitch;
    
    BOOL preventOutOfPitch;
} INCameraPosition;



#endif /* INCoordinateBounds_h */
