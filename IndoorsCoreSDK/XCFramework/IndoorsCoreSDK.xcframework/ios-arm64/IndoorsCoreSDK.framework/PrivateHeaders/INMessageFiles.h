//
//  INMessageFiles.h
//  IndoorsCoreSDK
//
//  Created by Indoors on 16.06.2025.
//

#ifndef INMessageFiles_h
#define INMessageFiles_h


#import "INBaseObject.h"
#import <Foundation/Foundation.h>


@interface INMessageFiles : INBaseObject

@property (nonatomic, strong, nullable) NSNumber *Size;
@property (nonatomic, strong, nullable) NSString *File;
@property (nonatomic, strong, nullable) NSString *Name;
@property (nonatomic, strong, nullable) NSNumber *Message;

@property (nonatomic, strong, nullable) NSData   *LoadFile;
@property (nonatomic, strong, nullable) NSString *FileExtension;

@end


#endif /* INMessageFiles_h */
