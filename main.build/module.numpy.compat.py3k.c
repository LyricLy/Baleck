/* Generated code for Python module 'numpy.compat.py3k'
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

/* The "_module_numpy$compat$py3k" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$compat$py3k;
PyDictObject *moduledict_numpy$compat$py3k;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_fo;
static PyObject *const_str_plain_fspath;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain_excinfo;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_Path;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_isfileobj;
extern PyObject *const_tuple_int_pos_3_int_pos_6_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_latin1;
static PyObject *const_str_plain_BufferedReader;
extern PyObject *const_str_plain_asunicode;
static PyObject *const_str_digest_46e6de331fc77cf6e48450d8edd12ca9;
extern PyObject *const_str_plain_bytes;
static PyObject *const_str_plain__PurePath__fspath__;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_os_fspath;
static PyObject *const_str_digest_73c0288c654f40aecee2b9be8a036ea0;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_b04805bd50cd298c3e9936d013e6ad93;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_fn;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_plain_PathLike;
extern PyObject *const_str_plain_os;
static PyObject *const_str_plain_BufferedWriter;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_plain_PurePath;
static PyObject *const_tuple_str_plain_self_str_plain_excinfo_tuple;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_digest_65bec798bc2cd8b837759d8fe641668b;
static PyObject *const_str_digest_47478256e93b6cb9f8d719275abbd0d7;
static PyObject *const_str_digest_3637c469b53fe6644e7cf4b46e8d7ab0;
extern PyObject *const_str_plain_contextlib_nullcontext;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_str_plain___subclasshook__;
static PyObject *const_str_plain_npy_load_module;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_20861594150da1e43b5ee3f86b9deef6;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_tuple_str_plain_self_str_plain_enter_result_tuple;
extern PyObject *const_str_plain_asstr;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_machinery;
static PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_enter_result;
extern PyObject *const_str_plain_str;
static PyObject *const_str_digest_8683e04af1485129f11446873d4f77ed;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_abc_ABC;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_is_pathlib_path;
static PyObject *const_str_digest_76bdd05e24942174a881f35ea63795d6;
extern PyObject *const_str_plain_importlib;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_dbafaa008d72c8b6378ef67a6375590b;
static PyObject *const_str_plain_SourceFileLoader;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_load_module;
static PyObject *const_str_digest_23e9870ca2913b6c7652d1faa1f5898e;
static PyObject *const_dict_e53423df4277a8e40eda5874ac16c1c0;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_int_pos_3_int_pos_4_tuple;
static PyObject *const_str_plain_path_type;
static PyObject *const_str_plain_asunicode_nested;
extern PyObject *const_tuple_str_plain_latin1_tuple;
static PyObject *const_str_digest_ac4af212905f64dc20c936fa25fbdc75;
static PyObject *const_str_digest_9f3d2b5ab4e4cad7444ce685cb22d525;
extern PyObject *const_tuple_str_plain_y_tuple;
static PyObject *const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_integer_types;
static PyObject *const_tuple_str_plain_cls_str_plain_subclass_tuple;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_9b8ee87f2d457a8f70397caa2e40726b;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_plain_subclass;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_f;
extern PyObject *const_int_0;
static PyObject *const_str_plain_getexception;
extern PyObject *const_str_plain_ABCMeta;
extern PyObject *const_str_plain_unicode_escape;
extern PyObject *const_str_plain___slots__;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_r_tuple;
static PyObject *const_str_plain_strchar;
static PyObject *const_str_plain_sixu;
extern PyObject *const_str_plain_os_PathLike;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_exc_info;
static PyObject *const_str_plain___fspath__;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_type_int_tuple;
extern PyObject *const_str_plain_find_module;
static PyObject *const_list_1df05fbc7ce3f23a55f9ad1c363dfeca_list;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_open_latin1;
static PyObject *const_str_digest_0f5bbe0b56f4c7daeefeba5158a6b475;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_str_plain_path_str_plain_path_type_str_plain_path_repr_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_S;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_filename;
static PyObject *const_str_digest_97663c090434492c8048789de101f5ed;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_asbytes;
extern PyObject *const_tuple_str_plain_obj_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_path_repr;
static PyObject *const_str_plain_FileIO;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_49750abf2a051d39dbeaa3249afb10db;
static PyObject *const_str_plain_pathlib;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_mod;
static PyObject *const_str_digest_5c4fa0b3ac571335fcf2d4b42d84cd4d;
extern PyObject *const_str_plain_imp;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_Path_str_plain_PurePath_tuple;
extern PyObject *const_tuple_str_plain_f_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_asbytes_nested;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_plain_ABC;
static PyObject *const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
extern PyObject *const_str_plain_file;
static PyObject *const_str_digest_7486d6558e6e3ecb09b3cef6ff0f79ea;
extern PyObject *const_str_plain_U;
static PyObject *const_tuple_str_plain_filename_str_plain_mode_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_fo = UNSTREAM_STRING_ASCII( &constant_bin[ 448 ], 2, 1 );
    const_str_plain_fspath = UNSTREAM_STRING_ASCII( &constant_bin[ 29289 ], 6, 1 );
    const_str_plain_excinfo = UNSTREAM_STRING_ASCII( &constant_bin[ 29295 ], 7, 1 );
    const_str_plain_Path = UNSTREAM_STRING_ASCII( &constant_bin[ 7825 ], 4, 1 );
    const_str_plain_BufferedReader = UNSTREAM_STRING_ASCII( &constant_bin[ 29302 ], 14, 1 );
    const_str_digest_46e6de331fc77cf6e48450d8edd12ca9 = UNSTREAM_STRING_ASCII( &constant_bin[ 29316 ], 31, 0 );
    const_str_plain__PurePath__fspath__ = UNSTREAM_STRING_ASCII( &constant_bin[ 29347 ], 19, 1 );
    const_str_digest_73c0288c654f40aecee2b9be8a036ea0 = UNSTREAM_STRING_ASCII( &constant_bin[ 29366 ], 22, 0 );
    const_str_digest_b04805bd50cd298c3e9936d013e6ad93 = UNSTREAM_STRING_ASCII( &constant_bin[ 29388 ], 381, 0 );
    const_str_plain_PathLike = UNSTREAM_STRING_ASCII( &constant_bin[ 29369 ], 8, 1 );
    const_str_plain_BufferedWriter = UNSTREAM_STRING_ASCII( &constant_bin[ 29769 ], 14, 1 );
    const_str_plain_PurePath = UNSTREAM_STRING_ASCII( &constant_bin[ 29348 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_excinfo_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_excinfo_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_excinfo_tuple, 1, const_str_plain_excinfo ); Py_INCREF( const_str_plain_excinfo );
    const_str_digest_47478256e93b6cb9f8d719275abbd0d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 29783 ], 372, 0 );
    const_str_digest_3637c469b53fe6644e7cf4b46e8d7ab0 = UNSTREAM_STRING_ASCII( &constant_bin[ 30155 ], 356, 0 );
    const_str_plain___subclasshook__ = UNSTREAM_STRING_ASCII( &constant_bin[ 30511 ], 16, 1 );
    const_str_plain_npy_load_module = UNSTREAM_STRING_ASCII( &constant_bin[ 30527 ], 15, 1 );
    const_str_digest_20861594150da1e43b5ee3f86b9deef6 = UNSTREAM_STRING_ASCII( &constant_bin[ 30542 ], 10, 0 );
    const_tuple_str_plain_self_str_plain_enter_result_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_enter_result_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_enter_result = UNSTREAM_STRING_ASCII( &constant_bin[ 30552 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_enter_result_tuple, 1, const_str_plain_enter_result ); Py_INCREF( const_str_plain_enter_result );
    const_str_plain_machinery = UNSTREAM_STRING_ASCII( &constant_bin[ 30564 ], 9, 1 );
    const_tuple_str_plain_ascii_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ascii_tuple, 0, const_str_plain_ascii ); Py_INCREF( const_str_plain_ascii );
    const_str_digest_8683e04af1485129f11446873d4f77ed = UNSTREAM_STRING_ASCII( &constant_bin[ 30573 ], 32, 0 );
    const_str_plain_abc_ABC = UNSTREAM_STRING_ASCII( &constant_bin[ 30605 ], 7, 1 );
    const_str_digest_76bdd05e24942174a881f35ea63795d6 = UNSTREAM_STRING_ASCII( &constant_bin[ 30612 ], 31, 0 );
    const_str_digest_dbafaa008d72c8b6378ef67a6375590b = UNSTREAM_STRING_ASCII( &constant_bin[ 30643 ], 47, 0 );
    const_str_plain_SourceFileLoader = UNSTREAM_STRING_ASCII( &constant_bin[ 30690 ], 16, 1 );
    const_str_digest_23e9870ca2913b6c7652d1faa1f5898e = UNSTREAM_STRING_ASCII( &constant_bin[ 30706 ], 32, 0 );
    const_dict_e53423df4277a8e40eda5874ac16c1c0 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_e53423df4277a8e40eda5874ac16c1c0, const_str_plain___slots__, const_tuple_empty );
    assert( PyDict_Size( const_dict_e53423df4277a8e40eda5874ac16c1c0 ) == 1 );
    const_str_plain_path_type = UNSTREAM_STRING_ASCII( &constant_bin[ 30738 ], 9, 1 );
    const_str_plain_asunicode_nested = UNSTREAM_STRING_ASCII( &constant_bin[ 30747 ], 16, 1 );
    const_str_digest_ac4af212905f64dc20c936fa25fbdc75 = UNSTREAM_STRING_ASCII( &constant_bin[ 30763 ], 128, 0 );
    const_str_digest_9f3d2b5ab4e4cad7444ce685cb22d525 = UNSTREAM_STRING_ASCII( &constant_bin[ 30891 ], 335, 0 );
    const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 1, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 2, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 3, const_str_plain_imp ); Py_INCREF( const_str_plain_imp );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 4, const_str_plain_os ); Py_INCREF( const_str_plain_os );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 5, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 6, const_str_plain_fo ); Py_INCREF( const_str_plain_fo );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 7, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_tuple_str_plain_cls_str_plain_subclass_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_subclass_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    const_str_plain_subclass = UNSTREAM_STRING_ASCII( &constant_bin[ 22563 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_subclass_tuple, 1, const_str_plain_subclass ); Py_INCREF( const_str_plain_subclass );
    const_str_digest_9b8ee87f2d457a8f70397caa2e40726b = UNSTREAM_STRING_ASCII( &constant_bin[ 31226 ], 26, 0 );
    const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 1, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    PyTuple_SET_ITEM( const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 2, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 3, const_str_plain_importlib ); Py_INCREF( const_str_plain_importlib );
    const_str_plain_getexception = UNSTREAM_STRING_ASCII( &constant_bin[ 31252 ], 12, 1 );
    const_str_plain_strchar = UNSTREAM_STRING_ASCII( &constant_bin[ 31264 ], 7, 1 );
    const_str_plain_sixu = UNSTREAM_STRING_ASCII( &constant_bin[ 31271 ], 4, 1 );
    const_str_plain___fspath__ = UNSTREAM_STRING_ASCII( &constant_bin[ 29356 ], 10, 1 );
    const_list_1df05fbc7ce3f23a55f9ad1c363dfeca_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 31275 ], 256 );
    const_str_plain_open_latin1 = UNSTREAM_STRING_ASCII( &constant_bin[ 31393 ], 11, 1 );
    const_str_digest_0f5bbe0b56f4c7daeefeba5158a6b475 = UNSTREAM_STRING_ASCII( &constant_bin[ 31531 ], 69, 0 );
    const_tuple_str_plain_path_str_plain_path_type_str_plain_path_repr_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_path_type_str_plain_path_repr_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_path_type_str_plain_path_repr_tuple, 1, const_str_plain_path_type ); Py_INCREF( const_str_plain_path_type );
    const_str_plain_path_repr = UNSTREAM_STRING_ASCII( &constant_bin[ 31600 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_path_type_str_plain_path_repr_tuple, 2, const_str_plain_path_repr ); Py_INCREF( const_str_plain_path_repr );
    const_str_digest_97663c090434492c8048789de101f5ed = UNSTREAM_STRING_ASCII( &constant_bin[ 31609 ], 28, 0 );
    const_str_plain_FileIO = UNSTREAM_STRING_ASCII( &constant_bin[ 31637 ], 6, 1 );
    const_str_digest_49750abf2a051d39dbeaa3249afb10db = UNSTREAM_STRING_ASCII( &constant_bin[ 31643 ], 55, 0 );
    const_str_plain_pathlib = UNSTREAM_STRING_ASCII( &constant_bin[ 30791 ], 7, 1 );
    const_str_digest_5c4fa0b3ac571335fcf2d4b42d84cd4d = UNSTREAM_STRING_ASCII( &constant_bin[ 31698 ], 57, 0 );
    const_tuple_str_plain_Path_str_plain_PurePath_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Path_str_plain_PurePath_tuple, 0, const_str_plain_Path ); Py_INCREF( const_str_plain_Path );
    PyTuple_SET_ITEM( const_tuple_str_plain_Path_str_plain_PurePath_tuple, 1, const_str_plain_PurePath ); Py_INCREF( const_str_plain_PurePath );
    const_str_plain_ABC = UNSTREAM_STRING_ASCII( &constant_bin[ 30609 ], 3, 1 );
    const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d = UNSTREAM_STRING_ASCII( &constant_bin[ 31755 ], 19, 0 );
    const_str_digest_7486d6558e6e3ecb09b3cef6ff0f79ea = UNSTREAM_STRING_ASCII( &constant_bin[ 31774 ], 67, 0 );
    const_tuple_str_plain_filename_str_plain_mode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_mode_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_mode_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$compat$py3k( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_55e0fa4aaa9e5ebc914a3c1c0fe25f31;
static PyCodeObject *codeobj_55556f5e8f81ee088ef679b07a615334;
static PyCodeObject *codeobj_c8955fa338c34bededf312cace13b7ac;
static PyCodeObject *codeobj_63c7c988b66bcc2058e7d4344aa65896;
static PyCodeObject *codeobj_708b41ce33a23978ff28594ee42947d3;
static PyCodeObject *codeobj_227674cf424ee0b0012020206dd28e77;
static PyCodeObject *codeobj_fec26b2061ad8b3eaffd36e5a276a111;
static PyCodeObject *codeobj_2bb11f20196b6492587a0e71d46a6de0;
static PyCodeObject *codeobj_7177ba94ad0e7f37c5ffe8cb7164fffd;
static PyCodeObject *codeobj_54f0773914b3f05d84cad3134b93991a;
static PyCodeObject *codeobj_b6facb03cb0fdcb9e73c0d827232e434;
static PyCodeObject *codeobj_940c36bdd4277d791ad4da98523bec71;
static PyCodeObject *codeobj_371a66391c833dbea96a3078f25541b2;
static PyCodeObject *codeobj_f1e3f7043b65702781bdb1c48e812afc;
static PyCodeObject *codeobj_67b0a6ef7559e0f0f4dfc53c438c95ad;
static PyCodeObject *codeobj_afa0c682d9fd160fb9d266492437f454;
static PyCodeObject *codeobj_770901a394e29438c4fc235595781464;
static PyCodeObject *codeobj_3060fe744a9692b4f9fb5d02e05801bd;
static PyCodeObject *codeobj_11a57d19e5c8be9f0e17b47b7ea47fa3;
static PyCodeObject *codeobj_755c65d3294fac7eca50be604ee4c9f6;
static PyCodeObject *codeobj_753a4dccdd1af483760fc1b434abfeee;
static PyCodeObject *codeobj_31902481b44a1b9ad5194f3b9b7b779e;
static PyCodeObject *codeobj_de911c2b69bb5e5a28d8720c98330af4;
static PyCodeObject *codeobj_52fb6b6ca8c7fa4065cd9796e22bce23;
static PyCodeObject *codeobj_12a02a2dc933cb171017c30d60875cc6;
static PyCodeObject *codeobj_cc82c273181242a06a213dfc56e785bf;
static PyCodeObject *codeobj_d272e9f825f8277ab8e31d1fe40fee15;
static PyCodeObject *codeobj_39a40a8688d90a611410bf0a672ef84d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_0f5bbe0b56f4c7daeefeba5158a6b475;
    codeobj_55e0fa4aaa9e5ebc914a3c1c0fe25f31 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 85, const_tuple_str_plain_y_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_55556f5e8f81ee088ef679b07a615334 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 91, const_tuple_str_plain_y_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c8955fa338c34bededf312cace13b7ac = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9b8ee87f2d457a8f70397caa2e40726b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_63c7c988b66bcc2058e7d4344aa65896 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__PurePath__fspath__, 197, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_708b41ce33a23978ff28594ee42947d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 118, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_227674cf424ee0b0012020206dd28e77 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 121, const_tuple_str_plain_self_str_plain_excinfo_tuple, 1, 0, CO_VARARGS | CO_NOFREE );
    codeobj_fec26b2061ad8b3eaffd36e5a276a111 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___fspath__, 203, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2bb11f20196b6492587a0e71d46a6de0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 115, const_tuple_str_plain_self_str_plain_enter_result_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7177ba94ad0e7f37c5ffe8cb7164fffd = MAKE_CODEOBJ( module_filename_obj, const_str_plain___subclasshook__, 208, const_tuple_str_plain_cls_str_plain_subclass_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_54f0773914b3f05d84cad3134b93991a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asbytes, 33, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b6facb03cb0fdcb9e73c0d827232e434 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asbytes_nested, 83, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_940c36bdd4277d791ad4da98523bec71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asstr, 38, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_371a66391c833dbea96a3078f25541b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asunicode, 28, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f1e3f7043b65702781bdb1c48e812afc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asunicode, 68, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67b0a6ef7559e0f0f4dfc53c438c95ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asunicode_nested, 89, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_afa0c682d9fd160fb9d266492437f454 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_contextlib_nullcontext, 104, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_770901a394e29438c4fc235595781464 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getexception, 80, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3060fe744a9692b4f9fb5d02e05801bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_pathlib_path, 95, const_tuple_str_plain_obj_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_11a57d19e5c8be9f0e17b47b7ea47fa3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isfileobj, 43, const_tuple_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_755c65d3294fac7eca50be604ee4c9f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isfileobj, 65, const_tuple_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_753a4dccdd1af483760fc1b434abfeee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_npy_load_module, 126, const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_31902481b44a1b9ad5194f3b9b7b779e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_npy_load_module, 149, const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de911c2b69bb5e5a28d8720c98330af4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_latin1, 46, const_tuple_str_plain_filename_str_plain_mode_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_52fb6b6ca8c7fa4065cd9796e22bce23 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_latin1, 73, const_tuple_str_plain_filename_str_plain_mode_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_12a02a2dc933cb171017c30d60875cc6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_os_PathLike, 200, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_cc82c273181242a06a213dfc56e785bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_os_fspath, 215, const_tuple_str_plain_path_str_plain_path_type_str_plain_path_repr_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d272e9f825f8277ab8e31d1fe40fee15 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sixu, 49, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_39a40a8688d90a611410bf0a672ef84d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sixu, 76, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_10_sixu(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_11_getexception(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_12_asbytes_nested(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_13_asunicode_nested(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_14_is_pathlib_path(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_15___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_16___enter__(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_17___exit__(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_18_npy_load_module( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_19_npy_load_module( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_1_asunicode(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_20__PurePath__fspath__(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_21___fspath__(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_22___subclasshook__(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_23_os_fspath(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_2_asbytes(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_3_asstr(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_4_isfileobj(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_5_open_latin1( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_6_sixu(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_7_isfileobj(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_8_asunicode(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_9_open_latin1( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$compat$py3k$$$function_1_asunicode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_371a66391c833dbea96a3078f25541b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_371a66391c833dbea96a3078f25541b2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_371a66391c833dbea96a3078f25541b2, codeobj_371a66391c833dbea96a3078f25541b2, module_numpy$compat$py3k, sizeof(void *) );
    frame_371a66391c833dbea96a3078f25541b2 = cache_frame_371a66391c833dbea96a3078f25541b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_371a66391c833dbea96a3078f25541b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_371a66391c833dbea96a3078f25541b2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_s );
            tmp_called_instance_1 = par_s;
            frame_371a66391c833dbea96a3078f25541b2->m_frame.f_lineno = 30;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT( par_s );
        tmp_unicode_arg_1 = par_s;
        tmp_return_value = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_371a66391c833dbea96a3078f25541b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_371a66391c833dbea96a3078f25541b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_371a66391c833dbea96a3078f25541b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_371a66391c833dbea96a3078f25541b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_371a66391c833dbea96a3078f25541b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_371a66391c833dbea96a3078f25541b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_371a66391c833dbea96a3078f25541b2,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_371a66391c833dbea96a3078f25541b2 == cache_frame_371a66391c833dbea96a3078f25541b2 )
    {
        Py_DECREF( frame_371a66391c833dbea96a3078f25541b2 );
    }
    cache_frame_371a66391c833dbea96a3078f25541b2 = NULL;

    assertFrameObject( frame_371a66391c833dbea96a3078f25541b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_1_asunicode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_1_asunicode );
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


static PyObject *impl_numpy$compat$py3k$$$function_2_asbytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_54f0773914b3f05d84cad3134b93991a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_54f0773914b3f05d84cad3134b93991a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_54f0773914b3f05d84cad3134b93991a, codeobj_54f0773914b3f05d84cad3134b93991a, module_numpy$compat$py3k, sizeof(void *) );
    frame_54f0773914b3f05d84cad3134b93991a = cache_frame_54f0773914b3f05d84cad3134b93991a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54f0773914b3f05d84cad3134b93991a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54f0773914b3f05d84cad3134b93991a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_s );
        tmp_return_value = par_s;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT( par_s );
        tmp_unicode_arg_1 = par_s;
        tmp_called_instance_1 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_54f0773914b3f05d84cad3134b93991a->m_frame.f_lineno = 36;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54f0773914b3f05d84cad3134b93991a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54f0773914b3f05d84cad3134b93991a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54f0773914b3f05d84cad3134b93991a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54f0773914b3f05d84cad3134b93991a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54f0773914b3f05d84cad3134b93991a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54f0773914b3f05d84cad3134b93991a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54f0773914b3f05d84cad3134b93991a,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_54f0773914b3f05d84cad3134b93991a == cache_frame_54f0773914b3f05d84cad3134b93991a )
    {
        Py_DECREF( frame_54f0773914b3f05d84cad3134b93991a );
    }
    cache_frame_54f0773914b3f05d84cad3134b93991a = NULL;

    assertFrameObject( frame_54f0773914b3f05d84cad3134b93991a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_2_asbytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_2_asbytes );
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


static PyObject *impl_numpy$compat$py3k$$$function_3_asstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_940c36bdd4277d791ad4da98523bec71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_940c36bdd4277d791ad4da98523bec71 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_940c36bdd4277d791ad4da98523bec71, codeobj_940c36bdd4277d791ad4da98523bec71, module_numpy$compat$py3k, sizeof(void *) );
    frame_940c36bdd4277d791ad4da98523bec71 = cache_frame_940c36bdd4277d791ad4da98523bec71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_940c36bdd4277d791ad4da98523bec71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_940c36bdd4277d791ad4da98523bec71 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_s );
            tmp_called_instance_1 = par_s;
            frame_940c36bdd4277d791ad4da98523bec71->m_frame.f_lineno = 40;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT( par_s );
        tmp_unicode_arg_1 = par_s;
        tmp_return_value = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_940c36bdd4277d791ad4da98523bec71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_940c36bdd4277d791ad4da98523bec71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_940c36bdd4277d791ad4da98523bec71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_940c36bdd4277d791ad4da98523bec71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_940c36bdd4277d791ad4da98523bec71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_940c36bdd4277d791ad4da98523bec71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_940c36bdd4277d791ad4da98523bec71,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_940c36bdd4277d791ad4da98523bec71 == cache_frame_940c36bdd4277d791ad4da98523bec71 )
    {
        Py_DECREF( frame_940c36bdd4277d791ad4da98523bec71 );
    }
    cache_frame_940c36bdd4277d791ad4da98523bec71 = NULL;

    assertFrameObject( frame_940c36bdd4277d791ad4da98523bec71 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_3_asstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_3_asstr );
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


static PyObject *impl_numpy$compat$py3k$$$function_4_isfileobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_11a57d19e5c8be9f0e17b47b7ea47fa3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_11a57d19e5c8be9f0e17b47b7ea47fa3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11a57d19e5c8be9f0e17b47b7ea47fa3, codeobj_11a57d19e5c8be9f0e17b47b7ea47fa3, module_numpy$compat$py3k, sizeof(void *) );
    frame_11a57d19e5c8be9f0e17b47b7ea47fa3 = cache_frame_11a57d19e5c8be9f0e17b47b7ea47fa3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11a57d19e5c8be9f0e17b47b7ea47fa3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11a57d19e5c8be9f0e17b47b7ea47fa3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_f );
        tmp_isinstance_inst_1 = par_f;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_io );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_FileIO );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_io );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BufferedReader );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_isinstance_cls_1 );

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_io );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BufferedWriter );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_isinstance_cls_1 );

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 2, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11a57d19e5c8be9f0e17b47b7ea47fa3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_11a57d19e5c8be9f0e17b47b7ea47fa3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11a57d19e5c8be9f0e17b47b7ea47fa3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11a57d19e5c8be9f0e17b47b7ea47fa3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11a57d19e5c8be9f0e17b47b7ea47fa3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11a57d19e5c8be9f0e17b47b7ea47fa3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11a57d19e5c8be9f0e17b47b7ea47fa3,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_11a57d19e5c8be9f0e17b47b7ea47fa3 == cache_frame_11a57d19e5c8be9f0e17b47b7ea47fa3 )
    {
        Py_DECREF( frame_11a57d19e5c8be9f0e17b47b7ea47fa3 );
    }
    cache_frame_11a57d19e5c8be9f0e17b47b7ea47fa3 = NULL;

    assertFrameObject( frame_11a57d19e5c8be9f0e17b47b7ea47fa3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_4_isfileobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_4_isfileobj );
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


static PyObject *impl_numpy$compat$py3k$$$function_5_open_latin1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_de911c2b69bb5e5a28d8720c98330af4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_de911c2b69bb5e5a28d8720c98330af4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de911c2b69bb5e5a28d8720c98330af4, codeobj_de911c2b69bb5e5a28d8720c98330af4, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *) );
    frame_de911c2b69bb5e5a28d8720c98330af4 = cache_frame_de911c2b69bb5e5a28d8720c98330af4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de911c2b69bb5e5a28d8720c98330af4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de911c2b69bb5e5a28d8720c98330af4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        PyObject *tmp_open_encoding_1;
        CHECK_OBJECT( par_filename );
        tmp_open_filename_1 = par_filename;
        CHECK_OBJECT( par_mode );
        tmp_open_mode_1 = par_mode;
        tmp_open_encoding_1 = const_str_digest_20861594150da1e43b5ee3f86b9deef6;
        tmp_return_value = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de911c2b69bb5e5a28d8720c98330af4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_de911c2b69bb5e5a28d8720c98330af4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de911c2b69bb5e5a28d8720c98330af4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de911c2b69bb5e5a28d8720c98330af4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de911c2b69bb5e5a28d8720c98330af4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de911c2b69bb5e5a28d8720c98330af4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de911c2b69bb5e5a28d8720c98330af4,
        type_description_1,
        par_filename,
        par_mode
    );


    // Release cached frame.
    if ( frame_de911c2b69bb5e5a28d8720c98330af4 == cache_frame_de911c2b69bb5e5a28d8720c98330af4 )
    {
        Py_DECREF( frame_de911c2b69bb5e5a28d8720c98330af4 );
    }
    cache_frame_de911c2b69bb5e5a28d8720c98330af4 = NULL;

    assertFrameObject( frame_de911c2b69bb5e5a28d8720c98330af4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_5_open_latin1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_5_open_latin1 );
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


static PyObject *impl_numpy$compat$py3k$$$function_6_sixu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_s );
    tmp_return_value = par_s;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_6_sixu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_6_sixu );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function_7_isfileobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_755c65d3294fac7eca50be604ee4c9f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_755c65d3294fac7eca50be604ee4c9f6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_755c65d3294fac7eca50be604ee4c9f6, codeobj_755c65d3294fac7eca50be604ee4c9f6, module_numpy$compat$py3k, sizeof(void *) );
    frame_755c65d3294fac7eca50be604ee4c9f6 = cache_frame_755c65d3294fac7eca50be604ee4c9f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_755c65d3294fac7eca50be604ee4c9f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_755c65d3294fac7eca50be604ee4c9f6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_f );
        tmp_isinstance_inst_1 = par_f;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_file );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_file );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "file" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_755c65d3294fac7eca50be604ee4c9f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_755c65d3294fac7eca50be604ee4c9f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_755c65d3294fac7eca50be604ee4c9f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_755c65d3294fac7eca50be604ee4c9f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_755c65d3294fac7eca50be604ee4c9f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_755c65d3294fac7eca50be604ee4c9f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_755c65d3294fac7eca50be604ee4c9f6,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_755c65d3294fac7eca50be604ee4c9f6 == cache_frame_755c65d3294fac7eca50be604ee4c9f6 )
    {
        Py_DECREF( frame_755c65d3294fac7eca50be604ee4c9f6 );
    }
    cache_frame_755c65d3294fac7eca50be604ee4c9f6 = NULL;

    assertFrameObject( frame_755c65d3294fac7eca50be604ee4c9f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_7_isfileobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_7_isfileobj );
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


static PyObject *impl_numpy$compat$py3k$$$function_8_asunicode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f1e3f7043b65702781bdb1c48e812afc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f1e3f7043b65702781bdb1c48e812afc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1e3f7043b65702781bdb1c48e812afc, codeobj_f1e3f7043b65702781bdb1c48e812afc, module_numpy$compat$py3k, sizeof(void *) );
    frame_f1e3f7043b65702781bdb1c48e812afc = cache_frame_f1e3f7043b65702781bdb1c48e812afc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1e3f7043b65702781bdb1c48e812afc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1e3f7043b65702781bdb1c48e812afc ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_s );
        tmp_return_value = par_s;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT( par_s );
        tmp_unicode_arg_1 = par_s;
        tmp_called_instance_1 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f1e3f7043b65702781bdb1c48e812afc->m_frame.f_lineno = 71;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e3f7043b65702781bdb1c48e812afc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e3f7043b65702781bdb1c48e812afc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e3f7043b65702781bdb1c48e812afc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1e3f7043b65702781bdb1c48e812afc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1e3f7043b65702781bdb1c48e812afc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1e3f7043b65702781bdb1c48e812afc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1e3f7043b65702781bdb1c48e812afc,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_f1e3f7043b65702781bdb1c48e812afc == cache_frame_f1e3f7043b65702781bdb1c48e812afc )
    {
        Py_DECREF( frame_f1e3f7043b65702781bdb1c48e812afc );
    }
    cache_frame_f1e3f7043b65702781bdb1c48e812afc = NULL;

    assertFrameObject( frame_f1e3f7043b65702781bdb1c48e812afc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_8_asunicode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_8_asunicode );
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


static PyObject *impl_numpy$compat$py3k$$$function_9_open_latin1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_52fb6b6ca8c7fa4065cd9796e22bce23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_52fb6b6ca8c7fa4065cd9796e22bce23 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_52fb6b6ca8c7fa4065cd9796e22bce23, codeobj_52fb6b6ca8c7fa4065cd9796e22bce23, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *) );
    frame_52fb6b6ca8c7fa4065cd9796e22bce23 = cache_frame_52fb6b6ca8c7fa4065cd9796e22bce23;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52fb6b6ca8c7fa4065cd9796e22bce23 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52fb6b6ca8c7fa4065cd9796e22bce23 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT( par_filename );
        tmp_open_filename_1 = par_filename;
        CHECK_OBJECT( par_mode );
        tmp_open_mode_1 = par_mode;
        tmp_return_value = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52fb6b6ca8c7fa4065cd9796e22bce23 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_52fb6b6ca8c7fa4065cd9796e22bce23 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52fb6b6ca8c7fa4065cd9796e22bce23 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52fb6b6ca8c7fa4065cd9796e22bce23, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52fb6b6ca8c7fa4065cd9796e22bce23->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52fb6b6ca8c7fa4065cd9796e22bce23, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52fb6b6ca8c7fa4065cd9796e22bce23,
        type_description_1,
        par_filename,
        par_mode
    );


    // Release cached frame.
    if ( frame_52fb6b6ca8c7fa4065cd9796e22bce23 == cache_frame_52fb6b6ca8c7fa4065cd9796e22bce23 )
    {
        Py_DECREF( frame_52fb6b6ca8c7fa4065cd9796e22bce23 );
    }
    cache_frame_52fb6b6ca8c7fa4065cd9796e22bce23 = NULL;

    assertFrameObject( frame_52fb6b6ca8c7fa4065cd9796e22bce23 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_9_open_latin1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_9_open_latin1 );
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


static PyObject *impl_numpy$compat$py3k$$$function_10_sixu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_39a40a8688d90a611410bf0a672ef84d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_39a40a8688d90a611410bf0a672ef84d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_39a40a8688d90a611410bf0a672ef84d, codeobj_39a40a8688d90a611410bf0a672ef84d, module_numpy$compat$py3k, sizeof(void *) );
    frame_39a40a8688d90a611410bf0a672ef84d = cache_frame_39a40a8688d90a611410bf0a672ef84d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_39a40a8688d90a611410bf0a672ef84d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_39a40a8688d90a611410bf0a672ef84d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        tmp_args_element_name_2 = const_str_plain_unicode_escape;
        frame_39a40a8688d90a611410bf0a672ef84d->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39a40a8688d90a611410bf0a672ef84d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_39a40a8688d90a611410bf0a672ef84d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39a40a8688d90a611410bf0a672ef84d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_39a40a8688d90a611410bf0a672ef84d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_39a40a8688d90a611410bf0a672ef84d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_39a40a8688d90a611410bf0a672ef84d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_39a40a8688d90a611410bf0a672ef84d,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_39a40a8688d90a611410bf0a672ef84d == cache_frame_39a40a8688d90a611410bf0a672ef84d )
    {
        Py_DECREF( frame_39a40a8688d90a611410bf0a672ef84d );
    }
    cache_frame_39a40a8688d90a611410bf0a672ef84d = NULL;

    assertFrameObject( frame_39a40a8688d90a611410bf0a672ef84d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_10_sixu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_10_sixu );
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


static PyObject *impl_numpy$compat$py3k$$$function_11_getexception( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_770901a394e29438c4fc235595781464;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_770901a394e29438c4fc235595781464 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_770901a394e29438c4fc235595781464, codeobj_770901a394e29438c4fc235595781464, module_numpy$compat$py3k, 0 );
    frame_770901a394e29438c4fc235595781464 = cache_frame_770901a394e29438c4fc235595781464;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_770901a394e29438c4fc235595781464 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_770901a394e29438c4fc235595781464 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_770901a394e29438c4fc235595781464->m_frame.f_lineno = 81;
        tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_exc_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_770901a394e29438c4fc235595781464 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_770901a394e29438c4fc235595781464 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_770901a394e29438c4fc235595781464 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_770901a394e29438c4fc235595781464, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_770901a394e29438c4fc235595781464->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_770901a394e29438c4fc235595781464, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_770901a394e29438c4fc235595781464,
        type_description_1
    );


    // Release cached frame.
    if ( frame_770901a394e29438c4fc235595781464 == cache_frame_770901a394e29438c4fc235595781464 )
    {
        Py_DECREF( frame_770901a394e29438c4fc235595781464 );
    }
    cache_frame_770901a394e29438c4fc235595781464 = NULL;

    assertFrameObject( frame_770901a394e29438c4fc235595781464 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_11_getexception );
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


static PyObject *impl_numpy$compat$py3k$$$function_12_asbytes_nested( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *outline_0_var_y = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_b6facb03cb0fdcb9e73c0d827232e434;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_b6facb03cb0fdcb9e73c0d827232e434 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b6facb03cb0fdcb9e73c0d827232e434, codeobj_b6facb03cb0fdcb9e73c0d827232e434, module_numpy$compat$py3k, sizeof(void *) );
    frame_b6facb03cb0fdcb9e73c0d827232e434 = cache_frame_b6facb03cb0fdcb9e73c0d827232e434;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b6facb03cb0fdcb9e73c0d827232e434 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b6facb03cb0fdcb9e73c0d827232e434 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_attribute_name_1 = const_str_plain___iter__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
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
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_x );
            tmp_iter_arg_1 = par_x;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2, codeobj_55e0fa4aaa9e5ebc914a3c1c0fe25f31, module_numpy$compat$py3k, sizeof(void *) );
        frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 = cache_frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 85;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_y;
                outline_0_var_y = tmp_assign_source_4;
                Py_INCREF( outline_0_var_y );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes_nested );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes_nested );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asbytes_nested" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 85;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( outline_0_var_y );
            tmp_args_element_name_1 = outline_0_var_y;
            frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2->m_frame.f_lineno = 85;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_return_value = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
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
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2,
            type_description_2,
            outline_0_var_y
        );


        // Release cached frame.
        if ( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 == cache_frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 )
        {
            Py_DECREF( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 );
        }
        cache_frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 = NULL;

        assertFrameObject( frame_55e0fa4aaa9e5ebc914a3c1c0fe25f31_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_y );
        outline_0_var_y = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_y );
        outline_0_var_y = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
        return NULL;
        outline_exception_1:;
        exception_lineno = 85;
        goto frame_exception_exit_1;
        outline_result_1:;
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asbytes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 87;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_b6facb03cb0fdcb9e73c0d827232e434->m_frame.f_lineno = 87;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6facb03cb0fdcb9e73c0d827232e434 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6facb03cb0fdcb9e73c0d827232e434 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6facb03cb0fdcb9e73c0d827232e434 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b6facb03cb0fdcb9e73c0d827232e434, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b6facb03cb0fdcb9e73c0d827232e434->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b6facb03cb0fdcb9e73c0d827232e434, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b6facb03cb0fdcb9e73c0d827232e434,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_b6facb03cb0fdcb9e73c0d827232e434 == cache_frame_b6facb03cb0fdcb9e73c0d827232e434 )
    {
        Py_DECREF( frame_b6facb03cb0fdcb9e73c0d827232e434 );
    }
    cache_frame_b6facb03cb0fdcb9e73c0d827232e434 = NULL;

    assertFrameObject( frame_b6facb03cb0fdcb9e73c0d827232e434 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
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


static PyObject *impl_numpy$compat$py3k$$$function_13_asunicode_nested( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *outline_0_var_y = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_67b0a6ef7559e0f0f4dfc53c438c95ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_55556f5e8f81ee088ef679b07a615334_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_55556f5e8f81ee088ef679b07a615334_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_67b0a6ef7559e0f0f4dfc53c438c95ad = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67b0a6ef7559e0f0f4dfc53c438c95ad, codeobj_67b0a6ef7559e0f0f4dfc53c438c95ad, module_numpy$compat$py3k, sizeof(void *) );
    frame_67b0a6ef7559e0f0f4dfc53c438c95ad = cache_frame_67b0a6ef7559e0f0f4dfc53c438c95ad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67b0a6ef7559e0f0f4dfc53c438c95ad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67b0a6ef7559e0f0f4dfc53c438c95ad ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_attribute_name_1 = const_str_plain___iter__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
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
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_x );
            tmp_iter_arg_1 = par_x;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_55556f5e8f81ee088ef679b07a615334_2, codeobj_55556f5e8f81ee088ef679b07a615334, module_numpy$compat$py3k, sizeof(void *) );
        frame_55556f5e8f81ee088ef679b07a615334_2 = cache_frame_55556f5e8f81ee088ef679b07a615334_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_55556f5e8f81ee088ef679b07a615334_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_55556f5e8f81ee088ef679b07a615334_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 91;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_y;
                outline_0_var_y = tmp_assign_source_4;
                Py_INCREF( outline_0_var_y );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode_nested );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asunicode_nested );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asunicode_nested" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 91;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( outline_0_var_y );
            tmp_args_element_name_1 = outline_0_var_y;
            frame_55556f5e8f81ee088ef679b07a615334_2->m_frame.f_lineno = 91;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_return_value = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
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
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_55556f5e8f81ee088ef679b07a615334_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_55556f5e8f81ee088ef679b07a615334_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_55556f5e8f81ee088ef679b07a615334_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_55556f5e8f81ee088ef679b07a615334_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_55556f5e8f81ee088ef679b07a615334_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_55556f5e8f81ee088ef679b07a615334_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_55556f5e8f81ee088ef679b07a615334_2,
            type_description_2,
            outline_0_var_y
        );


        // Release cached frame.
        if ( frame_55556f5e8f81ee088ef679b07a615334_2 == cache_frame_55556f5e8f81ee088ef679b07a615334_2 )
        {
            Py_DECREF( frame_55556f5e8f81ee088ef679b07a615334_2 );
        }
        cache_frame_55556f5e8f81ee088ef679b07a615334_2 = NULL;

        assertFrameObject( frame_55556f5e8f81ee088ef679b07a615334_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_y );
        outline_0_var_y = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_y );
        outline_0_var_y = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
        return NULL;
        outline_exception_1:;
        exception_lineno = 91;
        goto frame_exception_exit_1;
        outline_result_1:;
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asunicode );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asunicode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 93;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_67b0a6ef7559e0f0f4dfc53c438c95ad->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67b0a6ef7559e0f0f4dfc53c438c95ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67b0a6ef7559e0f0f4dfc53c438c95ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67b0a6ef7559e0f0f4dfc53c438c95ad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67b0a6ef7559e0f0f4dfc53c438c95ad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67b0a6ef7559e0f0f4dfc53c438c95ad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67b0a6ef7559e0f0f4dfc53c438c95ad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67b0a6ef7559e0f0f4dfc53c438c95ad,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_67b0a6ef7559e0f0f4dfc53c438c95ad == cache_frame_67b0a6ef7559e0f0f4dfc53c438c95ad )
    {
        Py_DECREF( frame_67b0a6ef7559e0f0f4dfc53c438c95ad );
    }
    cache_frame_67b0a6ef7559e0f0f4dfc53c438c95ad = NULL;

    assertFrameObject( frame_67b0a6ef7559e0f0f4dfc53c438c95ad );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
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


static PyObject *impl_numpy$compat$py3k$$$function_14_is_pathlib_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3060fe744a9692b4f9fb5d02e05801bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3060fe744a9692b4f9fb5d02e05801bd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3060fe744a9692b4f9fb5d02e05801bd, codeobj_3060fe744a9692b4f9fb5d02e05801bd, module_numpy$compat$py3k, sizeof(void *) );
    frame_3060fe744a9692b4f9fb5d02e05801bd = cache_frame_3060fe744a9692b4f9fb5d02e05801bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3060fe744a9692b4f9fb5d02e05801bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3060fe744a9692b4f9fb5d02e05801bd ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_Path );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Path );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Path" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_obj );
        tmp_isinstance_inst_1 = par_obj;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_Path );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Path );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Path" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3060fe744a9692b4f9fb5d02e05801bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3060fe744a9692b4f9fb5d02e05801bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3060fe744a9692b4f9fb5d02e05801bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3060fe744a9692b4f9fb5d02e05801bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3060fe744a9692b4f9fb5d02e05801bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3060fe744a9692b4f9fb5d02e05801bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3060fe744a9692b4f9fb5d02e05801bd,
        type_description_1,
        par_obj
    );


    // Release cached frame.
    if ( frame_3060fe744a9692b4f9fb5d02e05801bd == cache_frame_3060fe744a9692b4f9fb5d02e05801bd )
    {
        Py_DECREF( frame_3060fe744a9692b4f9fb5d02e05801bd );
    }
    cache_frame_3060fe744a9692b4f9fb5d02e05801bd = NULL;

    assertFrameObject( frame_3060fe744a9692b4f9fb5d02e05801bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_14_is_pathlib_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_14_is_pathlib_path );
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


static PyObject *impl_numpy$compat$py3k$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_enter_result = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2bb11f20196b6492587a0e71d46a6de0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2bb11f20196b6492587a0e71d46a6de0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2bb11f20196b6492587a0e71d46a6de0, codeobj_2bb11f20196b6492587a0e71d46a6de0, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *) );
    frame_2bb11f20196b6492587a0e71d46a6de0 = cache_frame_2bb11f20196b6492587a0e71d46a6de0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2bb11f20196b6492587a0e71d46a6de0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2bb11f20196b6492587a0e71d46a6de0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_enter_result );
        tmp_assattr_name_1 = par_enter_result;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_enter_result, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bb11f20196b6492587a0e71d46a6de0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bb11f20196b6492587a0e71d46a6de0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2bb11f20196b6492587a0e71d46a6de0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2bb11f20196b6492587a0e71d46a6de0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2bb11f20196b6492587a0e71d46a6de0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2bb11f20196b6492587a0e71d46a6de0,
        type_description_1,
        par_self,
        par_enter_result
    );


    // Release cached frame.
    if ( frame_2bb11f20196b6492587a0e71d46a6de0 == cache_frame_2bb11f20196b6492587a0e71d46a6de0 )
    {
        Py_DECREF( frame_2bb11f20196b6492587a0e71d46a6de0 );
    }
    cache_frame_2bb11f20196b6492587a0e71d46a6de0 = NULL;

    assertFrameObject( frame_2bb11f20196b6492587a0e71d46a6de0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_enter_result );
    Py_DECREF( par_enter_result );
    par_enter_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_enter_result );
    Py_DECREF( par_enter_result );
    par_enter_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_15___init__ );
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


static PyObject *impl_numpy$compat$py3k$$$function_16___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_708b41ce33a23978ff28594ee42947d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_708b41ce33a23978ff28594ee42947d3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_708b41ce33a23978ff28594ee42947d3, codeobj_708b41ce33a23978ff28594ee42947d3, module_numpy$compat$py3k, sizeof(void *) );
    frame_708b41ce33a23978ff28594ee42947d3 = cache_frame_708b41ce33a23978ff28594ee42947d3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_708b41ce33a23978ff28594ee42947d3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_708b41ce33a23978ff28594ee42947d3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_enter_result );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_708b41ce33a23978ff28594ee42947d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_708b41ce33a23978ff28594ee42947d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_708b41ce33a23978ff28594ee42947d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_708b41ce33a23978ff28594ee42947d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_708b41ce33a23978ff28594ee42947d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_708b41ce33a23978ff28594ee42947d3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_708b41ce33a23978ff28594ee42947d3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_708b41ce33a23978ff28594ee42947d3 == cache_frame_708b41ce33a23978ff28594ee42947d3 )
    {
        Py_DECREF( frame_708b41ce33a23978ff28594ee42947d3 );
    }
    cache_frame_708b41ce33a23978ff28594ee42947d3 = NULL;

    assertFrameObject( frame_708b41ce33a23978ff28594ee42947d3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_16___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_16___enter__ );
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


static PyObject *impl_numpy$compat$py3k$$$function_17___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_excinfo = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_17___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_excinfo );
    Py_DECREF( par_excinfo );
    par_excinfo = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_excinfo );
    Py_DECREF( par_excinfo );
    par_excinfo = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_17___exit__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function_18_npy_load_module( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_fn = python_pars[ 1 ];
    PyObject *par_info = python_pars[ 2 ];
    PyObject *var_importlib = NULL;
    struct Nuitka_FrameObject *frame_753a4dccdd1af483760fc1b434abfeee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_753a4dccdd1af483760fc1b434abfeee = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_753a4dccdd1af483760fc1b434abfeee, codeobj_753a4dccdd1af483760fc1b434abfeee, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_753a4dccdd1af483760fc1b434abfeee = cache_frame_753a4dccdd1af483760fc1b434abfeee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_753a4dccdd1af483760fc1b434abfeee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_753a4dccdd1af483760fc1b434abfeee ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_753a4dccdd1af483760fc1b434abfeee->m_frame.f_lineno = 146;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_importlib == NULL );
        var_importlib = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_importlib );
        tmp_source_name_1 = var_importlib;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_machinery );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT( par_fn );
        tmp_args_element_name_2 = par_fn;
        frame_753a4dccdd1af483760fc1b434abfeee->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_SourceFileLoader, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_753a4dccdd1af483760fc1b434abfeee->m_frame.f_lineno = 147;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load_module );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_753a4dccdd1af483760fc1b434abfeee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_753a4dccdd1af483760fc1b434abfeee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_753a4dccdd1af483760fc1b434abfeee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_753a4dccdd1af483760fc1b434abfeee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_753a4dccdd1af483760fc1b434abfeee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_753a4dccdd1af483760fc1b434abfeee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_753a4dccdd1af483760fc1b434abfeee,
        type_description_1,
        par_name,
        par_fn,
        par_info,
        var_importlib
    );


    // Release cached frame.
    if ( frame_753a4dccdd1af483760fc1b434abfeee == cache_frame_753a4dccdd1af483760fc1b434abfeee )
    {
        Py_DECREF( frame_753a4dccdd1af483760fc1b434abfeee );
    }
    cache_frame_753a4dccdd1af483760fc1b434abfeee = NULL;

    assertFrameObject( frame_753a4dccdd1af483760fc1b434abfeee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_18_npy_load_module );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    CHECK_OBJECT( (PyObject *)par_info );
    Py_DECREF( par_info );
    par_info = NULL;

    CHECK_OBJECT( (PyObject *)var_importlib );
    Py_DECREF( var_importlib );
    var_importlib = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    CHECK_OBJECT( (PyObject *)par_info );
    Py_DECREF( par_info );
    par_info = NULL;

    Py_XDECREF( var_importlib );
    var_importlib = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_18_npy_load_module );
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


static PyObject *impl_numpy$compat$py3k$$$function_19_npy_load_module( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_fn = python_pars[ 1 ];
    PyObject *par_info = python_pars[ 2 ];
    PyObject *var_imp = NULL;
    PyObject *var_os = NULL;
    PyObject *var_path = NULL;
    PyObject *var_fo = NULL;
    PyObject *var_mod = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_31902481b44a1b9ad5194f3b9b7b779e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_31902481b44a1b9ad5194f3b9b7b779e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_31902481b44a1b9ad5194f3b9b7b779e, codeobj_31902481b44a1b9ad5194f3b9b7b779e, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_31902481b44a1b9ad5194f3b9b7b779e = cache_frame_31902481b44a1b9ad5194f3b9b7b779e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_31902481b44a1b9ad5194f3b9b7b779e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_31902481b44a1b9ad5194f3b9b7b779e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_imp;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame.f_lineno = 170;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_imp == NULL );
        var_imp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_os;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame.f_lineno = 171;
        tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_os == NULL );
        var_os = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_info );
        tmp_compexpr_left_1 = par_info;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_os );
            tmp_source_name_1 = var_os;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_fn );
            tmp_args_element_name_1 = par_fn;
            frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dirname, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_path == NULL );
            var_path = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( var_imp );
            tmp_called_instance_2 = var_imp;
            CHECK_OBJECT( par_name );
            tmp_args_element_name_2 = par_name;
            CHECK_OBJECT( var_path );
            tmp_list_element_1 = var_path;
            tmp_args_element_name_3 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
            frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame.f_lineno = 174;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_find_module, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
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
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


                type_description_1 = "oooooooo";
                exception_lineno = 174;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


                type_description_1 = "oooooooo";
                exception_lineno = 174;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
            if ( tmp_assign_source_7 == NULL )
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


                type_description_1 = "oooooooo";
                exception_lineno = 174;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
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

                        type_description_1 = "oooooooo";
                        exception_lineno = 174;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooo";
                exception_lineno = 174;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

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
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
            assert( var_fo == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_fo = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = par_fn;
                assert( old != NULL );
                par_fn = tmp_assign_source_9;
                Py_INCREF( par_fn );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
            {
                PyObject *old = par_info;
                assert( old != NULL );
                par_info = tmp_assign_source_10;
                Py_INCREF( par_info );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_open_filename_1;
            PyObject *tmp_open_mode_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_fn );
            tmp_open_filename_1 = par_fn;
            CHECK_OBJECT( par_info );
            tmp_subscribed_name_1 = par_info;
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_open_mode_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
            if ( tmp_open_mode_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
            Py_DECREF( tmp_open_mode_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_fo == NULL );
            var_fo = tmp_assign_source_11;
        }
        branch_end_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_imp );
        tmp_called_instance_3 = var_imp;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_4 = par_name;
        CHECK_OBJECT( var_fo );
        tmp_args_element_name_5 = var_fo;
        CHECK_OBJECT( par_fn );
        tmp_args_element_name_6 = par_fn;
        CHECK_OBJECT( par_info );
        tmp_args_element_name_7 = par_info;
        frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_3, const_str_plain_load_module, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        assert( var_mod == NULL );
        var_mod = tmp_assign_source_12;
    }
    goto try_end_3;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_31902481b44a1b9ad5194f3b9b7b779e, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_31902481b44a1b9ad5194f3b9b7b779e, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_fo );
        tmp_called_instance_4 = var_fo;
        frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame.f_lineno = 180;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 177;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame) frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_19_npy_load_module );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( var_fo );
        tmp_called_instance_5 = var_fo;
        frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame.f_lineno = 180;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_close );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_31902481b44a1b9ad5194f3b9b7b779e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_31902481b44a1b9ad5194f3b9b7b779e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_31902481b44a1b9ad5194f3b9b7b779e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_31902481b44a1b9ad5194f3b9b7b779e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_31902481b44a1b9ad5194f3b9b7b779e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_31902481b44a1b9ad5194f3b9b7b779e,
        type_description_1,
        par_name,
        par_fn,
        par_info,
        var_imp,
        var_os,
        var_path,
        var_fo,
        var_mod
    );


    // Release cached frame.
    if ( frame_31902481b44a1b9ad5194f3b9b7b779e == cache_frame_31902481b44a1b9ad5194f3b9b7b779e )
    {
        Py_DECREF( frame_31902481b44a1b9ad5194f3b9b7b779e );
    }
    cache_frame_31902481b44a1b9ad5194f3b9b7b779e = NULL;

    assertFrameObject( frame_31902481b44a1b9ad5194f3b9b7b779e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_mod );
    tmp_return_value = var_mod;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_19_npy_load_module );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    CHECK_OBJECT( (PyObject *)par_info );
    Py_DECREF( par_info );
    par_info = NULL;

    CHECK_OBJECT( (PyObject *)var_imp );
    Py_DECREF( var_imp );
    var_imp = NULL;

    CHECK_OBJECT( (PyObject *)var_os );
    Py_DECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    CHECK_OBJECT( (PyObject *)var_fo );
    Py_DECREF( var_fo );
    var_fo = NULL;

    CHECK_OBJECT( (PyObject *)var_mod );
    Py_DECREF( var_mod );
    var_mod = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_fn );
    par_fn = NULL;

    Py_XDECREF( par_info );
    par_info = NULL;

    Py_XDECREF( var_imp );
    var_imp = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_fo );
    var_fo = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_19_npy_load_module );
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


static PyObject *impl_numpy$compat$py3k$$$function_20__PurePath__fspath__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_63c7c988b66bcc2058e7d4344aa65896;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_63c7c988b66bcc2058e7d4344aa65896 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_63c7c988b66bcc2058e7d4344aa65896, codeobj_63c7c988b66bcc2058e7d4344aa65896, module_numpy$compat$py3k, sizeof(void *) );
    frame_63c7c988b66bcc2058e7d4344aa65896 = cache_frame_63c7c988b66bcc2058e7d4344aa65896;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_63c7c988b66bcc2058e7d4344aa65896 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_63c7c988b66bcc2058e7d4344aa65896 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT( par_self );
        tmp_unicode_arg_1 = par_self;
        tmp_return_value = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_63c7c988b66bcc2058e7d4344aa65896 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_63c7c988b66bcc2058e7d4344aa65896 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_63c7c988b66bcc2058e7d4344aa65896 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_63c7c988b66bcc2058e7d4344aa65896, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_63c7c988b66bcc2058e7d4344aa65896->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_63c7c988b66bcc2058e7d4344aa65896, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_63c7c988b66bcc2058e7d4344aa65896,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_63c7c988b66bcc2058e7d4344aa65896 == cache_frame_63c7c988b66bcc2058e7d4344aa65896 )
    {
        Py_DECREF( frame_63c7c988b66bcc2058e7d4344aa65896 );
    }
    cache_frame_63c7c988b66bcc2058e7d4344aa65896 = NULL;

    assertFrameObject( frame_63c7c988b66bcc2058e7d4344aa65896 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_20__PurePath__fspath__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_20__PurePath__fspath__ );
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


static PyObject *impl_numpy$compat$py3k$$$function_21___fspath__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fec26b2061ad8b3eaffd36e5a276a111;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fec26b2061ad8b3eaffd36e5a276a111 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fec26b2061ad8b3eaffd36e5a276a111, codeobj_fec26b2061ad8b3eaffd36e5a276a111, module_numpy$compat$py3k, sizeof(void *) );
    frame_fec26b2061ad8b3eaffd36e5a276a111 = cache_frame_fec26b2061ad8b3eaffd36e5a276a111;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fec26b2061ad8b3eaffd36e5a276a111 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fec26b2061ad8b3eaffd36e5a276a111 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 206;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fec26b2061ad8b3eaffd36e5a276a111 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fec26b2061ad8b3eaffd36e5a276a111 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fec26b2061ad8b3eaffd36e5a276a111, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fec26b2061ad8b3eaffd36e5a276a111->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fec26b2061ad8b3eaffd36e5a276a111, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fec26b2061ad8b3eaffd36e5a276a111,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fec26b2061ad8b3eaffd36e5a276a111 == cache_frame_fec26b2061ad8b3eaffd36e5a276a111 )
    {
        Py_DECREF( frame_fec26b2061ad8b3eaffd36e5a276a111 );
    }
    cache_frame_fec26b2061ad8b3eaffd36e5a276a111 = NULL;

    assertFrameObject( frame_fec26b2061ad8b3eaffd36e5a276a111 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_21___fspath__ );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_21___fspath__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_numpy$compat$py3k$$$function_22___subclasshook__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_subclass = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_7177ba94ad0e7f37c5ffe8cb7164fffd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7177ba94ad0e7f37c5ffe8cb7164fffd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7177ba94ad0e7f37c5ffe8cb7164fffd, codeobj_7177ba94ad0e7f37c5ffe8cb7164fffd, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *) );
    frame_7177ba94ad0e7f37c5ffe8cb7164fffd = cache_frame_7177ba94ad0e7f37c5ffe8cb7164fffd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7177ba94ad0e7f37c5ffe8cb7164fffd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7177ba94ad0e7f37c5ffe8cb7164fffd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_PurePath );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurePath );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PurePath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_subclass );
        tmp_args_element_name_1 = par_subclass;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_PurePath );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurePath );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PurePath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_7177ba94ad0e7f37c5ffe8cb7164fffd->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_subclass );
        tmp_source_name_1 = par_subclass;
        tmp_attribute_name_1 = const_str_plain___fspath__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7177ba94ad0e7f37c5ffe8cb7164fffd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7177ba94ad0e7f37c5ffe8cb7164fffd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7177ba94ad0e7f37c5ffe8cb7164fffd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7177ba94ad0e7f37c5ffe8cb7164fffd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7177ba94ad0e7f37c5ffe8cb7164fffd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7177ba94ad0e7f37c5ffe8cb7164fffd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7177ba94ad0e7f37c5ffe8cb7164fffd,
        type_description_1,
        par_cls,
        par_subclass
    );


    // Release cached frame.
    if ( frame_7177ba94ad0e7f37c5ffe8cb7164fffd == cache_frame_7177ba94ad0e7f37c5ffe8cb7164fffd )
    {
        Py_DECREF( frame_7177ba94ad0e7f37c5ffe8cb7164fffd );
    }
    cache_frame_7177ba94ad0e7f37c5ffe8cb7164fffd = NULL;

    assertFrameObject( frame_7177ba94ad0e7f37c5ffe8cb7164fffd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_22___subclasshook__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_subclass );
    Py_DECREF( par_subclass );
    par_subclass = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_subclass );
    Py_DECREF( par_subclass );
    par_subclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_22___subclasshook__ );
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


static PyObject *impl_numpy$compat$py3k$$$function_23_os_fspath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *var_path_type = NULL;
    PyObject *var_path_repr = NULL;
    struct Nuitka_FrameObject *frame_cc82c273181242a06a213dfc56e785bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_cc82c273181242a06a213dfc56e785bf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc82c273181242a06a213dfc56e785bf, codeobj_cc82c273181242a06a213dfc56e785bf, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cc82c273181242a06a213dfc56e785bf = cache_frame_cc82c273181242a06a213dfc56e785bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc82c273181242a06a213dfc56e785bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc82c273181242a06a213dfc56e785bf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_path );
        tmp_isinstance_inst_1 = par_path;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 222;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 222;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_path );
        tmp_return_value = par_path;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( par_path );
        tmp_type_arg_1 = par_path;
        tmp_assign_source_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_assign_source_1 == NULL) );
        assert( var_path_type == NULL );
        var_path_type = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_path_type );
        tmp_called_instance_1 = var_path_type;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_cc82c273181242a06a213dfc56e785bf->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___fspath__, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( var_path_repr == NULL );
        var_path_repr = tmp_assign_source_2;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_cc82c273181242a06a213dfc56e785bf, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_cc82c273181242a06a213dfc56e785bf, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "ooo";
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( var_path_type );
            tmp_source_name_1 = var_path_type;
            tmp_attribute_name_1 = const_str_plain___fspath__;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ooo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 232;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_cc82c273181242a06a213dfc56e785bf->m_frame) frame_cc82c273181242a06a213dfc56e785bf->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_3;
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_mvar_value_4;
                int tmp_truth_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_PurePath );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurePath );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PurePath" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 233;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }

                tmp_compexpr_left_2 = tmp_mvar_value_3;
                tmp_compexpr_right_2 = Py_None;
                tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_issubclass );
                assert( tmp_called_name_1 != NULL );
                CHECK_OBJECT( var_path_type );
                tmp_args_element_name_2 = var_path_type;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_PurePath );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurePath );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PurePath" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 233;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }

                tmp_args_element_name_3 = tmp_mvar_value_4;
                frame_cc82c273181242a06a213dfc56e785bf->m_frame.f_lineno = 233;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 233;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_1 );

                    exception_lineno = 233;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_1 );
                tmp_condition_result_4 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_4 = tmp_and_left_value_1;
                and_end_1:;
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
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_args_element_name_4;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain__PurePath__fspath__ );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__PurePath__fspath__ );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_PurePath__fspath__" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 234;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
                    }

                    tmp_called_name_2 = tmp_mvar_value_5;
                    CHECK_OBJECT( par_path );
                    tmp_args_element_name_4 = par_path;
                    frame_cc82c273181242a06a213dfc56e785bf->m_frame.f_lineno = 234;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4 };
                        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                    }

                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 234;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
                    }
                    goto try_return_handler_3;
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    PyObject *tmp_source_name_2;
                    tmp_left_name_1 = const_str_digest_dbafaa008d72c8b6378ef67a6375590b;
                    CHECK_OBJECT( var_path_type );
                    tmp_source_name_2 = var_path_type;
                    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
                    if ( tmp_right_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 237;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
                    }
                    tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                    Py_DECREF( tmp_right_name_1 );
                    if ( tmp_make_exception_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 236;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
                    }
                    frame_cc82c273181242a06a213dfc56e785bf->m_frame.f_lineno = 236;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_1 );
                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 236;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 228;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_cc82c273181242a06a213dfc56e785bf->m_frame) frame_cc82c273181242a06a213dfc56e785bf->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_23_os_fspath );
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
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_mvar_value_7;
        CHECK_OBJECT( var_path_repr );
        tmp_isinstance_inst_2 = var_path_repr;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_6;
        tmp_isinstance_cls_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_2, 0, tmp_tuple_element_2 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_7;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_2, 1, tmp_tuple_element_2 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT( var_path_repr );
        tmp_return_value = var_path_repr;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_5;
            PyObject *tmp_type_arg_2;
            tmp_source_name_3 = const_str_digest_49750abf2a051d39dbeaa3249afb10db;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
            assert( !(tmp_called_name_3 == NULL) );
            CHECK_OBJECT( var_path_type );
            tmp_source_name_4 = var_path_type;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 242;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_path_repr );
            tmp_type_arg_2 = var_path_repr;
            tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_source_name_5 == NULL) );
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 243;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_cc82c273181242a06a213dfc56e785bf->m_frame.f_lineno = 241;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_cc82c273181242a06a213dfc56e785bf->m_frame.f_lineno = 241;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 241;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_end_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc82c273181242a06a213dfc56e785bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc82c273181242a06a213dfc56e785bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc82c273181242a06a213dfc56e785bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc82c273181242a06a213dfc56e785bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc82c273181242a06a213dfc56e785bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc82c273181242a06a213dfc56e785bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc82c273181242a06a213dfc56e785bf,
        type_description_1,
        par_path,
        var_path_type,
        var_path_repr
    );


    // Release cached frame.
    if ( frame_cc82c273181242a06a213dfc56e785bf == cache_frame_cc82c273181242a06a213dfc56e785bf )
    {
        Py_DECREF( frame_cc82c273181242a06a213dfc56e785bf );
    }
    cache_frame_cc82c273181242a06a213dfc56e785bf = NULL;

    assertFrameObject( frame_cc82c273181242a06a213dfc56e785bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_23_os_fspath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_path_type );
    var_path_type = NULL;

    Py_XDECREF( var_path_repr );
    var_path_repr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_path_type );
    var_path_type = NULL;

    Py_XDECREF( var_path_repr );
    var_path_repr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_23_os_fspath );
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



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_10_sixu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_10_sixu,
        const_str_plain_sixu,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_39a40a8688d90a611410bf0a672ef84d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_11_getexception(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_11_getexception,
        const_str_plain_getexception,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_770901a394e29438c4fc235595781464,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_12_asbytes_nested(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_12_asbytes_nested,
        const_str_plain_asbytes_nested,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b6facb03cb0fdcb9e73c0d827232e434,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_13_asunicode_nested(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_13_asunicode_nested,
        const_str_plain_asunicode_nested,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_67b0a6ef7559e0f0f4dfc53c438c95ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_14_is_pathlib_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_14_is_pathlib_path,
        const_str_plain_is_pathlib_path,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3060fe744a9692b4f9fb5d02e05801bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        const_str_digest_ac4af212905f64dc20c936fa25fbdc75,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_15___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_76bdd05e24942174a881f35ea63795d6,
#endif
        codeobj_2bb11f20196b6492587a0e71d46a6de0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_16___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_16___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        const_str_digest_23e9870ca2913b6c7652d1faa1f5898e,
#endif
        codeobj_708b41ce33a23978ff28594ee42947d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_17___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_17___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        const_str_digest_46e6de331fc77cf6e48450d8edd12ca9,
#endif
        codeobj_227674cf424ee0b0012020206dd28e77,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_18_npy_load_module( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_18_npy_load_module,
        const_str_plain_npy_load_module,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_753a4dccdd1af483760fc1b434abfeee,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        const_str_digest_3637c469b53fe6644e7cf4b46e8d7ab0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_19_npy_load_module( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_19_npy_load_module,
        const_str_plain_npy_load_module,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_31902481b44a1b9ad5194f3b9b7b779e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        const_str_digest_b04805bd50cd298c3e9936d013e6ad93,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_1_asunicode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_1_asunicode,
        const_str_plain_asunicode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_371a66391c833dbea96a3078f25541b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_20__PurePath__fspath__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_20__PurePath__fspath__,
        const_str_plain__PurePath__fspath__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_63c7c988b66bcc2058e7d4344aa65896,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_21___fspath__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_21___fspath__,
        const_str_plain___fspath__,
#if PYTHON_VERSION >= 300
        const_str_digest_73c0288c654f40aecee2b9be8a036ea0,
#endif
        codeobj_fec26b2061ad8b3eaffd36e5a276a111,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        const_str_digest_5c4fa0b3ac571335fcf2d4b42d84cd4d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_22___subclasshook__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_22___subclasshook__,
        const_str_plain___subclasshook__,
#if PYTHON_VERSION >= 300
        const_str_digest_97663c090434492c8048789de101f5ed,
#endif
        codeobj_7177ba94ad0e7f37c5ffe8cb7164fffd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_23_os_fspath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_23_os_fspath,
        const_str_plain_os_fspath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cc82c273181242a06a213dfc56e785bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        const_str_digest_47478256e93b6cb9f8d719275abbd0d7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_2_asbytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_2_asbytes,
        const_str_plain_asbytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_54f0773914b3f05d84cad3134b93991a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_3_asstr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_3_asstr,
        const_str_plain_asstr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_940c36bdd4277d791ad4da98523bec71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_4_isfileobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_4_isfileobj,
        const_str_plain_isfileobj,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_11a57d19e5c8be9f0e17b47b7ea47fa3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_5_open_latin1( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_5_open_latin1,
        const_str_plain_open_latin1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de911c2b69bb5e5a28d8720c98330af4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_6_sixu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_6_sixu,
        const_str_plain_sixu,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d272e9f825f8277ab8e31d1fe40fee15,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_7_isfileobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_7_isfileobj,
        const_str_plain_isfileobj,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_755c65d3294fac7eca50be604ee4c9f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_8_asunicode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_8_asunicode,
        const_str_plain_asunicode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f1e3f7043b65702781bdb1c48e812afc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_9_open_latin1( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_9_open_latin1,
        const_str_plain_open_latin1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_52fb6b6ca8c7fa4065cd9796e22bce23,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$compat$py3k =
{
    PyModuleDef_HEAD_INIT,
    "numpy.compat.py3k",
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

MOD_INIT_DECL( numpy$compat$py3k )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$compat$py3k );
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
    puts("numpy.compat.py3k: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.compat.py3k: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.compat.py3k: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$compat$py3k" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$compat$py3k = Py_InitModule4(
        "numpy.compat.py3k",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$compat$py3k = PyModule_Create( &mdef_numpy$compat$py3k );
#endif

    moduledict_numpy$compat$py3k = MODULE_DICT( module_numpy$compat$py3k );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$compat$py3k,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$compat$py3k,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$compat$py3k,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$compat$py3k,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$compat$py3k );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_65bec798bc2cd8b837759d8fe641668b, module_numpy$compat$py3k );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_c8955fa338c34bededf312cace13b7ac;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_numpy$compat$py3k_104 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_afa0c682d9fd160fb9d266492437f454_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_afa0c682d9fd160fb9d266492437f454_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_numpy$compat$py3k_200 = NULL;
    struct Nuitka_FrameObject *frame_12a02a2dc933cb171017c30d60875cc6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_12a02a2dc933cb171017c30d60875cc6_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_8683e04af1485129f11446873d4f77ed;
        UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_0f5bbe0b56f4c7daeefeba5158a6b475;
        UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c8955fa338c34bededf312cace13b7ac = MAKE_MODULE_FRAME( codeobj_c8955fa338c34bededf312cace13b7ac, module_numpy$compat$py3k );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c8955fa338c34bededf312cace13b7ac );
    assert( Py_REFCNT( frame_c8955fa338c34bededf312cace13b7ac ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_0f5bbe0b56f4c7daeefeba5158a6b475;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 5;
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_assign_source_8 = LIST_COPY( const_list_1df05fbc7ce3f23a55f9ad1c363dfeca_list );
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 13;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_9 == NULL) );
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_9 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_pathlib;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Path_str_plain_PurePath_tuple;
        tmp_level_name_2 = const_int_0;
        frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 15;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Path );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_Path, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_PurePath );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_PurePath, tmp_assign_source_12 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_c8955fa338c34bededf312cace13b7ac, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_c8955fa338c34bededf312cace13b7ac, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_4;
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
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = Py_None;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_Path, tmp_assign_source_13 );
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = Py_None;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_PurePath, tmp_assign_source_14 );
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 14;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c8955fa338c34bededf312cace13b7ac->m_frame) frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_4;
        branch_end_1:;
    }
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

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
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_name_name_3;
            PyObject *tmp_globals_name_3;
            PyObject *tmp_locals_name_3;
            PyObject *tmp_fromlist_name_3;
            PyObject *tmp_level_name_3;
            tmp_name_name_3 = const_str_plain_io;
            tmp_globals_name_3 = (PyObject *)moduledict_numpy$compat$py3k;
            tmp_locals_name_3 = Py_None;
            tmp_fromlist_name_3 = Py_None;
            tmp_level_name_3 = const_int_0;
            frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 20;
            tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_15 );
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = (PyObject *)&PyLong_Type;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_16 );
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = const_tuple_type_int_tuple;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_17 );
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_18 );
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_19 );
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 26;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_20 = tmp_mvar_value_4;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_20 );
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_FUNCTION_numpy$compat$py3k$$$function_1_asunicode(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode, tmp_assign_source_21 );
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = MAKE_FUNCTION_numpy$compat$py3k$$$function_2_asbytes(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes, tmp_assign_source_22 );
        }
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_FUNCTION_numpy$compat$py3k$$$function_3_asstr(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asstr, tmp_assign_source_23 );
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_FUNCTION_numpy$compat$py3k$$$function_4_isfileobj(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_isfileobj, tmp_assign_source_24 );
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_str_plain_r_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_assign_source_25 = MAKE_FUNCTION_numpy$compat$py3k$$$function_5_open_latin1( tmp_defaults_1 );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_open_latin1, tmp_assign_source_25 );
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_FUNCTION_numpy$compat$py3k$$$function_6_sixu(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sixu, tmp_assign_source_26 );
        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = const_str_plain_U;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_strchar, tmp_assign_source_27 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_28 );
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_long );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "long" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_29 = tmp_mvar_value_5;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_29 );
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_basestring );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 58;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_30 = tmp_mvar_value_6;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_30 );
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 59;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_31 = tmp_mvar_value_7;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_31 );
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_8;
            tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
            tmp_assign_source_32 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_1 );
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_long );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
            }

            CHECK_OBJECT( tmp_mvar_value_8 );
            tmp_tuple_element_1 = tmp_mvar_value_8;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_32, 1, tmp_tuple_element_1 );
            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_32 );
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes, tmp_assign_source_33 );
        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asstr, tmp_assign_source_34 );
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = const_str_plain_S;
            UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_strchar, tmp_assign_source_35 );
        }
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = MAKE_FUNCTION_numpy$compat$py3k$$$function_7_isfileobj(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_isfileobj, tmp_assign_source_36 );
        }
        {
            PyObject *tmp_assign_source_37;
            tmp_assign_source_37 = MAKE_FUNCTION_numpy$compat$py3k$$$function_8_asunicode(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode, tmp_assign_source_37 );
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_str_plain_r_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_assign_source_38 = MAKE_FUNCTION_numpy$compat$py3k$$$function_9_open_latin1( tmp_defaults_2 );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_open_latin1, tmp_assign_source_38 );
        }
        {
            PyObject *tmp_assign_source_39;
            tmp_assign_source_39 = MAKE_FUNCTION_numpy$compat$py3k$$$function_10_sixu(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sixu, tmp_assign_source_39 );
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$compat$py3k$$$function_11_getexception(  );



        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_getexception, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$compat$py3k$$$function_12_asbytes_nested(  );



        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes_nested, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_numpy$compat$py3k$$$function_13_asunicode_nested(  );



        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode_nested, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_numpy$compat$py3k$$$function_14_is_pathlib_path(  );



        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_is_pathlib_path, tmp_assign_source_43 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_44 = impl___internal__$$$function_5__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_2 = tmp_class_creation_1__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_5;
            }
            tmp_tuple_element_2 = const_str_plain_contextlib_nullcontext;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 104;
            tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_4 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_5;
            }
            tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;

                    goto try_except_handler_5;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_5 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 104;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 104;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_5:;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_48;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$compat$py3k_104 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_65bec798bc2cd8b837759d8fe641668b;
        tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_104, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_9f3d2b5ab4e4cad7444ce685cb22d525;
        tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_104, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_contextlib_nullcontext;
        tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_104, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_afa0c682d9fd160fb9d266492437f454_2, codeobj_afa0c682d9fd160fb9d266492437f454, module_numpy$compat$py3k, sizeof(void *) );
        frame_afa0c682d9fd160fb9d266492437f454_2 = cache_frame_afa0c682d9fd160fb9d266492437f454_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_afa0c682d9fd160fb9d266492437f454_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_afa0c682d9fd160fb9d266492437f454_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_numpy$compat$py3k$$$function_15___init__( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_104, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_numpy$compat$py3k$$$function_16___enter__(  );



        tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_104, const_str_plain___enter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_numpy$compat$py3k$$$function_17___exit__(  );



        tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_104, const_str_plain___exit__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_afa0c682d9fd160fb9d266492437f454_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_afa0c682d9fd160fb9d266492437f454_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_afa0c682d9fd160fb9d266492437f454_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_afa0c682d9fd160fb9d266492437f454_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_afa0c682d9fd160fb9d266492437f454_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_afa0c682d9fd160fb9d266492437f454_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_afa0c682d9fd160fb9d266492437f454_2 == cache_frame_afa0c682d9fd160fb9d266492437f454_2 )
        {
            Py_DECREF( frame_afa0c682d9fd160fb9d266492437f454_2 );
        }
        cache_frame_afa0c682d9fd160fb9d266492437f454_2 = NULL;

        assertFrameObject( frame_afa0c682d9fd160fb9d266492437f454_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_3 = tmp_class_creation_1__bases;
            tmp_compexpr_right_3 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_7;
            }
            tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_104, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_7;
            }
            branch_no_6:;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_contextlib_nullcontext;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_numpy$compat$py3k_104;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 104;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_7;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_49 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_49 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_numpy$compat$py3k_104 );
        locals_numpy$compat$py3k_104 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF( locals_numpy$compat$py3k_104 );
        locals_numpy$compat$py3k_104 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$compat$py3k );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 104;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_contextlib_nullcontext, tmp_assign_source_49 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_subscript_name_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_9;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_version_info );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

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
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_10;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_version_info );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_4;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_9 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_9 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_assign_source_51 = MAKE_FUNCTION_numpy$compat$py3k$$$function_18_npy_load_module( tmp_defaults_4 );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_npy_load_module, tmp_assign_source_51 );
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_assign_source_52 = MAKE_FUNCTION_numpy$compat$py3k$$$function_19_npy_load_module( tmp_defaults_5 );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_npy_load_module, tmp_assign_source_52 );
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_abc;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 184;
        tmp_assign_source_53 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_53 );
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_subscript_name_5;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_11;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_version_info );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = const_slice_none_int_pos_2_none;
        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_tuple_int_pos_3_int_pos_4_tuple;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_12;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_abc );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 186;

                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_12;
            tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ABC );
            if ( tmp_assign_source_54 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_abc_ABC, tmp_assign_source_54 );
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_call_arg_element_1;
            PyObject *tmp_call_arg_element_2;
            PyObject *tmp_call_arg_element_3;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_abc );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 188;

                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_13;
            tmp_call_arg_element_1 = const_str_plain_ABC;
            tmp_call_arg_element_2 = const_tuple_type_object_tuple;
            tmp_call_arg_element_3 = PyDict_Copy( const_dict_e53423df4277a8e40eda5874ac16c1c0 );
            frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 };
                tmp_assign_source_55 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_ABCMeta, call_args );
            }

            Py_DECREF( tmp_call_arg_element_3 );
            if ( tmp_assign_source_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_abc_ABC, tmp_assign_source_55 );
        }
        branch_end_8:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_subscript_name_6;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_14;
        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_version_info );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = const_slice_none_int_pos_2_none;
        tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_6 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = const_tuple_int_pos_3_int_pos_6_tuple;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_name_name_5;
            PyObject *tmp_globals_name_5;
            PyObject *tmp_locals_name_5;
            PyObject *tmp_fromlist_name_5;
            PyObject *tmp_level_name_5;
            tmp_name_name_5 = const_str_plain_os;
            tmp_globals_name_5 = (PyObject *)moduledict_numpy$compat$py3k;
            tmp_locals_name_5 = Py_None;
            tmp_fromlist_name_5 = Py_None;
            tmp_level_name_5 = const_int_0;
            frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 193;
            tmp_assign_source_56 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
            if ( tmp_assign_source_56 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_56 );
        }
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_15;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            CHECK_OBJECT( tmp_mvar_value_15 );
            tmp_source_name_11 = tmp_mvar_value_15;
            tmp_assign_source_57 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_fspath );
            if ( tmp_assign_source_57 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_os_fspath, tmp_assign_source_57 );
        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_16;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 195;

                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_16;
            tmp_assign_source_58 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_PathLike );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_os_PathLike, tmp_assign_source_58 );
        }
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = MAKE_FUNCTION_numpy$compat$py3k$$$function_20__PurePath__fspath__(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain__PurePath__fspath__, tmp_assign_source_59 );
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_mvar_value_17;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_abc_ABC );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc_ABC );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc_ABC" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 200;

                goto try_except_handler_8;
            }

            tmp_tuple_element_5 = tmp_mvar_value_17;
            tmp_assign_source_60 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_5 );
            assert( tmp_class_creation_2__bases_orig == NULL );
            tmp_class_creation_2__bases_orig = tmp_assign_source_60;
        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_dircall_arg1_2;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
            Py_INCREF( tmp_dircall_arg1_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
                tmp_assign_source_61 = impl___internal__$$$function_5__mro_entries_conversion( dir_call_args );
            }
            if ( tmp_assign_source_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_2__bases == NULL );
            tmp_class_creation_2__bases = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            tmp_assign_source_62 = PyDict_New();
            assert( tmp_class_creation_2__class_decl_dict == NULL );
            tmp_class_creation_2__class_decl_dict = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_metaclass_name_2;
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_key_name_4;
            PyObject *tmp_dict_name_4;
            PyObject *tmp_dict_name_5;
            PyObject *tmp_key_name_5;
            nuitka_bool tmp_condition_result_13;
            int tmp_truth_name_2;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_bases_name_2;
            tmp_key_name_4 = const_str_plain_metaclass;
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
            tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
            tmp_key_name_5 = const_str_plain_metaclass;
            tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
            if ( tmp_metaclass_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            tmp_condition_result_13 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_4;
            }
            else
            {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_7 = tmp_class_creation_2__bases;
            tmp_subscript_name_7 = const_int_0;
            tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
            if ( tmp_type_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
            Py_DECREF( tmp_type_arg_3 );
            if ( tmp_metaclass_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
            Py_INCREF( tmp_metaclass_name_2 );
            condexpr_end_4:;
            condexpr_end_3:;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_bases_name_2 = tmp_class_creation_2__bases;
            tmp_assign_source_63 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
            Py_DECREF( tmp_metaclass_name_2 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_2__metaclass == NULL );
            tmp_class_creation_2__metaclass = tmp_assign_source_63;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_key_name_6;
            PyObject *tmp_dict_name_6;
            tmp_key_name_6 = const_str_plain_metaclass;
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
            tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
            tmp_dictdel_key = const_str_plain_metaclass;
            tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_8;
            }
            branch_no_10:;
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_13 = tmp_class_creation_2__metaclass;
            tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
            tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_assign_source_64;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_14;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_kw_name_3;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_source_name_14 = tmp_class_creation_2__metaclass;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;

                    goto try_except_handler_8;
                }
                tmp_tuple_element_6 = const_str_plain_os_PathLike;
                tmp_args_name_3 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( tmp_class_creation_2__bases );
                tmp_tuple_element_6 = tmp_class_creation_2__bases;
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
                CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
                tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
                frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 200;
                tmp_assign_source_64 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_3 );
                if ( tmp_assign_source_64 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;

                    goto try_except_handler_8;
                }
                assert( tmp_class_creation_2__prepared == NULL );
                tmp_class_creation_2__prepared = tmp_assign_source_64;
            }
            {
                nuitka_bool tmp_condition_result_16;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_source_name_15;
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_source_name_15 = tmp_class_creation_2__prepared;
                tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
                tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;

                    goto try_except_handler_8;
                }
                tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_12;
                }
                else
                {
                    goto branch_no_12;
                }
                branch_yes_12:;
                {
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_raise_value_2;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    PyObject *tmp_tuple_element_7;
                    PyObject *tmp_getattr_target_2;
                    PyObject *tmp_getattr_attr_2;
                    PyObject *tmp_getattr_default_2;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_type_arg_4;
                    tmp_raise_type_2 = PyExc_TypeError;
                    tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                    CHECK_OBJECT( tmp_class_creation_2__metaclass );
                    tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                    tmp_getattr_attr_2 = const_str_plain___name__;
                    tmp_getattr_default_2 = const_str_angle_metaclass;
                    tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                    if ( tmp_tuple_element_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 200;

                        goto try_except_handler_8;
                    }
                    tmp_right_name_2 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
                    CHECK_OBJECT( tmp_class_creation_2__prepared );
                    tmp_type_arg_4 = tmp_class_creation_2__prepared;
                    tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_4 );
                    assert( !(tmp_source_name_16 == NULL) );
                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                    Py_DECREF( tmp_source_name_16 );
                    if ( tmp_tuple_element_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_right_name_2 );

                        exception_lineno = 200;

                        goto try_except_handler_8;
                    }
                    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
                    tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                    Py_DECREF( tmp_right_name_2 );
                    if ( tmp_raise_value_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 200;

                        goto try_except_handler_8;
                    }
                    exception_type = tmp_raise_type_2;
                    Py_INCREF( tmp_raise_type_2 );
                    exception_value = tmp_raise_value_2;
                    exception_lineno = 200;
                    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                    goto try_except_handler_8;
                }
                branch_no_12:;
            }
            goto branch_end_11;
            branch_no_11:;
            {
                PyObject *tmp_assign_source_65;
                tmp_assign_source_65 = PyDict_New();
                assert( tmp_class_creation_2__prepared == NULL );
                tmp_class_creation_2__prepared = tmp_assign_source_65;
            }
            branch_end_11:;
        }
        {
            PyObject *tmp_assign_source_66;
            {
                PyObject *tmp_set_locals_2;
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_set_locals_2 = tmp_class_creation_2__prepared;
                locals_numpy$compat$py3k_200 = tmp_set_locals_2;
                Py_INCREF( tmp_set_locals_2 );
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = const_str_digest_65bec798bc2cd8b837759d8fe641668b;
            tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_200, const_str_plain___module__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_10;
            }
            tmp_dictset_value = const_str_digest_7486d6558e6e3ecb09b3cef6ff0f79ea;
            tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_200, const_str_plain___doc__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_10;
            }
            tmp_dictset_value = const_str_plain_os_PathLike;
            tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_200, const_str_plain___qualname__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;

                goto try_except_handler_10;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_12a02a2dc933cb171017c30d60875cc6_3, codeobj_12a02a2dc933cb171017c30d60875cc6, module_numpy$compat$py3k, sizeof(void *) );
            frame_12a02a2dc933cb171017c30d60875cc6_3 = cache_frame_12a02a2dc933cb171017c30d60875cc6_3;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_12a02a2dc933cb171017c30d60875cc6_3 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_12a02a2dc933cb171017c30d60875cc6_3 ) == 2 ); // Frame stack

            // Framed code:
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_args_element_name_1;
                tmp_called_instance_2 = PyObject_GetItem( locals_numpy$compat$py3k_200, const_str_plain_abc );

                if ( tmp_called_instance_2 == NULL )
                {
                    if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                    {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_abc );

                    if (unlikely( tmp_mvar_value_18 == NULL ))
                    {
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
                    }

                    if ( tmp_mvar_value_18 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 203;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_called_instance_2 = tmp_mvar_value_18;
                    Py_INCREF( tmp_called_instance_2 );
                    }
                }

                tmp_args_element_name_1 = MAKE_FUNCTION_numpy$compat$py3k$$$function_21___fspath__(  );



                frame_12a02a2dc933cb171017c30d60875cc6_3->m_frame.f_lineno = 203;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abstractmethod, call_args );
                }

                Py_DECREF( tmp_called_instance_2 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }
                tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_200, const_str_plain___fspath__, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }
            }
            {
                nuitka_bool tmp_condition_result_17;
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_classmethod_arg_1;
                tmp_res = MAPPING_HAS_ITEM( locals_numpy$compat$py3k_200, const_str_plain_classmethod );

                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }
                tmp_condition_result_17 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
                {
                    goto condexpr_true_5;
                }
                else
                {
                    goto condexpr_false_5;
                }
                condexpr_true_5:;
                tmp_called_name_4 = PyObject_GetItem( locals_numpy$compat$py3k_200, const_str_plain_classmethod );

                if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }
                tmp_args_element_name_2 = MAKE_FUNCTION_numpy$compat$py3k$$$function_22___subclasshook__(  );



                frame_12a02a2dc933cb171017c30d60875cc6_3->m_frame.f_lineno = 208;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }
                goto condexpr_end_5;
                condexpr_false_5:;
                tmp_classmethod_arg_1 = MAKE_FUNCTION_numpy$compat$py3k$$$function_22___subclasshook__(  );



                tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
                Py_DECREF( tmp_classmethod_arg_1 );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }
                condexpr_end_5:;
                tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_200, const_str_plain___subclasshook__, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }
            }

#if 0
            RESTORE_FRAME_EXCEPTION( frame_12a02a2dc933cb171017c30d60875cc6_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_12a02a2dc933cb171017c30d60875cc6_3 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_12a02a2dc933cb171017c30d60875cc6_3, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_12a02a2dc933cb171017c30d60875cc6_3->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_12a02a2dc933cb171017c30d60875cc6_3, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_12a02a2dc933cb171017c30d60875cc6_3,
                type_description_2,
                outline_1_var___class__
            );


            // Release cached frame.
            if ( frame_12a02a2dc933cb171017c30d60875cc6_3 == cache_frame_12a02a2dc933cb171017c30d60875cc6_3 )
            {
                Py_DECREF( frame_12a02a2dc933cb171017c30d60875cc6_3 );
            }
            cache_frame_12a02a2dc933cb171017c30d60875cc6_3 = NULL;

            assertFrameObject( frame_12a02a2dc933cb171017c30d60875cc6_3 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_2:;

            goto try_except_handler_10;
            skip_nested_handling_2:;
            {
                nuitka_bool tmp_condition_result_18;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                CHECK_OBJECT( tmp_class_creation_2__bases );
                tmp_compexpr_left_8 = tmp_class_creation_2__bases;
                CHECK_OBJECT( tmp_class_creation_2__bases_orig );
                tmp_compexpr_right_8 = tmp_class_creation_2__bases_orig;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;

                    goto try_except_handler_10;
                }
                tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_13;
                }
                else
                {
                    goto branch_no_13;
                }
                branch_yes_13:;
                CHECK_OBJECT( tmp_class_creation_2__bases_orig );
                tmp_dictset_value = tmp_class_creation_2__bases_orig;
                tmp_res = PyObject_SetItem( locals_numpy$compat$py3k_200, const_str_plain___orig_bases__, tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;

                    goto try_except_handler_10;
                }
                branch_no_13:;
            }
            {
                PyObject *tmp_assign_source_67;
                PyObject *tmp_called_name_5;
                PyObject *tmp_args_name_4;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_kw_name_4;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_called_name_5 = tmp_class_creation_2__metaclass;
                tmp_tuple_element_8 = const_str_plain_os_PathLike;
                tmp_args_name_4 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( tmp_class_creation_2__bases );
                tmp_tuple_element_8 = tmp_class_creation_2__bases;
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
                tmp_tuple_element_8 = locals_numpy$compat$py3k_200;
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
                CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
                tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
                frame_c8955fa338c34bededf312cace13b7ac->m_frame.f_lineno = 200;
                tmp_assign_source_67 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
                Py_DECREF( tmp_args_name_4 );
                if ( tmp_assign_source_67 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;

                    goto try_except_handler_10;
                }
                assert( outline_1_var___class__ == NULL );
                outline_1_var___class__ = tmp_assign_source_67;
            }
            CHECK_OBJECT( outline_1_var___class__ );
            tmp_assign_source_66 = outline_1_var___class__;
            Py_INCREF( tmp_assign_source_66 );
            goto try_return_handler_10;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$compat$py3k );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_10:;
            Py_DECREF( locals_numpy$compat$py3k_200 );
            locals_numpy$compat$py3k_200 = NULL;
            goto try_return_handler_9;
            // Exception handler code:
            try_except_handler_10:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF( locals_numpy$compat$py3k_200 );
            locals_numpy$compat$py3k_200 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_9;
            // End of try:
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$compat$py3k );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_9:;
            CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
            Py_DECREF( outline_1_var___class__ );
            outline_1_var___class__ = NULL;

            goto outline_result_2;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_9 = exception_type;
            exception_keeper_value_9 = exception_value;
            exception_keeper_tb_9 = exception_tb;
            exception_keeper_lineno_9 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_9;
            exception_value = exception_keeper_value_9;
            exception_tb = exception_keeper_tb_9;
            exception_lineno = exception_keeper_lineno_9;

            goto outline_exception_2;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$compat$py3k );
            return MOD_RETURN_VALUE( NULL );
            outline_exception_2:;
            exception_lineno = 200;
            goto try_except_handler_8;
            outline_result_2:;
            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_os_PathLike, tmp_assign_source_66 );
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_class_creation_2__bases_orig );
        tmp_class_creation_2__bases_orig = NULL;

        Py_XDECREF( tmp_class_creation_2__bases );
        tmp_class_creation_2__bases = NULL;

        Py_XDECREF( tmp_class_creation_2__class_decl_dict );
        tmp_class_creation_2__class_decl_dict = NULL;

        Py_XDECREF( tmp_class_creation_2__metaclass );
        tmp_class_creation_2__metaclass = NULL;

        Py_XDECREF( tmp_class_creation_2__prepared );
        tmp_class_creation_2__prepared = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases_orig );
        Py_DECREF( tmp_class_creation_2__bases_orig );
        tmp_class_creation_2__bases_orig = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
        Py_DECREF( tmp_class_creation_2__bases );
        tmp_class_creation_2__bases = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
        Py_DECREF( tmp_class_creation_2__class_decl_dict );
        tmp_class_creation_2__class_decl_dict = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
        Py_DECREF( tmp_class_creation_2__metaclass );
        tmp_class_creation_2__metaclass = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
        Py_DECREF( tmp_class_creation_2__prepared );
        tmp_class_creation_2__prepared = NULL;

        {
            PyObject *tmp_assign_source_68;
            tmp_assign_source_68 = MAKE_FUNCTION_numpy$compat$py3k$$$function_23_os_fspath(  );



            UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_os_fspath, tmp_assign_source_68 );
        }
        branch_end_9:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8955fa338c34bededf312cace13b7ac );
#endif
    popFrameStack();

    assertFrameObject( frame_c8955fa338c34bededf312cace13b7ac );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8955fa338c34bededf312cace13b7ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8955fa338c34bededf312cace13b7ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8955fa338c34bededf312cace13b7ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8955fa338c34bededf312cace13b7ac, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$compat$py3k );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
