//-----------------------------------------------------------------------------
//
//                   ** WARNING! ** 
//    This file was generated automatically by a tool.
//    Re-running the tool will overwrite this file.
//    You should copy this file to a custom location
//    before adding any customization in the copy to
//    prevent loss of your changes when the tool is
//    re-run.
//
//-----------------------------------------------------------------------------


#ifndef _CORLIB_NATIVE_SYSTEM_COLLECTIONS_STACK_H_
#define _CORLIB_NATIVE_SYSTEM_COLLECTIONS_STACK_H_

namespace System
{
    namespace Collections
    {
        struct Stack
        {
            // Helper Functions to access fields of managed object
            static UNSUPPORTED_TYPE& Get__array( CLR_RT_HeapBlock* pMngObj )    { return Interop_Marshal_GetField_UNSUPPORTED_TYPE( pMngObj, Library_corlib_native_System_Collections_Stack::FIELD___array ); }

            static INT32& Get__size( CLR_RT_HeapBlock* pMngObj )    { return Interop_Marshal_GetField_INT32( pMngObj, Library_corlib_native_System_Collections_Stack::FIELD___size ); }

            // Declaration of stubs. These functions are implemented by Interop code developers
            static void Clear( CLR_RT_HeapBlock* pMngObj, HRESULT &hr );
            static UNSUPPORTED_TYPE Peek( CLR_RT_HeapBlock* pMngObj, HRESULT &hr );
            static UNSUPPORTED_TYPE Pop( CLR_RT_HeapBlock* pMngObj, HRESULT &hr );
            static void Push( CLR_RT_HeapBlock* pMngObj, UNSUPPORTED_TYPE param0, HRESULT &hr );
        };
    }
}
#endif  //_CORLIB_NATIVE_SYSTEM_COLLECTIONS_STACK_H_
