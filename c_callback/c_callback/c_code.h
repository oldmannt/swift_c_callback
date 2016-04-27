//
//  c_code.h
//  c_callback
//
//  Created by dyno on 4/25/16.
//  Copyright © 2016 dyno. All rights reserved.
//

#ifndef c_code_h
#define c_code_h

#include <stdlib.h>

/**
 * This is the structure used by our sample C "API."
 */
typedef struct
{
    int32_t m_Int;
    int64_t m_Long;
    int16_t m_Array[3];
} APIStruct;

/**
 * Function pointer type for the callback.  Callback receives a void
 * pointer, which is then treated as APIStruct * in the callback.
 *
 * The callback will be implemented in Swift.
 */
typedef void (*my_cb_t)( void * );

/**
 * Our C API function that uses the callback.  In our example the
 * callback is in Swift.
 */
int CUseCallback( my_cb_t, int );

#endif /* c_code_h */
