////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "spot_graphics_native.cpp"
#include "spot_graphics_native_Microsoft_SPOT_Bitmap.cpp"
#include "spot_graphics_native_Microsoft_SPOT_Font.cpp"

#if defined(ARM_V3_1)
void __COMPILER_BUG_CORRUPTED_LIB_IF_NO_IMPLEMENATIONS()
{
    NATIVE_PROFILE_CLR_GRAPHICS();
    hal_printf("COMPILER FIX");
}
#endif

