//
//  INNavigationSettings.h
//  IndoorsSDK
//
//  Created by Indoors on 13.11.2024.
//  Copyright © 2024 Indoors Navigation LLC. All rights reserved.
//

#ifndef INNavigationSettings_h
#define INNavigationSettings_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

@interface INNavigationSettingsNew : INBaseObject<NSCopying>




@property (nonatomic) BOOL hasOrientation;                                  // @"Акселерометр" BOOL
@property (nonatomic) BOOL hasAccelerometer;                                // @"Ориентация" BOOL
@property (nonatomic) BOOL hasBeacons;                                      // @"BLE Маяки" BOOL

//Geometry

@property (nonatomic) BOOL useBarriers;                                     // @"Использовать барьеры" BOOL
@property (nonatomic) BOOL useForeground;                                   // @"Использовать стены этажа" BOOL

//MeasurementsPreprocessor

@property (nonatomic) long sigBufferWindowSize;                            // @"Окно буферизации сигнала(ms)" long

//SmoothPosition
@property (nonatomic) double smoothPosition;                                // @"Сглаживание позиции" double
@property (nonatomic) BOOL useDynamicSmoothing;                             // @"Использовать динамическое сглаживание" BOOL
//IndoorSampler

@property (nonatomic) NSInteger totalNumParticles;                          // @"Общее количество частиц" NSInteger
@property (nonatomic) double radiusSamplingAroundPoint;                     // @"Радиус сэмплирования частиц (m)" double
@property (nonatomic) NSInteger maxAttemptsToSamplePoint;                   // @"Максимальное количество попыток для семпла частицы" NSInteger



//ParticleFilter

@property (nonatomic) long updateParticleInterval;                               // @"Интервал обновления частиц(ms)" long
@property (nonatomic) NSInteger countFilteringParticlesPerUpdate;                // @"Количество циклов фильтрации за обновление" NSInteger
@property (nonatomic) NSInteger percentageParticleTransmissionThroughBarrier;    // @"Процент частиц проходящих барьер" NSInteger
@property (nonatomic) double coefficientDispersionMeasurementsSignal;            // @"Коэффициент усиления дисперсии измерений сигнала" double
@property (nonatomic) double distanceResetParticles;                             // @"Дистанция сброса частиц (m)" double
@property (nonatomic) double compensatorCoefficientMoveParticles;                // @"Конпенсаторный коэффициент для длины шага" double
@property (nonatomic) double angleDeviationFromDirectionMotion;                  // @"Угол отклонения частиц от направления движения для шага(градусы)" double
@property (nonatomic) double dispersionFilteringMoveParticle;                    // @"Радиус фильтрации частиц для шага (m)" double
@property (nonatomic) double heightTransmittersRelativeToDevice;                 // @"Высота маячков относительно устройства (m)" double
@property (nonatomic) BOOL useMotionSequenceMoveParticle;                        // @"Использовать шагомер для движения частиц" BOOL

//ModelMeasurementsDistance
@property (nonatomic) BOOL useDefAB;                                            // @"Использовать дефолтные параметры A B" BOOL
@property (nonatomic) double defA;                                              // @"Дефолтный параметр А"  double
@property (nonatomic) double defB;                                              // @"Дефолтный параметр B" double

//Pedometer

@property (nonatomic) long minPeriodDetectStep;                                      // @"Минимальный период обнаружения шага (ms)" long
@property (nonatomic) double maxPeriodDetectStep;                                    // @"Максимальный период обнаружения шага (ms)" double
@property (nonatomic) double stepDetectionThresholdAcceleration;                    // @"Порог обнаружения шага (ускорение m/s*2)" double
@property (nonatomic) double stepDetectionThresholdVelocityDropAcceleration;        // @"Порог обнаружения шага (скорость падения ускорения tg угла)"double
@property (nonatomic) double averageStepLength;                                     // @"Средняя длина шага (m)" double
@property (nonatomic) double calibrationConstant;                                   // @"Константа калибровки шагометра" double
@property (nonatomic) double periodBetweenAccelerationMeasurements;                 // @"Период между измерениями ускорения (ms)" double

- (void)updateFromDictionary:(NSDictionary *)dict;
- (NSDictionary *)toDictionary;
@end



#endif



