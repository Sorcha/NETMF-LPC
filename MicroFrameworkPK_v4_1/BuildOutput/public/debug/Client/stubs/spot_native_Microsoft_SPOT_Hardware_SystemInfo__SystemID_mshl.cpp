//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "spot_native.h"
#include "spot_native_Microsoft_SPOT_Hardware_SystemInfo__SystemID.h"

using namespace Microsoft::SPOT::Hardware;


HRESULT Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo__SystemID::get_OEM___STATIC__U1( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT8 retVal = SystemInfo_SystemID::get_OEM( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UINT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo__SystemID::get_Model___STATIC__U1( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT8 retVal = SystemInfo_SystemID::get_Model( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UINT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo__SystemID::get_SKU___STATIC__U2( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT16 retVal = SystemInfo_SystemID::get_SKU( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UINT16( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}
