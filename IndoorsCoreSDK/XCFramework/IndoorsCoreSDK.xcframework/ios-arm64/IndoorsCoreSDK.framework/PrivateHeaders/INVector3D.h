//
//  INVector3D.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INVector3D_
#define _INVector3D_

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INVector3D : NSObject
{
@private
    double X, Y, Z;
}

@property(nonatomic, assign) double X,Y,Z;

-(instancetype)initWithX:(double)xValue Y:(double)yValue Z:(double)zValue;

-(void)setValuesWithX:(double)x Y:(double)y Z:(double)z;

-(INVector3D*)add:(INVector3D*)value;
-(INVector3D*)sub:(INVector3D*)value;
-(INVector3D*)minus;
-(INVector3D*)div:(INVector3D*)value;
-(INVector3D*)divf:(double)value;
-(INVector3D*)mult:(INVector3D*)value;
-(INVector3D*)multf:(double)value;

-(double)dot:(INVector3D*)value;
-(INVector3D*)crossProduct:(INVector3D*)value;

-(double)magnitude;
-(double)distance:(INVector3D*)value;
-(void)normalize;

@end

NS_ASSUME_NONNULL_END

#endif
