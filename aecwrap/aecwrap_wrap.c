/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

/* source: aecwrap.i */

#define SWIGMODULE aecwrap
/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef long long intgo;
typedef unsigned long long uintgo;


# if !defined(__clang__) && (defined(__i386__) || defined(__x86_64__))
#   define SWIGSTRUCTPACKED __attribute__((__packed__, __gcc_struct__))
# else
#   define SWIGSTRUCTPACKED __attribute__((__packed__))
# endif



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } SWIGSTRUCTPACKED a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


#include <libaec.h>


#include <stdint.h>		// Use the C99 official header

#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_aecwrap_14da976aa081fe6a(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


void *_wrap_Swig_malloc_aecwrap_14da976aa081fe6a(intgo _swig_go_0) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


void _wrap_aec_stream_next_in_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, char *_swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = *(unsigned char **)&_swig_go_1; 
  
  if (arg1) (arg1)->next_in = (unsigned char const *)arg2;
  
}


char *_wrap_aec_stream_next_in_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned char *result = 0 ;
  char *_swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (unsigned char *) ((arg1)->next_in);
  *(unsigned char **)&_swig_go_result = (unsigned char *)result; 
  return _swig_go_result;
}


void _wrap_aec_stream_avail_in_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, long long _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  size_t arg2 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (size_t)_swig_go_1; 
  
  if (arg1) (arg1)->avail_in = arg2;
  
}


long long _wrap_aec_stream_avail_in_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  size_t result;
  long long _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result =  ((arg1)->avail_in);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_aec_stream_total_in_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, long long _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  size_t arg2 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (size_t)_swig_go_1; 
  
  if (arg1) (arg1)->total_in = arg2;
  
}


long long _wrap_aec_stream_total_in_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  size_t result;
  long long _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result =  ((arg1)->total_in);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_aec_stream_next_out_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, char *_swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = *(unsigned char **)&_swig_go_1; 
  
  if (arg1) (arg1)->next_out = arg2;
  
}


char *_wrap_aec_stream_next_out_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned char *result = 0 ;
  char *_swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (unsigned char *) ((arg1)->next_out);
  *(unsigned char **)&_swig_go_result = (unsigned char *)result; 
  return _swig_go_result;
}


void _wrap_aec_stream_avail_out_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, long long _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  size_t arg2 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (size_t)_swig_go_1; 
  
  if (arg1) (arg1)->avail_out = arg2;
  
}


long long _wrap_aec_stream_avail_out_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  size_t result;
  long long _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result =  ((arg1)->avail_out);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_aec_stream_total_out_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, long long _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  size_t arg2 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (size_t)_swig_go_1; 
  
  if (arg1) (arg1)->total_out = arg2;
  
}


long long _wrap_aec_stream_total_out_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  size_t result;
  long long _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result =  ((arg1)->total_out);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_aec_stream_bits_per_sample_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, intgo _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned int arg2 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (unsigned int)_swig_go_1; 
  
  if (arg1) (arg1)->bits_per_sample = arg2;
  
}


intgo _wrap_aec_stream_bits_per_sample_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (unsigned int) ((arg1)->bits_per_sample);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_aec_stream_block_size_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, intgo _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned int arg2 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (unsigned int)_swig_go_1; 
  
  if (arg1) (arg1)->block_size = arg2;
  
}


intgo _wrap_aec_stream_block_size_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (unsigned int) ((arg1)->block_size);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_aec_stream_rsi_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, intgo _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned int arg2 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (unsigned int)_swig_go_1; 
  
  if (arg1) (arg1)->rsi = arg2;
  
}


intgo _wrap_aec_stream_rsi_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (unsigned int) ((arg1)->rsi);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_aec_stream_flags_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, intgo _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned int arg2 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (unsigned int)_swig_go_1; 
  
  if (arg1) (arg1)->flags = arg2;
  
}


intgo _wrap_aec_stream_flags_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  unsigned int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (unsigned int) ((arg1)->flags);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_aec_stream_state_set_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, struct internal_state *_swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  struct internal_state *arg2 = (struct internal_state *) 0 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = *(struct internal_state **)&_swig_go_1; 
  
  if (arg1) (arg1)->state = arg2;
  
}


struct internal_state *_wrap_aec_stream_state_get_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  struct internal_state *result = 0 ;
  struct internal_state *_swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (struct internal_state *) ((arg1)->state);
  *(struct internal_state **)&_swig_go_result = (struct internal_state *)result; 
  return _swig_go_result;
}


struct aec_stream *_wrap_new_aec_stream_aecwrap_14da976aa081fe6a() {
  struct aec_stream *result = 0 ;
  struct aec_stream *_swig_go_result;
  
  
  result = (struct aec_stream *)calloc(1, sizeof(struct aec_stream));
  *(struct aec_stream **)&_swig_go_result = (struct aec_stream *)result; 
  return _swig_go_result;
}


void _wrap_delete_aec_stream_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  free((char *) arg1);
  
}


intgo _wrap_AEC_CONF_ERROR_aecwrap_14da976aa081fe6a() {
  int result;
  intgo _swig_go_result;
  
  
  result = (-1);
  
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_AEC_STREAM_ERROR_aecwrap_14da976aa081fe6a() {
  int result;
  intgo _swig_go_result;
  
  
  result = (-2);
  
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_AEC_DATA_ERROR_aecwrap_14da976aa081fe6a() {
  int result;
  intgo _swig_go_result;
  
  
  result = (-3);
  
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_AEC_MEM_ERROR_aecwrap_14da976aa081fe6a() {
  int result;
  intgo _swig_go_result;
  
  
  result = (-4);
  
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_aec_encode_init_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (int)aec_encode_init(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_aec_encode_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, intgo _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  int arg2 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  result = (int)aec_encode(arg1,arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_aec_encode_end_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (int)aec_encode_end(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_aec_decode_init_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (int)aec_decode_init(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_aec_decode_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0, intgo _swig_go_1) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  int arg2 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  result = (int)aec_decode(arg1,arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_aec_decode_end_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (int)aec_decode_end(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_aec_buffer_encode_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (int)aec_buffer_encode(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_aec_buffer_decode_aecwrap_14da976aa081fe6a(struct aec_stream *_swig_go_0) {
  struct aec_stream *arg1 = (struct aec_stream *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(struct aec_stream **)&_swig_go_0; 
  
  result = (int)aec_buffer_decode(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


#ifdef __cplusplus
}
#endif

