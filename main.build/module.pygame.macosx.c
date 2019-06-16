/* Generated code for Python module 'pygame.macosx'
 * created by Nuitka version 0.6.4
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_pygame$macosx" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pygame$macosx;
PyDictObject *moduledict_pygame$macosx;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_getResource;
static PyObject *const_tuple_str_digest_aa67d428f9312470475fbd6f6fcaeb8c_tuple;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_pygame;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_digest_b646956a0fd89f2f0ee5168bcdb2f2b8;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_Darwin;
extern PyObject *const_str_digest_60ac2b0d0530324399922e9b4f074c7a;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_aa67d428f9312470475fbd6f6fcaeb8c;
static PyObject *const_str_plain_sdlmain_osx;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain_InstallNSApplication;
extern PyObject *const_int_0;
static PyObject *const_str_digest_8fb234ea02989f939af30185080f446e;
static PyObject *const_str_plain_Video_AutoInit;
static PyObject *const_tuple_str_plain_default_icon_data_tuple;
static PyObject *const_str_plain_chdir;
static PyObject *const_tuple_str_plain_sdlmain_osx_tuple;
extern PyObject *const_str_plain_getcwd;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_os;
static PyObject *const_str_digest_0a714a2eb0e6eb82ebfed11f643c1751;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_RunningFromBundleWithNSApplication;
static PyObject *const_list_str_plain_Video_AutoInit_list;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_getResource_tuple;
extern PyObject *const_str_plain_read;
static PyObject *const_str_digest_f35f5604e9470ae31eff123798f46d71;
extern PyObject *const_str_plain_argv;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_platform;
static PyObject *const_str_plain_default_icon_data;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_digest_aa67d428f9312470475fbd6f6fcaeb8c_tuple = PyTuple_New( 1 );
    const_str_digest_aa67d428f9312470475fbd6f6fcaeb8c = UNSTREAM_STRING_ASCII( &constant_bin[ 1719356 ], 16, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_aa67d428f9312470475fbd6f6fcaeb8c_tuple, 0, const_str_digest_aa67d428f9312470475fbd6f6fcaeb8c ); Py_INCREF( const_str_digest_aa67d428f9312470475fbd6f6fcaeb8c );
    const_str_plain_Darwin = UNSTREAM_STRING_ASCII( &constant_bin[ 1719372 ], 6, 1 );
    const_str_plain_sdlmain_osx = UNSTREAM_STRING_ASCII( &constant_bin[ 1719378 ], 11, 1 );
    const_str_plain_InstallNSApplication = UNSTREAM_STRING_ASCII( &constant_bin[ 1719389 ], 20, 1 );
    const_str_digest_8fb234ea02989f939af30185080f446e = UNSTREAM_STRING_ASCII( &constant_bin[ 1719409 ], 65, 0 );
    const_str_plain_Video_AutoInit = UNSTREAM_STRING_ASCII( &constant_bin[ 1719474 ], 14, 1 );
    const_tuple_str_plain_default_icon_data_tuple = PyTuple_New( 1 );
    const_str_plain_default_icon_data = UNSTREAM_STRING_ASCII( &constant_bin[ 1719488 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_default_icon_data_tuple, 0, const_str_plain_default_icon_data ); Py_INCREF( const_str_plain_default_icon_data );
    const_str_plain_chdir = UNSTREAM_STRING_ASCII( &constant_bin[ 1719505 ], 5, 1 );
    const_tuple_str_plain_sdlmain_osx_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sdlmain_osx_tuple, 0, const_str_plain_sdlmain_osx ); Py_INCREF( const_str_plain_sdlmain_osx );
    const_str_digest_0a714a2eb0e6eb82ebfed11f643c1751 = UNSTREAM_STRING_ASCII( &constant_bin[ 1719510 ], 22, 0 );
    const_str_plain_RunningFromBundleWithNSApplication = UNSTREAM_STRING_ASCII( &constant_bin[ 1719532 ], 34, 1 );
    const_list_str_plain_Video_AutoInit_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Video_AutoInit_list, 0, const_str_plain_Video_AutoInit ); Py_INCREF( const_str_plain_Video_AutoInit );
    const_tuple_str_plain_getResource_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getResource_tuple, 0, const_str_plain_getResource ); Py_INCREF( const_str_plain_getResource );
    const_str_digest_f35f5604e9470ae31eff123798f46d71 = UNSTREAM_STRING_ASCII( &constant_bin[ 1719566 ], 65, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pygame$macosx( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_358d4a646a06b8517f44b61d5b853188;
static PyCodeObject *codeobj_5a48b6e4e482d36ff263011ddf0ea1ae;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8fb234ea02989f939af30185080f446e;
    codeobj_358d4a646a06b8517f44b61d5b853188 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0a714a2eb0e6eb82ebfed11f643c1751, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5a48b6e4e482d36ff263011ddf0ea1ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Video_AutoInit, 9, const_tuple_str_plain_default_icon_data_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pygame$macosx$$$function_1_Video_AutoInit(  );


// The module function definitions.
static PyObject *impl_pygame$macosx$$$function_1_Video_AutoInit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_default_icon_data = NULL;
    struct Nuitka_FrameObject *frame_5a48b6e4e482d36ff263011ddf0ea1ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_5a48b6e4e482d36ff263011ddf0ea1ae = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a48b6e4e482d36ff263011ddf0ea1ae, codeobj_5a48b6e4e482d36ff263011ddf0ea1ae, module_pygame$macosx, sizeof(void *) );
    frame_5a48b6e4e482d36ff263011ddf0ea1ae = cache_frame_5a48b6e4e482d36ff263011ddf0ea1ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a48b6e4e482d36ff263011ddf0ea1ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a48b6e4e482d36ff263011ddf0ea1ae ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = const_str_plain_Darwin;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_platform );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_platform );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "platform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = 11;
        tmp_compexpr_right_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_platform );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_sdlmain_osx );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sdlmain_osx );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sdlmain_osx" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 12;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = 12;
            tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_RunningFromBundleWithNSApplication );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            // Tried code:
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_getResource );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getResource );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getResource" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 14;
                    type_description_1 = "o";
                    goto try_except_handler_2;
                }

                tmp_called_name_1 = tmp_mvar_value_3;
                frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = 14;
                tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_aa67d428f9312470475fbd6f6fcaeb8c_tuple, 0 ) );

                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 14;
                    type_description_1 = "o";
                    goto try_except_handler_2;
                }
                frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = 14;
                tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_read );
                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 14;
                    type_description_1 = "o";
                    goto try_except_handler_2;
                }
                assert( var_default_icon_data == NULL );
                var_default_icon_data = tmp_assign_source_1;
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_2:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Preserve existing published exception.
            exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_type_1 );
            exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_value_1 );
            exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
            Py_XINCREF( exception_preserved_tb_1 );

            if ( exception_keeper_tb_1 == NULL )
            {
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5a48b6e4e482d36ff263011ddf0ea1ae, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5a48b6e4e482d36ff263011ddf0ea1ae, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_2 = PyExc_IOError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 15;
                    type_description_1 = "o";
                    goto try_except_handler_3;
                }
                tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_3;
                }
                else
                {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    PyObject *tmp_assign_source_2;
                    tmp_assign_source_2 = Py_None;
                    assert( var_default_icon_data == NULL );
                    Py_INCREF( tmp_assign_source_2 );
                    var_default_icon_data = tmp_assign_source_2;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_3;
                    PyObject *tmp_compexpr_right_3;
                    tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                    tmp_compexpr_right_3 = PyExc_NotImplementedError;
                    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 17;
                        type_description_1 = "o";
                        goto try_except_handler_3;
                    }
                    tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_4;
                    }
                    else
                    {
                        goto branch_no_4;
                    }
                    branch_yes_4:;
                    {
                        PyObject *tmp_assign_source_3;
                        tmp_assign_source_3 = Py_None;
                        assert( var_default_icon_data == NULL );
                        Py_INCREF( tmp_assign_source_3 );
                        var_default_icon_data = tmp_assign_source_3;
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    if (unlikely( tmp_result == false ))
                    {
                        exception_lineno = 13;
                    }

                    if (exception_tb && exception_tb->tb_frame == &frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame) frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = exception_tb->tb_lineno;
                    type_description_1 = "o";
                    goto try_except_handler_3;
                    branch_end_4:;
                }
                branch_end_3:;
            }
            goto try_end_2;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto frame_exception_exit_1;
            // End of try:
            try_end_2:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            goto try_end_1;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( pygame$macosx$$$function_1_Video_AutoInit );
            return NULL;
            // End of try:
            try_end_1:;
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_sdlmain_osx );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sdlmain_osx );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sdlmain_osx" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 19;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_4;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_InstallNSApplication );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 19;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                if ( var_default_icon_data == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default_icon_data" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 19;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_1 = var_default_icon_data;
                frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = 19;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 19;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_5;
            frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = 20;
            tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getcwd );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_str_chr_47;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_1 == 1 )
            {
                goto and_right_1;
            }
            else
            {
                goto and_left_1;
            }
            and_right_1:;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_6;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_argv );
            if ( tmp_len_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_5 = BUILTIN_LEN( tmp_len_arg_1 );
            Py_DECREF( tmp_len_arg_1 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            assert( !(tmp_res == -1) );
            tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_5 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_5 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_subscript_name_1;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_7;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_chdir );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_8;
                tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
                if ( tmp_source_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dirname );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_9 == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_9;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_argv );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_1 = const_int_0;
                tmp_args_element_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = 21;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame.f_lineno = 21;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 21;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_5:;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a48b6e4e482d36ff263011ddf0ea1ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a48b6e4e482d36ff263011ddf0ea1ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a48b6e4e482d36ff263011ddf0ea1ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a48b6e4e482d36ff263011ddf0ea1ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a48b6e4e482d36ff263011ddf0ea1ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a48b6e4e482d36ff263011ddf0ea1ae,
        type_description_1,
        var_default_icon_data
    );


    // Release cached frame.
    if ( frame_5a48b6e4e482d36ff263011ddf0ea1ae == cache_frame_5a48b6e4e482d36ff263011ddf0ea1ae )
    {
        Py_DECREF( frame_5a48b6e4e482d36ff263011ddf0ea1ae );
    }
    cache_frame_5a48b6e4e482d36ff263011ddf0ea1ae = NULL;

    assertFrameObject( frame_5a48b6e4e482d36ff263011ddf0ea1ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pygame$macosx$$$function_1_Video_AutoInit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_default_icon_data );
    var_default_icon_data = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_default_icon_data );
    var_default_icon_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pygame$macosx$$$function_1_Video_AutoInit );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pygame$macosx$$$function_1_Video_AutoInit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$macosx$$$function_1_Video_AutoInit,
        const_str_plain_Video_AutoInit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a48b6e4e482d36ff263011ddf0ea1ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pygame$macosx,
        const_str_digest_f35f5604e9470ae31eff123798f46d71,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pygame$macosx =
{
    PyModuleDef_HEAD_INIT,
    "pygame.macosx",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( pygame$macosx )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pygame$macosx );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("pygame.macosx: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pygame.macosx: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pygame.macosx: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpygame$macosx" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pygame$macosx = Py_InitModule4(
        "pygame.macosx",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pygame$macosx = PyModule_Create( &mdef_pygame$macosx );
#endif

    moduledict_pygame$macosx = MODULE_DICT( module_pygame$macosx );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pygame$macosx,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pygame$macosx,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pygame$macosx,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pygame$macosx,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pygame$macosx );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b646956a0fd89f2f0ee5168bcdb2f2b8, module_pygame$macosx );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_358d4a646a06b8517f44b61d5b853188;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8fb234ea02989f939af30185080f446e;
        UPDATE_STRING_DICT0( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_358d4a646a06b8517f44b61d5b853188 = MAKE_MODULE_FRAME( codeobj_358d4a646a06b8517f44b61d5b853188, module_pygame$macosx );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_358d4a646a06b8517f44b61d5b853188 );
    assert( Py_REFCNT( frame_358d4a646a06b8517f44b61d5b853188 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_8fb234ea02989f939af30185080f446e;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_platform;
        tmp_globals_name_1 = (PyObject *)moduledict_pygame$macosx;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_358d4a646a06b8517f44b61d5b853188->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_platform, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_os;
        tmp_globals_name_2 = (PyObject *)moduledict_pygame$macosx;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_358d4a646a06b8517f44b61d5b853188->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_sys;
        tmp_globals_name_3 = (PyObject *)moduledict_pygame$macosx;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_358d4a646a06b8517f44b61d5b853188->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        assert( !(tmp_assign_source_6 == NULL) );
        UPDATE_STRING_DICT1( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_60ac2b0d0530324399922e9b4f074c7a;
        tmp_globals_name_4 = (PyObject *)moduledict_pygame$macosx;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_getResource_tuple;
        tmp_level_name_4 = const_int_0;
        frame_358d4a646a06b8517f44b61d5b853188->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getResource );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_getResource, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_pygame;
        tmp_globals_name_5 = (PyObject *)moduledict_pygame$macosx;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_sdlmain_osx_tuple;
        tmp_level_name_5 = const_int_0;
        frame_358d4a646a06b8517f44b61d5b853188->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_sdlmain_osx );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_sdlmain_osx, tmp_assign_source_8 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_358d4a646a06b8517f44b61d5b853188 );
#endif
    popFrameStack();

    assertFrameObject( frame_358d4a646a06b8517f44b61d5b853188 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_358d4a646a06b8517f44b61d5b853188 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_358d4a646a06b8517f44b61d5b853188, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_358d4a646a06b8517f44b61d5b853188->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_358d4a646a06b8517f44b61d5b853188, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY( const_list_str_plain_Video_AutoInit_list );
        UPDATE_STRING_DICT1( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_pygame$macosx$$$function_1_Video_AutoInit(  );



        UPDATE_STRING_DICT1( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain_Video_AutoInit, tmp_assign_source_10 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_pygame$macosx, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_pygame$macosx );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
