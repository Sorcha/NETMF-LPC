//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "spot_hardware_native.h"
#include "spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog.h"

using namespace Microsoft::SPOT::Hardware;


HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::get_Enabled___STATIC__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT8 retVal = Watchdog::get_Enabled( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::set_Enabled___STATIC__VOID__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 0, param0 ) );

        Watchdog::set_Enabled( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::get_Timeout___STATIC__mscorlibSystemTimeSpan( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE retVal = Watchdog::get_Timeout( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::set_Timeout___STATIC__VOID__mscorlibSystemTimeSpan( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 0, param0 ) );

        Watchdog::set_Timeout( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::get_Behavior___STATIC__MicrosoftSPOTHardwareWatchdogBehavior( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 retVal = Watchdog::get_Behavior( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::set_Behavior___STATIC__VOID__MicrosoftSPOTHardwareWatchdogBehavior( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        Watchdog::set_Behavior( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::get_Log___STATIC__MicrosoftSPOTNativeMicrosoftSPOTILog( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE retVal = Watchdog::get_Log( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::set_Log___STATIC__VOID__MicrosoftSPOTNativeMicrosoftSPOTILog( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 0, param0 ) );

        Watchdog::set_Log( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_hardware_native_Microsoft_SPOT_Hardware_Watchdog::GetLastOcurrenceDetails___STATIC__BOOLEAN__BYREF_mscorlibSystemDateTime__BYREF_mscorlibSystemTimeSpan__BYREF_mscorlibSystemReflectionMethodInfo( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE_ByRef( stack, heapblock0, 0, param0 ) );

        UNSUPPORTED_TYPE param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 1, param1 ) );

        UNSUPPORTED_TYPE * param2;
        UINT8 heapblock2[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE_ByRef( stack, heapblock2, 2, param2 ) );

        INT8 retVal = Watchdog::GetLastOcurrenceDetails( param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 0 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock2, 2 ) );
    }
    TINYCLR_NOCLEANUP();
}
