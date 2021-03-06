//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "corlib_native.h"
#include "corlib_native_System_Resources_ResourceManager.h"

using namespace System::Resources;


HRESULT Library_corlib_native_System_Resources_ResourceManager::GetObjectInternal___OBJECT__I2( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT16 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT16( stack, 1, param0 ) );

        UNSUPPORTED_TYPE retVal = ResourceManager::GetObjectInternal( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Resources_ResourceManager::FindResource___STATIC__I4__STRING__SystemReflectionAssembly( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        LPCSTR param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_LPCSTR( stack, 0, param0 ) );

        UNSUPPORTED_TYPE param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 1, param1 ) );

        INT32 retVal = ResourceManager::FindResource( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Resources_ResourceManager::GetObject___STATIC__OBJECT__SystemResourcesResourceManager__SystemEnum( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 0, param0 ) );

        UNSUPPORTED_TYPE param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 1, param1 ) );

        UNSUPPORTED_TYPE retVal = ResourceManager::GetObject( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}
