/* Generated code for Python module 'numpy.core.overrides'
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

/* The "_module_numpy$core$overrides" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$overrides;
PyDictObject *moduledict_numpy$core$overrides;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_e86017a8bb27a42e08a2f2b8e0afee30;
extern PyObject *const_str_plain_ENABLE_ARRAY_FUNCTION;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
static PyObject *const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple;
static PyObject *const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple;
static PyObject *const_str_digest_0520e46626259a964d93536ad55d9117;
static PyObject *const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION;
static PyObject *const_str_plain_verify_matching_signatures;
extern PyObject *const_str_plain_func;
static PyObject *const_str_plain_keywords;
extern PyObject *const_str_digest_850ec21bb873cf463f84a18a1814b4f6;
extern PyObject *const_str_plain___wrapped__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION_int_0_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_digest_043960af35293c32da356fa83370719a;
static PyObject *const_str_plain_ArgSpec;
extern PyObject *const_str_plain_wraps;
static PyObject *const_str_digest_4936ad55503a62f47a98ba52e8bee448;
extern PyObject *const_tuple_none_true_true_tuple;
static PyObject *const_tuple_str_plain_getargspec_tuple;
extern PyObject *const_str_plain_collections;
static PyObject *const_tuple_str_plain_func_str_plain_module_tuple;
static PyObject *const_str_digest_6b5ca2e489f16ba0638a2d9133668c19;
static PyObject *const_str_digest_346ccaa4d91a86c9cfb95f2ada10cbe9;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_implement_array_function;
extern PyObject *const_str_plain_docs_from_dispatcher;
static PyObject *const_str_plain_dispatcher;
static PyObject *const_str_digest_181a0a31846001165efdeb9223f00ddc;
static PyObject *const_str_digest_e0990402ddee4ebfd6bcaee354d67e57;
extern PyObject *const_str_plain_set_module;
static PyObject *const_tuple_14a1410bc82697575e1525f3d837d292_tuple;
static PyObject *const_str_digest_313b49b680918e52c561afff4c6be40e;
static PyObject *const_str_digest_0986808c15481710761a0f8d17cdcc5f;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_varargs;
static PyObject *const_tuple_cc00d721ea72150ef19692048fc786e1_tuple;
static PyObject *const_str_digest_ca8fab18e95a7729619c622469966e82;
static PyObject *const_str_digest_f3e7d5457837ca5335c4dc1bb2389dba;
static PyObject *const_str_digest_ff50e7aeb75aabbabb48a104e81390a5;
extern PyObject *const_int_0;
static PyObject *const_str_plain__get_implementing_args;
static PyObject *const_str_digest_d58146bcb69d19662731a00bb93dcf9a;
static PyObject *const_tuple_none_true_false_tuple;
static PyObject *const_tuple_798b2e35dded11b58f061530f912bb00_tuple;
extern PyObject *const_str_plain_add_docstring;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_d7916b8decbbd082b3d18880592083c4_tuple;
extern PyObject *const_str_plain_public_api;
static PyObject *const_str_plain_relevant_args;
static PyObject *const_str_plain_implementation_spec;
extern PyObject *const_str_plain_defaults;
extern PyObject *const_str_plain_verify;
extern PyObject *const_str_plain_namedtuple;
extern PyObject *const_str_plain_getargspec;
static PyObject *const_tuple_fe301b211fc4404c2167acd2e575d118_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_functools;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_str_plain_dispatcher_spec;
static PyObject *const_str_digest_fb1603eecbaf67d4a8464254af6e3a86;
extern PyObject *const_str_digest_e997aebb3079207099b441c0b6d4d9fd;
static PyObject *const_tuple_str_plain_module_str_plain_decorator_tuple;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_digest_3ebbb82d9800d0665e0803be07081408;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple;
extern PyObject *const_str_plain_implementation;
static PyObject *const_str_digest_f7da501bdb512d9226979bf7cb8d8752;
static PyObject *const_str_plain_decorator;
extern PyObject *const_str_plain_array_function_from_dispatcher;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_e86017a8bb27a42e08a2f2b8e0afee30 = UNSTREAM_STRING_ASCII( &constant_bin[ 560174 ], 30, 0 );
    const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple = PyTuple_New( 5 );
    const_str_plain_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 213701 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple, 0, const_str_plain_dispatcher ); Py_INCREF( const_str_plain_dispatcher );
    PyTuple_SET_ITEM( const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple, 1, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple, 2, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple, 3, const_str_plain_docs_from_dispatcher ); Py_INCREF( const_str_plain_docs_from_dispatcher );
    const_str_plain_decorator = UNSTREAM_STRING_ASCII( &constant_bin[ 195154 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple, 4, const_str_plain_decorator ); Py_INCREF( const_str_plain_decorator );
    const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple, 0, const_str_plain_implementation ); Py_INCREF( const_str_plain_implementation );
    PyTuple_SET_ITEM( const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple, 1, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple, 2, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple, 3, const_str_plain_docs_from_dispatcher ); Py_INCREF( const_str_plain_docs_from_dispatcher );
    PyTuple_SET_ITEM( const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple, 4, const_str_plain_decorator ); Py_INCREF( const_str_plain_decorator );
    const_str_digest_0520e46626259a964d93536ad55d9117 = UNSTREAM_STRING_ASCII( &constant_bin[ 560204 ], 49, 0 );
    const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple, 0, const_str_plain_dispatcher ); Py_INCREF( const_str_plain_dispatcher );
    PyTuple_SET_ITEM( const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple, 1, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple, 2, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple, 3, const_str_plain_docs_from_dispatcher ); Py_INCREF( const_str_plain_docs_from_dispatcher );
    PyTuple_SET_ITEM( const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple, 4, const_str_plain_implementation ); Py_INCREF( const_str_plain_implementation );
    const_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION = UNSTREAM_STRING_ASCII( &constant_bin[ 560253 ], 33, 1 );
    const_str_plain_verify_matching_signatures = UNSTREAM_STRING_ASCII( &constant_bin[ 560286 ], 26, 1 );
    const_str_plain_keywords = UNSTREAM_STRING_ASCII( &constant_bin[ 122934 ], 8, 1 );
    const_tuple_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION_int_0_tuple, 0, const_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION ); Py_INCREF( const_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION );
    PyTuple_SET_ITEM( const_tuple_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_digest_043960af35293c32da356fa83370719a = UNSTREAM_STRING_ASCII( &constant_bin[ 560312 ], 1017, 0 );
    const_str_plain_ArgSpec = UNSTREAM_STRING_ASCII( &constant_bin[ 561329 ], 7, 1 );
    const_str_digest_4936ad55503a62f47a98ba52e8bee448 = UNSTREAM_STRING_ASCII( &constant_bin[ 561336 ], 29, 0 );
    const_tuple_str_plain_getargspec_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getargspec_tuple, 0, const_str_plain_getargspec ); Py_INCREF( const_str_plain_getargspec );
    const_tuple_str_plain_func_str_plain_module_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_module_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_module_tuple, 1, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    const_str_digest_6b5ca2e489f16ba0638a2d9133668c19 = UNSTREAM_STRING_ASCII( &constant_bin[ 561365 ], 72, 0 );
    const_str_digest_346ccaa4d91a86c9cfb95f2ada10cbe9 = UNSTREAM_STRING_ASCII( &constant_bin[ 561437 ], 68, 0 );
    const_str_plain_implement_array_function = UNSTREAM_STRING_ASCII( &constant_bin[ 561505 ], 24, 1 );
    const_str_digest_181a0a31846001165efdeb9223f00ddc = UNSTREAM_STRING_ASCII( &constant_bin[ 561529 ], 66, 0 );
    const_str_digest_e0990402ddee4ebfd6bcaee354d67e57 = UNSTREAM_STRING_ASCII( &constant_bin[ 561595 ], 59, 0 );
    const_tuple_14a1410bc82697575e1525f3d837d292_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_14a1410bc82697575e1525f3d837d292_tuple, 0, const_str_plain_implementation ); Py_INCREF( const_str_plain_implementation );
    PyTuple_SET_ITEM( const_tuple_14a1410bc82697575e1525f3d837d292_tuple, 1, const_str_plain_public_api ); Py_INCREF( const_str_plain_public_api );
    PyTuple_SET_ITEM( const_tuple_14a1410bc82697575e1525f3d837d292_tuple, 2, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_14a1410bc82697575e1525f3d837d292_tuple, 3, const_str_plain_dispatcher ); Py_INCREF( const_str_plain_dispatcher );
    PyTuple_SET_ITEM( const_tuple_14a1410bc82697575e1525f3d837d292_tuple, 4, const_str_plain_docs_from_dispatcher ); Py_INCREF( const_str_plain_docs_from_dispatcher );
    PyTuple_SET_ITEM( const_tuple_14a1410bc82697575e1525f3d837d292_tuple, 5, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    const_str_digest_313b49b680918e52c561afff4c6be40e = UNSTREAM_STRING_ASCII( &constant_bin[ 561654 ], 201, 0 );
    const_str_digest_0986808c15481710761a0f8d17cdcc5f = UNSTREAM_STRING_ASCII( &constant_bin[ 561855 ], 1429, 0 );
    const_tuple_cc00d721ea72150ef19692048fc786e1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_cc00d721ea72150ef19692048fc786e1_tuple, 0, const_str_plain_add_docstring ); Py_INCREF( const_str_plain_add_docstring );
    PyTuple_SET_ITEM( const_tuple_cc00d721ea72150ef19692048fc786e1_tuple, 1, const_str_plain_implement_array_function ); Py_INCREF( const_str_plain_implement_array_function );
    const_str_plain__get_implementing_args = UNSTREAM_STRING_ASCII( &constant_bin[ 563284 ], 22, 1 );
    PyTuple_SET_ITEM( const_tuple_cc00d721ea72150ef19692048fc786e1_tuple, 2, const_str_plain__get_implementing_args ); Py_INCREF( const_str_plain__get_implementing_args );
    const_str_digest_ca8fab18e95a7729619c622469966e82 = UNSTREAM_STRING_ASCII( &constant_bin[ 563306 ], 42, 0 );
    const_str_digest_f3e7d5457837ca5335c4dc1bb2389dba = UNSTREAM_STRING_ASCII( &constant_bin[ 563348 ], 62, 0 );
    const_str_digest_ff50e7aeb75aabbabb48a104e81390a5 = UNSTREAM_STRING_ASCII( &constant_bin[ 563410 ], 29, 0 );
    const_str_digest_d58146bcb69d19662731a00bb93dcf9a = UNSTREAM_STRING_ASCII( &constant_bin[ 563439 ], 370, 0 );
    const_tuple_none_true_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_true_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_true_false_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_true_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_tuple_798b2e35dded11b58f061530f912bb00_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_798b2e35dded11b58f061530f912bb00_tuple, 0, const_str_plain_ArgSpec ); Py_INCREF( const_str_plain_ArgSpec );
    PyTuple_SET_ITEM( const_tuple_798b2e35dded11b58f061530f912bb00_tuple, 1, const_str_digest_e86017a8bb27a42e08a2f2b8e0afee30 ); Py_INCREF( const_str_digest_e86017a8bb27a42e08a2f2b8e0afee30 );
    const_tuple_d7916b8decbbd082b3d18880592083c4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d7916b8decbbd082b3d18880592083c4_tuple, 0, const_str_plain_implementation ); Py_INCREF( const_str_plain_implementation );
    PyTuple_SET_ITEM( const_tuple_d7916b8decbbd082b3d18880592083c4_tuple, 1, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_d7916b8decbbd082b3d18880592083c4_tuple, 2, const_str_plain_docs_from_dispatcher ); Py_INCREF( const_str_plain_docs_from_dispatcher );
    PyTuple_SET_ITEM( const_tuple_d7916b8decbbd082b3d18880592083c4_tuple, 3, const_str_plain_dispatcher ); Py_INCREF( const_str_plain_dispatcher );
    const_str_plain_relevant_args = UNSTREAM_STRING_ASCII( &constant_bin[ 560844 ], 13, 1 );
    const_str_plain_implementation_spec = UNSTREAM_STRING_ASCII( &constant_bin[ 563809 ], 19, 1 );
    const_tuple_fe301b211fc4404c2167acd2e575d118_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fe301b211fc4404c2167acd2e575d118_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_fe301b211fc4404c2167acd2e575d118_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_fe301b211fc4404c2167acd2e575d118_tuple, 2, const_str_plain_relevant_args ); Py_INCREF( const_str_plain_relevant_args );
    PyTuple_SET_ITEM( const_tuple_fe301b211fc4404c2167acd2e575d118_tuple, 3, const_str_plain_dispatcher ); Py_INCREF( const_str_plain_dispatcher );
    PyTuple_SET_ITEM( const_tuple_fe301b211fc4404c2167acd2e575d118_tuple, 4, const_str_plain_implementation ); Py_INCREF( const_str_plain_implementation );
    PyTuple_SET_ITEM( const_tuple_fe301b211fc4404c2167acd2e575d118_tuple, 5, const_str_plain_public_api ); Py_INCREF( const_str_plain_public_api );
    const_str_plain_dispatcher_spec = UNSTREAM_STRING_ASCII( &constant_bin[ 563828 ], 15, 1 );
    const_str_digest_fb1603eecbaf67d4a8464254af6e3a86 = UNSTREAM_STRING_ASCII( &constant_bin[ 563843 ], 58, 0 );
    const_tuple_str_plain_module_str_plain_decorator_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_decorator_tuple, 0, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_decorator_tuple, 1, const_str_plain_decorator ); Py_INCREF( const_str_plain_decorator );
    const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple, 0, const_str_plain_implementation ); Py_INCREF( const_str_plain_implementation );
    PyTuple_SET_ITEM( const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple, 1, const_str_plain_dispatcher ); Py_INCREF( const_str_plain_dispatcher );
    PyTuple_SET_ITEM( const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple, 2, const_str_plain_implementation_spec ); Py_INCREF( const_str_plain_implementation_spec );
    PyTuple_SET_ITEM( const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple, 3, const_str_plain_dispatcher_spec ); Py_INCREF( const_str_plain_dispatcher_spec );
    const_str_digest_f7da501bdb512d9226979bf7cb8d8752 = UNSTREAM_STRING_ASCII( &constant_bin[ 563901 ], 71, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$overrides( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1e085901da171a7034775fbc9932b50d;
static PyCodeObject *codeobj_be8a4ae37fea3692d147d7fc5d32a348;
static PyCodeObject *codeobj_991e5b7298581b95c239afe1d5079469;
static PyCodeObject *codeobj_947424274727f5825c68266664475731;
static PyCodeObject *codeobj_39c8a6afd43845fddeb0937dda554a5e;
static PyCodeObject *codeobj_29eaff9117448220cc51350fad75f6a5;
static PyCodeObject *codeobj_e04fcd2017f72262d72be814c4df4533;
static PyCodeObject *codeobj_4e06e5b8157248a8958feda18047debe;
static PyCodeObject *codeobj_79876ac7ded33b5050d57924583b5819;
static PyCodeObject *codeobj_17caf397b91a123606c13dfea7cad2b9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6b5ca2e489f16ba0638a2d9133668c19;
    codeobj_1e085901da171a7034775fbc9932b50d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4936ad55503a62f47a98ba52e8bee448, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_be8a4ae37fea3692d147d7fc5d32a348 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_array_function_dispatch, 111, const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_991e5b7298581b95c239afe1d5079469 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_array_function_from_dispatcher, 179, const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_947424274727f5825c68266664475731 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorator, 104, const_tuple_str_plain_func_str_plain_module_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_39c8a6afd43845fddeb0937dda554a5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorator, 146, const_tuple_d7916b8decbbd082b3d18880592083c4_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_29eaff9117448220cc51350fad75f6a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorator, 154, const_tuple_14a1410bc82697575e1525f3d837d292_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e04fcd2017f72262d72be814c4df4533 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorator, 183, const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_4e06e5b8157248a8958feda18047debe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_api, 161, const_tuple_fe301b211fc4404c2167acd2e575d118_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_79876ac7ded33b5050d57924583b5819 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_module, 93, const_tuple_str_plain_module_str_plain_decorator_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17caf397b91a123606c13dfea7cad2b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify_matching_signatures, 71, const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_1_verify_matching_signatures(  );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_2_set_module(  );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_2_set_module$$$function_1_decorator(  );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_1_decorator(  );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator(  );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator$$$function_1_public_api(  );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_4_array_function_from_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_4_array_function_from_dispatcher$$$function_1_decorator(  );


// The module function definitions.
static PyObject *impl_numpy$core$overrides$$$function_1_verify_matching_signatures( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_implementation = python_pars[ 0 ];
    PyObject *par_dispatcher = python_pars[ 1 ];
    PyObject *var_implementation_spec = NULL;
    PyObject *var_dispatcher_spec = NULL;
    struct Nuitka_FrameObject *frame_17caf397b91a123606c13dfea7cad2b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_17caf397b91a123606c13dfea7cad2b9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17caf397b91a123606c13dfea7cad2b9, codeobj_17caf397b91a123606c13dfea7cad2b9, module_numpy$core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_17caf397b91a123606c13dfea7cad2b9 = cache_frame_17caf397b91a123606c13dfea7cad2b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17caf397b91a123606c13dfea7cad2b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17caf397b91a123606c13dfea7cad2b9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_ArgSpec );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ArgSpec );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ArgSpec" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_getargspec );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getargspec );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getargspec" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_implementation );
        tmp_args_element_name_1 = par_implementation;
        frame_17caf397b91a123606c13dfea7cad2b9->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___internal__$$$function_3_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_implementation_spec == NULL );
        var_implementation_spec = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_ArgSpec );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ArgSpec );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ArgSpec" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_getargspec );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getargspec );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getargspec" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_dispatcher );
        tmp_args_element_name_2 = par_dispatcher;
        frame_17caf397b91a123606c13dfea7cad2b9->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_dircall_arg2_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_dircall_arg2_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assign_source_2 = impl___internal__$$$function_3_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_dispatcher_spec == NULL );
        var_dispatcher_spec = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_value_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_value_name_2;
        PyObject *tmp_source_name_8;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_implementation_spec );
        tmp_source_name_1 = var_implementation_spec;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dispatcher_spec );
        tmp_source_name_2 = var_dispatcher_spec;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_args );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( var_implementation_spec );
        tmp_source_name_3 = var_implementation_spec;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_varargs );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dispatcher_spec );
        tmp_source_name_4 = var_dispatcher_spec;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_varargs );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( var_implementation_spec );
        tmp_source_name_5 = var_implementation_spec;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_keywords );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dispatcher_spec );
        tmp_source_name_6 = var_dispatcher_spec;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_keywords );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_3 == 1 )
        {
            goto or_left_3;
        }
        else
        {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT( var_implementation_spec );
        tmp_source_name_7 = var_implementation_spec;
        tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_defaults );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
        CHECK_OBJECT( var_dispatcher_spec );
        tmp_source_name_8 = var_dispatcher_spec;
        tmp_value_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_defaults );
        if ( tmp_value_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_2 );
        Py_DECREF( tmp_value_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        assert( !(tmp_res == -1) );
        tmp_or_left_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_4 == 1 )
        {
            goto or_left_4;
        }
        else
        {
            goto or_right_4;
        }
        or_right_4:;
        CHECK_OBJECT( var_implementation_spec );
        tmp_source_name_9 = var_implementation_spec;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_defaults );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_5 );
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
        CHECK_OBJECT( var_implementation_spec );
        tmp_source_name_10 = var_implementation_spec;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_defaults );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_6 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dispatcher_spec );
        tmp_source_name_11 = var_dispatcher_spec;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_defaults );
        if ( tmp_len_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = BUILTIN_LEN( tmp_len_arg_2 );
        Py_DECREF( tmp_len_arg_2 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        assert( !(tmp_res == -1) );
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_4 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_right_value_3 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_or_right_value_3 = tmp_or_left_value_4;
        or_end_4:;
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_f7da501bdb512d9226979bf7cb8d8752;
            CHECK_OBJECT( par_implementation );
            tmp_right_name_1 = par_implementation;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_17caf397b91a123606c13dfea7cad2b9->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 84;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( var_implementation_spec );
        tmp_source_name_12 = var_implementation_spec;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_defaults );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_7 );
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_source_name_13;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( var_dispatcher_spec );
            tmp_source_name_13 = var_dispatcher_spec;
            tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_defaults );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_tuple_none_tuple;
            CHECK_OBJECT( var_dispatcher_spec );
            tmp_source_name_14 = var_dispatcher_spec;
            tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_defaults );
            if ( tmp_len_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_8 );

                exception_lineno = 88;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_3 );
            Py_DECREF( tmp_len_arg_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_8 );

                exception_lineno = 88;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_8 = BINARY_OPERATION_MUL_TUPLE_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            assert( !(tmp_compexpr_right_8 == NULL) );
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_left_8 );
            Py_DECREF( tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_181a0a31846001165efdeb9223f00ddc;
                frame_17caf397b91a123606c13dfea7cad2b9->m_frame.f_lineno = 89;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 89;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17caf397b91a123606c13dfea7cad2b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17caf397b91a123606c13dfea7cad2b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17caf397b91a123606c13dfea7cad2b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17caf397b91a123606c13dfea7cad2b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17caf397b91a123606c13dfea7cad2b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17caf397b91a123606c13dfea7cad2b9,
        type_description_1,
        par_implementation,
        par_dispatcher,
        var_implementation_spec,
        var_dispatcher_spec
    );


    // Release cached frame.
    if ( frame_17caf397b91a123606c13dfea7cad2b9 == cache_frame_17caf397b91a123606c13dfea7cad2b9 )
    {
        Py_DECREF( frame_17caf397b91a123606c13dfea7cad2b9 );
    }
    cache_frame_17caf397b91a123606c13dfea7cad2b9 = NULL;

    assertFrameObject( frame_17caf397b91a123606c13dfea7cad2b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_1_verify_matching_signatures );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_implementation );
    Py_DECREF( par_implementation );
    par_implementation = NULL;

    CHECK_OBJECT( (PyObject *)par_dispatcher );
    Py_DECREF( par_dispatcher );
    par_dispatcher = NULL;

    CHECK_OBJECT( (PyObject *)var_implementation_spec );
    Py_DECREF( var_implementation_spec );
    var_implementation_spec = NULL;

    CHECK_OBJECT( (PyObject *)var_dispatcher_spec );
    Py_DECREF( var_dispatcher_spec );
    var_dispatcher_spec = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_implementation );
    Py_DECREF( par_implementation );
    par_implementation = NULL;

    CHECK_OBJECT( (PyObject *)par_dispatcher );
    Py_DECREF( par_dispatcher );
    par_dispatcher = NULL;

    Py_XDECREF( var_implementation_spec );
    var_implementation_spec = NULL;

    Py_XDECREF( var_dispatcher_spec );
    var_dispatcher_spec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_1_verify_matching_signatures );
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


static PyObject *impl_numpy$core$overrides$$$function_2_set_module( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_module = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_decorator = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_numpy$core$overrides$$$function_2_set_module$$$function_1_decorator(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_module;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_decorator == NULL );
        var_decorator = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT( var_decorator );
    tmp_return_value = var_decorator;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_2_set_module );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)var_decorator );
    Py_DECREF( var_decorator );
    var_decorator = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_2_set_module );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$overrides$$$function_2_set_module$$$function_1_decorator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_947424274727f5825c68266664475731;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_947424274727f5825c68266664475731 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_947424274727f5825c68266664475731, codeobj_947424274727f5825c68266664475731, module_numpy$core$overrides, sizeof(void *)+sizeof(void *) );
    frame_947424274727f5825c68266664475731 = cache_frame_947424274727f5825c68266664475731;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_947424274727f5825c68266664475731 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_947424274727f5825c68266664475731 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = PyCell_GET( self->m_closure[0] );
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "module" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 106;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }

            tmp_assattr_name_1 = PyCell_GET( self->m_closure[0] );
            CHECK_OBJECT( par_func );
            tmp_assattr_target_1 = par_func;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___module__, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_947424274727f5825c68266664475731 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_947424274727f5825c68266664475731 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_947424274727f5825c68266664475731, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_947424274727f5825c68266664475731->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_947424274727f5825c68266664475731, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_947424274727f5825c68266664475731,
        type_description_1,
        par_func,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_947424274727f5825c68266664475731 == cache_frame_947424274727f5825c68266664475731 )
    {
        Py_DECREF( frame_947424274727f5825c68266664475731 );
    }
    cache_frame_947424274727f5825c68266664475731 = NULL;

    assertFrameObject( frame_947424274727f5825c68266664475731 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_func );
    tmp_return_value = par_func;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_2_set_module$$$function_1_decorator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_2_set_module$$$function_1_decorator );
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


static PyObject *impl_numpy$core$overrides$$$function_3_array_function_dispatch( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_dispatcher = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_module = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_verify = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_docs_from_dispatcher = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *var_decorator = NULL;
    struct Nuitka_FrameObject *frame_be8a4ae37fea3692d147d7fc5d32a348;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_be8a4ae37fea3692d147d7fc5d32a348 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be8a4ae37fea3692d147d7fc5d32a348, codeobj_be8a4ae37fea3692d147d7fc5d32a348, module_numpy$core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be8a4ae37fea3692d147d7fc5d32a348 = cache_frame_be8a4ae37fea3692d147d7fc5d32a348;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be8a4ae37fea3692d147d7fc5d32a348 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be8a4ae37fea3692d147d7fc5d32a348 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_ENABLE_ARRAY_FUNCTION );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ENABLE_ARRAY_FUNCTION );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ENABLE_ARRAY_FUNCTION" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;
            type_description_1 = "cccco";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = tmp_mvar_value_1;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "cccco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_1_decorator(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_dispatcher;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_docs_from_dispatcher;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] = par_module;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] );


            assert( var_decorator == NULL );
            var_decorator = tmp_assign_source_1;
        }
        CHECK_OBJECT( var_decorator );
        tmp_return_value = var_decorator;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be8a4ae37fea3692d147d7fc5d32a348 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be8a4ae37fea3692d147d7fc5d32a348 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be8a4ae37fea3692d147d7fc5d32a348 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be8a4ae37fea3692d147d7fc5d32a348, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be8a4ae37fea3692d147d7fc5d32a348->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be8a4ae37fea3692d147d7fc5d32a348, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be8a4ae37fea3692d147d7fc5d32a348,
        type_description_1,
        par_dispatcher,
        par_module,
        par_verify,
        par_docs_from_dispatcher,
        var_decorator
    );


    // Release cached frame.
    if ( frame_be8a4ae37fea3692d147d7fc5d32a348 == cache_frame_be8a4ae37fea3692d147d7fc5d32a348 )
    {
        Py_DECREF( frame_be8a4ae37fea3692d147d7fc5d32a348 );
    }
    cache_frame_be8a4ae37fea3692d147d7fc5d32a348 = NULL;

    assertFrameObject( frame_be8a4ae37fea3692d147d7fc5d32a348 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_dispatcher;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_docs_from_dispatcher;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[2] = par_module;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[3] = par_verify;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[3] );


        assert( var_decorator == NULL );
        var_decorator = tmp_assign_source_2;
    }
    CHECK_OBJECT( var_decorator );
    tmp_return_value = var_decorator;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_3_array_function_dispatch );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dispatcher );
    Py_DECREF( par_dispatcher );
    par_dispatcher = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_docs_from_dispatcher );
    Py_DECREF( par_docs_from_dispatcher );
    par_docs_from_dispatcher = NULL;

    CHECK_OBJECT( (PyObject *)var_decorator );
    Py_DECREF( var_decorator );
    var_decorator = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_dispatcher );
    Py_DECREF( par_dispatcher );
    par_dispatcher = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_docs_from_dispatcher );
    Py_DECREF( par_docs_from_dispatcher );
    par_docs_from_dispatcher = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_3_array_function_dispatch );
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


static PyObject *impl_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_1_decorator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_implementation = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_39c8a6afd43845fddeb0937dda554a5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_39c8a6afd43845fddeb0937dda554a5e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_39c8a6afd43845fddeb0937dda554a5e, codeobj_39c8a6afd43845fddeb0937dda554a5e, module_numpy$core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_39c8a6afd43845fddeb0937dda554a5e = cache_frame_39c8a6afd43845fddeb0937dda554a5e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_39c8a6afd43845fddeb0937dda554a5e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_39c8a6afd43845fddeb0937dda554a5e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = PyCell_GET( self->m_closure[2] );
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            if ( PyCell_GET( self->m_closure[2] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "module" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 148;
                type_description_1 = "occc";
                goto frame_exception_exit_1;
            }

            tmp_assattr_name_1 = PyCell_GET( self->m_closure[2] );
            CHECK_OBJECT( par_implementation );
            tmp_assattr_target_1 = par_implementation;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___module__, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "occc";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "docs_from_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( PyCell_GET( self->m_closure[1] ) );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_add_docstring );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_docstring );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "add_docstring" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 150;
                type_description_1 = "occc";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_implementation );
            tmp_args_element_name_1 = par_implementation;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatcher" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 150;
                type_description_1 = "occc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___doc__ );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "occc";
                goto frame_exception_exit_1;
            }
            frame_39c8a6afd43845fddeb0937dda554a5e->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "occc";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39c8a6afd43845fddeb0937dda554a5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39c8a6afd43845fddeb0937dda554a5e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_39c8a6afd43845fddeb0937dda554a5e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_39c8a6afd43845fddeb0937dda554a5e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_39c8a6afd43845fddeb0937dda554a5e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_39c8a6afd43845fddeb0937dda554a5e,
        type_description_1,
        par_implementation,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_39c8a6afd43845fddeb0937dda554a5e == cache_frame_39c8a6afd43845fddeb0937dda554a5e )
    {
        Py_DECREF( frame_39c8a6afd43845fddeb0937dda554a5e );
    }
    cache_frame_39c8a6afd43845fddeb0937dda554a5e = NULL;

    assertFrameObject( frame_39c8a6afd43845fddeb0937dda554a5e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_implementation );
    tmp_return_value = par_implementation;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_3_array_function_dispatch$$$function_1_decorator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_implementation );
    Py_DECREF( par_implementation );
    par_implementation = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_implementation );
    Py_DECREF( par_implementation );
    par_implementation = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_3_array_function_dispatch$$$function_1_decorator );
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


static PyObject *impl_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_implementation = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *var_public_api = PyCell_EMPTY();
    struct Nuitka_FrameObject *frame_29eaff9117448220cc51350fad75f6a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_29eaff9117448220cc51350fad75f6a5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29eaff9117448220cc51350fad75f6a5, codeobj_29eaff9117448220cc51350fad75f6a5, module_numpy$core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29eaff9117448220cc51350fad75f6a5 = cache_frame_29eaff9117448220cc51350fad75f6a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29eaff9117448220cc51350fad75f6a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29eaff9117448220cc51350fad75f6a5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "verify" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 155;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( PyCell_GET( self->m_closure[3] ) );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_verify_matching_signatures );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_verify_matching_signatures );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "verify_matching_signatures" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 156;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( PyCell_GET( par_implementation ) );
            tmp_args_element_name_1 = PyCell_GET( par_implementation );
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatcher" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 156;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = PyCell_GET( self->m_closure[0] );
            frame_29eaff9117448220cc51350fad75f6a5->m_frame.f_lineno = 156;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "docs_from_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 158;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( PyCell_GET( self->m_closure[1] ) );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_add_docstring );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_docstring );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "add_docstring" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 159;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( PyCell_GET( par_implementation ) );
            tmp_args_element_name_3 = PyCell_GET( par_implementation );
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatcher" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 159;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___doc__ );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }
            frame_29eaff9117448220cc51350fad75f6a5->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 161;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( PyCell_GET( par_implementation ) );
        tmp_args_element_name_5 = PyCell_GET( par_implementation );
        frame_29eaff9117448220cc51350fad75f6a5->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_wraps, call_args );
        }

        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator$$$function_1_public_api(  );

        ((struct Nuitka_FunctionObject *)tmp_args_element_name_6)->m_closure[0] = self->m_closure[0];
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_6)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_args_element_name_6)->m_closure[1] = par_implementation;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_6)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_args_element_name_6)->m_closure[2] = var_public_api;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_6)->m_closure[2] );


        frame_29eaff9117448220cc51350fad75f6a5->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_public_api ) == NULL );
        PyCell_SET( var_public_api, tmp_assign_source_1 );

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 167;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = PyCell_GET( self->m_closure[2] );
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            if ( PyCell_GET( self->m_closure[2] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "module" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 168;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }

            tmp_assattr_name_1 = PyCell_GET( self->m_closure[2] );
            CHECK_OBJECT( PyCell_GET( var_public_api ) );
            tmp_assattr_target_1 = PyCell_GET( var_public_api );
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___module__, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "cccccc";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( PyCell_GET( par_implementation ) );
        tmp_assattr_name_2 = PyCell_GET( par_implementation );
        CHECK_OBJECT( PyCell_GET( var_public_api ) );
        tmp_assattr_target_2 = PyCell_GET( var_public_api );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___wrapped__, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29eaff9117448220cc51350fad75f6a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29eaff9117448220cc51350fad75f6a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29eaff9117448220cc51350fad75f6a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29eaff9117448220cc51350fad75f6a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29eaff9117448220cc51350fad75f6a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29eaff9117448220cc51350fad75f6a5,
        type_description_1,
        par_implementation,
        var_public_api,
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_29eaff9117448220cc51350fad75f6a5 == cache_frame_29eaff9117448220cc51350fad75f6a5 )
    {
        Py_DECREF( frame_29eaff9117448220cc51350fad75f6a5 );
    }
    cache_frame_29eaff9117448220cc51350fad75f6a5 = NULL;

    assertFrameObject( frame_29eaff9117448220cc51350fad75f6a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( PyCell_GET( var_public_api ) );
    tmp_return_value = PyCell_GET( var_public_api );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_implementation );
    Py_DECREF( par_implementation );
    par_implementation = NULL;

    CHECK_OBJECT( (PyObject *)var_public_api );
    Py_DECREF( var_public_api );
    var_public_api = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_implementation );
    Py_DECREF( par_implementation );
    par_implementation = NULL;

    CHECK_OBJECT( (PyObject *)var_public_api );
    Py_DECREF( var_public_api );
    var_public_api = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator );
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


static PyObject *impl_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator$$$function_1_public_api( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_relevant_args = NULL;
    struct Nuitka_FrameObject *frame_4e06e5b8157248a8958feda18047debe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4e06e5b8157248a8958feda18047debe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4e06e5b8157248a8958feda18047debe, codeobj_4e06e5b8157248a8958feda18047debe, module_numpy$core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4e06e5b8157248a8958feda18047debe = cache_frame_4e06e5b8157248a8958feda18047debe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e06e5b8157248a8958feda18047debe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e06e5b8157248a8958feda18047debe ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert( var_relevant_args == NULL );
        var_relevant_args = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_implement_array_function );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_implement_array_function );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "implement_array_function" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "implementation" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[1] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "public_api" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( var_relevant_args );
        tmp_args_element_name_3 = var_relevant_args;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_4 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_args_element_name_5 = par_kwargs;
        frame_4e06e5b8157248a8958feda18047debe->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e06e5b8157248a8958feda18047debe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e06e5b8157248a8958feda18047debe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e06e5b8157248a8958feda18047debe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e06e5b8157248a8958feda18047debe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e06e5b8157248a8958feda18047debe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e06e5b8157248a8958feda18047debe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e06e5b8157248a8958feda18047debe,
        type_description_1,
        par_args,
        par_kwargs,
        var_relevant_args,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_4e06e5b8157248a8958feda18047debe == cache_frame_4e06e5b8157248a8958feda18047debe )
    {
        Py_DECREF( frame_4e06e5b8157248a8958feda18047debe );
    }
    cache_frame_4e06e5b8157248a8958feda18047debe = NULL;

    assertFrameObject( frame_4e06e5b8157248a8958feda18047debe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator$$$function_1_public_api );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_relevant_args );
    Py_DECREF( var_relevant_args );
    var_relevant_args = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_relevant_args );
    var_relevant_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator$$$function_1_public_api );
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


static PyObject *impl_numpy$core$overrides$$$function_4_array_function_from_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_implementation = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_module = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_verify = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_docs_from_dispatcher = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *var_decorator = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_numpy$core$overrides$$$function_4_array_function_from_dispatcher$$$function_1_decorator(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_docs_from_dispatcher;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_implementation;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] = par_module;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[3] = par_verify;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[3] );


        assert( var_decorator == NULL );
        var_decorator = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT( var_decorator );
    tmp_return_value = var_decorator;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_4_array_function_from_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_implementation );
    Py_DECREF( par_implementation );
    par_implementation = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_docs_from_dispatcher );
    Py_DECREF( par_docs_from_dispatcher );
    par_docs_from_dispatcher = NULL;

    CHECK_OBJECT( (PyObject *)var_decorator );
    Py_DECREF( var_decorator );
    var_decorator = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_4_array_function_from_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$overrides$$$function_4_array_function_from_dispatcher$$$function_1_decorator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dispatcher = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e04fcd2017f72262d72be814c4df4533;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e04fcd2017f72262d72be814c4df4533 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e04fcd2017f72262d72be814c4df4533, codeobj_e04fcd2017f72262d72be814c4df4533, module_numpy$core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e04fcd2017f72262d72be814c4df4533 = cache_frame_e04fcd2017f72262d72be814c4df4533;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e04fcd2017f72262d72be814c4df4533 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e04fcd2017f72262d72be814c4df4533 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_dispatcher );
        tmp_tuple_element_1 = par_dispatcher;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 185;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[2] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_verify;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "verify" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 185;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = PyCell_GET( self->m_closure[3] );
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_docs_from_dispatcher;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "docs_from_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 186;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = PyCell_GET( self->m_closure[0] );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_e04fcd2017f72262d72be814c4df4533->m_frame.f_lineno = 184;
        tmp_called_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "implementation" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 186;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[1] );
        frame_e04fcd2017f72262d72be814c4df4533->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e04fcd2017f72262d72be814c4df4533 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e04fcd2017f72262d72be814c4df4533 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e04fcd2017f72262d72be814c4df4533 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e04fcd2017f72262d72be814c4df4533, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e04fcd2017f72262d72be814c4df4533->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e04fcd2017f72262d72be814c4df4533, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e04fcd2017f72262d72be814c4df4533,
        type_description_1,
        par_dispatcher,
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_e04fcd2017f72262d72be814c4df4533 == cache_frame_e04fcd2017f72262d72be814c4df4533 )
    {
        Py_DECREF( frame_e04fcd2017f72262d72be814c4df4533 );
    }
    cache_frame_e04fcd2017f72262d72be814c4df4533 = NULL;

    assertFrameObject( frame_e04fcd2017f72262d72be814c4df4533 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_4_array_function_from_dispatcher$$$function_1_decorator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dispatcher );
    Py_DECREF( par_dispatcher );
    par_dispatcher = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_dispatcher );
    Py_DECREF( par_dispatcher );
    par_dispatcher = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$overrides$$$function_4_array_function_from_dispatcher$$$function_1_decorator );
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



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_1_verify_matching_signatures(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_1_verify_matching_signatures,
        const_str_plain_verify_matching_signatures,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_17caf397b91a123606c13dfea7cad2b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        const_str_digest_fb1603eecbaf67d4a8464254af6e3a86,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_2_set_module(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_2_set_module,
        const_str_plain_set_module,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79876ac7ded33b5050d57924583b5819,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        const_str_digest_313b49b680918e52c561afff4c6be40e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_2_set_module$$$function_1_decorator(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_2_set_module$$$function_1_decorator,
        const_str_plain_decorator,
#if PYTHON_VERSION >= 300
        const_str_digest_ff50e7aeb75aabbabb48a104e81390a5,
#endif
        codeobj_947424274727f5825c68266664475731,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_3_array_function_dispatch,
        const_str_plain_array_function_dispatch,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be8a4ae37fea3692d147d7fc5d32a348,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        const_str_digest_0986808c15481710761a0f8d17cdcc5f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_1_decorator(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_1_decorator,
        const_str_plain_decorator,
#if PYTHON_VERSION >= 300
        const_str_digest_ca8fab18e95a7729619c622469966e82,
#endif
        codeobj_39c8a6afd43845fddeb0937dda554a5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator,
        const_str_plain_decorator,
#if PYTHON_VERSION >= 300
        const_str_digest_ca8fab18e95a7729619c622469966e82,
#endif
        codeobj_29eaff9117448220cc51350fad75f6a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator$$$function_1_public_api(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_3_array_function_dispatch$$$function_2_decorator$$$function_1_public_api,
        const_str_plain_public_api,
#if PYTHON_VERSION >= 300
        const_str_digest_f3e7d5457837ca5335c4dc1bb2389dba,
#endif
        codeobj_4e06e5b8157248a8958feda18047debe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_4_array_function_from_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_4_array_function_from_dispatcher,
        const_str_plain_array_function_from_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_991e5b7298581b95c239afe1d5079469,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        const_str_digest_346ccaa4d91a86c9cfb95f2ada10cbe9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$overrides$$$function_4_array_function_from_dispatcher$$$function_1_decorator(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$overrides$$$function_4_array_function_from_dispatcher$$$function_1_decorator,
        const_str_plain_decorator,
#if PYTHON_VERSION >= 300
        const_str_digest_0520e46626259a964d93536ad55d9117,
#endif
        codeobj_e04fcd2017f72262d72be814c4df4533,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$overrides,
        NULL,
        4
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$overrides =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.overrides",
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

MOD_INIT_DECL( numpy$core$overrides )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$overrides );
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
    puts("numpy.core.overrides: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.overrides: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.overrides: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$overrides" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$overrides = Py_InitModule4(
        "numpy.core.overrides",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$core$overrides = PyModule_Create( &mdef_numpy$core$overrides );
#endif

    moduledict_numpy$core$overrides = MODULE_DICT( module_numpy$core$overrides );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$core$overrides,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$core$overrides,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$overrides,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$overrides,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$core$overrides );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_3ebbb82d9800d0665e0803be07081408, module_numpy$core$overrides );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1e085901da171a7034775fbc9932b50d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_e0990402ddee4ebfd6bcaee354d67e57;
        UPDATE_STRING_DICT0( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_6b5ca2e489f16ba0638a2d9133668c19;
        UPDATE_STRING_DICT0( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1e085901da171a7034775fbc9932b50d = MAKE_MODULE_FRAME( codeobj_1e085901da171a7034775fbc9932b50d, module_numpy$core$overrides );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1e085901da171a7034775fbc9932b50d );
    assert( Py_REFCNT( frame_1e085901da171a7034775fbc9932b50d ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_6b5ca2e489f16ba0638a2d9133668c19;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_collections;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$overrides;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_collections, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_functools;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$overrides;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_os;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$overrides;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_850ec21bb873cf463f84a18a1814b4f6;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$overrides;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_cc00d721ea72150ef19692048fc786e1_tuple;
        tmp_level_name_4 = const_int_0;
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 6;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_add_docstring );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_add_docstring, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_implement_array_function );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_implement_array_function, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain__get_implementing_args );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain__get_implementing_args, tmp_assign_source_10 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_e997aebb3079207099b441c0b6d4d9fd;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$core$overrides;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_getargspec_tuple;
        tmp_level_name_5 = const_int_0;
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_getargspec );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_getargspec, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_value_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 12;
        tmp_int_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_NUMPY_EXPERIMENTAL_ARRAY_FUNCTION_int_0_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_value_name_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = ( tmp_res != 0 ) ? Py_True : Py_False;
        UPDATE_STRING_DICT0( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_ENABLE_ARRAY_FUNCTION, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_add_docstring );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_docstring );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "add_docstring" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_implement_array_function );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_implement_array_function );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "implement_array_function" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_5;
        tmp_args_element_name_2 = const_str_digest_043960af35293c32da356fa83370719a;
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_add_docstring );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_docstring );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "add_docstring" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain__get_implementing_args );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_implementing_args );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_implementing_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_7;
        tmp_args_element_name_4 = const_str_digest_d58146bcb69d19662731a00bb93dcf9a;
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_collections );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_collections );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "collections" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_8;
        frame_1e085901da171a7034775fbc9932b50d->m_frame.f_lineno = 68;
        tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_namedtuple, &PyTuple_GET_ITEM( const_tuple_798b2e35dded11b58f061530f912bb00_tuple, 0 ) );

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_ArgSpec, tmp_assign_source_13 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e085901da171a7034775fbc9932b50d );
#endif
    popFrameStack();

    assertFrameObject( frame_1e085901da171a7034775fbc9932b50d );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e085901da171a7034775fbc9932b50d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e085901da171a7034775fbc9932b50d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e085901da171a7034775fbc9932b50d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e085901da171a7034775fbc9932b50d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_numpy$core$overrides$$$function_1_verify_matching_signatures(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_verify_matching_signatures, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_numpy$core$overrides$$$function_2_set_module(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_set_module, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_true_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_16 = MAKE_FUNCTION_numpy$core$overrides$$$function_3_array_function_dispatch( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_true_true_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_17 = MAKE_FUNCTION_numpy$core$overrides$$$function_4_array_function_from_dispatcher( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain_array_function_from_dispatcher, tmp_assign_source_17 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$core$overrides, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$core$overrides );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
