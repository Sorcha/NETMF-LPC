//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "corlib_native.h"
#include "corlib_native_System_Threading_Interlocked.h"

using namespace System::Threading;


HRESULT Library_corlib_native_System_Threading_Interlocked::Increment___STATIC__I4__BYREF_I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock0, 0, param0 ) );

        INT32 retVal = Interlocked::Increment( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 0 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Threading_Interlocked::Decrement___STATIC__I4__BYREF_I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock0, 0, param0 ) );

        INT32 retVal = Interlocked::Decrement( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 0 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Threading_Interlocked::Exchange___STATIC__I4__BYREF_I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock0, 0, param0 ) );

        INT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param1 ) );

        INT32 retVal = Interlocked::Exchange( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 0 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Threading_Interlocked::CompareExchange___STATIC__I4__BYREF_I4__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock0, 0, param0 ) );

        INT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param2 ) );

        INT32 retVal = Interlocked::CompareExchange( param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 0 ) );
    }
    TINYCLR_NOCLEANUP();
}
