//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "corlib_native.h"
#include "corlib_native_System_MulticastDelegate.h"

using namespace System;


HRESULT Library_corlib_native_System_MulticastDelegate::op_Equality___STATIC__BOOLEAN__SystemMulticastDelegate__SystemMulticastDelegate( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 0, param0 ) );

        UNSUPPORTED_TYPE param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 1, param1 ) );

        INT8 retVal = MulticastDelegate::op_Equality( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_MulticastDelegate::op_Inequality___STATIC__BOOLEAN__SystemMulticastDelegate__SystemMulticastDelegate( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 0, param0 ) );

        UNSUPPORTED_TYPE param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 1, param1 ) );

        INT8 retVal = MulticastDelegate::op_Inequality( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}
