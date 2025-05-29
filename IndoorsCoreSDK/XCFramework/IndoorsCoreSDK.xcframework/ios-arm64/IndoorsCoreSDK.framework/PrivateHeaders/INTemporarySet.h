//
//  INTemporarySet.h
//  IndoorsSDK
//
//  Created by Mac on 02.05.2023.
//  Copyright © 2023 Indoors Navigation LLC. All rights reserved.
//

#ifndef INTemporarySet_h
#define INTemporarySet_h

@interface INTemporarySet<ObjectType> : NSObject
- (instancetype)initWithPeriod:(NSTimeInterval)period;
- (void)addObject:(ObjectType)object;
- (void)removeObject:(ObjectType)object;
- (BOOL)containsObject:(ObjectType)anObject;
- (void)removeAll;
@end

#endif /* INTemporarySet_h */
