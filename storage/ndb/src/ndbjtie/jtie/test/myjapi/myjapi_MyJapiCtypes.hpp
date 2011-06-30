/*
 Copyright (c) 2010 Sun Microsystems, Inc.
 Use is subject to license terms.

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; version 2 of the License.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
*/
/*
 * myjapi_MyJapiCtypes.hpp
 */

#ifndef myjapi_MyJapiCtypes_hpp
#define myjapi_MyJapiCtypes_hpp

#include <jni.h>

// API to implement against
#include "myapi.hpp"

// libraries
#include "helpers.hpp"
#include "jtie.hpp"

// the applied Java mapping of basic variable-width C++ types
#define JTIE_JNI_SHORT_T jshort
#define JTIE_JNI_INT_T jint
#define JTIE_JNI_LONG_T jint
#define JTIE_JNI_LONGLONG_T jlong
#define JTIE_JNI_LONGDOUBLE_T jdouble
#include "jtie_tconv_vwidth.hpp"

// The API stub functions in this file have mangled names that adhere
// to the JVM specification.  It is not necessary to include the
// function prototypes generated by the javah tool from the Java source,
//   #include "myjapi_MyJapiCtypes.h"
// if they are declared to receive "C" linkage here.
extern "C" {

// ---------------------------------------------------------------------------
// API JNI platform-dependent function stubs
// ---------------------------------------------------------------------------

JNIEXPORT jboolean JNICALL
Java_myjapi_MyJapiCtypes_f11(JNIEnv * env, jclass cls, jboolean p0)
{
    TRACE("jboolean Java_myjapi_MyJapiCtypes_f11(JNIEnv *, jclass, jboolean)");
    return gcall_fr< ttrait_bool_c, ttrait_bool_c, f11 >(env, cls, p0);
}

JNIEXPORT jbyte JNICALL
Java_myjapi_MyJapiCtypes_f12(JNIEnv * env, jclass cls, jbyte p0)
{
    TRACE("jbyte Java_myjapi_MyJapiCtypes_f12(JNIEnv *, jclass, jbyte)");
    return gcall_fr< ttrait_char_c, ttrait_char_c, f12 >(env, cls, p0);
}

JNIEXPORT jbyte JNICALL
Java_myjapi_MyJapiCtypes_f13(JNIEnv * env, jclass cls, jbyte p0)
{
    TRACE("jbyte Java_myjapi_MyJapiCtypes_f13(JNIEnv *, jclass, jbyte)");
    return gcall_fr< ttrait_schar_c, ttrait_schar_c, f13 >(env, cls, p0);
}

JNIEXPORT jbyte JNICALL
Java_myjapi_MyJapiCtypes_f14(JNIEnv * env, jclass cls, jbyte p0)
{
    TRACE("jbyte Java_myjapi_MyJapiCtypes_f14(JNIEnv *, jclass, jbyte)");
    return gcall_fr< ttrait_uchar_c, ttrait_uchar_c, f14 >(env, cls, p0);
}

JNIEXPORT jshort JNICALL
Java_myjapi_MyJapiCtypes_f15(JNIEnv * env, jclass cls, jshort p0)
{
    TRACE("jshort Java_myjapi_MyJapiCtypes_f15(JNIEnv *, jclass, jshort)");
    return gcall_fr< ttrait_short_c, ttrait_short_c, f15 >(env, cls, p0);
}

JNIEXPORT jshort JNICALL
Java_myjapi_MyJapiCtypes_f16(JNIEnv * env, jclass cls, jshort p0)
{
    TRACE("jshort Java_myjapi_MyJapiCtypes_f16(JNIEnv *, jclass, jshort)");
    return gcall_fr< ttrait_ushort_c, ttrait_ushort_c, f16 >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_MyJapiCtypes_f17(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jint Java_myjapi_MyJapiCtypes_f17(JNIEnv *, jclass, jint)");
    return gcall_fr< ttrait_int_c, ttrait_int_c, f17 >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_MyJapiCtypes_f18(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jint Java_myjapi_MyJapiCtypes_f18(JNIEnv *, jclass, jint)");
    return gcall_fr< ttrait_uint_c, ttrait_uint_c, f18 >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_MyJapiCtypes_f19(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jint Java_myjapi_MyJapiCtypes_f19(JNIEnv *, jclass, jint)");
    return gcall_fr< ttrait_long_c, ttrait_long_c, f19 >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_MyJapiCtypes_f20(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jint Java_myjapi_MyJapiCtypes_f20(JNIEnv *, jclass, jint)");
    return gcall_fr< ttrait_ulong_c, ttrait_ulong_c, f20 >(env, cls, p0);
}

JNIEXPORT jlong JNICALL
Java_myjapi_MyJapiCtypes_f21(JNIEnv * env, jclass cls, jlong p0)
{
    TRACE("jlong Java_myjapi_MyJapiCtypes_f21(JNIEnv *, jclass, jlong)");
    return gcall_fr< ttrait_longlong_c, ttrait_longlong_c, f21 >(env, cls, p0);
}

JNIEXPORT jlong JNICALL
Java_myjapi_MyJapiCtypes_f22(JNIEnv * env, jclass cls, jlong p0)
{
    TRACE("jlong Java_myjapi_MyJapiCtypes_f22(JNIEnv *, jclass, jlong)");
    return gcall_fr< ttrait_ulonglong_c, ttrait_ulonglong_c, f22 >(env, cls, p0);
}

JNIEXPORT jfloat JNICALL
Java_myjapi_MyJapiCtypes_f23(JNIEnv * env, jclass cls, jfloat p0)
{
    TRACE("jfloat Java_myjapi_MyJapiCtypes_f23(JNIEnv *, jclass, jfloat)");
    return gcall_fr< ttrait_float_c, ttrait_float_c, f23 >(env, cls, p0);
}

JNIEXPORT jdouble JNICALL
Java_myjapi_MyJapiCtypes_f24(JNIEnv * env, jclass cls, jdouble p0)
{
    TRACE("jdouble Java_myjapi_MyJapiCtypes_f24(JNIEnv *, jclass, jdouble)");
    return gcall_fr< ttrait_double_c, ttrait_double_c, f24 >(env, cls, p0);
}

JNIEXPORT jdouble JNICALL
Java_myjapi_MyJapiCtypes_f25(JNIEnv * env, jclass cls, jdouble p0)
{
    TRACE("jdouble Java_myjapi_MyJapiCtypes_f25(JNIEnv *, jclass, jdouble)");
    return gcall_fr< ttrait_longdouble_c, ttrait_longdouble_c, f25 >(env, cls, p0);
}

// ---------------------------------------------------------------------------

JNIEXPORT jboolean JNICALL
Java_myjapi_MyJapiCtypes_f31(JNIEnv * env, jclass cls, jboolean p0)
{
    TRACE("jboolean Java_myjapi_MyJapiCtypes_f31(JNIEnv *, jclass, jboolean)");
    return gcall_fr< ttrait_bool, ttrait_bool, f31 >(env, cls, p0);
}

JNIEXPORT jbyte JNICALL
Java_myjapi_MyJapiCtypes_f32(JNIEnv * env, jclass cls, jbyte p0)
{
    TRACE("jbyte Java_myjapi_MyJapiCtypes_f32(JNIEnv *, jclass, jbyte)");
    return gcall_fr< ttrait_char, ttrait_char, f32 >(env, cls, p0);
}

JNIEXPORT jbyte JNICALL
Java_myjapi_MyJapiCtypes_f33(JNIEnv * env, jclass cls, jbyte p0)
{
    TRACE("jbyte Java_myjapi_MyJapiCtypes_f33(JNIEnv *, jclass, jbyte)");
    return gcall_fr< ttrait_schar, ttrait_schar, f33 >(env, cls, p0);
}

JNIEXPORT jbyte JNICALL
Java_myjapi_MyJapiCtypes_f34(JNIEnv * env, jclass cls, jbyte p0)
{
    TRACE("jbyte Java_myjapi_MyJapiCtypes_f34(JNIEnv *, jclass, jbyte)");
    return gcall_fr< ttrait_uchar, ttrait_uchar, f34 >(env, cls, p0);
}

JNIEXPORT jshort JNICALL
Java_myjapi_MyJapiCtypes_f35(JNIEnv * env, jclass cls, jshort p0)
{
    TRACE("jshort Java_myjapi_MyJapiCtypes_f35(JNIEnv *, jclass, jshort)");
    return gcall_fr< ttrait_short, ttrait_short, f35 >(env, cls, p0);
}

JNIEXPORT jshort JNICALL
Java_myjapi_MyJapiCtypes_f36(JNIEnv * env, jclass cls, jshort p0)
{
    TRACE("jshort Java_myjapi_MyJapiCtypes_f36(JNIEnv *, jclass, jshort)");
    return gcall_fr< ttrait_ushort, ttrait_ushort, f36 >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_MyJapiCtypes_f37(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jint Java_myjapi_MyJapiCtypes_f37(JNIEnv *, jclass, jint)");
    return gcall_fr< ttrait_int, ttrait_int, f37 >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_MyJapiCtypes_f38(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jint Java_myjapi_MyJapiCtypes_f38(JNIEnv *, jclass, jint)");
    return gcall_fr< ttrait_uint, ttrait_uint, f38 >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_MyJapiCtypes_f39(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jint Java_myjapi_MyJapiCtypes_f39(JNIEnv *, jclass, jint)");
    return gcall_fr< ttrait_long, ttrait_long, f39 >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_MyJapiCtypes_f40(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jint Java_myjapi_MyJapiCtypes_f40(JNIEnv *, jclass, jint)");
    return gcall_fr< ttrait_ulong, ttrait_ulong, f40 >(env, cls, p0);
}

JNIEXPORT jlong JNICALL
Java_myjapi_MyJapiCtypes_f41(JNIEnv * env, jclass cls, jlong p0)
{
    TRACE("jlong Java_myjapi_MyJapiCtypes_f41(JNIEnv *, jclass, jlong)");
    return gcall_fr< ttrait_longlong, ttrait_longlong, f41 >(env, cls, p0);
}

JNIEXPORT jlong JNICALL
Java_myjapi_MyJapiCtypes_f42(JNIEnv * env, jclass cls, jlong p0)
{
    TRACE("jlong Java_myjapi_MyJapiCtypes_f42(JNIEnv *, jclass, jlong)");
    return gcall_fr< ttrait_ulonglong, ttrait_ulonglong, f42 >(env, cls, p0);
}

JNIEXPORT jfloat JNICALL
Java_myjapi_MyJapiCtypes_f43(JNIEnv * env, jclass cls, jfloat p0)
{
    TRACE("jfloat Java_myjapi_MyJapiCtypes_f43(JNIEnv *, jclass, jfloat)");
    return gcall_fr< ttrait_float, ttrait_float, f43 >(env, cls, p0);
}

JNIEXPORT jdouble JNICALL
Java_myjapi_MyJapiCtypes_f44(JNIEnv * env, jclass cls, jdouble p0)
{
    TRACE("jdouble Java_myjapi_MyJapiCtypes_f44(JNIEnv *, jclass, jdouble)");
    return gcall_fr< ttrait_double, ttrait_double, f44 >(env, cls, p0);
}

JNIEXPORT jdouble JNICALL
Java_myjapi_MyJapiCtypes_f45(JNIEnv * env, jclass cls, jdouble p0)
{
    TRACE("jdouble Java_myjapi_MyJapiCtypes_f45(JNIEnv * env, jclass cls, jdouble)");
    return gcall_fr< ttrait_longdouble, ttrait_longdouble, f45 >(env, cls, p0);
}

// ---------------------------------------------------------------------------

} // extern "C"

#endif // myjapi_MyJapiCtypes_hpp
