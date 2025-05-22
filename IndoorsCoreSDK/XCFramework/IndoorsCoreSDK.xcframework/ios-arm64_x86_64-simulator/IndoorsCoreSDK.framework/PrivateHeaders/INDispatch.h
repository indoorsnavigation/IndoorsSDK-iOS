//
//  INDispatch.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INDispatch_
#define _INDispatch_

#import <Foundation/Foundation.h>

static inline void dispatch_run_on_main_queue(void (^block)(void))
{
    /*if ([NSThread isMainThread])
    {
        block();
    }
    else*/
    {
        dispatch_async(dispatch_get_main_queue(), block);
    }
}

#endif
