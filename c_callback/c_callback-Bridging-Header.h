//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

// This is to ensure memory layout mismatch
// This pragma needs to be visible to Swift via the bridging header.
#pragma pack(1)  // pack(2) & pack(4) would have the same effect
// NaiveCallback() works with no pragma or with pack(8)

#include "c_code.h"