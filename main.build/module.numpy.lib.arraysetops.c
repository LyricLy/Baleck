/* Generated code for Python module 'numpy.lib.arraysetops'
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

/* The "_module_numpy$lib$arraysetops" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$arraysetops;
PyDictObject *moduledict_numpy$lib$arraysetops;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_ary;
static PyObject *const_str_plain_ar1_indices;
extern PyObject *const_str_plain_sar;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_false_false_false_tuple;
extern PyObject *const_str_plain_ones;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__setdiff1d_dispatcher;
static PyObject *const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple;
static PyObject *const_str_digest_b8ab909ead67b733d21e84e0fa35f8f7;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_quicksort;
extern PyObject *const_str_plain_ret;
static PyObject *const_str_plain_contains_object;
extern PyObject *const_tuple_false_false_tuple;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_in1d;
static PyObject *const_str_plain_orig_dtype;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_setxor1d;
extern PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_optional_indices;
extern PyObject *const_str_plain_invert;
extern PyObject *const_str_plain_swapaxes;
static PyObject *const_str_plain_int1d;
extern PyObject *const_str_plain_size;
static PyObject *const_str_plain_perm;
static PyObject *const_str_plain__unique_dispatcher;
static PyObject *const_str_digest_54f143fa7d7b747c1c20332113a0dc42;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_return_counts;
extern PyObject *const_str_plain_to_begin;
static PyObject *const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple;
extern PyObject *const_str_plain_view;
static PyObject *const_str_plain__in1d_dispatcher;
extern PyObject *const_str_plain_setdiff1d;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_subtract;
static PyObject *const_str_digest_4854b36ee4743b567d2b1c6383402d57;
extern PyObject *const_tuple_str_plain_overrides_tuple;
static PyObject *const_str_digest_9d6df9b20b0b0a9490f420ee53ba9c27;
static PyObject *const_str_plain__intersect1d_dispatcher;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_dtype_req;
extern PyObject *const_str_plain_union1d;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_aux_sort_indices;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_dict_87c1abaa6fcb4c6f72874144a9717b89;
extern PyObject *const_str_plain_ind2;
static PyObject *const_str_digest_6e5e7fa81ebb9bd1b00e9a0e966d643a;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_flatten;
static PyObject *const_str_digest_986f9ed8358514487e380df62a7fd441;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_argsort;
static PyObject *const_tuple_54ce9ba8564fd8c97bf536fc6aa6eaa2_tuple;
static PyObject *const_tuple_68b0e8b51e080936de466a607a4206ae_tuple;
extern PyObject *const_str_plain_rev_idx;
extern PyObject *const_str_plain_mask;
static PyObject *const_str_digest_d15af5c568f3128be1bc4c563e993639;
static PyObject *const_str_digest_55d8c9530996bb8bb1e64373a800491d;
static PyObject *const_str_digest_02dd94ff6be904fa05ac93b649a54540;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple;
extern PyObject *const_str_plain_intersect1d;
static PyObject *const_str_digest_32aa26906bd2e01c6275c3d10157994e;
extern PyObject *const_str_plain_unique;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_e8a7043d822853f224a7724b5dc72c3c;
static PyObject *const_tuple_false_false_false_none_tuple;
static PyObject *const_str_digest_4386328d052343a16dcd60feb301b3ab;
static PyObject *const_str_digest_5b14963111bc82701ac4bf4d39205e22;
extern PyObject *const_int_pos_10;
static PyObject *const_str_plain_uniq;
extern PyObject *const_str_plain___array_wrap__;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_element;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_return_inverse;
extern PyObject *const_list_true_list;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_str_plain__union1d_dispatcher;
static PyObject *const_tuple_8ff8c038c0effd020481adf8a5f3be7b_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_ar1;
extern PyObject *const_str_plain_aux;
extern PyObject *const_str_plain_output;
extern PyObject *const_slice_none_int_pos_1_none;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_assume_unique;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_int_0;
static PyObject *const_str_plain_reshape_uniq;
extern PyObject *const_str_plain_hasobject;
static PyObject *const_str_plain_l_begin;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_plain_ar2_indices;
extern PyObject *const_dict_983b85267f0872f55cb0f16db8944e2c;
static PyObject *const_str_plain__to_end;
static PyObject *const_str_plain__isin_dispatcher;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_ascontiguousarray;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_dict_8a6ce79bb59f45c062c2a0027a3a0c33;
static PyObject *const_dict_ddb6199cf8f69226979904abcecd9a1f;
static PyObject *const_str_digest_93159d45d1858d6a69629d25e1f093e0;
extern PyObject *const_str_plain_to_end;
static PyObject *const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple;
extern PyObject *const_str_plain_bool_ar;
static PyObject *const_str_plain__ediff1d_dispatcher;
static PyObject *const_str_digest_2399a938eda4ea95116fd53ead1746d9;
static PyObject *const_str_plain_consolidated;
extern PyObject *const_str_plain_ediff1d;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_5ca0074fb0e496362acafc9ddb672117;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain_diff;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_ar;
static PyObject *const_list_889c56d4a7a02dec6722884fe9a4ea67_list;
extern PyObject *const_str_plain_idx;
static PyObject *const_str_plain_imask;
extern PyObject *const_str_plain_functools;
static PyObject *const_float_0_145;
static PyObject *const_tuple_91b3885b0deffbd80431966a02972b91_tuple;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain__to_begin;
static PyObject *const_str_plain_ind1;
extern PyObject *const_str_plain_kind;
static PyObject *const_tuple_329261893cbc39611c12fe722fb2a82e_tuple;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_str_plain_l_end;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_partial;
static PyObject *const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple;
static PyObject *const_str_plain_return_indices;
static PyObject *const_tuple_7230b6c015d858d151877841040d25b5_tuple;
static PyObject *const_str_plain__unique1d;
extern PyObject *const_str_plain_axis;
static PyObject *const_tuple_str_plain_i_str_plain_ar_tuple;
static PyObject *const_str_digest_b4943b24fa501fa9c7ffb20498d919dc;
extern PyObject *const_dict_a631262f796736f0defb811197d235ff;
static PyObject *const_str_digest_e211930c5cfa560618a9bd5c5e982597;
extern PyObject *const_dict_21b0a41bf986b828d73b3708697d69bd;
extern PyObject *const_str_plain_ar2;
static PyObject *const_str_plain__setxor1d_dispatcher;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_mergesort;
static PyObject *const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple;
static PyObject *const_str_plain__unpack_tuple;
extern PyObject *const_str_plain_test_elements;
static PyObject *const_str_plain_orig_shape;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_AxisError;
static PyObject *const_str_plain_l_diff;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_isin;
static PyObject *const_str_plain_inv_idx;
extern PyObject *const_str_plain_sort;
extern PyObject *const_tuple_62837d5ad1d84ffabbf82c6af3a0e043_tuple;
extern PyObject *const_tuple_str_plain_ar1_str_plain_ar2_tuple;
extern PyObject *const_str_plain_flag;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_dt;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_971ee6d7315ee3191336b47954b0fe4f;
extern PyObject *const_str_plain_return_index;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_ar1_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 708305 ], 11, 1 );
    const_tuple_false_false_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_false_false_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_str_plain__setdiff1d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 708316 ], 21, 1 );
    const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 0, const_str_plain_ary ); Py_INCREF( const_str_plain_ary );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 1, const_str_plain_to_end ); Py_INCREF( const_str_plain_to_end );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 2, const_str_plain_to_begin ); Py_INCREF( const_str_plain_to_begin );
    const_str_plain_dtype_req = UNSTREAM_STRING_ASCII( &constant_bin[ 708337 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 3, const_str_plain_dtype_req ); Py_INCREF( const_str_plain_dtype_req );
    const_str_plain_l_begin = UNSTREAM_STRING_ASCII( &constant_bin[ 708346 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 4, const_str_plain_l_begin ); Py_INCREF( const_str_plain_l_begin );
    const_str_plain__to_begin = UNSTREAM_STRING_ASCII( &constant_bin[ 708353 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 5, const_str_plain__to_begin ); Py_INCREF( const_str_plain__to_begin );
    const_str_plain_l_end = UNSTREAM_STRING_ASCII( &constant_bin[ 708362 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 6, const_str_plain_l_end ); Py_INCREF( const_str_plain_l_end );
    const_str_plain__to_end = UNSTREAM_STRING_ASCII( &constant_bin[ 708367 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 7, const_str_plain__to_end ); Py_INCREF( const_str_plain__to_end );
    const_str_plain_l_diff = UNSTREAM_STRING_ASCII( &constant_bin[ 708374 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 8, const_str_plain_l_diff ); Py_INCREF( const_str_plain_l_diff );
    PyTuple_SET_ITEM( const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 9, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_b8ab909ead67b733d21e84e0fa35f8f7 = UNSTREAM_STRING_ASCII( &constant_bin[ 708380 ], 3085, 0 );
    const_str_plain_contains_object = UNSTREAM_STRING_ASCII( &constant_bin[ 711465 ], 15, 1 );
    const_str_plain_orig_dtype = UNSTREAM_STRING_ASCII( &constant_bin[ 711480 ], 10, 1 );
    const_str_plain_optional_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 711490 ], 16, 1 );
    const_str_plain_int1d = UNSTREAM_STRING_ASCII( &constant_bin[ 711506 ], 5, 1 );
    const_str_plain_perm = UNSTREAM_STRING_ASCII( &constant_bin[ 154338 ], 4, 1 );
    const_str_plain__unique_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 711511 ], 18, 1 );
    const_str_digest_54f143fa7d7b747c1c20332113a0dc42 = UNSTREAM_STRING_ASCII( &constant_bin[ 711529 ], 2188, 0 );
    const_str_plain_return_counts = UNSTREAM_STRING_ASCII( &constant_bin[ 713717 ], 13, 1 );
    const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple, 0, const_str_plain_ary ); Py_INCREF( const_str_plain_ary );
    PyTuple_SET_ITEM( const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple, 1, const_str_plain_to_end ); Py_INCREF( const_str_plain_to_end );
    PyTuple_SET_ITEM( const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple, 2, const_str_plain_to_begin ); Py_INCREF( const_str_plain_to_begin );
    const_str_plain__in1d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 713730 ], 16, 1 );
    const_str_digest_4854b36ee4743b567d2b1c6383402d57 = UNSTREAM_STRING_ASCII( &constant_bin[ 713746 ], 925, 0 );
    const_str_digest_9d6df9b20b0b0a9490f420ee53ba9c27 = UNSTREAM_STRING_ASCII( &constant_bin[ 714671 ], 53, 0 );
    const_str_plain__intersect1d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 714724 ], 23, 1 );
    const_str_plain_aux_sort_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 714747 ], 16, 1 );
    const_str_digest_6e5e7fa81ebb9bd1b00e9a0e966d643a = UNSTREAM_STRING_ASCII( &constant_bin[ 714763 ], 63, 0 );
    const_str_digest_986f9ed8358514487e380df62a7fd441 = UNSTREAM_STRING_ASCII( &constant_bin[ 714826 ], 1087, 0 );
    const_tuple_54ce9ba8564fd8c97bf536fc6aa6eaa2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_54ce9ba8564fd8c97bf536fc6aa6eaa2_tuple, 0, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_54ce9ba8564fd8c97bf536fc6aa6eaa2_tuple, 1, const_str_plain_return_index ); Py_INCREF( const_str_plain_return_index );
    PyTuple_SET_ITEM( const_tuple_54ce9ba8564fd8c97bf536fc6aa6eaa2_tuple, 2, const_str_plain_return_inverse ); Py_INCREF( const_str_plain_return_inverse );
    PyTuple_SET_ITEM( const_tuple_54ce9ba8564fd8c97bf536fc6aa6eaa2_tuple, 3, const_str_plain_return_counts ); Py_INCREF( const_str_plain_return_counts );
    PyTuple_SET_ITEM( const_tuple_54ce9ba8564fd8c97bf536fc6aa6eaa2_tuple, 4, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_tuple_68b0e8b51e080936de466a607a4206ae_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 0, const_str_plain_ar1 ); Py_INCREF( const_str_plain_ar1 );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 1, const_str_plain_ar2 ); Py_INCREF( const_str_plain_ar2 );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 2, const_str_plain_assume_unique ); Py_INCREF( const_str_plain_assume_unique );
    const_str_plain_return_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 715913 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 3, const_str_plain_return_indices ); Py_INCREF( const_str_plain_return_indices );
    const_str_plain_ind1 = UNSTREAM_STRING_ASCII( &constant_bin[ 715927 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 4, const_str_plain_ind1 ); Py_INCREF( const_str_plain_ind1 );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 5, const_str_plain_ind2 ); Py_INCREF( const_str_plain_ind2 );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 6, const_str_plain_aux ); Py_INCREF( const_str_plain_aux );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 7, const_str_plain_aux_sort_indices ); Py_INCREF( const_str_plain_aux_sort_indices );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 8, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 9, const_str_plain_int1d ); Py_INCREF( const_str_plain_int1d );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 10, const_str_plain_ar1_indices ); Py_INCREF( const_str_plain_ar1_indices );
    const_str_plain_ar2_indices = UNSTREAM_STRING_ASCII( &constant_bin[ 715931 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 11, const_str_plain_ar2_indices ); Py_INCREF( const_str_plain_ar2_indices );
    const_str_digest_d15af5c568f3128be1bc4c563e993639 = UNSTREAM_STRING_ASCII( &constant_bin[ 715942 ], 4, 0 );
    const_str_digest_55d8c9530996bb8bb1e64373a800491d = UNSTREAM_STRING_ASCII( &constant_bin[ 715946 ], 30, 0 );
    const_str_digest_02dd94ff6be904fa05ac93b649a54540 = UNSTREAM_STRING_ASCII( &constant_bin[ 715976 ], 74, 0 );
    const_str_digest_32aa26906bd2e01c6275c3d10157994e = UNSTREAM_STRING_ASCII( &constant_bin[ 716050 ], 829, 0 );
    const_str_digest_e8a7043d822853f224a7724b5dc72c3c = UNSTREAM_STRING_ASCII( &constant_bin[ 716879 ], 669, 0 );
    const_tuple_false_false_false_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_false_false_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_none_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_none_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_digest_4386328d052343a16dcd60feb301b3ab = UNSTREAM_STRING_ASCII( &constant_bin[ 717548 ], 76, 0 );
    const_str_digest_5b14963111bc82701ac4bf4d39205e22 = UNSTREAM_STRING_ASCII( &constant_bin[ 717624 ], 1897, 0 );
    const_str_plain_uniq = UNSTREAM_STRING_ASCII( &constant_bin[ 74978 ], 4, 1 );
    const_str_plain__union1d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 719521 ], 19, 1 );
    const_tuple_8ff8c038c0effd020481adf8a5f3be7b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8ff8c038c0effd020481adf8a5f3be7b_tuple, 0, const_str_plain_ar1 ); Py_INCREF( const_str_plain_ar1 );
    PyTuple_SET_ITEM( const_tuple_8ff8c038c0effd020481adf8a5f3be7b_tuple, 1, const_str_plain_ar2 ); Py_INCREF( const_str_plain_ar2 );
    PyTuple_SET_ITEM( const_tuple_8ff8c038c0effd020481adf8a5f3be7b_tuple, 2, const_str_plain_assume_unique ); Py_INCREF( const_str_plain_assume_unique );
    PyTuple_SET_ITEM( const_tuple_8ff8c038c0effd020481adf8a5f3be7b_tuple, 3, const_str_plain_invert ); Py_INCREF( const_str_plain_invert );
    const_str_plain_reshape_uniq = UNSTREAM_STRING_ASCII( &constant_bin[ 719540 ], 12, 1 );
    const_str_plain__isin_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 719552 ], 16, 1 );
    const_dict_ddb6199cf8f69226979904abcecd9a1f = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_ddb6199cf8f69226979904abcecd9a1f, const_str_plain_return_index, Py_True );
    assert( PyDict_Size( const_dict_ddb6199cf8f69226979904abcecd9a1f ) == 1 );
    const_str_digest_93159d45d1858d6a69629d25e1f093e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 719568 ], 532, 0 );
    const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 0, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 1, const_str_plain_return_index ); Py_INCREF( const_str_plain_return_index );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 2, const_str_plain_return_inverse ); Py_INCREF( const_str_plain_return_inverse );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 3, const_str_plain_return_counts ); Py_INCREF( const_str_plain_return_counts );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 4, const_str_plain_optional_indices ); Py_INCREF( const_str_plain_optional_indices );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 5, const_str_plain_perm ); Py_INCREF( const_str_plain_perm );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 6, const_str_plain_aux ); Py_INCREF( const_str_plain_aux );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 7, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 8, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain_imask = UNSTREAM_STRING_ASCII( &constant_bin[ 720100 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 9, const_str_plain_imask ); Py_INCREF( const_str_plain_imask );
    const_str_plain_inv_idx = UNSTREAM_STRING_ASCII( &constant_bin[ 720105 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 10, const_str_plain_inv_idx ); Py_INCREF( const_str_plain_inv_idx );
    PyTuple_SET_ITEM( const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 11, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    const_str_plain__ediff1d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 720112 ], 19, 1 );
    const_str_digest_2399a938eda4ea95116fd53ead1746d9 = UNSTREAM_STRING_ASCII( &constant_bin[ 720131 ], 28, 0 );
    const_str_plain_consolidated = UNSTREAM_STRING_ASCII( &constant_bin[ 720159 ], 12, 1 );
    const_str_digest_5ca0074fb0e496362acafc9ddb672117 = UNSTREAM_STRING_ASCII( &constant_bin[ 720171 ], 59, 0 );
    const_list_889c56d4a7a02dec6722884fe9a4ea67_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_889c56d4a7a02dec6722884fe9a4ea67_list, 0, const_str_plain_ediff1d ); Py_INCREF( const_str_plain_ediff1d );
    PyList_SET_ITEM( const_list_889c56d4a7a02dec6722884fe9a4ea67_list, 1, const_str_plain_intersect1d ); Py_INCREF( const_str_plain_intersect1d );
    PyList_SET_ITEM( const_list_889c56d4a7a02dec6722884fe9a4ea67_list, 2, const_str_plain_setxor1d ); Py_INCREF( const_str_plain_setxor1d );
    PyList_SET_ITEM( const_list_889c56d4a7a02dec6722884fe9a4ea67_list, 3, const_str_plain_union1d ); Py_INCREF( const_str_plain_union1d );
    PyList_SET_ITEM( const_list_889c56d4a7a02dec6722884fe9a4ea67_list, 4, const_str_plain_setdiff1d ); Py_INCREF( const_str_plain_setdiff1d );
    PyList_SET_ITEM( const_list_889c56d4a7a02dec6722884fe9a4ea67_list, 5, const_str_plain_unique ); Py_INCREF( const_str_plain_unique );
    PyList_SET_ITEM( const_list_889c56d4a7a02dec6722884fe9a4ea67_list, 6, const_str_plain_in1d ); Py_INCREF( const_str_plain_in1d );
    PyList_SET_ITEM( const_list_889c56d4a7a02dec6722884fe9a4ea67_list, 7, const_str_plain_isin ); Py_INCREF( const_str_plain_isin );
    const_float_0_145 = UNSTREAM_FLOAT( &constant_bin[ 720230 ] );
    const_tuple_91b3885b0deffbd80431966a02972b91_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_91b3885b0deffbd80431966a02972b91_tuple, 0, const_str_plain_uniq ); Py_INCREF( const_str_plain_uniq );
    PyTuple_SET_ITEM( const_tuple_91b3885b0deffbd80431966a02972b91_tuple, 1, const_str_plain_orig_dtype ); Py_INCREF( const_str_plain_orig_dtype );
    const_str_plain_orig_shape = UNSTREAM_STRING_ASCII( &constant_bin[ 720238 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_91b3885b0deffbd80431966a02972b91_tuple, 2, const_str_plain_orig_shape ); Py_INCREF( const_str_plain_orig_shape );
    PyTuple_SET_ITEM( const_tuple_91b3885b0deffbd80431966a02972b91_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_tuple_329261893cbc39611c12fe722fb2a82e_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 0, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 1, const_str_plain_return_index ); Py_INCREF( const_str_plain_return_index );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 2, const_str_plain_return_inverse ); Py_INCREF( const_str_plain_return_inverse );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 3, const_str_plain_return_counts ); Py_INCREF( const_str_plain_return_counts );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 4, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 5, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 6, const_str_plain_orig_shape ); Py_INCREF( const_str_plain_orig_shape );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 7, const_str_plain_orig_dtype ); Py_INCREF( const_str_plain_orig_dtype );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 8, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 9, const_str_plain_consolidated ); Py_INCREF( const_str_plain_consolidated );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 10, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 11, const_str_plain_reshape_uniq ); Py_INCREF( const_str_plain_reshape_uniq );
    PyTuple_SET_ITEM( const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 12, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 0, const_str_plain_ar1 ); Py_INCREF( const_str_plain_ar1 );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 1, const_str_plain_ar2 ); Py_INCREF( const_str_plain_ar2 );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 2, const_str_plain_assume_unique ); Py_INCREF( const_str_plain_assume_unique );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 3, const_str_plain_invert ); Py_INCREF( const_str_plain_invert );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 4, const_str_plain_contains_object ); Py_INCREF( const_str_plain_contains_object );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 5, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 6, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 7, const_str_plain_rev_idx ); Py_INCREF( const_str_plain_rev_idx );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 8, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 9, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 10, const_str_plain_sar ); Py_INCREF( const_str_plain_sar );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 11, const_str_plain_bool_ar ); Py_INCREF( const_str_plain_bool_ar );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 12, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    PyTuple_SET_ITEM( const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 13, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_tuple_7230b6c015d858d151877841040d25b5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_7230b6c015d858d151877841040d25b5_tuple, 0, const_str_plain_ar1 ); Py_INCREF( const_str_plain_ar1 );
    PyTuple_SET_ITEM( const_tuple_7230b6c015d858d151877841040d25b5_tuple, 1, const_str_plain_ar2 ); Py_INCREF( const_str_plain_ar2 );
    PyTuple_SET_ITEM( const_tuple_7230b6c015d858d151877841040d25b5_tuple, 2, const_str_plain_assume_unique ); Py_INCREF( const_str_plain_assume_unique );
    PyTuple_SET_ITEM( const_tuple_7230b6c015d858d151877841040d25b5_tuple, 3, const_str_plain_return_indices ); Py_INCREF( const_str_plain_return_indices );
    const_str_plain__unique1d = UNSTREAM_STRING_ASCII( &constant_bin[ 720248 ], 9, 1 );
    const_tuple_str_plain_i_str_plain_ar_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_ar_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_ar_tuple, 1, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    const_str_digest_b4943b24fa501fa9c7ffb20498d919dc = UNSTREAM_STRING_ASCII( &constant_bin[ 720257 ], 73, 0 );
    const_str_digest_e211930c5cfa560618a9bd5c5e982597 = UNSTREAM_STRING_ASCII( &constant_bin[ 720330 ], 3897, 0 );
    const_str_plain__setxor1d_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 724227 ], 20, 1 );
    const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple, 0, const_str_plain_ar1 ); Py_INCREF( const_str_plain_ar1 );
    PyTuple_SET_ITEM( const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple, 1, const_str_plain_ar2 ); Py_INCREF( const_str_plain_ar2 );
    PyTuple_SET_ITEM( const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple, 2, const_str_plain_assume_unique ); Py_INCREF( const_str_plain_assume_unique );
    PyTuple_SET_ITEM( const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple, 3, const_str_plain_aux ); Py_INCREF( const_str_plain_aux );
    PyTuple_SET_ITEM( const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple, 4, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    const_str_plain__unpack_tuple = UNSTREAM_STRING_ASCII( &constant_bin[ 724247 ], 13, 1 );
    const_str_digest_971ee6d7315ee3191336b47954b0fe4f = UNSTREAM_STRING_ASCII( &constant_bin[ 709600 ], 21, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$arraysetops( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_81d801a4d9cd381b2b4b0acf61130850;
static PyCodeObject *codeobj_e9e643c9836077e429944efb47722b2e;
static PyCodeObject *codeobj_73c56c99fed6455e64c7f3799a8cb1a9;
static PyCodeObject *codeobj_f8508ddc5e2e9204a1dd9f2f26110333;
static PyCodeObject *codeobj_b9765d33bb38cd72a7ef71054902a1c5;
static PyCodeObject *codeobj_bb3f7a5eb9114f7ce2d426c7e4e13830;
static PyCodeObject *codeobj_cf64d7313b460865561fcd6ce8baf5a9;
static PyCodeObject *codeobj_de5eea404fb3545d59fd1497c74be7ce;
static PyCodeObject *codeobj_a49a7718fdfc33c43dc81bb09e67ed42;
static PyCodeObject *codeobj_7038f29bde7e7631d479aa159e63019a;
static PyCodeObject *codeobj_d624a960aebdfcfd82c4b5168fa05309;
static PyCodeObject *codeobj_85e79cffb352eca4dcedab8e1856b08a;
static PyCodeObject *codeobj_819b5655691b75c81d97ea028adebfa2;
static PyCodeObject *codeobj_e31394f38be6aff2b4220d030a3d0ed5;
static PyCodeObject *codeobj_762947b71fa88ed69049190a81cea037;
static PyCodeObject *codeobj_38b4a3b7f072abe57a104b52924473df;
static PyCodeObject *codeobj_abb7af0b231d8b628837a2d3aebd313e;
static PyCodeObject *codeobj_d7c5a36e8a9a1e70034ed421a7d47c94;
static PyCodeObject *codeobj_9d4673a6067387c2de1515f390ebaec1;
static PyCodeObject *codeobj_2b8b89f55da9d585558dee4f904b9c0b;
static PyCodeObject *codeobj_ab64035eed2531be3fa664a03e19e11b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b4943b24fa501fa9c7ffb20498d919dc;
    codeobj_81d801a4d9cd381b2b4b0acf61130850 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 278, const_tuple_str_plain_i_str_plain_ar_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9e643c9836077e429944efb47722b2e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_55d8c9530996bb8bb1e64373a800491d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_73c56c99fed6455e64c7f3799a8cb1a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ediff1d_dispatcher, 46, const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f8508ddc5e2e9204a1dd9f2f26110333 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__in1d_dispatcher, 480, const_tuple_8ff8c038c0effd020481adf8a5f3be7b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b9765d33bb38cd72a7ef71054902a1c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__intersect1d_dispatcher, 332, const_tuple_7230b6c015d858d151877841040d25b5_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bb3f7a5eb9114f7ce2d426c7e4e13830 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__isin_dispatcher, 597, const_tuple_62837d5ad1d84ffabbf82c6af3a0e043_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cf64d7313b460865561fcd6ce8baf5a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__setdiff1d_dispatcher, 741, const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de5eea404fb3545d59fd1497c74be7ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain__setxor1d_dispatcher, 433, const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a49a7718fdfc33c43dc81bb09e67ed42 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__union1d_dispatcher, 700, const_tuple_str_plain_ar1_str_plain_ar2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7038f29bde7e7631d479aa159e63019a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unique1d, 299, const_tuple_4b947a341b2e8db2a51e8e4d977babc4_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d624a960aebdfcfd82c4b5168fa05309 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unique_dispatcher, 146, const_tuple_54ce9ba8564fd8c97bf536fc6aa6eaa2_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_85e79cffb352eca4dcedab8e1856b08a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unpack_tuple, 138, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_819b5655691b75c81d97ea028adebfa2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ediff1d, 50, const_tuple_288a59618097cc7e2b9f072a0ad92e20_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e31394f38be6aff2b4220d030a3d0ed5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in1d, 484, const_tuple_17aa2f3964ac242dbf50db779acf9a99_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_762947b71fa88ed69049190a81cea037 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_intersect1d, 337, const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_38b4a3b7f072abe57a104b52924473df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isin, 601, const_tuple_62837d5ad1d84ffabbf82c6af3a0e043_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_abb7af0b231d8b628837a2d3aebd313e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reshape_uniq, 287, const_tuple_91b3885b0deffbd80431966a02972b91_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d7c5a36e8a9a1e70034ed421a7d47c94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setdiff1d, 745, const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9d4673a6067387c2de1515f390ebaec1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setxor1d, 437, const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2b8b89f55da9d585558dee4f904b9c0b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_union1d, 704, const_tuple_str_plain_ar1_str_plain_ar2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ab64035eed2531be3fa664a03e19e11b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unique, 151, const_tuple_329261893cbc39611c12fe722fb2a82e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_10_setxor1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_11__in1d_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_12_in1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_13__isin_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_14_isin( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_15__union1d_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_16_union1d(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_17__setdiff1d_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_18_setdiff1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_1__ediff1d_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_2_ediff1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_3__unpack_tuple(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_4__unique_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_unique( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_unique$$$function_1_reshape_uniq(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_6__unique1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_7__intersect1d_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_8_intersect1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_9__setxor1d_dispatcher( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$lib$arraysetops$$$function_1__ediff1d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_to_end = python_pars[ 1 ];
    PyObject *par_to_begin = python_pars[ 2 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ary );
        tmp_tuple_element_1 = par_ary;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_to_end );
        tmp_tuple_element_1 = par_to_end;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_to_begin );
        tmp_tuple_element_1 = par_to_begin;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_1__ediff1d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_to_end );
    Py_DECREF( par_to_end );
    par_to_end = NULL;

    CHECK_OBJECT( (PyObject *)par_to_begin );
    Py_DECREF( par_to_begin );
    par_to_begin = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_1__ediff1d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraysetops$$$function_2_ediff1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_to_end = python_pars[ 1 ];
    PyObject *par_to_begin = python_pars[ 2 ];
    PyObject *var_dtype_req = NULL;
    PyObject *var_l_begin = NULL;
    PyObject *var__to_begin = NULL;
    PyObject *var_l_end = NULL;
    PyObject *var__to_end = NULL;
    PyObject *var_l_diff = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_819b5655691b75c81d97ea028adebfa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_819b5655691b75c81d97ea028adebfa2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_819b5655691b75c81d97ea028adebfa2, codeobj_819b5655691b75c81d97ea028adebfa2, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_819b5655691b75c81d97ea028adebfa2 = cache_frame_819b5655691b75c81d97ea028adebfa2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_819b5655691b75c81d97ea028adebfa2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_819b5655691b75c81d97ea028adebfa2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ary );
        tmp_args_element_name_1 = par_ary;
        frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 95;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ravel );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ary;
            assert( old != NULL );
            par_ary = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_ary );
        tmp_source_name_1 = par_ary;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dtype_req == NULL );
        var_dtype_req = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_to_begin );
        tmp_compexpr_left_1 = par_to_begin;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_to_end );
        tmp_compexpr_left_2 = par_to_end;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_ary );
            tmp_subscribed_name_1 = par_ary;
            tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ary );
            tmp_subscribed_name_2 = par_ary;
            tmp_subscript_name_2 = const_slice_none_int_neg_1_none;
            tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 103;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_to_begin );
        tmp_compexpr_left_3 = par_to_begin;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_int_0;
            assert( var_l_begin == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_l_begin = tmp_assign_source_3;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 108;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asanyarray );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_to_begin );
            tmp_tuple_element_1 = par_to_begin;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_dtype;
            CHECK_OBJECT( var_dtype_req );
            tmp_dict_value_1 = var_dtype_req;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 108;
            tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__to_begin == NULL );
            var__to_begin = tmp_assign_source_4;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 109;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_all );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var__to_begin );
            tmp_compexpr_left_4 = var__to_begin;
            CHECK_OBJECT( par_to_begin );
            tmp_compexpr_right_4 = par_to_begin;
            tmp_args_element_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 109;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 109;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
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
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                tmp_left_name_2 = const_str_digest_4386328d052343a16dcd60feb301b3ab;
                CHECK_OBJECT( var_dtype_req );
                tmp_right_name_2 = var_dtype_req;
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 110;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 110;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 110;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( var__to_begin );
            tmp_called_instance_3 = var__to_begin;
            frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 112;
            tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_ravel );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_to_begin;
                assert( old != NULL );
                par_to_begin = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_to_begin );
            tmp_len_arg_1 = par_to_begin;
            tmp_assign_source_6 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_l_begin == NULL );
            var_l_begin = tmp_assign_source_6;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_to_end );
        tmp_compexpr_left_5 = par_to_end;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_int_0;
            assert( var_l_end == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_l_end = tmp_assign_source_7;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 118;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_asanyarray );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_to_end );
            tmp_tuple_element_2 = par_to_end;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_2 = const_str_plain_dtype;
            CHECK_OBJECT( var_dtype_req );
            tmp_dict_value_2 = var_dtype_req;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 118;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__to_end == NULL );
            var__to_end = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 120;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_5;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_all );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var__to_end );
            tmp_compexpr_left_6 = var__to_end;
            CHECK_OBJECT( par_to_end );
            tmp_compexpr_right_6 = par_to_end;
            tmp_args_element_name_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 120;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                tmp_left_name_3 = const_str_digest_02dd94ff6be904fa05ac93b649a54540;
                CHECK_OBJECT( var_dtype_req );
                tmp_right_name_3 = var_dtype_req;
                tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_make_exception_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 121;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_2 );
                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 121;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var__to_end );
            tmp_called_instance_4 = var__to_end;
            frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 123;
            tmp_assign_source_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_ravel );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_to_end;
                assert( old != NULL );
                par_to_end = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( par_to_end );
            tmp_len_arg_2 = par_to_end;
            tmp_assign_source_10 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_l_end == NULL );
            var_l_end = tmp_assign_source_10;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_5 != NULL );
        CHECK_OBJECT( par_ary );
        tmp_len_arg_3 = par_ary;
        tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1;
        tmp_args_element_name_4 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        assert( !(tmp_args_element_name_4 == NULL) );
        tmp_args_element_name_5 = const_int_0;
        frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_l_diff == NULL );
        var_l_diff = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_empty );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_l_diff );
        tmp_left_name_6 = var_l_diff;
        CHECK_OBJECT( var_l_begin );
        tmp_right_name_5 = var_l_begin;
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_l_end );
        tmp_right_name_6 = var_l_end;
        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_dict_key_3 = const_str_plain_dtype;
        CHECK_OBJECT( par_ary );
        tmp_source_name_7 = par_ary;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_name_3 );

            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 128;
        tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_ary );
        tmp_called_instance_5 = par_ary;
        CHECK_OBJECT( var_result );
        tmp_args_element_name_6 = var_result;
        frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain___array_wrap__, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert( old != NULL );
            var_result = tmp_assign_source_13;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_l_begin );
        tmp_compexpr_left_7 = var_l_begin;
        tmp_compexpr_right_7 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_to_begin );
            tmp_ass_subvalue_1 = par_to_begin;
            CHECK_OBJECT( var_result );
            tmp_ass_subscribed_1 = var_result;
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT( var_l_begin );
            tmp_stop_name_1 = var_l_begin;
            tmp_step_name_1 = Py_None;
            tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_ass_subscript_1 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( var_l_end );
        tmp_compexpr_left_8 = var_l_end;
        tmp_compexpr_right_8 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_start_name_2;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT( par_to_end );
            tmp_ass_subvalue_2 = par_to_end;
            CHECK_OBJECT( var_result );
            tmp_ass_subscribed_2 = var_result;
            CHECK_OBJECT( var_l_begin );
            tmp_left_name_7 = var_l_begin;
            CHECK_OBJECT( var_l_diff );
            tmp_right_name_7 = var_l_diff;
            tmp_start_name_2 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_start_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_stop_name_2 = Py_None;
            tmp_step_name_2 = Py_None;
            tmp_ass_subscript_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            Py_DECREF( tmp_start_name_2 );
            assert( !(tmp_ass_subscript_2 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_step_name_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_7;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_subtract );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ary );
        tmp_subscribed_name_3 = par_ary;
        tmp_subscript_name_3 = const_slice_int_pos_1_none_none;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ary );
        tmp_subscribed_name_4 = par_ary;
        tmp_subscript_name_4 = const_slice_none_int_neg_1_none;
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_subscribed_name_5 = var_result;
        CHECK_OBJECT( var_l_begin );
        tmp_start_name_3 = var_l_begin;
        CHECK_OBJECT( var_l_begin );
        tmp_left_name_8 = var_l_begin;
        CHECK_OBJECT( var_l_diff );
        tmp_right_name_8 = var_l_diff;
        tmp_stop_name_3 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_stop_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_subscript_name_5 == NULL) );
        tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_819b5655691b75c81d97ea028adebfa2->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_819b5655691b75c81d97ea028adebfa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_819b5655691b75c81d97ea028adebfa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_819b5655691b75c81d97ea028adebfa2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_819b5655691b75c81d97ea028adebfa2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_819b5655691b75c81d97ea028adebfa2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_819b5655691b75c81d97ea028adebfa2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_819b5655691b75c81d97ea028adebfa2,
        type_description_1,
        par_ary,
        par_to_end,
        par_to_begin,
        var_dtype_req,
        var_l_begin,
        var__to_begin,
        var_l_end,
        var__to_end,
        var_l_diff,
        var_result
    );


    // Release cached frame.
    if ( frame_819b5655691b75c81d97ea028adebfa2 == cache_frame_819b5655691b75c81d97ea028adebfa2 )
    {
        Py_DECREF( frame_819b5655691b75c81d97ea028adebfa2 );
    }
    cache_frame_819b5655691b75c81d97ea028adebfa2 = NULL;

    assertFrameObject( frame_819b5655691b75c81d97ea028adebfa2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_2_ediff1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    Py_XDECREF( par_to_end );
    par_to_end = NULL;

    Py_XDECREF( par_to_begin );
    par_to_begin = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype_req );
    Py_DECREF( var_dtype_req );
    var_dtype_req = NULL;

    Py_XDECREF( var_l_begin );
    var_l_begin = NULL;

    Py_XDECREF( var__to_begin );
    var__to_begin = NULL;

    Py_XDECREF( var_l_end );
    var_l_end = NULL;

    Py_XDECREF( var__to_end );
    var__to_end = NULL;

    Py_XDECREF( var_l_diff );
    var_l_diff = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    Py_XDECREF( par_to_end );
    par_to_end = NULL;

    Py_XDECREF( par_to_begin );
    par_to_begin = NULL;

    Py_XDECREF( var_dtype_req );
    var_dtype_req = NULL;

    Py_XDECREF( var_l_begin );
    var_l_begin = NULL;

    Py_XDECREF( var__to_begin );
    var__to_begin = NULL;

    Py_XDECREF( var_l_end );
    var_l_end = NULL;

    Py_XDECREF( var__to_end );
    var__to_end = NULL;

    Py_XDECREF( var_l_diff );
    var_l_diff = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_2_ediff1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_3__unpack_tuple( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_85e79cffb352eca4dcedab8e1856b08a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_85e79cffb352eca4dcedab8e1856b08a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_85e79cffb352eca4dcedab8e1856b08a, codeobj_85e79cffb352eca4dcedab8e1856b08a, module_numpy$lib$arraysetops, sizeof(void *) );
    frame_85e79cffb352eca4dcedab8e1856b08a = cache_frame_85e79cffb352eca4dcedab8e1856b08a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_85e79cffb352eca4dcedab8e1856b08a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_85e79cffb352eca4dcedab8e1856b08a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_x );
        tmp_len_arg_1 = par_x;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
        {
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_x );
            tmp_subscribed_name_1 = par_x;
            tmp_subscript_name_1 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( par_x );
        tmp_return_value = par_x;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_85e79cffb352eca4dcedab8e1856b08a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_85e79cffb352eca4dcedab8e1856b08a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_85e79cffb352eca4dcedab8e1856b08a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_85e79cffb352eca4dcedab8e1856b08a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_85e79cffb352eca4dcedab8e1856b08a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_85e79cffb352eca4dcedab8e1856b08a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_85e79cffb352eca4dcedab8e1856b08a,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_85e79cffb352eca4dcedab8e1856b08a == cache_frame_85e79cffb352eca4dcedab8e1856b08a )
    {
        Py_DECREF( frame_85e79cffb352eca4dcedab8e1856b08a );
    }
    cache_frame_85e79cffb352eca4dcedab8e1856b08a = NULL;

    assertFrameObject( frame_85e79cffb352eca4dcedab8e1856b08a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_3__unpack_tuple );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_3__unpack_tuple );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_4__unique_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar = python_pars[ 0 ];
    PyObject *par_return_index = python_pars[ 1 ];
    PyObject *par_return_inverse = python_pars[ 2 ];
    PyObject *par_return_counts = python_pars[ 3 ];
    PyObject *par_axis = python_pars[ 4 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ar );
        tmp_tuple_element_1 = par_ar;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_4__unique_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar );
    Py_DECREF( par_ar );
    par_ar = NULL;

    CHECK_OBJECT( (PyObject *)par_return_index );
    Py_DECREF( par_return_index );
    par_return_index = NULL;

    CHECK_OBJECT( (PyObject *)par_return_inverse );
    Py_DECREF( par_return_inverse );
    par_return_inverse = NULL;

    CHECK_OBJECT( (PyObject *)par_return_counts );
    Py_DECREF( par_return_counts );
    par_return_counts = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_4__unique_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraysetops$$$function_5_unique( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar = python_pars[ 0 ];
    PyObject *par_return_index = python_pars[ 1 ];
    PyObject *par_return_inverse = python_pars[ 2 ];
    PyObject *par_return_counts = python_pars[ 3 ];
    struct Nuitka_CellObject *par_axis = PyCell_NEW1( python_pars[ 4 ] );
    PyObject *var_ret = NULL;
    struct Nuitka_CellObject *var_orig_shape = PyCell_EMPTY();
    struct Nuitka_CellObject *var_orig_dtype = PyCell_EMPTY();
    PyObject *var_dtype = NULL;
    PyObject *var_consolidated = NULL;
    PyObject *var_reshape_uniq = NULL;
    PyObject *var_output = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ab64035eed2531be3fa664a03e19e11b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
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
    struct Nuitka_FrameObject *frame_81d801a4d9cd381b2b4b0acf61130850_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_81d801a4d9cd381b2b4b0acf61130850_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_ab64035eed2531be3fa664a03e19e11b = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ab64035eed2531be3fa664a03e19e11b, codeobj_ab64035eed2531be3fa664a03e19e11b, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ab64035eed2531be3fa664a03e19e11b = cache_frame_ab64035eed2531be3fa664a03e19e11b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ab64035eed2531be3fa664a03e19e11b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ab64035eed2531be3fa664a03e19e11b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 262;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ar );
        tmp_args_element_name_1 = par_ar;
        frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ar;
            assert( old != NULL );
            par_ar = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_compexpr_left_1 = PyCell_GET( par_axis );
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__unique1d );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unique1d );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unique1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 264;
                type_description_1 = "oooococcooNoo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_ar );
            tmp_args_element_name_2 = par_ar;
            CHECK_OBJECT( par_return_index );
            tmp_args_element_name_3 = par_return_index;
            CHECK_OBJECT( par_return_inverse );
            tmp_args_element_name_4 = par_return_inverse;
            CHECK_OBJECT( par_return_counts );
            tmp_args_element_name_5 = par_return_counts;
            frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 264;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "oooococcooNoo";
                goto frame_exception_exit_1;
            }
            assert( var_ret == NULL );
            var_ret = tmp_assign_source_2;
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__unpack_tuple );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unpack_tuple );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unpack_tuple" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 265;
                type_description_1 = "oooococcooNoo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( var_ret );
            tmp_args_element_name_6 = var_ret;
            frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 265;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "oooococcooNoo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 269;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_ar );
        tmp_args_element_name_7 = par_ar;
        CHECK_OBJECT( PyCell_GET( par_axis ) );
        tmp_args_element_name_8 = PyCell_GET( par_axis );
        tmp_args_element_name_9 = const_int_0;
        frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_swapaxes, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_ar;
            assert( old != NULL );
            par_ar = tmp_assign_source_3;
            Py_DECREF( old );
        }

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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ab64035eed2531be3fa664a03e19e11b, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ab64035eed2531be3fa664a03e19e11b, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_5;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 270;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_3;
        }

        tmp_source_name_1 = tmp_mvar_value_5;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_AxisError );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_source_name_3;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 272;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_3;
            }

            tmp_source_name_2 = tmp_mvar_value_6;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_AxisError );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( PyCell_GET( par_axis ) );
            tmp_args_element_name_10 = PyCell_GET( par_axis );
            CHECK_OBJECT( par_ar );
            tmp_source_name_3 = par_ar;
            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 272;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_3;
            }
            frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 272;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_3;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 272;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_3;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 268;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_ab64035eed2531be3fa664a03e19e11b->m_frame) frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooococcooNoo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique );
    return NULL;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_ar );
        tmp_source_name_4 = par_ar;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ar );
        tmp_source_name_5 = par_ar;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 275;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooococcooNoo";
            exception_lineno = 275;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooococcooNoo";
            exception_lineno = 275;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert( PyCell_GET( var_orig_shape ) == NULL );
        Py_INCREF( tmp_assign_source_7 );
        PyCell_SET( var_orig_shape, tmp_assign_source_7 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( PyCell_GET( var_orig_dtype ) == NULL );
        Py_INCREF( tmp_assign_source_8 );
        PyCell_SET( var_orig_dtype, tmp_assign_source_8 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT( par_ar );
        tmp_source_name_6 = par_ar;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_reshape );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( var_orig_shape ) );
        tmp_subscribed_name_1 = PyCell_GET( var_orig_shape );
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 276;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = const_int_neg_1;
        frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ar;
            assert( old != NULL );
            par_ar = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_7;
        CHECK_OBJECT( par_ar );
        tmp_args_element_name_14 = par_ar;
        frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ascontiguousarray, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ar;
            assert( old != NULL );
            par_ar = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_ar );
            tmp_source_name_7 = par_ar;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_6;
            }
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_6;
            }
            tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_6;
            }
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_6;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_13;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_81d801a4d9cd381b2b4b0acf61130850_2, codeobj_81d801a4d9cd381b2b4b0acf61130850, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *) );
        frame_81d801a4d9cd381b2b4b0acf61130850_2 = cache_frame_81d801a4d9cd381b2b4b0acf61130850_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_81d801a4d9cd381b2b4b0acf61130850_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_81d801a4d9cd381b2b4b0acf61130850_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 278;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_15 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_15;
                Py_INCREF( outline_0_var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_8;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_source_name_8 = const_str_digest_d15af5c568f3128be1bc4c563e993639;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
            assert( !(tmp_called_name_5 == NULL) );
            tmp_dict_key_1 = const_str_plain_i;
            CHECK_OBJECT( outline_0_var_i );
            tmp_dict_value_1 = outline_0_var_i;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_81d801a4d9cd381b2b4b0acf61130850_2->m_frame.f_lineno = 278;
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_append_value_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_ar );
            tmp_source_name_9 = par_ar;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dtype );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_append_value_1 );

                exception_lineno = 278;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_2 );
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_11 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_11 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_81d801a4d9cd381b2b4b0acf61130850_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_81d801a4d9cd381b2b4b0acf61130850_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_81d801a4d9cd381b2b4b0acf61130850_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_81d801a4d9cd381b2b4b0acf61130850_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_81d801a4d9cd381b2b4b0acf61130850_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_81d801a4d9cd381b2b4b0acf61130850_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_81d801a4d9cd381b2b4b0acf61130850_2,
            type_description_2,
            outline_0_var_i,
            par_ar
        );


        // Release cached frame.
        if ( frame_81d801a4d9cd381b2b4b0acf61130850_2 == cache_frame_81d801a4d9cd381b2b4b0acf61130850_2 )
        {
            Py_DECREF( frame_81d801a4d9cd381b2b4b0acf61130850_2 );
        }
        cache_frame_81d801a4d9cd381b2b4b0acf61130850_2 = NULL;

        assertFrameObject( frame_81d801a4d9cd381b2b4b0acf61130850_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooococcooNoo";
        goto try_except_handler_6;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF( outline_0_var_i );
        outline_0_var_i = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( outline_0_var_i );
        outline_0_var_i = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique );
        return NULL;
        outline_exception_1:;
        exception_lineno = 278;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_dtype == NULL );
        var_dtype = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( par_ar );
        tmp_called_instance_4 = par_ar;
        CHECK_OBJECT( var_dtype );
        tmp_args_element_name_15 = var_dtype;
        frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_view, call_args );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_8;
        }
        assert( var_consolidated == NULL );
        var_consolidated = tmp_assign_source_16;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_ab64035eed2531be3fa664a03e19e11b, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_ab64035eed2531be3fa664a03e19e11b, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_9;
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
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_10;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_11;
            tmp_source_name_10 = const_str_digest_5ca0074fb0e496362acafc9ddb672117;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
            assert( !(tmp_called_name_6 == NULL) );
            tmp_dict_key_2 = const_str_plain_dt;
            CHECK_OBJECT( par_ar );
            tmp_source_name_11 = par_ar;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dtype );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 285;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_9;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 285;
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "oooococcooNoo";
                goto try_except_handler_9;
            }
            frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 285;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 285;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooococcooNoo";
            goto try_except_handler_9;
        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 280;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_ab64035eed2531be3fa664a03e19e11b->m_frame) frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooococcooNoo";
        goto try_except_handler_9;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique );
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_unique$$$function_1_reshape_uniq(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] = par_axis;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[1] = var_orig_dtype;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[2] = var_orig_shape;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[2] );


        assert( var_reshape_uniq == NULL );
        var_reshape_uniq = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__unique1d );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unique1d );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unique1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 293;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_8;
        CHECK_OBJECT( var_consolidated );
        tmp_args_element_name_16 = var_consolidated;
        CHECK_OBJECT( par_return_index );
        tmp_args_element_name_17 = par_return_index;
        CHECK_OBJECT( par_return_inverse );
        tmp_args_element_name_18 = par_return_inverse;
        CHECK_OBJECT( par_return_counts );
        tmp_args_element_name_19 = par_return_counts;
        frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_reshape_uniq );
        tmp_called_name_8 = var_reshape_uniq;
        CHECK_OBJECT( var_output );
        tmp_subscribed_name_3 = var_output;
        tmp_subscript_name_3 = const_int_0;
        tmp_args_element_name_20 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_left_name_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_output );
        tmp_subscribed_name_4 = var_output;
        tmp_subscript_name_4 = const_slice_int_pos_1_none_none;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 295;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_output;
            assert( old != NULL );
            var_output = tmp_assign_source_19;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_21;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__unpack_tuple );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unpack_tuple );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unpack_tuple" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 296;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_9;
        CHECK_OBJECT( var_output );
        tmp_args_element_name_21 = var_output;
        frame_ab64035eed2531be3fa664a03e19e11b->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooococcooNoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab64035eed2531be3fa664a03e19e11b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab64035eed2531be3fa664a03e19e11b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab64035eed2531be3fa664a03e19e11b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ab64035eed2531be3fa664a03e19e11b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ab64035eed2531be3fa664a03e19e11b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ab64035eed2531be3fa664a03e19e11b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ab64035eed2531be3fa664a03e19e11b,
        type_description_1,
        par_ar,
        par_return_index,
        par_return_inverse,
        par_return_counts,
        par_axis,
        var_ret,
        var_orig_shape,
        var_orig_dtype,
        var_dtype,
        var_consolidated,
        NULL,
        var_reshape_uniq,
        var_output
    );


    // Release cached frame.
    if ( frame_ab64035eed2531be3fa664a03e19e11b == cache_frame_ab64035eed2531be3fa664a03e19e11b )
    {
        Py_DECREF( frame_ab64035eed2531be3fa664a03e19e11b );
    }
    cache_frame_ab64035eed2531be3fa664a03e19e11b = NULL;

    assertFrameObject( frame_ab64035eed2531be3fa664a03e19e11b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar );
    Py_DECREF( par_ar );
    par_ar = NULL;

    CHECK_OBJECT( (PyObject *)par_return_index );
    Py_DECREF( par_return_index );
    par_return_index = NULL;

    CHECK_OBJECT( (PyObject *)par_return_inverse );
    Py_DECREF( par_return_inverse );
    par_return_inverse = NULL;

    CHECK_OBJECT( (PyObject *)par_return_counts );
    Py_DECREF( par_return_counts );
    par_return_counts = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    CHECK_OBJECT( (PyObject *)var_orig_shape );
    Py_DECREF( var_orig_shape );
    var_orig_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_orig_dtype );
    Py_DECREF( var_orig_dtype );
    var_orig_dtype = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_consolidated );
    var_consolidated = NULL;

    Py_XDECREF( var_reshape_uniq );
    var_reshape_uniq = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_ar );
    Py_DECREF( par_ar );
    par_ar = NULL;

    CHECK_OBJECT( (PyObject *)par_return_index );
    Py_DECREF( par_return_index );
    par_return_index = NULL;

    CHECK_OBJECT( (PyObject *)par_return_inverse );
    Py_DECREF( par_return_inverse );
    par_return_inverse = NULL;

    CHECK_OBJECT( (PyObject *)par_return_counts );
    Py_DECREF( par_return_counts );
    par_return_counts = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    CHECK_OBJECT( (PyObject *)var_orig_shape );
    Py_DECREF( var_orig_shape );
    var_orig_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_orig_dtype );
    Py_DECREF( var_orig_dtype );
    var_orig_dtype = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_consolidated );
    var_consolidated = NULL;

    Py_XDECREF( var_reshape_uniq );
    var_reshape_uniq = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_5_unique$$$function_1_reshape_uniq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uniq = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_abb7af0b231d8b628837a2d3aebd313e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abb7af0b231d8b628837a2d3aebd313e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abb7af0b231d8b628837a2d3aebd313e, codeobj_abb7af0b231d8b628837a2d3aebd313e, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_abb7af0b231d8b628837a2d3aebd313e = cache_frame_abb7af0b231d8b628837a2d3aebd313e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abb7af0b231d8b628837a2d3aebd313e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abb7af0b231d8b628837a2d3aebd313e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_uniq );
        tmp_source_name_1 = par_uniq;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_view );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "orig_dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[1] );
        frame_abb7af0b231d8b628837a2d3aebd313e->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_uniq;
            assert( old != NULL );
            par_uniq = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_uniq );
        tmp_source_name_2 = par_uniq;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reshape );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = const_tuple_int_neg_1_tuple;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "orig_shape" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_dircall_arg3_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_dircall_arg3_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 289;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___internal__$$$function_6_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_uniq;
            assert( old != NULL );
            par_uniq = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_swapaxes );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_uniq );
        tmp_args_element_name_2 = par_uniq;
        tmp_args_element_name_3 = const_int_0;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = PyCell_GET( self->m_closure[0] );
        frame_abb7af0b231d8b628837a2d3aebd313e->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_uniq;
            assert( old != NULL );
            par_uniq = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb7af0b231d8b628837a2d3aebd313e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb7af0b231d8b628837a2d3aebd313e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abb7af0b231d8b628837a2d3aebd313e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abb7af0b231d8b628837a2d3aebd313e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abb7af0b231d8b628837a2d3aebd313e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abb7af0b231d8b628837a2d3aebd313e,
        type_description_1,
        par_uniq,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_abb7af0b231d8b628837a2d3aebd313e == cache_frame_abb7af0b231d8b628837a2d3aebd313e )
    {
        Py_DECREF( frame_abb7af0b231d8b628837a2d3aebd313e );
    }
    cache_frame_abb7af0b231d8b628837a2d3aebd313e = NULL;

    assertFrameObject( frame_abb7af0b231d8b628837a2d3aebd313e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_uniq );
    tmp_return_value = par_uniq;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique$$$function_1_reshape_uniq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_uniq );
    Py_DECREF( par_uniq );
    par_uniq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_uniq );
    Py_DECREF( par_uniq );
    par_uniq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_unique$$$function_1_reshape_uniq );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_6__unique1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar = python_pars[ 0 ];
    PyObject *par_return_index = python_pars[ 1 ];
    PyObject *par_return_inverse = python_pars[ 2 ];
    PyObject *par_return_counts = python_pars[ 3 ];
    PyObject *var_optional_indices = NULL;
    PyObject *var_perm = NULL;
    PyObject *var_aux = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_imask = NULL;
    PyObject *var_inv_idx = NULL;
    PyObject *var_idx = NULL;
    struct Nuitka_FrameObject *frame_7038f29bde7e7631d479aa159e63019a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7038f29bde7e7631d479aa159e63019a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7038f29bde7e7631d479aa159e63019a, codeobj_7038f29bde7e7631d479aa159e63019a, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7038f29bde7e7631d479aa159e63019a = cache_frame_7038f29bde7e7631d479aa159e63019a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7038f29bde7e7631d479aa159e63019a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7038f29bde7e7631d479aa159e63019a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 304;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ar );
        tmp_args_element_name_1 = par_ar;
        frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 304;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flatten );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ar;
            assert( old != NULL );
            par_ar = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT( par_return_index );
        tmp_or_left_value_1 = par_return_index;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_return_inverse );
        tmp_or_right_value_1 = par_return_inverse;
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert( var_optional_indices == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_optional_indices = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_optional_indices );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_optional_indices );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "oooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_ar );
            tmp_source_name_1 = par_ar;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_argsort );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_kind;
            CHECK_OBJECT( par_return_index );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_return_index );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 309;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_dict_value_1 = const_str_plain_mergesort;
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_dict_value_1 = const_str_plain_quicksort;
            condexpr_end_1:;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 309;
            tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_perm == NULL );
            var_perm = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_ar );
            tmp_subscribed_name_1 = par_ar;
            CHECK_OBJECT( var_perm );
            tmp_subscript_name_1 = var_perm;
            tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_aux == NULL );
            var_aux = tmp_assign_source_4;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_ar );
            tmp_called_instance_3 = par_ar;
            frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 312;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_sort );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( par_ar );
            tmp_assign_source_5 = par_ar;
            assert( var_aux == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_aux = tmp_assign_source_5;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 314;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_empty );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_aux );
        tmp_source_name_3 = var_aux;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 314;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_2 = const_str_plain_dtype;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 314;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_bool_ );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 314;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 314;
        tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_6;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_True;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscribed_1 = var_mask;
        tmp_ass_subscript_1 = const_slice_none_int_pos_1_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_2 = var_aux;
        tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_3 = var_aux;
        tmp_subscript_name_3 = const_slice_none_int_neg_1_none;
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 316;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mask );
        tmp_ass_subscribed_2 = var_mask;
        tmp_ass_subscript_2 = const_slice_int_pos_1_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_4 = var_aux;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_4 = var_mask;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_2 );
        assert( var_ret == NULL );
        var_ret = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_return_index );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_return_index );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_ret );
            tmp_left_name_1 = var_ret;
            if ( var_perm == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "perm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 320;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_5 = var_perm;
            CHECK_OBJECT( var_mask );
            tmp_subscript_name_5 = var_mask;
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
            tmp_result = BINARY_OPERATION_ADD_TUPLE_TUPLE_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_1;
            var_ret = tmp_assign_source_8;

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_return_inverse );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_return_inverse );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_right_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 322;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_4;
            CHECK_OBJECT( var_mask );
            tmp_args_element_name_2 = var_mask;
            frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 322;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_cumsum, call_args );
            }

            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_imask == NULL );
            var_imask = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 323;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_5;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_empty );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 323;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mask );
            tmp_source_name_6 = var_mask;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 323;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            tmp_dict_key_3 = const_str_plain_dtype;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 323;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_6;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_intp );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 323;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 323;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 323;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_inv_idx == NULL );
            var_inv_idx = tmp_assign_source_10;
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( var_imask );
            tmp_ass_subvalue_3 = var_imask;
            CHECK_OBJECT( var_inv_idx );
            tmp_ass_subscribed_3 = var_inv_idx;
            if ( var_perm == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "perm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 324;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_ass_subscript_3 = var_perm;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_tuple_element_5;
            CHECK_OBJECT( var_ret );
            tmp_left_name_3 = var_ret;
            CHECK_OBJECT( var_inv_idx );
            tmp_tuple_element_5 = var_inv_idx;
            tmp_right_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_5 );
            tmp_result = BINARY_OPERATION_ADD_OBJECT_TUPLE_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = tmp_left_name_3;
            var_ret = tmp_assign_source_11;

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_5;
        CHECK_OBJECT( par_return_counts );
        tmp_truth_name_5 = CHECK_IF_TRUE( par_return_counts );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_list_element_1;
            PyObject *tmp_source_name_9;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_7;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_concatenate );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_8;
            CHECK_OBJECT( var_mask );
            tmp_args_element_name_4 = var_mask;
            frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 327;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_nonzero, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mask );
            tmp_source_name_9 = var_mask;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_size );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_6 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_tuple_element_6, 0, tmp_list_element_1 );
            tmp_right_name_4 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_6 );
            tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 327;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_idx == NULL );
            var_idx = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_5;
            if ( var_ret == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_5 = var_ret;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_9;
            CHECK_OBJECT( var_idx );
            tmp_args_element_name_5 = var_idx;
            frame_7038f29bde7e7631d479aa159e63019a->m_frame.f_lineno = 328;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_tuple_element_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_diff, call_args );
            }

            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_5 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_7 );
            tmp_result = BINARY_OPERATION_ADD_OBJECT_TUPLE_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = tmp_left_name_5;
            var_ret = tmp_assign_source_13;

        }
        branch_no_4:;
    }
    if ( var_ret == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7038f29bde7e7631d479aa159e63019a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7038f29bde7e7631d479aa159e63019a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7038f29bde7e7631d479aa159e63019a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7038f29bde7e7631d479aa159e63019a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7038f29bde7e7631d479aa159e63019a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7038f29bde7e7631d479aa159e63019a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7038f29bde7e7631d479aa159e63019a,
        type_description_1,
        par_ar,
        par_return_index,
        par_return_inverse,
        par_return_counts,
        var_optional_indices,
        var_perm,
        var_aux,
        var_mask,
        var_ret,
        var_imask,
        var_inv_idx,
        var_idx
    );


    // Release cached frame.
    if ( frame_7038f29bde7e7631d479aa159e63019a == cache_frame_7038f29bde7e7631d479aa159e63019a )
    {
        Py_DECREF( frame_7038f29bde7e7631d479aa159e63019a );
    }
    cache_frame_7038f29bde7e7631d479aa159e63019a = NULL;

    assertFrameObject( frame_7038f29bde7e7631d479aa159e63019a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_6__unique1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar );
    Py_DECREF( par_ar );
    par_ar = NULL;

    CHECK_OBJECT( (PyObject *)par_return_index );
    Py_DECREF( par_return_index );
    par_return_index = NULL;

    CHECK_OBJECT( (PyObject *)par_return_inverse );
    Py_DECREF( par_return_inverse );
    par_return_inverse = NULL;

    CHECK_OBJECT( (PyObject *)par_return_counts );
    Py_DECREF( par_return_counts );
    par_return_counts = NULL;

    CHECK_OBJECT( (PyObject *)var_optional_indices );
    Py_DECREF( var_optional_indices );
    var_optional_indices = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    CHECK_OBJECT( (PyObject *)var_aux );
    Py_DECREF( var_aux );
    var_aux = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_imask );
    var_imask = NULL;

    Py_XDECREF( var_inv_idx );
    var_inv_idx = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ar );
    Py_DECREF( par_ar );
    par_ar = NULL;

    CHECK_OBJECT( (PyObject *)par_return_index );
    Py_DECREF( par_return_index );
    par_return_index = NULL;

    CHECK_OBJECT( (PyObject *)par_return_inverse );
    Py_DECREF( par_return_inverse );
    par_return_inverse = NULL;

    CHECK_OBJECT( (PyObject *)par_return_counts );
    Py_DECREF( par_return_counts );
    par_return_counts = NULL;

    Py_XDECREF( var_optional_indices );
    var_optional_indices = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_imask );
    var_imask = NULL;

    Py_XDECREF( var_inv_idx );
    var_inv_idx = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_6__unique1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_7__intersect1d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *par_return_indices = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_1 = par_ar1;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_1 = par_ar2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_7__intersect1d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_return_indices );
    Py_DECREF( par_return_indices );
    par_return_indices = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_7__intersect1d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraysetops$$$function_8_intersect1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *par_return_indices = python_pars[ 3 ];
    PyObject *var_ind1 = NULL;
    PyObject *var_ind2 = NULL;
    PyObject *var_aux = NULL;
    PyObject *var_aux_sort_indices = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_int1d = NULL;
    PyObject *var_ar1_indices = NULL;
    PyObject *var_ar2_indices = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_762947b71fa88ed69049190a81cea037;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_762947b71fa88ed69049190a81cea037 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_762947b71fa88ed69049190a81cea037, codeobj_762947b71fa88ed69049190a81cea037, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_762947b71fa88ed69049190a81cea037 = cache_frame_762947b71fa88ed69049190a81cea037;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_762947b71fa88ed69049190a81cea037 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_762947b71fa88ed69049190a81cea037 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 397;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ar1 );
        tmp_args_element_name_1 = par_ar1;
        frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ar1;
            assert( old != NULL );
            par_ar1 = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 398;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_ar2 );
        tmp_args_element_name_2 = par_ar2;
        frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ar2;
            assert( old != NULL );
            par_ar2 = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_assume_unique );
        tmp_operand_name_1 = par_assume_unique;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oooooooooooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_return_indices );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_return_indices );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "oooooooooooo";
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
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 402;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_1 = tmp_mvar_value_3;
                CHECK_OBJECT( par_ar1 );
                tmp_tuple_element_1 = par_ar1;
                tmp_args_name_1 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_ddb6199cf8f69226979904abcecd9a1f );
                frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 402;
                tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 402;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 402;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_tuple_unpack_1__source_iter == NULL );
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
                if ( tmp_assign_source_4 == NULL )
                {
                    if ( !ERROR_OCCURRED() )
                    {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF( exception_type );
                        exception_value = NULL;
                        exception_tb = NULL;
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    }


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 402;
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__element_1 == NULL );
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
                if ( tmp_assign_source_5 == NULL )
                {
                    if ( !ERROR_OCCURRED() )
                    {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF( exception_type );
                        exception_value = NULL;
                        exception_tb = NULL;
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    }


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 402;
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__element_2 == NULL );
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            }
            {
                PyObject *tmp_iterator_name_1;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

                if (likely( tmp_iterator_attempt == NULL ))
                {
                    PyObject *error = GET_ERROR_OCCURRED();

                    if ( error != NULL )
                    {
                        if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                        {
                            CLEAR_ERROR_OCCURRED();
                        }
                        else
                        {
                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                            type_description_1 = "oooooooooooo";
                            exception_lineno = 402;
                            goto try_except_handler_3;
                        }
                    }
                }
                else
                {
                    Py_DECREF( tmp_iterator_attempt );

                    // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                    PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 402;
                    goto try_except_handler_3;
                }
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
            Py_DECREF( tmp_tuple_unpack_1__source_iter );
            tmp_tuple_unpack_1__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto try_except_handler_2;
            // End of try:
            try_end_1:;
            goto try_end_2;
            // Exception handler code:
            try_except_handler_2:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto frame_exception_exit_1;
            // End of try:
            try_end_2:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
            Py_DECREF( tmp_tuple_unpack_1__source_iter );
            tmp_tuple_unpack_1__source_iter = NULL;

            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
                {
                    PyObject *old = par_ar1;
                    assert( old != NULL );
                    par_ar1 = tmp_assign_source_6;
                    Py_INCREF( par_ar1 );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
                assert( var_ind1 == NULL );
                Py_INCREF( tmp_assign_source_7 );
                var_ind1 = tmp_assign_source_7;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_2;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 403;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_2 = tmp_mvar_value_4;
                CHECK_OBJECT( par_ar2 );
                tmp_tuple_element_2 = par_ar2;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_kw_name_2 = PyDict_Copy( const_dict_ddb6199cf8f69226979904abcecd9a1f );
                frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 403;
                tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 403;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 403;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
                if ( tmp_assign_source_9 == NULL )
                {
                    if ( !ERROR_OCCURRED() )
                    {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF( exception_type );
                        exception_value = NULL;
                        exception_tb = NULL;
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    }


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 403;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_1 == NULL );
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
                if ( tmp_assign_source_10 == NULL )
                {
                    if ( !ERROR_OCCURRED() )
                    {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF( exception_type );
                        exception_value = NULL;
                        exception_tb = NULL;
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    }


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 403;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_2 == NULL );
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
            }
            {
                PyObject *tmp_iterator_name_2;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

                if (likely( tmp_iterator_attempt == NULL ))
                {
                    PyObject *error = GET_ERROR_OCCURRED();

                    if ( error != NULL )
                    {
                        if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                        {
                            CLEAR_ERROR_OCCURRED();
                        }
                        else
                        {
                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                            type_description_1 = "oooooooooooo";
                            exception_lineno = 403;
                            goto try_except_handler_5;
                        }
                    }
                }
                else
                {
                    Py_DECREF( tmp_iterator_attempt );

                    // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                    PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 403;
                    goto try_except_handler_5;
                }
            }
            goto try_end_3;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
            Py_DECREF( tmp_tuple_unpack_2__source_iter );
            tmp_tuple_unpack_2__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_4;
            // End of try:
            try_end_3:;
            goto try_end_4;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
            Py_DECREF( tmp_tuple_unpack_2__source_iter );
            tmp_tuple_unpack_2__source_iter = NULL;

            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
                {
                    PyObject *old = par_ar2;
                    assert( old != NULL );
                    par_ar2 = tmp_assign_source_11;
                    Py_INCREF( par_ar2 );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
                assert( var_ind2 == NULL );
                Py_INCREF( tmp_assign_source_12 );
                var_ind2 = tmp_assign_source_12;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 405;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                CHECK_OBJECT( par_ar1 );
                tmp_args_element_name_3 = par_ar1;
                frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 405;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 405;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_ar1;
                    assert( old != NULL );
                    par_ar1 = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_4;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 406;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_6;
                CHECK_OBJECT( par_ar2 );
                tmp_args_element_name_4 = par_ar2;
                frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 406;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 406;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_ar2;
                    assert( old != NULL );
                    par_ar2 = tmp_assign_source_14;
                    Py_DECREF( old );
                }

            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( par_ar1 );
            tmp_called_instance_3 = par_ar1;
            frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 408;
            tmp_assign_source_15 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_ravel );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 408;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ar1;
                assert( old != NULL );
                par_ar1 = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( par_ar2 );
            tmp_called_instance_4 = par_ar2;
            frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 409;
            tmp_assign_source_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_ravel );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ar2;
                assert( old != NULL );
                par_ar2 = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 411;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_7;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( par_ar1 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ar1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 411;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_ar1;
        tmp_args_element_name_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_3 );
        if ( par_ar2 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ar2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 411;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_ar2;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_3 );
        frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_aux == NULL );
        var_aux = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_return_indices );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_return_indices );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 413;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_8;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_argsort );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 413;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_aux );
            tmp_tuple_element_4 = var_aux;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_87c1abaa6fcb4c6f72874144a9717b89 );
            frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 413;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 413;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_aux_sort_indices == NULL );
            var_aux_sort_indices = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_aux );
            tmp_subscribed_name_1 = var_aux;
            CHECK_OBJECT( var_aux_sort_indices );
            tmp_subscript_name_1 = var_aux_sort_indices;
            tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_aux;
                assert( old != NULL );
                var_aux = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( var_aux );
            tmp_called_instance_5 = var_aux;
            frame_762947b71fa88ed69049190a81cea037->m_frame.f_lineno = 416;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_sort );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 416;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_2 = var_aux;
        tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_3 = var_aux;
        tmp_subscript_name_3 = const_slice_none_int_neg_1_none;
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 418;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_5 = var_aux;
        tmp_subscript_name_4 = const_slice_none_int_neg_1_none;
        tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_4 );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_5 = var_mask;
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_int1d == NULL );
        var_int1d = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_return_indices );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_return_indices );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_subscript_name_7;
            if ( var_aux_sort_indices == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "aux_sort_indices" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 422;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_7 = var_aux_sort_indices;
            tmp_subscript_name_6 = const_slice_none_int_neg_1_none;
            tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
            if ( tmp_subscribed_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mask );
            tmp_subscript_name_7 = var_mask;
            tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
            Py_DECREF( tmp_subscribed_name_6 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ar1_indices == NULL );
            var_ar1_indices = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_3;
            if ( var_aux_sort_indices == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "aux_sort_indices" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 423;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_9 = var_aux_sort_indices;
            tmp_subscript_name_8 = const_slice_int_pos_1_none_none;
            tmp_subscribed_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_8 );
            if ( tmp_subscribed_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mask );
            tmp_subscript_name_9 = var_mask;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_9 );
            Py_DECREF( tmp_subscribed_name_8 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( par_ar1 == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ar1" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 423;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = par_ar1;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 423;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ar2_indices == NULL );
            var_ar2_indices = tmp_assign_source_23;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT( par_assume_unique );
            tmp_operand_name_2 = par_assume_unique;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 424;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_24;
                PyObject *tmp_subscribed_name_10;
                PyObject *tmp_subscript_name_10;
                if ( var_ind1 == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ind1" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 425;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_10 = var_ind1;
                CHECK_OBJECT( var_ar1_indices );
                tmp_subscript_name_10 = var_ar1_indices;
                tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
                if ( tmp_assign_source_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 425;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ar1_indices;
                    assert( old != NULL );
                    var_ar1_indices = tmp_assign_source_24;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_25;
                PyObject *tmp_subscribed_name_11;
                PyObject *tmp_subscript_name_11;
                if ( var_ind2 == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ind2" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 426;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_11 = var_ind2;
                CHECK_OBJECT( var_ar2_indices );
                tmp_subscript_name_11 = var_ar2_indices;
                tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 426;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ar2_indices;
                    assert( old != NULL );
                    var_ar2_indices = tmp_assign_source_25;
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        {
            PyObject *tmp_tuple_element_5;
            CHECK_OBJECT( var_int1d );
            tmp_tuple_element_5 = var_int1d;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_ar1_indices );
            tmp_tuple_element_5 = var_ar1_indices;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( var_ar2_indices );
            tmp_tuple_element_5 = var_ar2_indices;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_5 );
            goto frame_return_exit_1;
        }
        goto branch_end_4;
        branch_no_4:;
        CHECK_OBJECT( var_int1d );
        tmp_return_value = var_int1d;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_762947b71fa88ed69049190a81cea037 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_762947b71fa88ed69049190a81cea037 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_762947b71fa88ed69049190a81cea037 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_762947b71fa88ed69049190a81cea037, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_762947b71fa88ed69049190a81cea037->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_762947b71fa88ed69049190a81cea037, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_762947b71fa88ed69049190a81cea037,
        type_description_1,
        par_ar1,
        par_ar2,
        par_assume_unique,
        par_return_indices,
        var_ind1,
        var_ind2,
        var_aux,
        var_aux_sort_indices,
        var_mask,
        var_int1d,
        var_ar1_indices,
        var_ar2_indices
    );


    // Release cached frame.
    if ( frame_762947b71fa88ed69049190a81cea037 == cache_frame_762947b71fa88ed69049190a81cea037 )
    {
        Py_DECREF( frame_762947b71fa88ed69049190a81cea037 );
    }
    cache_frame_762947b71fa88ed69049190a81cea037 = NULL;

    assertFrameObject( frame_762947b71fa88ed69049190a81cea037 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_8_intersect1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_return_indices );
    Py_DECREF( par_return_indices );
    par_return_indices = NULL;

    Py_XDECREF( var_ind1 );
    var_ind1 = NULL;

    Py_XDECREF( var_ind2 );
    var_ind2 = NULL;

    CHECK_OBJECT( (PyObject *)var_aux );
    Py_DECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_aux_sort_indices );
    var_aux_sort_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_int1d );
    Py_DECREF( var_int1d );
    var_int1d = NULL;

    Py_XDECREF( var_ar1_indices );
    var_ar1_indices = NULL;

    Py_XDECREF( var_ar2_indices );
    var_ar2_indices = NULL;

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

    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_return_indices );
    Py_DECREF( par_return_indices );
    par_return_indices = NULL;

    Py_XDECREF( var_ind1 );
    var_ind1 = NULL;

    Py_XDECREF( var_ind2 );
    var_ind2 = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_aux_sort_indices );
    var_aux_sort_indices = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_int1d );
    var_int1d = NULL;

    Py_XDECREF( var_ar1_indices );
    var_ar1_indices = NULL;

    Py_XDECREF( var_ar2_indices );
    var_ar2_indices = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_8_intersect1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_9__setxor1d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_1 = par_ar1;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_1 = par_ar2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_9__setxor1d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_9__setxor1d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraysetops$$$function_10_setxor1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *var_aux = NULL;
    PyObject *var_flag = NULL;
    struct Nuitka_FrameObject *frame_9d4673a6067387c2de1515f390ebaec1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d4673a6067387c2de1515f390ebaec1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d4673a6067387c2de1515f390ebaec1, codeobj_9d4673a6067387c2de1515f390ebaec1, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9d4673a6067387c2de1515f390ebaec1 = cache_frame_9d4673a6067387c2de1515f390ebaec1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d4673a6067387c2de1515f390ebaec1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d4673a6067387c2de1515f390ebaec1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_assume_unique );
        tmp_operand_name_1 = par_assume_unique;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 468;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_ar1 );
            tmp_args_element_name_1 = par_ar1;
            frame_9d4673a6067387c2de1515f390ebaec1->m_frame.f_lineno = 468;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 468;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ar1;
                assert( old != NULL );
                par_ar1 = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 469;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_ar2 );
            tmp_args_element_name_2 = par_ar2;
            frame_9d4673a6067387c2de1515f390ebaec1->m_frame.f_lineno = 469;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ar2;
                assert( old != NULL );
                par_ar2 = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 471;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_1 = par_ar1;
        tmp_args_element_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_1 = par_ar2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
        frame_9d4673a6067387c2de1515f390ebaec1->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_concatenate, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_aux == NULL );
        var_aux = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_aux );
        tmp_source_name_1 = var_aux;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( var_aux );
        tmp_return_value = var_aux;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_aux );
        tmp_called_instance_2 = var_aux;
        frame_9d4673a6067387c2de1515f390ebaec1->m_frame.f_lineno = 475;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_sort );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 475;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_concatenate );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LIST_COPY( const_list_true_list );
        tmp_args_element_name_4 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_1 = var_aux;
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_2 = var_aux;
        tmp_subscript_name_2 = const_slice_none_int_neg_1_none;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = LIST_COPY( const_list_true_list );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 2, tmp_tuple_element_2 );
        frame_9d4673a6067387c2de1515f390ebaec1->m_frame.f_lineno = 476;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_flag == NULL );
        var_flag = tmp_assign_source_4;
    }
    {
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_aux );
        tmp_subscribed_name_3 = var_aux;
        CHECK_OBJECT( var_flag );
        tmp_subscribed_name_4 = var_flag;
        tmp_subscript_name_4 = const_slice_int_pos_1_none_none;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_flag );
        tmp_subscribed_name_5 = var_flag;
        tmp_subscript_name_5 = const_slice_none_int_neg_1_none;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_subscript_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d4673a6067387c2de1515f390ebaec1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d4673a6067387c2de1515f390ebaec1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d4673a6067387c2de1515f390ebaec1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d4673a6067387c2de1515f390ebaec1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d4673a6067387c2de1515f390ebaec1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d4673a6067387c2de1515f390ebaec1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d4673a6067387c2de1515f390ebaec1,
        type_description_1,
        par_ar1,
        par_ar2,
        par_assume_unique,
        var_aux,
        var_flag
    );


    // Release cached frame.
    if ( frame_9d4673a6067387c2de1515f390ebaec1 == cache_frame_9d4673a6067387c2de1515f390ebaec1 )
    {
        Py_DECREF( frame_9d4673a6067387c2de1515f390ebaec1 );
    }
    cache_frame_9d4673a6067387c2de1515f390ebaec1 = NULL;

    assertFrameObject( frame_9d4673a6067387c2de1515f390ebaec1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_10_setxor1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)var_aux );
    Py_DECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

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

    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_10_setxor1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_11__in1d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *par_invert = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_1 = par_ar1;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_1 = par_ar2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_11__in1d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_invert );
    Py_DECREF( par_invert );
    par_invert = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_11__in1d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraysetops$$$function_12_in1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *par_invert = python_pars[ 3 ];
    PyObject *var_contains_object = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_a = NULL;
    PyObject *var_rev_idx = NULL;
    PyObject *var_ar = NULL;
    PyObject *var_order = NULL;
    PyObject *var_sar = NULL;
    PyObject *var_bool_ar = NULL;
    PyObject *var_flag = NULL;
    PyObject *var_ret = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e31394f38be6aff2b4220d030a3d0ed5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e31394f38be6aff2b4220d030a3d0ed5 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e31394f38be6aff2b4220d030a3d0ed5, codeobj_e31394f38be6aff2b4220d030a3d0ed5, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e31394f38be6aff2b4220d030a3d0ed5 = cache_frame_e31394f38be6aff2b4220d030a3d0ed5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e31394f38be6aff2b4220d030a3d0ed5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e31394f38be6aff2b4220d030a3d0ed5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 551;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ar1 );
        tmp_args_element_name_1 = par_ar1;
        frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 551;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 551;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 551;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ravel );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 551;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ar1;
            assert( old != NULL );
            par_ar1 = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 552;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_ar2 );
        tmp_args_element_name_2 = par_ar2;
        frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_asarray, call_args );
        }

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 552;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 552;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_ravel );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 552;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ar2;
            assert( old != NULL );
            par_ar2 = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_ar1 );
        tmp_source_name_2 = par_ar1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 555;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hasobject );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 555;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 555;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF( tmp_or_left_value_1 );
        CHECK_OBJECT( par_ar2 );
        tmp_source_name_4 = par_ar2;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 555;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hasobject );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 555;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_3 = tmp_or_left_value_1;
        or_end_1:;
        assert( var_contains_object == NULL );
        var_contains_object = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_ar2 );
        tmp_len_arg_1 = par_ar2;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 561;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_int_pos_10;
        CHECK_OBJECT( par_ar1 );
        tmp_len_arg_2 = par_ar1;
        tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 561;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_float_0_145;
        tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 561;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 561;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 561;
            type_description_1 = "oooooooooooooo";
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
        CHECK_OBJECT( var_contains_object );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_contains_object );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 561;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_1 = tmp_or_left_value_2;
        or_end_2:;
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
            int tmp_truth_name_2;
            CHECK_OBJECT( par_invert );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_invert );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 562;
                type_description_1 = "oooooooooooooo";
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_len_arg_3;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 563;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_3;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ones );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 563;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_ar1 );
                tmp_len_arg_3 = par_ar1;
                tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_3 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 563;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_1 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
                frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 563;
                tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 563;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_mask == NULL );
                var_mask = tmp_assign_source_4;
            }
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_ar2 );
                tmp_iter_arg_1 = par_ar2;
                tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 564;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_1__for_iterator == NULL );
                tmp_for_loop_1__for_iterator = tmp_assign_source_5;
            }
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_6 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 564;
                        goto try_except_handler_2;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_1__iter_value;
                    tmp_for_loop_1__iter_value = tmp_assign_source_6;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_for_loop_1__iter_value );
                tmp_assign_source_7 = tmp_for_loop_1__iter_value;
                {
                    PyObject *old = var_a;
                    var_a = tmp_assign_source_7;
                    Py_INCREF( var_a );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( var_mask );
                tmp_left_name_3 = var_mask;
                CHECK_OBJECT( par_ar1 );
                tmp_compexpr_left_2 = par_ar1;
                CHECK_OBJECT( var_a );
                tmp_compexpr_right_2 = var_a;
                tmp_right_name_3 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 565;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceAnd, &tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 565;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_8 = tmp_left_name_3;
                var_mask = tmp_assign_source_8;

            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 564;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            goto loop_start_1;
            loop_end_1:;
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

            Py_XDECREF( tmp_for_loop_1__iter_value );
            tmp_for_loop_1__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
            Py_DECREF( tmp_for_loop_1__for_iterator );
            tmp_for_loop_1__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_1;
            // End of try:
            try_end_1:;
            Py_XDECREF( tmp_for_loop_1__iter_value );
            tmp_for_loop_1__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
            Py_DECREF( tmp_for_loop_1__for_iterator );
            tmp_for_loop_1__for_iterator = NULL;

            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_len_arg_4;
                PyObject *tmp_kw_name_2;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 567;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_4;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_zeros );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 567;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_ar1 );
                tmp_len_arg_4 = par_ar1;
                tmp_tuple_element_2 = BUILTIN_LEN( tmp_len_arg_4 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 567;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_kw_name_2 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
                frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 567;
                tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 567;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_mask == NULL );
                var_mask = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( par_ar2 );
                tmp_iter_arg_2 = par_ar2;
                tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 568;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_2__for_iterator == NULL );
                tmp_for_loop_2__for_iterator = tmp_assign_source_10;
            }
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( tmp_for_loop_2__for_iterator );
                tmp_next_source_2 = tmp_for_loop_2__for_iterator;
                tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_11 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_2;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 568;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_2__iter_value;
                    tmp_for_loop_2__iter_value = tmp_assign_source_11;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( tmp_for_loop_2__iter_value );
                tmp_assign_source_12 = tmp_for_loop_2__iter_value;
                {
                    PyObject *old = var_a;
                    var_a = tmp_assign_source_12;
                    Py_INCREF( var_a );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( var_mask );
                tmp_left_name_4 = var_mask;
                CHECK_OBJECT( par_ar1 );
                tmp_compexpr_left_3 = par_ar1;
                CHECK_OBJECT( var_a );
                tmp_compexpr_right_3 = var_a;
                tmp_right_name_4 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 569;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_3;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 569;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_13 = tmp_left_name_4;
                var_mask = tmp_assign_source_13;

            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 568;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_3;
            }
            goto loop_start_2;
            loop_end_2:;
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

            Py_XDECREF( tmp_for_loop_2__iter_value );
            tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
            Py_DECREF( tmp_for_loop_2__for_iterator );
            tmp_for_loop_2__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto frame_exception_exit_1;
            // End of try:
            try_end_2:;
            Py_XDECREF( tmp_for_loop_2__iter_value );
            tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
            Py_DECREF( tmp_for_loop_2__for_iterator );
            tmp_for_loop_2__for_iterator = NULL;

            branch_end_2:;
        }
        if ( var_mask == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mask" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 570;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_mask;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_assume_unique );
        tmp_operand_name_1 = par_assume_unique;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 573;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 574;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_source_name_7 = tmp_mvar_value_5;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_unique );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 574;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_ar1 );
            tmp_tuple_element_3 = par_ar1;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_a631262f796736f0defb811197d235ff );
            frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 574;
            tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 574;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_14 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 574;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_15 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 574;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_16 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 574;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

            if (likely( tmp_iterator_attempt == NULL ))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if ( error != NULL )
                {
                    if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                    {
                        CLEAR_ERROR_OCCURRED();
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 574;
                        goto try_except_handler_5;
                    }
                }
            }
            else
            {
                Py_DECREF( tmp_iterator_attempt );

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooo";
                exception_lineno = 574;
                goto try_except_handler_5;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = par_ar1;
                assert( old != NULL );
                par_ar1 = tmp_assign_source_17;
                Py_INCREF( par_ar1 );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
            assert( var_rev_idx == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_rev_idx = tmp_assign_source_18;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 575;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_6;
            CHECK_OBJECT( par_ar2 );
            tmp_args_element_name_3 = par_ar2;
            frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 575;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_unique, call_args );
            }

            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 575;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ar2;
                assert( old != NULL );
                par_ar2 = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 577;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_7;
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_4 = par_ar1;
        tmp_args_element_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_4 = par_ar2;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_4 );
        frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 577;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_concatenate, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 577;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ar == NULL );
        var_ar = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_kw_name_4;
        CHECK_OBJECT( var_ar );
        tmp_source_name_8 = var_ar;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_argsort );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 581;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_4 = PyDict_Copy( const_dict_87c1abaa6fcb4c6f72874144a9717b89 );
        frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 581;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 581;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_order == NULL );
        var_order = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_ar );
        tmp_subscribed_name_1 = var_ar;
        CHECK_OBJECT( var_order );
        tmp_subscript_name_1 = var_order;
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 582;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sar == NULL );
        var_sar = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_invert );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_invert );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 583;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_sar );
            tmp_subscribed_name_2 = var_sar;
            tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 584;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_sar );
            tmp_subscribed_name_3 = var_sar;
            tmp_subscript_name_3 = const_slice_none_int_neg_1_none;
            tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 584;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_23 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 584;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_bool_ar == NULL );
            var_bool_ar = tmp_assign_source_23;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_sar );
            tmp_subscribed_name_4 = var_sar;
            tmp_subscript_name_4 = const_slice_int_pos_1_none_none;
            tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 586;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_sar );
            tmp_subscribed_name_5 = var_sar;
            tmp_subscript_name_5 = const_slice_none_int_neg_1_none;
            tmp_compexpr_right_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_compexpr_right_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_5 );

                exception_lineno = 586;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_24 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 586;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_bool_ar == NULL );
            var_bool_ar = tmp_assign_source_24;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 587;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_8;
        CHECK_OBJECT( var_bool_ar );
        tmp_tuple_element_5 = var_bool_ar;
        tmp_args_element_name_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( par_invert );
        tmp_list_element_1 = par_invert;
        tmp_tuple_element_5 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_tuple_element_5, 0, tmp_list_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_5 );
        frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 587;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_concatenate, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 587;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_flag == NULL );
        var_flag = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_source_name_10;
        PyObject *tmp_kw_name_5;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 588;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_9;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_empty );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 588;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ar );
        tmp_source_name_10 = var_ar;
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 588;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
        tmp_kw_name_5 = PyDict_Copy( const_dict_8a6ce79bb59f45c062c2a0027a3a0c33 );
        frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame.f_lineno = 588;
        tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_5 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 588;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ret == NULL );
        var_ret = tmp_assign_source_26;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_flag );
        tmp_ass_subvalue_1 = var_flag;
        CHECK_OBJECT( var_ret );
        tmp_ass_subscribed_1 = var_ret;
        CHECK_OBJECT( var_order );
        tmp_ass_subscript_1 = var_order;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 589;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_assume_unique );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_assume_unique );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 591;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_len_arg_5;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( var_ret );
            tmp_subscribed_name_6 = var_ret;
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT( par_ar1 );
            tmp_len_arg_5 = par_ar1;
            tmp_stop_name_1 = BUILTIN_LEN( tmp_len_arg_5 );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 592;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_subscript_name_6 == NULL) );
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 592;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            CHECK_OBJECT( var_ret );
            tmp_subscribed_name_7 = var_ret;
            if ( var_rev_idx == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rev_idx" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 594;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscript_name_7 = var_rev_idx;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 594;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e31394f38be6aff2b4220d030a3d0ed5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e31394f38be6aff2b4220d030a3d0ed5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e31394f38be6aff2b4220d030a3d0ed5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e31394f38be6aff2b4220d030a3d0ed5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e31394f38be6aff2b4220d030a3d0ed5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e31394f38be6aff2b4220d030a3d0ed5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e31394f38be6aff2b4220d030a3d0ed5,
        type_description_1,
        par_ar1,
        par_ar2,
        par_assume_unique,
        par_invert,
        var_contains_object,
        var_mask,
        var_a,
        var_rev_idx,
        var_ar,
        var_order,
        var_sar,
        var_bool_ar,
        var_flag,
        var_ret
    );


    // Release cached frame.
    if ( frame_e31394f38be6aff2b4220d030a3d0ed5 == cache_frame_e31394f38be6aff2b4220d030a3d0ed5 )
    {
        Py_DECREF( frame_e31394f38be6aff2b4220d030a3d0ed5 );
    }
    cache_frame_e31394f38be6aff2b4220d030a3d0ed5 = NULL;

    assertFrameObject( frame_e31394f38be6aff2b4220d030a3d0ed5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_12_in1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_invert );
    Py_DECREF( par_invert );
    par_invert = NULL;

    CHECK_OBJECT( (PyObject *)var_contains_object );
    Py_DECREF( var_contains_object );
    var_contains_object = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_rev_idx );
    var_rev_idx = NULL;

    Py_XDECREF( var_ar );
    var_ar = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_sar );
    var_sar = NULL;

    Py_XDECREF( var_bool_ar );
    var_bool_ar = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

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

    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_invert );
    Py_DECREF( par_invert );
    par_invert = NULL;

    Py_XDECREF( var_contains_object );
    var_contains_object = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_rev_idx );
    var_rev_idx = NULL;

    Py_XDECREF( var_ar );
    var_ar = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_sar );
    var_sar = NULL;

    Py_XDECREF( var_bool_ar );
    var_bool_ar = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_12_in1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_13__isin_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[ 0 ];
    PyObject *par_test_elements = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *par_invert = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_element );
        tmp_tuple_element_1 = par_element;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_test_elements );
        tmp_tuple_element_1 = par_test_elements;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_13__isin_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_element );
    Py_DECREF( par_element );
    par_element = NULL;

    CHECK_OBJECT( (PyObject *)par_test_elements );
    Py_DECREF( par_test_elements );
    par_test_elements = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_invert );
    Py_DECREF( par_invert );
    par_invert = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_13__isin_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraysetops$$$function_14_isin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[ 0 ];
    PyObject *par_test_elements = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *par_invert = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_38b4a3b7f072abe57a104b52924473df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_38b4a3b7f072abe57a104b52924473df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_38b4a3b7f072abe57a104b52924473df, codeobj_38b4a3b7f072abe57a104b52924473df, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_38b4a3b7f072abe57a104b52924473df = cache_frame_38b4a3b7f072abe57a104b52924473df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_38b4a3b7f072abe57a104b52924473df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_38b4a3b7f072abe57a104b52924473df ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 695;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_element );
        tmp_args_element_name_1 = par_element;
        frame_38b4a3b7f072abe57a104b52924473df->m_frame.f_lineno = 695;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 695;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_element;
            assert( old != NULL );
            par_element = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_in1d );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_in1d );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "in1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 696;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_element );
        tmp_tuple_element_1 = par_element;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_test_elements );
        tmp_tuple_element_1 = par_test_elements;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_assume_unique;
        CHECK_OBJECT( par_assume_unique );
        tmp_dict_value_1 = par_assume_unique;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_invert;
        CHECK_OBJECT( par_invert );
        tmp_dict_value_2 = par_invert;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_38b4a3b7f072abe57a104b52924473df->m_frame.f_lineno = 696;
        tmp_source_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 696;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_reshape );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 696;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_element );
        tmp_source_name_2 = par_element;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 697;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_38b4a3b7f072abe57a104b52924473df->m_frame.f_lineno = 696;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 696;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38b4a3b7f072abe57a104b52924473df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_38b4a3b7f072abe57a104b52924473df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38b4a3b7f072abe57a104b52924473df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_38b4a3b7f072abe57a104b52924473df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_38b4a3b7f072abe57a104b52924473df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_38b4a3b7f072abe57a104b52924473df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_38b4a3b7f072abe57a104b52924473df,
        type_description_1,
        par_element,
        par_test_elements,
        par_assume_unique,
        par_invert
    );


    // Release cached frame.
    if ( frame_38b4a3b7f072abe57a104b52924473df == cache_frame_38b4a3b7f072abe57a104b52924473df )
    {
        Py_DECREF( frame_38b4a3b7f072abe57a104b52924473df );
    }
    cache_frame_38b4a3b7f072abe57a104b52924473df = NULL;

    assertFrameObject( frame_38b4a3b7f072abe57a104b52924473df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_14_isin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_element );
    Py_DECREF( par_element );
    par_element = NULL;

    CHECK_OBJECT( (PyObject *)par_test_elements );
    Py_DECREF( par_test_elements );
    par_test_elements = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_invert );
    Py_DECREF( par_invert );
    par_invert = NULL;

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

    CHECK_OBJECT( (PyObject *)par_element );
    Py_DECREF( par_element );
    par_element = NULL;

    CHECK_OBJECT( (PyObject *)par_test_elements );
    Py_DECREF( par_test_elements );
    par_test_elements = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_invert );
    Py_DECREF( par_invert );
    par_invert = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_14_isin );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_15__union1d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_1 = par_ar1;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_1 = par_ar2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_15__union1d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_15__union1d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraysetops$$$function_16_union1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2b8b89f55da9d585558dee4f904b9c0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b8b89f55da9d585558dee4f904b9c0b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2b8b89f55da9d585558dee4f904b9c0b, codeobj_2b8b89f55da9d585558dee4f904b9c0b, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *) );
    frame_2b8b89f55da9d585558dee4f904b9c0b = cache_frame_2b8b89f55da9d585558dee4f904b9c0b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b8b89f55da9d585558dee4f904b9c0b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b8b89f55da9d585558dee4f904b9c0b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 738;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 738;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 738;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_2 = par_ar1;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_2 = par_ar2;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_21b0a41bf986b828d73b3708697d69bd );
        frame_2b8b89f55da9d585558dee4f904b9c0b->m_frame.f_lineno = 738;
        tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 738;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2b8b89f55da9d585558dee4f904b9c0b->m_frame.f_lineno = 738;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 738;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b8b89f55da9d585558dee4f904b9c0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b8b89f55da9d585558dee4f904b9c0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b8b89f55da9d585558dee4f904b9c0b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b8b89f55da9d585558dee4f904b9c0b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b8b89f55da9d585558dee4f904b9c0b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b8b89f55da9d585558dee4f904b9c0b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b8b89f55da9d585558dee4f904b9c0b,
        type_description_1,
        par_ar1,
        par_ar2
    );


    // Release cached frame.
    if ( frame_2b8b89f55da9d585558dee4f904b9c0b == cache_frame_2b8b89f55da9d585558dee4f904b9c0b )
    {
        Py_DECREF( frame_2b8b89f55da9d585558dee4f904b9c0b );
    }
    cache_frame_2b8b89f55da9d585558dee4f904b9c0b = NULL;

    assertFrameObject( frame_2b8b89f55da9d585558dee4f904b9c0b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_16_union1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_16_union1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_17__setdiff1d_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_1 = par_ar1;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_1 = par_ar2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_17__setdiff1d_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_17__setdiff1d_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$arraysetops$$$function_18_setdiff1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_d7c5a36e8a9a1e70034ed421a7d47c94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7c5a36e8a9a1e70034ed421a7d47c94 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7c5a36e8a9a1e70034ed421a7d47c94, codeobj_d7c5a36e8a9a1e70034ed421a7d47c94, module_numpy$lib$arraysetops, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d7c5a36e8a9a1e70034ed421a7d47c94 = cache_frame_d7c5a36e8a9a1e70034ed421a7d47c94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7c5a36e8a9a1e70034ed421a7d47c94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7c5a36e8a9a1e70034ed421a7d47c94 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_assume_unique );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_assume_unique );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 782;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 783;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            CHECK_OBJECT( par_ar1 );
            tmp_args_element_name_1 = par_ar1;
            frame_d7c5a36e8a9a1e70034ed421a7d47c94->m_frame.f_lineno = 783;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
            }

            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 783;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_d7c5a36e8a9a1e70034ed421a7d47c94->m_frame.f_lineno = 783;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ravel );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 783;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ar1;
                assert( old != NULL );
                par_ar1 = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 785;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_ar1 );
            tmp_args_element_name_2 = par_ar1;
            frame_d7c5a36e8a9a1e70034ed421a7d47c94->m_frame.f_lineno = 785;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 785;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ar1;
                assert( old != NULL );
                par_ar1 = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unique" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 786;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_ar2 );
            tmp_args_element_name_3 = par_ar2;
            frame_d7c5a36e8a9a1e70034ed421a7d47c94->m_frame.f_lineno = 786;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 786;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ar2;
                assert( old != NULL );
                par_ar2 = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_ar1 );
        tmp_subscribed_name_1 = par_ar1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_in1d );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_in1d );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "in1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 787;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_ar1 );
        tmp_tuple_element_1 = par_ar1;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ar2 );
        tmp_tuple_element_1 = par_ar2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_983b85267f0872f55cb0f16db8944e2c );
        frame_d7c5a36e8a9a1e70034ed421a7d47c94->m_frame.f_lineno = 787;
        tmp_subscript_name_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 787;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7c5a36e8a9a1e70034ed421a7d47c94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7c5a36e8a9a1e70034ed421a7d47c94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7c5a36e8a9a1e70034ed421a7d47c94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7c5a36e8a9a1e70034ed421a7d47c94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7c5a36e8a9a1e70034ed421a7d47c94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7c5a36e8a9a1e70034ed421a7d47c94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7c5a36e8a9a1e70034ed421a7d47c94,
        type_description_1,
        par_ar1,
        par_ar2,
        par_assume_unique
    );


    // Release cached frame.
    if ( frame_d7c5a36e8a9a1e70034ed421a7d47c94 == cache_frame_d7c5a36e8a9a1e70034ed421a7d47c94 )
    {
        Py_DECREF( frame_d7c5a36e8a9a1e70034ed421a7d47c94 );
    }
    cache_frame_d7c5a36e8a9a1e70034ed421a7d47c94 = NULL;

    assertFrameObject( frame_d7c5a36e8a9a1e70034ed421a7d47c94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_18_setdiff1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

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

    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_18_setdiff1d );
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



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_10_setxor1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_10_setxor1d,
        const_str_plain_setxor1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d4673a6067387c2de1515f390ebaec1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_e8a7043d822853f224a7724b5dc72c3c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_11__in1d_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_11__in1d_dispatcher,
        const_str_plain__in1d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f8508ddc5e2e9204a1dd9f2f26110333,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_12_in1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_12_in1d,
        const_str_plain_in1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e31394f38be6aff2b4220d030a3d0ed5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_54f143fa7d7b747c1c20332113a0dc42,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_13__isin_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_13__isin_dispatcher,
        const_str_plain__isin_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bb3f7a5eb9114f7ce2d426c7e4e13830,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_14_isin( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_14_isin,
        const_str_plain_isin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_38b4a3b7f072abe57a104b52924473df,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_b8ab909ead67b733d21e84e0fa35f8f7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_15__union1d_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_15__union1d_dispatcher,
        const_str_plain__union1d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a49a7718fdfc33c43dc81bb09e67ed42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_16_union1d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_16_union1d,
        const_str_plain_union1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2b8b89f55da9d585558dee4f904b9c0b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_32aa26906bd2e01c6275c3d10157994e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_17__setdiff1d_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_17__setdiff1d_dispatcher,
        const_str_plain__setdiff1d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cf64d7313b460865561fcd6ce8baf5a9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_18_setdiff1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_18_setdiff1d,
        const_str_plain_setdiff1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d7c5a36e8a9a1e70034ed421a7d47c94,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_4854b36ee4743b567d2b1c6383402d57,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_1__ediff1d_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_1__ediff1d_dispatcher,
        const_str_plain__ediff1d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_73c56c99fed6455e64c7f3799a8cb1a9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_2_ediff1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_2_ediff1d,
        const_str_plain_ediff1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_819b5655691b75c81d97ea028adebfa2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_986f9ed8358514487e380df62a7fd441,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_3__unpack_tuple(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_3__unpack_tuple,
        const_str_plain__unpack_tuple,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_85e79cffb352eca4dcedab8e1856b08a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_9d6df9b20b0b0a9490f420ee53ba9c27,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_4__unique_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_4__unique_dispatcher,
        const_str_plain__unique_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d624a960aebdfcfd82c4b5168fa05309,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_unique( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_5_unique,
        const_str_plain_unique,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ab64035eed2531be3fa664a03e19e11b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_e211930c5cfa560618a9bd5c5e982597,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_unique$$$function_1_reshape_uniq(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_5_unique$$$function_1_reshape_uniq,
        const_str_plain_reshape_uniq,
#if PYTHON_VERSION >= 300
        const_str_digest_2399a938eda4ea95116fd53ead1746d9,
#endif
        codeobj_abb7af0b231d8b628837a2d3aebd313e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_6__unique1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_6__unique1d,
        const_str_plain__unique1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7038f29bde7e7631d479aa159e63019a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_6e5e7fa81ebb9bd1b00e9a0e966d643a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_7__intersect1d_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_7__intersect1d_dispatcher,
        const_str_plain__intersect1d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b9765d33bb38cd72a7ef71054902a1c5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_8_intersect1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_8_intersect1d,
        const_str_plain_intersect1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_762947b71fa88ed69049190a81cea037,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_5b14963111bc82701ac4bf4d39205e22,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_9__setxor1d_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_9__setxor1d_dispatcher,
        const_str_plain__setxor1d_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de5eea404fb3545d59fd1497c74be7ce,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$arraysetops,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$arraysetops =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.arraysetops",
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

MOD_INIT_DECL( numpy$lib$arraysetops )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$arraysetops );
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
    puts("numpy.lib.arraysetops: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.arraysetops: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.arraysetops: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$arraysetops" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$arraysetops = Py_InitModule4(
        "numpy.lib.arraysetops",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$arraysetops = PyModule_Create( &mdef_numpy$lib$arraysetops );
#endif

    moduledict_numpy$lib$arraysetops = MODULE_DICT( module_numpy$lib$arraysetops );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$lib$arraysetops,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$arraysetops,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$arraysetops,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$arraysetops,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$arraysetops );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_971ee6d7315ee3191336b47954b0fe4f, module_numpy$lib$arraysetops );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e9e643c9836077e429944efb47722b2e;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_93159d45d1858d6a69629d25e1f093e0;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_b4943b24fa501fa9c7ffb20498d919dc;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e9e643c9836077e429944efb47722b2e = MAKE_MODULE_FRAME( codeobj_e9e643c9836077e429944efb47722b2e, module_numpy$lib$arraysetops );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e9e643c9836077e429944efb47722b2e );
    assert( Py_REFCNT( frame_e9e643c9836077e429944efb47722b2e ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_b4943b24fa501fa9c7ffb20498d919dc;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 28;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_4 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$arraysetops;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 30;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$arraysetops;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 32;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$arraysetops;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_3 = const_int_0;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 33;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_overrides );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_functools );

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

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_overrides );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_overrides );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "overrides" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6e6659be28864e39bad7cab4409b7e16 );
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 36;
        tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY( const_list_889c56d4a7a02dec6722884fe9a4ea67_list );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_1__ediff1d_dispatcher( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__ediff1d_dispatcher, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_called_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__ediff1d_dispatcher );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ediff1d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_args_element_name_1 = tmp_mvar_value_6;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_2_ediff1d( tmp_defaults_2 );



        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_ediff1d, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_3__unpack_tuple(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__unpack_tuple, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_4__unique_dispatcher( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__unique_dispatcher, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__unique_dispatcher );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unique_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_8 );
        tmp_args_element_name_3 = tmp_mvar_value_8;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_false_false_false_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_unique( tmp_defaults_4 );



        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_false_false_false_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_6__unique1d( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__unique1d, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_7__intersect1d_dispatcher( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__intersect1d_dispatcher, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_defaults_7;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__intersect1d_dispatcher );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__intersect1d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_args_element_name_5 = tmp_mvar_value_10;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = const_tuple_false_false_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_8_intersect1d( tmp_defaults_7 );



        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_intersect1d, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_9__setxor1d_dispatcher( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__setxor1d_dispatcher, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_defaults_9;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__setxor1d_dispatcher );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__setxor1d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_args_element_name_7 = tmp_mvar_value_12;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_defaults_9 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_9 );
        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_10_setxor1d( tmp_defaults_9 );



        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_setxor1d, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_10 );
        tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_11__in1d_dispatcher( tmp_defaults_10 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__in1d_dispatcher, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_defaults_11;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 484;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__in1d_dispatcher );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__in1d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_14 );
        tmp_args_element_name_9 = tmp_mvar_value_14;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_defaults_11 = const_tuple_false_false_tuple;
        Py_INCREF( tmp_defaults_11 );
        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_12_in1d( tmp_defaults_11 );



        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_in1d, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_12;
        tmp_defaults_12 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_12 );
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_13__isin_dispatcher( tmp_defaults_12 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__isin_dispatcher, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_defaults_13;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 601;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__isin_dispatcher );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__isin_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_16 );
        tmp_args_element_name_11 = tmp_mvar_value_16;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 601;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_called_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 601;

            goto frame_exception_exit_1;
        }
        tmp_defaults_13 = const_tuple_false_false_tuple;
        Py_INCREF( tmp_defaults_13 );
        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_14_isin( tmp_defaults_13 );



        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 601;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 601;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_isin, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_15__union1d_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__union1d_dispatcher, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 704;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_17;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__union1d_dispatcher );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__union1d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_18 );
        tmp_args_element_name_13 = tmp_mvar_value_18;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 704;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 704;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_16_union1d(  );



        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 704;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 704;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_union1d, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_14;
        tmp_defaults_14 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_14 );
        tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_17__setdiff1d_dispatcher( tmp_defaults_14 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__setdiff1d_dispatcher, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_defaults_15;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 745;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_19;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain__setdiff1d_dispatcher );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__setdiff1d_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_20 );
        tmp_args_element_name_15 = tmp_mvar_value_20;
        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 745;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_called_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 745;

            goto frame_exception_exit_1;
        }
        tmp_defaults_15 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_15 );
        tmp_args_element_name_16 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_18_setdiff1d( tmp_defaults_15 );



        frame_e9e643c9836077e429944efb47722b2e->m_frame.f_lineno = 745;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 745;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_setdiff1d, tmp_assign_source_30 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9e643c9836077e429944efb47722b2e );
#endif
    popFrameStack();

    assertFrameObject( frame_e9e643c9836077e429944efb47722b2e );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9e643c9836077e429944efb47722b2e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9e643c9836077e429944efb47722b2e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9e643c9836077e429944efb47722b2e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9e643c9836077e429944efb47722b2e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$lib$arraysetops );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
