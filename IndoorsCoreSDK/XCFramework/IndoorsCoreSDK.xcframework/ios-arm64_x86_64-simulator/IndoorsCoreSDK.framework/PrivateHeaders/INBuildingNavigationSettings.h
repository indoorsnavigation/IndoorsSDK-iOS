//
//  INBuildingNavigationSettings.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INBuildingNavigationSettings_
#define _INBuildingNavigationSettings_

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores information about building navigation settings.
 */
@interface INBuildingNavigationSettings : INBaseObject<NSCopying> 

@property (nonatomic, strong) NSNumber *BuildingId;
@property (nonatomic, strong) NSNumber *Editor;

@property (nonatomic, strong) NSString *deviceName;                                     // название модели

@property (nonatomic, strong) NSString *DeviceModel;
@property (nonatomic, strong) NSString *OsType;



@property (nonatomic, strong) NSNumber *hasOrientation;                                  // @"Ориентация" BOOL
@property (nonatomic, strong) NSNumber *hasAccelerometer;                                // @"Акселерометр" BOOL
@property (nonatomic, strong) NSNumber *hasBeacons;                                      // @"BLE Маяки" BOOL

//Geometry
@property (nonatomic, strong) NSNumber *useBarriers;                                     // @"Использовать барьеры" BOOL
@property (nonatomic, strong) NSNumber *useForeground;                                   // @"Использовать стены этажа" BOOL

//MeasurementsPreprocessor
@property (nonatomic, strong) NSNumber *sigBufferWindowSize;                            // @"Окно буферизации сигнала(ms)" long

//SmoothPosition
@property (nonatomic, strong) NSNumber *smoothPosition;                                // @"Сглаживание позиции" double
@property (nonatomic, strong) NSNumber *useDynamicSmoothing;                             // @"Использовать динамическое сглаживание" BOOL

//IndoorSampler
@property (nonatomic, strong) NSNumber *totalNumParticles;                          // @"Общее количество частиц" NSInteger
@property (nonatomic, strong) NSNumber *radiusSamplingAroundPoint;                     // @"Радиус сэмплирования частиц (m)" double
@property (nonatomic, strong) NSNumber *maxAttemptsToSamplePoint;                   // @"Максимальное количество попыток для семпла частицы" NSInteger

//ParticleFilter
@property (nonatomic, strong) NSNumber *updateParticleInterval;                               // @"Интервал обновления частиц(ms)" long
@property (nonatomic, strong) NSNumber *countFilteringParticlesPerUpdate;                // @"Количество циклов фильтрации за обновление" NSInteger
@property (nonatomic, strong) NSNumber *percentageParticleTransmissionThroughBarrier;    // @"Процент частиц проходящих барьер" NSInteger
@property (nonatomic, strong) NSNumber *coefficientDispersionMeasurementsSignal;           // @"Коэффициент усиления дисперсии измерений сигнала" double
@property (nonatomic, strong) NSNumber *distanceResetParticles;                             // @"Дистанция сброса частиц (m)" double
@property (nonatomic, strong) NSNumber *compensatorCoefficientMoveParticles;                // @"Конпенсаторный коэффициент для длины шага" double
@property (nonatomic, strong) NSNumber *angleDeviationFromDirectionMotion;                  // @"Угол отклонения частиц от направления движения для шага(градусы)" double
@property (nonatomic, strong) NSNumber *dispersionFilteringMoveParticle;                    // @"Радиус фильтрации частиц для шага (m)" double
@property (nonatomic, strong) NSNumber *useMotionSequenceMoveParticle;                      // @"Использовать шагомер для движения частиц" BOOL

//ModelMeasurementsDistance
@property (nonatomic, strong) NSNumber *useDefAB;                                            // @"Использовать дефолтные параметры A B" BOOL
@property (nonatomic, strong) NSNumber *defA;                                              // @"Дефолтный параметр А"  double
@property (nonatomic, strong) NSNumber *defB;                                              // @"Дефолтный параметр B" double
@property (nonatomic, strong) NSNumber *defRssiDeviation;                               // среднее отклонение RSSI по умолчанию
@property (nonatomic, strong) NSNumber *defHeightTransmittersRelativeToDevice;                 // @"Высота маячков относительно устройства (m)" double

//Pedometer
@property (nonatomic, strong) NSNumber *minPeriodDetectStep;                                      // @"Минимальный период обнаружения шага (ms)" long
@property (nonatomic, strong) NSNumber *maxPeriodDetectStep;                                    // @"Максимальный период обнаружения шага (ms)" double
@property (nonatomic, strong) NSNumber *stepDetectionThresholdAcceleration;                    // @"Порог обнаружения шага (ускорение m/s*2)" double
@property (nonatomic, strong) NSNumber *stepDetectionThresholdVelocityDropAcceleration;        // @"Порог обнаружения шага (скорость падения ускорения tg угла)"double
@property (nonatomic, strong) NSNumber *averageStepLength;                                     // @"Средняя длина шага (m)" double
@property (nonatomic, strong) NSNumber *calibrationConstant;                                   // @"Константа калибровки шагометра" double
@property (nonatomic, strong) NSNumber *periodSmoothingAccelerationMeasurements;                 // @"Период между измерениями ускорения (ms)" double


- (INBuildingNavigationSettings *)getDefoult;

@end

NS_ASSUME_NONNULL_END

#endif
