/* Generated code for Python module 'intersect'
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

/* The "_module_intersect" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_intersect;
PyDictObject *moduledict_intersect;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_pos3;
static PyObject *const_str_digest_1d38be3930015d6db26960e0bc843359;
static PyObject *const_str_plain_sy1;
static PyObject *const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_sx1;
static PyObject *const_str_plain_sy2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_x1;
extern PyObject *const_str_plain_Position;
extern PyObject *const_int_0;
static PyObject *const_str_plain_x3;
static PyObject *const_str_plain_x4;
static PyObject *const_str_plain_y3;
static PyObject *const_str_plain_pos4;
static PyObject *const_str_plain_pos1;
static PyObject *const_str_plain_sx2;
static PyObject *const_str_plain_y2;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_pos_vec;
extern PyObject *const_str_plain_intersect;
static PyObject *const_str_digest_372cdd3c9c9ffcf8cc8f73d03747b96d;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_y4;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_y1;
extern PyObject *const_str_plain_x2;
extern PyObject *const_tuple_str_plain_Position_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_pos2;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_pos3 = UNSTREAM_STRING_ASCII( &constant_bin[ 13311 ], 4, 1 );
    const_str_digest_1d38be3930015d6db26960e0bc843359 = UNSTREAM_STRING_ASCII( &constant_bin[ 13315 ], 18, 0 );
    const_str_plain_sy1 = UNSTREAM_STRING_ASCII( &constant_bin[ 13333 ], 3, 1 );
    const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple = PyTuple_New( 18 );
    const_str_plain_pos1 = UNSTREAM_STRING_ASCII( &constant_bin[ 13336 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 0, const_str_plain_pos1 ); Py_INCREF( const_str_plain_pos1 );
    const_str_plain_pos2 = UNSTREAM_STRING_ASCII( &constant_bin[ 13340 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 1, const_str_plain_pos2 ); Py_INCREF( const_str_plain_pos2 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 2, const_str_plain_pos3 ); Py_INCREF( const_str_plain_pos3 );
    const_str_plain_pos4 = UNSTREAM_STRING_ASCII( &constant_bin[ 13344 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 3, const_str_plain_pos4 ); Py_INCREF( const_str_plain_pos4 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 4, const_str_plain_x1 ); Py_INCREF( const_str_plain_x1 );
    const_str_plain_y1 = UNSTREAM_STRING_ASCII( &constant_bin[ 13334 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 5, const_str_plain_y1 ); Py_INCREF( const_str_plain_y1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 6, const_str_plain_x2 ); Py_INCREF( const_str_plain_x2 );
    const_str_plain_y2 = UNSTREAM_STRING_ASCII( &constant_bin[ 13348 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 7, const_str_plain_y2 ); Py_INCREF( const_str_plain_y2 );
    const_str_plain_x3 = UNSTREAM_STRING_ASCII( &constant_bin[ 13350 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 8, const_str_plain_x3 ); Py_INCREF( const_str_plain_x3 );
    const_str_plain_y3 = UNSTREAM_STRING_ASCII( &constant_bin[ 13352 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 9, const_str_plain_y3 ); Py_INCREF( const_str_plain_y3 );
    const_str_plain_x4 = UNSTREAM_STRING_ASCII( &constant_bin[ 13354 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 10, const_str_plain_x4 ); Py_INCREF( const_str_plain_x4 );
    const_str_plain_y4 = UNSTREAM_STRING_ASCII( &constant_bin[ 13356 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 11, const_str_plain_y4 ); Py_INCREF( const_str_plain_y4 );
    const_str_plain_sx1 = UNSTREAM_STRING_ASCII( &constant_bin[ 13358 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 12, const_str_plain_sx1 ); Py_INCREF( const_str_plain_sx1 );
    const_str_plain_sx2 = UNSTREAM_STRING_ASCII( &constant_bin[ 13361 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 13, const_str_plain_sx2 ); Py_INCREF( const_str_plain_sx2 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 14, const_str_plain_sy1 ); Py_INCREF( const_str_plain_sy1 );
    const_str_plain_sy2 = UNSTREAM_STRING_ASCII( &constant_bin[ 13364 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 15, const_str_plain_sy2 ); Py_INCREF( const_str_plain_sy2 );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 16, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 17, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_digest_372cdd3c9c9ffcf8cc8f73d03747b96d = UNSTREAM_STRING_ASCII( &constant_bin[ 13367 ], 33, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_intersect( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0aae59b2e5ec535f9d99dde6bb4ceece;
static PyCodeObject *codeobj_0e81b7f4a5ff5838399ddad5681fdbf4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_372cdd3c9c9ffcf8cc8f73d03747b96d;
    codeobj_0aae59b2e5ec535f9d99dde6bb4ceece = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1d38be3930015d6db26960e0bc843359, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0e81b7f4a5ff5838399ddad5681fdbf4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_intersect, 4, const_tuple_d0f9b80f24317ac8f119f1937f6f011b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_intersect$$$function_1_intersect(  );


// The module function definitions.
static PyObject *impl_intersect$$$function_1_intersect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pos1 = python_pars[ 0 ];
    PyObject *par_pos2 = python_pars[ 1 ];
    PyObject *par_pos3 = python_pars[ 2 ];
    PyObject *par_pos4 = python_pars[ 3 ];
    PyObject *var_x1 = NULL;
    PyObject *var_y1 = NULL;
    PyObject *var_x2 = NULL;
    PyObject *var_y2 = NULL;
    PyObject *var_x3 = NULL;
    PyObject *var_y3 = NULL;
    PyObject *var_x4 = NULL;
    PyObject *var_y4 = NULL;
    PyObject *var_sx1 = NULL;
    PyObject *var_sx2 = NULL;
    PyObject *var_sy1 = NULL;
    PyObject *var_sy2 = NULL;
    PyObject *var_s = NULL;
    PyObject *var_t = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_0e81b7f4a5ff5838399ddad5681fdbf4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_0e81b7f4a5ff5838399ddad5681fdbf4 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0e81b7f4a5ff5838399ddad5681fdbf4, codeobj_0e81b7f4a5ff5838399ddad5681fdbf4, module_intersect, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0e81b7f4a5ff5838399ddad5681fdbf4 = cache_frame_0e81b7f4a5ff5838399ddad5681fdbf4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0e81b7f4a5ff5838399ddad5681fdbf4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0e81b7f4a5ff5838399ddad5681fdbf4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_pos1 );
        tmp_source_name_1 = par_pos1;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_x );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x1 == NULL );
        var_x1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_pos1 );
        tmp_source_name_2 = par_pos1;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_y );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y1 == NULL );
        var_y1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_pos2 );
        tmp_source_name_3 = par_pos2;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_x );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x2 == NULL );
        var_x2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_pos2 );
        tmp_source_name_4 = par_pos2;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_y );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y2 == NULL );
        var_y2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_pos3 );
        tmp_source_name_5 = par_pos3;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_x );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x3 == NULL );
        var_x3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_pos3 );
        tmp_source_name_6 = par_pos3;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_y );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y3 == NULL );
        var_y3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_pos4 );
        tmp_source_name_7 = par_pos4;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_x );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x4 == NULL );
        var_x4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_pos4 );
        tmp_source_name_8 = par_pos4;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_y );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y4 == NULL );
        var_y4 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_x2 );
        tmp_left_name_1 = var_x2;
        CHECK_OBJECT( var_x1 );
        tmp_right_name_1 = var_x1;
        tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sx1 == NULL );
        var_sx1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_x4 );
        tmp_left_name_2 = var_x4;
        CHECK_OBJECT( var_x3 );
        tmp_right_name_2 = var_x3;
        tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sx2 == NULL );
        var_sx2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_y2 );
        tmp_left_name_3 = var_y2;
        CHECK_OBJECT( var_y1 );
        tmp_right_name_3 = var_y1;
        tmp_assign_source_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sy1 == NULL );
        var_sy1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_y4 );
        tmp_left_name_4 = var_y4;
        CHECK_OBJECT( var_y3 );
        tmp_right_name_4 = var_y3;
        tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sy2 == NULL );
        var_sy2 = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( var_sy1 );
        tmp_operand_name_1 = var_sy1;
        tmp_left_name_7 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_x1 );
        tmp_left_name_8 = var_x1;
        CHECK_OBJECT( var_x3 );
        tmp_right_name_6 = var_x3;
        tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sx1 );
        tmp_left_name_9 = var_sx1;
        CHECK_OBJECT( var_y1 );
        tmp_left_name_10 = var_y1;
        CHECK_OBJECT( var_y3 );
        tmp_right_name_9 = var_y3;
        tmp_right_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sx2 );
        tmp_operand_name_2 = var_sx2;
        tmp_left_name_12 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sy1 );
        tmp_right_name_11 = var_sy1;
        tmp_left_name_11 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sx1 );
        tmp_left_name_13 = var_sx1;
        CHECK_OBJECT( var_sy2 );
        tmp_right_name_13 = var_sy2;
        tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_17;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_18;
        PyObject *tmp_right_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        CHECK_OBJECT( var_sx2 );
        tmp_left_name_16 = var_sx2;
        CHECK_OBJECT( var_y1 );
        tmp_left_name_17 = var_y1;
        CHECK_OBJECT( var_y3 );
        tmp_right_name_15 = var_y3;
        tmp_right_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sy2 );
        tmp_left_name_18 = var_sy2;
        CHECK_OBJECT( var_x1 );
        tmp_left_name_19 = var_x1;
        CHECK_OBJECT( var_x3 );
        tmp_right_name_18 = var_x3;
        tmp_right_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_18 );
        if ( tmp_right_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_17 );
        Py_DECREF( tmp_right_name_17 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sx2 );
        tmp_operand_name_3 = var_sx2;
        tmp_left_name_21 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        if ( tmp_left_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sy1 );
        tmp_right_name_20 = var_sy1;
        tmp_left_name_20 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_20 );
        Py_DECREF( tmp_left_name_21 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_sx1 );
        tmp_left_name_22 = var_sx1;
        CHECK_OBJECT( var_sy2 );
        tmp_right_name_22 = var_sy2;
        tmp_right_name_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_14 );
            Py_DECREF( tmp_left_name_20 );

            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_21 );
        Py_DECREF( tmp_left_name_20 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_19 );
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_14;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0e81b7f4a5ff5838399ddad5681fdbf4, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0e81b7f4a5ff5838399ddad5681fdbf4, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ZeroDivisionError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 17;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0e81b7f4a5ff5838399ddad5681fdbf4->m_frame) frame_0e81b7f4a5ff5838399ddad5681fdbf4->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( intersect$$$function_1_intersect );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_outline_return_value_2;
        int tmp_truth_name_2;
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( var_s );
            tmp_assign_source_15 = var_s;
            assert( tmp_comparison_chain_1__operand_2 == NULL );
            Py_INCREF( tmp_assign_source_15 );
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_15;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = const_int_0;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_16 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_comparison_chain_1__comparison_result == NULL );
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_16;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_4;
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_4 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
            Py_INCREF( tmp_outline_return_value_1 );
            goto try_return_handler_4;
            branch_no_3:;
        }
        {
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_3 = const_int_pos_1;
            tmp_outline_return_value_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_outline_return_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( intersect$$$function_1_intersect );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
        Py_DECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( intersect$$$function_1_intersect );
        return NULL;
        outline_result_1:;
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_outline_return_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_outline_return_value_1 );

            exception_lineno = 22;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_outline_return_value_1 );
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
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( var_t );
            tmp_assign_source_17 = var_t;
            assert( tmp_comparison_chain_2__operand_2 == NULL );
            Py_INCREF( tmp_assign_source_17 );
            tmp_comparison_chain_2__operand_2 = tmp_assign_source_17;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            tmp_compexpr_left_4 = const_int_0;
            CHECK_OBJECT( tmp_comparison_chain_2__operand_2 );
            tmp_compexpr_right_4 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_18 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_comparison_chain_2__comparison_result == NULL );
            tmp_comparison_chain_2__comparison_result = tmp_assign_source_18;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_5;
            CHECK_OBJECT( tmp_comparison_chain_2__comparison_result );
            tmp_operand_name_5 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT( tmp_comparison_chain_2__comparison_result );
            tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
            Py_INCREF( tmp_outline_return_value_2 );
            goto try_return_handler_5;
            branch_no_4:;
        }
        {
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( tmp_comparison_chain_2__operand_2 );
            tmp_compexpr_left_5 = tmp_comparison_chain_2__operand_2;
            tmp_compexpr_right_5 = const_int_pos_1;
            tmp_outline_return_value_2 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_outline_return_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_5;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( intersect$$$function_1_intersect );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
        Py_DECREF( tmp_comparison_chain_2__operand_2 );
        tmp_comparison_chain_2__operand_2 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__comparison_result );
        Py_DECREF( tmp_comparison_chain_2__comparison_result );
        tmp_comparison_chain_2__comparison_result = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
        Py_DECREF( tmp_comparison_chain_2__operand_2 );
        tmp_comparison_chain_2__operand_2 = NULL;

        Py_XDECREF( tmp_comparison_chain_2__comparison_result );
        tmp_comparison_chain_2__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( intersect$$$function_1_intersect );
        return NULL;
        outline_result_2:;
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_outline_return_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_outline_return_value_2 );

            exception_lineno = 22;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_outline_return_value_2 );
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_23;
            PyObject *tmp_right_name_23;
            PyObject *tmp_left_name_24;
            PyObject *tmp_right_name_24;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_25;
            PyObject *tmp_right_name_25;
            PyObject *tmp_left_name_26;
            PyObject *tmp_right_name_26;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain_Position );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Position );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Position" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 23;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_x1 );
            tmp_left_name_23 = var_x1;
            CHECK_OBJECT( var_t );
            tmp_left_name_24 = var_t;
            CHECK_OBJECT( var_sx1 );
            tmp_right_name_24 = var_sx1;
            tmp_right_name_23 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
            if ( tmp_right_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
            Py_DECREF( tmp_right_name_23 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_y1 );
            tmp_left_name_25 = var_y1;
            CHECK_OBJECT( var_t );
            tmp_left_name_26 = var_t;
            CHECK_OBJECT( var_sy1 );
            tmp_right_name_26 = var_sy1;
            tmp_right_name_25 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_26 );
            if ( tmp_right_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 23;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
            Py_DECREF( tmp_right_name_25 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 23;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_0e81b7f4a5ff5838399ddad5681fdbf4->m_frame.f_lineno = 23;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e81b7f4a5ff5838399ddad5681fdbf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e81b7f4a5ff5838399ddad5681fdbf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e81b7f4a5ff5838399ddad5681fdbf4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e81b7f4a5ff5838399ddad5681fdbf4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e81b7f4a5ff5838399ddad5681fdbf4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e81b7f4a5ff5838399ddad5681fdbf4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0e81b7f4a5ff5838399ddad5681fdbf4,
        type_description_1,
        par_pos1,
        par_pos2,
        par_pos3,
        par_pos4,
        var_x1,
        var_y1,
        var_x2,
        var_y2,
        var_x3,
        var_y3,
        var_x4,
        var_y4,
        var_sx1,
        var_sx2,
        var_sy1,
        var_sy2,
        var_s,
        var_t
    );


    // Release cached frame.
    if ( frame_0e81b7f4a5ff5838399ddad5681fdbf4 == cache_frame_0e81b7f4a5ff5838399ddad5681fdbf4 )
    {
        Py_DECREF( frame_0e81b7f4a5ff5838399ddad5681fdbf4 );
    }
    cache_frame_0e81b7f4a5ff5838399ddad5681fdbf4 = NULL;

    assertFrameObject( frame_0e81b7f4a5ff5838399ddad5681fdbf4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( intersect$$$function_1_intersect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pos1 );
    Py_DECREF( par_pos1 );
    par_pos1 = NULL;

    CHECK_OBJECT( (PyObject *)par_pos2 );
    Py_DECREF( par_pos2 );
    par_pos2 = NULL;

    CHECK_OBJECT( (PyObject *)par_pos3 );
    Py_DECREF( par_pos3 );
    par_pos3 = NULL;

    CHECK_OBJECT( (PyObject *)par_pos4 );
    Py_DECREF( par_pos4 );
    par_pos4 = NULL;

    CHECK_OBJECT( (PyObject *)var_x1 );
    Py_DECREF( var_x1 );
    var_x1 = NULL;

    CHECK_OBJECT( (PyObject *)var_y1 );
    Py_DECREF( var_y1 );
    var_y1 = NULL;

    CHECK_OBJECT( (PyObject *)var_x2 );
    Py_DECREF( var_x2 );
    var_x2 = NULL;

    CHECK_OBJECT( (PyObject *)var_y2 );
    Py_DECREF( var_y2 );
    var_y2 = NULL;

    CHECK_OBJECT( (PyObject *)var_x3 );
    Py_DECREF( var_x3 );
    var_x3 = NULL;

    CHECK_OBJECT( (PyObject *)var_y3 );
    Py_DECREF( var_y3 );
    var_y3 = NULL;

    CHECK_OBJECT( (PyObject *)var_x4 );
    Py_DECREF( var_x4 );
    var_x4 = NULL;

    CHECK_OBJECT( (PyObject *)var_y4 );
    Py_DECREF( var_y4 );
    var_y4 = NULL;

    CHECK_OBJECT( (PyObject *)var_sx1 );
    Py_DECREF( var_sx1 );
    var_sx1 = NULL;

    CHECK_OBJECT( (PyObject *)var_sx2 );
    Py_DECREF( var_sx2 );
    var_sx2 = NULL;

    CHECK_OBJECT( (PyObject *)var_sy1 );
    Py_DECREF( var_sy1 );
    var_sy1 = NULL;

    CHECK_OBJECT( (PyObject *)var_sy2 );
    Py_DECREF( var_sy2 );
    var_sy2 = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_pos1 );
    Py_DECREF( par_pos1 );
    par_pos1 = NULL;

    CHECK_OBJECT( (PyObject *)par_pos2 );
    Py_DECREF( par_pos2 );
    par_pos2 = NULL;

    CHECK_OBJECT( (PyObject *)par_pos3 );
    Py_DECREF( par_pos3 );
    par_pos3 = NULL;

    CHECK_OBJECT( (PyObject *)par_pos4 );
    Py_DECREF( par_pos4 );
    par_pos4 = NULL;

    Py_XDECREF( var_x1 );
    var_x1 = NULL;

    Py_XDECREF( var_y1 );
    var_y1 = NULL;

    Py_XDECREF( var_x2 );
    var_x2 = NULL;

    Py_XDECREF( var_y2 );
    var_y2 = NULL;

    Py_XDECREF( var_x3 );
    var_x3 = NULL;

    Py_XDECREF( var_y3 );
    var_y3 = NULL;

    Py_XDECREF( var_x4 );
    var_x4 = NULL;

    Py_XDECREF( var_y4 );
    var_y4 = NULL;

    Py_XDECREF( var_sx1 );
    var_sx1 = NULL;

    Py_XDECREF( var_sx2 );
    var_sx2 = NULL;

    Py_XDECREF( var_sy1 );
    var_sy1 = NULL;

    Py_XDECREF( var_sy2 );
    var_sy2 = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( intersect$$$function_1_intersect );
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



static PyObject *MAKE_FUNCTION_intersect$$$function_1_intersect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_intersect$$$function_1_intersect,
        const_str_plain_intersect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0e81b7f4a5ff5838399ddad5681fdbf4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_intersect,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_intersect =
{
    PyModuleDef_HEAD_INIT,
    "intersect",
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

MOD_INIT_DECL( intersect )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_intersect );
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
    puts("intersect: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("intersect: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("intersect: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initintersect" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_intersect = Py_InitModule4(
        "intersect",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_intersect = PyModule_Create( &mdef_intersect );
#endif

    moduledict_intersect = MODULE_DICT( module_intersect );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_intersect,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_intersect,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_intersect,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_intersect,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_intersect );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_intersect, module_intersect );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_0aae59b2e5ec535f9d99dde6bb4ceece;
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
        UPDATE_STRING_DICT0( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_372cdd3c9c9ffcf8cc8f73d03747b96d;
        UPDATE_STRING_DICT0( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0aae59b2e5ec535f9d99dde6bb4ceece = MAKE_MODULE_FRAME( codeobj_0aae59b2e5ec535f9d99dde6bb4ceece, module_intersect );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0aae59b2e5ec535f9d99dde6bb4ceece );
    assert( Py_REFCNT( frame_0aae59b2e5ec535f9d99dde6bb4ceece ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_372cdd3c9c9ffcf8cc8f73d03747b96d;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_pos_vec;
        tmp_globals_name_1 = (PyObject *)moduledict_intersect;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Position_tuple;
        tmp_level_name_1 = const_int_0;
        frame_0aae59b2e5ec535f9d99dde6bb4ceece->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Position );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_intersect, (Nuitka_StringObject *)const_str_plain_Position, tmp_assign_source_4 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0aae59b2e5ec535f9d99dde6bb4ceece );
#endif
    popFrameStack();

    assertFrameObject( frame_0aae59b2e5ec535f9d99dde6bb4ceece );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0aae59b2e5ec535f9d99dde6bb4ceece );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0aae59b2e5ec535f9d99dde6bb4ceece, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0aae59b2e5ec535f9d99dde6bb4ceece->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0aae59b2e5ec535f9d99dde6bb4ceece, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_intersect$$$function_1_intersect(  );



        UPDATE_STRING_DICT1( moduledict_intersect, (Nuitka_StringObject *)const_str_plain_intersect, tmp_assign_source_5 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_intersect, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_intersect );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
