//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "corlib_native.h"
#include "corlib_native_System_Exception.h"

using namespace System;


HRESULT Library_corlib_native_System_Exception::get_StackTrace___STRING( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        LPCSTR retVal = Exception::get_StackTrace( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_LPCSTR( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}
