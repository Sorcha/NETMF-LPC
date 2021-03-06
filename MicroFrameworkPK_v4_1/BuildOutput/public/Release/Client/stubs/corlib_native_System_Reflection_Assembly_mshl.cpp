//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "corlib_native.h"
#include "corlib_native_System_Reflection_Assembly.h"

using namespace System::Reflection;


HRESULT Library_corlib_native_System_Reflection_Assembly::get_FullName___STRING( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        LPCSTR retVal = Assembly::get_FullName( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_LPCSTR( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Reflection_Assembly::GetType___SystemType__STRING( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 1, param0 ) );

        UNSUPPORTED_TYPE retVal = Assembly::GetType( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Reflection_Assembly::GetTypes___SZARRAY_SystemType( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UNSUPPORTED_TYPE retVal = Assembly::GetTypes( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Reflection_Assembly::GetVersion___VOID__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock0, 1, param0 ) );

        INT32 * param1;
        UINT8 heapblock1[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock1, 2, param1 ) );

        INT32 * param2;
        UINT8 heapblock2[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock2, 3, param2 ) );

        INT32 * param3;
        UINT8 heapblock3[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock3, 4, param3 ) );

        Assembly::GetVersion( pMngObj,  param0, param1, param2, param3, hr );
        TINYCLR_CHECK_HRESULT( hr );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 1 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock1, 2 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock2, 3 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock3, 4 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Reflection_Assembly::GetManifestResourceNames___SZARRAY_STRING( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        LPCSTR retVal = Assembly::GetManifestResourceNames( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_LPCSTR( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Reflection_Assembly::GetExecutingAssembly___STATIC__SystemReflectionAssembly( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE retVal = Assembly::GetExecutingAssembly( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Reflection_Assembly::LoadInternal___STATIC__SystemReflectionAssembly__STRING__BOOLEAN__I4__I4__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 0, param0 ) );

        UNSUPPORTED_TYPE param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 1, param1 ) );

        LPCSTR param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_LPCSTR( stack, 2, param2 ) );

        INT8 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 3, param3 ) );

        INT32 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 4, param4 ) );

        INT32 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 5, param5 ) );

        UNSUPPORTED_TYPE retVal = Assembly::LoadInternal( param0, param1, param2, param3, param4, param5, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_corlib_native_System_Reflection_Assembly::Load___STATIC__SystemReflectionAssembly__SZARRAY_U1( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 0, param0 ) );

        UNSUPPORTED_TYPE retVal = Assembly::Load( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}
